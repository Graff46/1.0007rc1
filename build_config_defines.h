#pragma once

// ==================================== ������ �� alpet ======================================= 
#define HLAMP_AFFECT_IMMUNITIES			// �������� ��������� ����������� ��� ������� ���� (CHangingLamp)
//#define LUAICP_COMPAT					// �������� ������������� � ������������� Lua (luaicp.dll).
										// �������� ���� � ���������: system.ltx ---> [actor_schedule] t_min = 0; t_max = 1; 
//#define LUAICP_COMPAT2				// ??? //
//#define SCRIPT_ICONS_CONTROL		    // �������� ������� ������� setup_game_icon � Lua
//#define SCRIPT_EZI_CONTROL			// �������� ������� ������ CEffectorZoomInertion ��� ���������� ��������� ������� 
#define SPAWN_ANTIFREEZE				// ������������ �������� ����� �������� �� ������, ����� ��������� ��������������� ����� 
#define ECO_RENDER						// ��������� ��������� �������� ����� ����������� ������, ����� ��� �� ���������� ���������� ��� ������� FPS
//#define MT_OPT						// ������ ���������� ���� �� ��� ������� ������
#define AF_SHOW_DYNAMIC_PARAMS			// ��� ���������� ����� ���������� ����������� ��������, � �� �� ����� ������������
#define SCRIPT_VARS_STORAGE				// �������� ��������� ���������� ���������� � �����
//#define OBJECTS_RADIOACTIVE			// �������� ������������� ��������������� ���� ������� ��������.
//#define RUCK_FLAG_PREFERRED			// ����������� ��� ���� ��������� ����������� �� ���� FRuckDefault. 
										// ���� ���� ����������, ����� ����� ����������� � ������, � �� � ���� �� ���������.
//#define PERF_CHECK					// ???

// ==================================== ������ �� K.D. =======================================
#define KD_DETAIL_RADIUS				// alpet: �������� ������ ��������� ��������� ����� � ���������. ����� ������ �� ������������������ ��� ������ ������.

// ==================================== ������ �� Real Wolf ======================================= 
//#define INV_RUCK_UNLIMITED_FIX		// Real Wolf: ��������� ������������� ������������ ������� unlimited � ���� dragdrop_bag ��� �������� ��������� ���������
//#define INV_NEW_SLOTS_SYSTEM			// Real Wolf, Red Virus: �������� �����.
#define SUN_DIR_NOT_DEBUG			    // Real Wolf: ���������� ������ � ��� ���������� ���� CurrentEnv.sun_dir...
//#define ARTEFACTS_FROM_RUCK			// Real Wolf: ��������� ����� �������� �� ����� ��������� (������, �����, �������).
#define KNIFE_SPRINT_FIX				// Real Wolf: ��������� ������� ��� ��� �����2.
#define KNIFE_SPRINT_MOTION				// Real Wolf: �������������� �������� ���� ��� ����.
#define MISSILE_THREAT_FIX				// Real Wolf: ��������� ������� ��� ������ �������, ����� � �.�.
#define GRENADE_FROM_BELT				// Real Wolf: ������� � �����.
#define LOCK_RELOAD_IN_SPRINT			// Real Wolf: ���������� ����������� �� ����� �������. 
// Shkiper2012: ���� ����� �������������� � ����� �������, �� ��� ������ LOCK_RELOAD_IN_SPRINT �� ���������!

#define HIDE_WEAPON_IN_CAR				// Real Wolf: ������� ��� ������ � ������.
//#define BM16_ANIMS_FIX				// Real Wolf: ���������� �������� ��� BM16.
//#define INV_OUTFIT_FULL_ICON_HIDE		// Real Wolf: ������ ������ � ������� �������� �� ������ �������.
#define UI_LOCK_PDA_WITHOUT_PDA_IN_SLOT // Real Wolf: ����������� ������ ���, ���� ������ �������� ���� � �����.
//#define CAR_SAVE_FUEL					// Real Wolf: ���������� �������� ������ �������, ������������� ������ � ����������� ������.
//#define R1_EXCLUDE					// Real Wolf: ��������� ������ ������, �������� ������ ������ ������������ ���������.
#define EAT_PORTIONS_INFLUENCE 			// Real Wolf: ��������� ��� � ���� �������� ����� �������������.

// ==================================== ������ �� Red Virus ======================================= 
//#define INV_NO_ACTIVATE_APPARATUS_SLOT	// Red Virus: ������� ������������� ������� ������ ��������� ��� �������� ������:  ��������, ��������� � ��
//#define INV_MOVE_ITM_INTO_QUICK_SLOTS		// Red Virus: ��������� ������ ������� �������� � ������� ������

// ==================================== ������ �� Karlan ======================================= 
#define AMMO_FROM_BELT					// Karlan: ������� ������������ ������ � �����

// ==================================== ������ �� Shkiper2012 ======================================= 
#define NO_MOUSE_WHELL_SWITCH_SLOT		// ������� ����������� ������������� ����� ������� ��������� ����.
#define NO_AUTO_RELOAD_WPN				// ��������� ����-����������� � ����� ����, ����� ����������� �������.
#define HIDE_WEAPON_IN_INV 				// �������/���������� ������� � �����, ����� ����./����. ���������. 
#define ONE_CLICK_ZOOM 					// ��� � ���� ����. �� ����� ���������� ������� ������������.