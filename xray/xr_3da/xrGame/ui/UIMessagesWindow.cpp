// File:		UIMessagesWindow.h
// Description:	Window with MP chat and Game Log ( with PDA messages in single and Kill Messages in MP)
// Created:		22.04.2005
// Author:		Serge Vynnychenko
// Mail:		narrator@gsc-game.kiev.ua
//
// Copyright 2005 GSC Game World

#include "StdAfx.h"

#include "UIMessagesWindow.h"
#include "../level.h"
#include "UIGameLog.h"
#include "xrUIXmlParser.h"
#include "UIXmlInit.h"
#include "UIChatWnd.h"
#include "UIPdaMsgListItem.h"
#include "UIColorAnimatorWrapper.h"
#include "../InfoPortion.h"
#include "../string_table.h"

CUIMessagesWindow::CUIMessagesWindow(){
	m_pChatLog = NULL;
	m_pChatWnd = NULL;
	m_pGameLog = NULL;
	Init(0, 0, UI_BASE_WIDTH, UI_BASE_HEIGHT);
}

CUIMessagesWindow::~CUIMessagesWindow(){
	
}

void CUIMessagesWindow::AddLogMessage(const shared_str& msg){
	m_pGameLog->AddLogMessage(*msg);
}

void CUIMessagesWindow::Init(float x, float y, float width, float height){

	CUIXml		 xml;
	xml.Init(CONFIG_PATH, UI_PATH, "messages_window.xml");

	m_pGameLog = xr_new<CUIGameLog>();m_pGameLog->SetAutoDelete(true);
	m_pGameLog->Show(true);
	AttachChild(m_pGameLog);
	if ( IsGameTypeSingle() )
	{
		CUIXmlInit::InitScrollView(xml, "sp_log_list", 0, m_pGameLog);
	}
}

void CUIMessagesWindow::AddIconedPdaMessage(LPCSTR textureName, Frect originalRect, LPCSTR message, int iDelay){
	
	CUIPdaMsgListItem *pItem			= m_pGameLog->AddPdaMessage(message, float(iDelay));
	pItem->SetTextComplexMode			(true);
	pItem->UIIcon.InitTexture			(textureName);
	pItem->UIIcon.SetOriginalRect		(originalRect.left, originalRect.top, originalRect.right, originalRect.bottom);
	pItem->UIMsgText.SetWndPos			(pItem->UIIcon.GetWidth(), pItem->UIMsgText.GetWndPos().y);
	pItem->UIMsgText.AdjustHeightToText	();

	if (pItem->UIIcon.GetHeight() > pItem->UIMsgText.GetHeight())
		pItem->SetHeight(pItem->UIIcon.GetHeight());
	else
		pItem->SetHeight(pItem->UIMsgText.GetHeight());
	m_pGameLog->SendMessage(pItem,CHILD_CHANGED_SIZE);
}

void CUIMessagesWindow::AddChatMessage(shared_str msg, shared_str author)
{
	 m_pChatLog->AddChatMessage(*msg, *author);
}

void CUIMessagesWindow::SetChatOwner(game_cl_GameState* owner)
{
	if (m_pChatWnd)
		m_pChatWnd->SetOwner(owner);
}

void CUIMessagesWindow::Update()
{
	CUIWindow::Update();
}