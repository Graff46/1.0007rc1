////////////////////////////////////////////////////////////////////////////
//	Module 		: eatable_item.cpp
//	Created 	: 24.03.2003
//  Modified 	: 29.01.2004
//	Author		: Yuri Dobronravin
//	Description : Eatable item
////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "eatable_item.h"
#include "xrmessages.h"
#include "../../xrNetServer/net_utils.h"
#include "physic_item.h"
#include "Level.h"
#include "entity_alive.h"
#include "EntityCondition.h"
#include "InventoryOwner.h"
#include "xrServer_Objects_ALife_Items.h"
#include "../../../build_config_defines.h" // for: EAT_PORTIONS_INFLUENCE

CEatableItem::CEatableItem()
{
	m_fHealthInfluence = 0;
	m_fPowerInfluence = 0;
	m_fSatietyInfluence = 0;
	m_fRadiationInfluence = 0;

	m_iPortionsNum = -1;

	m_physic_item	= 0;
}

CEatableItem::~CEatableItem()
{
}

DLL_Pure *CEatableItem::_construct	()
{
	m_physic_item	= smart_cast<CPhysicItem*>(this);
	return			(inherited::_construct());
}

void CEatableItem::Load(LPCSTR section)
{
	inherited::Load(section);

	m_fHealthInfluence			= pSettings->r_float(section, "eat_health");
	m_fPowerInfluence			= pSettings->r_float(section, "eat_power");
	m_fSatietyInfluence			= pSettings->r_float(section, "eat_satiety");
	m_fRadiationInfluence		= pSettings->r_float(section, "eat_radiation");
	m_fWoundsHealPerc			= pSettings->r_float(section, "wounds_heal_perc");
	clamp						(m_fWoundsHealPerc, 0.f, 1.f);
	
	m_iStartPortionsNum			= READ_IF_EXISTS	(pSettings,r_s32,section,"eat_start_portions_num", int(-1) );
	if( m_iStartPortionsNum == -1 )
		m_iStartPortionsNum		= pSettings->r_s32	(section,"eat_portions_num");
	
	m_fMaxPowerUpInfluence		= READ_IF_EXISTS	(pSettings, r_float, section, "eat_max_power",0.0f);
	VERIFY						(m_iPortionsNum<10000);
}

BOOL CEatableItem::net_Spawn				(CSE_Abstract* DC)
{
	if (!inherited::net_Spawn(DC)) return FALSE;

	if (CSE_ALifeItemEatable* se_eat = smart_cast<CSE_ALifeItemEatable*>(DC))
	{
		m_iPortionsNum = se_eat->m_portions_num;
#if defined(EAT_PORTIONS_INFLUENCE)
		m_weight	-= m_weight / (float)m_iStartPortionsNum * (float)m_iPortionsNum;
		m_cost		-= m_cost	/ (u32)m_iStartPortionsNum   * (u32)m_iPortionsNum;
#endif
	}
	else
		m_iPortionsNum = m_iStartPortionsNum;

	return TRUE;
};

bool CEatableItem::Useful() const
{
	if(!inherited::Useful()) return false;

	//��������� �� ��� �� ��� �������
	if(Empty()) return false;

	return true;
}

void CEatableItem::OnH_B_Independent(bool just_before_destroy)
{
	if(!Useful()) 
	{
		object().setVisible(FALSE);
		object().setEnabled(FALSE);
		if (m_physic_item)
			m_physic_item->m_ready_to_destroy	= true;
	}
	inherited::OnH_B_Independent(just_before_destroy);
}


#include "ui/UICellItemFactory.h"
#include "ui/UICellCustomItems.h"
#include "ui/UIDragDropListEx.h"
#include "InventoryOwner.h"
#include "Inventory.h"
#include "ui/UIInventoryUtilities.h"
void CEatableItem::UseBy (CEntityAlive* entity_alive)
{
	CInventoryOwner* IO	= smart_cast<CInventoryOwner*>(entity_alive);
	R_ASSERT		(IO);
	R_ASSERT		(m_pCurrentInventory==IO->m_inventory);
	R_ASSERT		(object().H_Parent()->ID()==entity_alive->ID());
	entity_alive->conditions().ChangeHealth		(m_fHealthInfluence);
	entity_alive->conditions().ChangePower		(m_fPowerInfluence);
	entity_alive->conditions().ChangeSatiety	(m_fSatietyInfluence);
	entity_alive->conditions().ChangeRadiation	(m_fRadiationInfluence);
	entity_alive->conditions().ChangeBleeding	(m_fWoundsHealPerc);
	
	entity_alive->conditions().SetMaxPower( entity_alive->conditions().GetMaxPower()+m_fMaxPowerUpInfluence );
	
	//��������� ���������� ������
	if(m_iPortionsNum > 0)
		--(m_iPortionsNum);
	else
		m_iPortionsNum = 0;

#if defined(EAT_PORTIONS_INFLUENCE)
	// Real Wolf: ��������� ��� � ���� ����� �������������.
	const char*	sect	= object().cNameSect().c_str();
	float		weight	= READ_IF_EXISTS(pSettings, r_float, sect, "inv_weight",	0.01f);
	u32			cost	= READ_IF_EXISTS(pSettings, r_u32,   sect, "cost",			1);

	m_weight	-= weight / (float)m_iStartPortionsNum;
	m_cost		-= cost   / (u32)m_iStartPortionsNum;
#endif

	/* Real Wolf: ����� ������������� ��������, ������� ��� ������ � ��������� ������.
	����� ������� ��������� ������ �� �����������, ��� ������������ �����, ������������ ��� ��� ��������. 13.08.2014.*/
	if (!Empty() && m_cell_item && m_cell_item->ChildsCount() )
	{
		CUIDragDropListEx*	owner	= m_cell_item->OwnerList();
		CUICellItem*		itm		= m_cell_item->PopChild();

		owner->SetItem(itm);
		
		// TODO: ����� ���������� ���� ������� ��� ������ ������ � ��������� �����, ����� ���� �������������.

		//TIItemContainer place;
		//switch (this->m_eItemPlace)
		//{
		//case eItemPlaceBelt:
		//	place = inventory_owner().inventory().m_belt; break;
		//case eItemPlaceRuck:
		//	place = inventory_owner().inventory().m_ruck; break;
		//default:
		//	R_ASSERT(0);
		//}
		//std::sort(place.begin(),place.end(),InventoryUtilities::GreaterRoomInRuck);
	}
}

void CEatableItem::net_Export(NET_Packet& P)
{
	inherited::net_Export(P);
	P.w_s32(m_iPortionsNum);
}

void CEatableItem::net_Import(NET_Packet& P)
{
	inherited::net_Import(P);
	m_iPortionsNum = P.r_s32();
}