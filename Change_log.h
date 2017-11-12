#ifndef Change_log

	/*		30_09_2017
			-----------------------------------------------------------------------------------------------------------------------
	gamedata:
	(~)		system.ltx 						---> slot
	(+)		items.ltx 						---> [detektor_...] ---> belt = true
	(+)		actor.ltx 						---> camera_height_factor = 0.95
	(+) 	task_manager.script 			---> �������� �� 'defend_object'
			-----------------------------------------------------------------------------------------------------------------------
	(/)		ui_st_other.xml 				---> ui_quick_slot_use_str_0
	(/)		ui_keybinding.xml	 			---> kb_slot_quick_0
	(=)		inventory_new.xml 				---> condition_prog_ess_bar ---> condition_progRess_bar (1/3)
	(=)		inventory_new_16.xml 			---> condition_prog_ess_bar ---> condition_progRess_bar (2/3)
			-----------------------------------------------------------------------------------------------------------------------
	xray:
	(=)		UICellItem.cpp 					---> condition_progRess_bar (3/3) <--- condition_prog_ess_bar 
	(+)		3rd party\Xiph\libvorbis\lib\info.c ---> #pragma warning(disable:4238) 
	(+)		base_client_classes_script.cpp 	---> #pragma warning(disable:4482)
	(+)		UIMainIngameWnd.cpp 			---> #pragma warning(disable:4482)
			-----------------------------------------------------------------------------------------------------------------------
	(=)		script_game_object_script.cpp 	---> 'ePostSave' ---> eBeforeSave'
	(+)		FStaticRender.cpp 				---> KD_DETAIL_RADIUS ---> #include "../../../build_config_defines.h"
	(+)		r2.cpp 							---> KD_DETAIL_RADIUS ---> #include "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+) 	SoundRender_Source_loader.cpp 	---> ��� ���������� ��������� ����� ����� ��������� � �������. 	// by Zagolski //
	(=)		actor_statistic_mgr.cpp 		---> ����������� ����� ���������� 								// by lvg_brest //
	(=)		HangingLamp.cpp 				---> if(!PPhysicsShell()) 			// ����� �������� ����� 	// by SkyLoader //	
	(+)		UIInventoryWnd.cpp 				---> #define HIDE_WEAPON_IN_INV 	// �������/���������� ������� � �����, ����� ����./����. ���������. // by Shkiper2012 //
			-----------------------------------------------------------------------------------------------------------------------
	(=)		Inventory.cpp 					---> ���� �� �� ����� ������ � ���������� ���, �� ���� ��� ���������. // by Kondr48 //
	(=) 	WeaponMagazined.cpp 			---> m_set_next_ammoType_on_reload 	// by Sin! // 
	(=) 	WeaponMagazined.cpp 			---> #define NO_AUTO_RELOAD_WPN 	// ��������� ����-����������� � ����� ����, ����� ����������� �������. // by Shkiper2012 //
	(=) 	x_ray.cpp 						--->  ���� ������ �������� 			// by SkyLoader //	
			-----------------------------------------------------------------------------------------------------------------------
	(=)		UIDiaryWnd2.cpp 				---> ����������� ����������� ������� ������ ����������� ������� � ������� ��� �������. // by lvg_brest //
	(=)		UIDiaryWnd.h 					---> ...
	(=)		UICarBodyWnd.cpp 				---> ����������� ����������� ��������� "���������" ��� ������ ��� �������� // by lvg_brest //
	(=)		UICharacterInfo.cpp				---> ... + ����������� ������ ������� ��������� � ������� ��� �����.cpp
	(=)		UICharacterInfo.h				---> ...
			-----------------------------------------------------------------------------------------------------------------------
	(=)		UIGameTutorialSimpleItem.cpp 	---> ����������� ��������� ������� ���� � ������� ���� ����� ��������� ������.cpp // by lvg_brest //
	(=)		Level_network.cpp 				---> ����������� ���������� ���������� ��������. // by Shoker //
	(=)		HW.cpp 							---> ���� ������������ ������������� (r2) // by SkyLoader //
	(=)		ActorInput.cpp 					---> #define NO_MOUSE_WHELL_SWITCH_SLOT // ������� ����������� ������������� ����� ������� ��������� ����. // by Shkiper2012 //
			-----------------------------------------------------------------------------------------------------------------------
xxx	(~) 	xrCore\log.cpp 					---> force_flush_log = true; ---> �����, ����� ������� ����� ����� ��������� � ���, ������� ���-������ �������� ��.
			-----------------------------------------------------------------------------------------------------------------------
	*/

	/** 	02_10_2017 ** START ************************************* ../build_config_defines.h *************************************** 
	(+)		xrGame\Actor.cpp 							---> + ../ ---> "../../../build_config_defines.h"
	(=)		xrGame\ActorInput.cpp 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\Actor_Events.cpp 					---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\alife_object_registry.cpp 			---> + ../ ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\alife_simulator.cpp 					---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\alife_spawn_registry.cpp 			---> + ../ ---> "../../../build_config_defines.h"
	(-)		xrGame\Bolt.h 								---> delete ---> "../../../build_config_defines.h"
	(-)		xrGame\Bolt.cpp 							---> delete ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\ai_space.cpp 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\CustomZone.cpp 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\EffectorZoomInertion.cpp 			---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\Grenade.cpp 							---> + ../ ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\Inventory.cpp 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\Inventory.h 							---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\inventory_space.h 					---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\Missile.cpp 							---> + ../ ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\script_binder_object_wrapper.cpp 	---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\script_engine.cpp 					---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\script_storage.cpp 					---> + ../ ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\ui\UIInventoryWnd.cpp 				---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\ui\uiinventorywnd2.cpp 				---> + ../ ---> "../../../build_config_defines.h"
	(+-)	xrGame\ui\UIMessages.h 						---> + ../ ---> "../../../build_config_defines.h" � ������� || defined(INV_DOUBLE_WPN_SLOTS)
	(+)		xrGame\ui\UIPdaWnd.cpp 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\UIGameSP.cpp 						---> + ../ ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\Weapon.cpp 							---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\weaponBM16.h 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\weaponBM16.cpp 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\WeaponKnife.cpp 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\WeaponKnife.h 						---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\WeaponMagazined.cpp					---> + ../ ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\xr_level_controller.cpp				---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\xr_level_controller.h				---> + ../ ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\xrServer_Object_Base.cpp				---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\xrServer_Objects_ALife.cpp			---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\xrServer_Objects_ALife.h				---> + ../ ---> "../../../build_config_defines.h"
	(+)		xrGame\xrServer_process_event_ownership.cpp	---> + ../ ---> "../../../build_config_defines.h"
			-----------------------------------------------------------------------------------------------------------------------
	(-)		luabind\class.hpp 							---> delete ---> "../../../build_config_defines.h"
	(-)		luabind\config.hpp 							---> delete ---> "../../../build_config_defines.h"
	** FINISH ************************************* ../build_config_defines.h ***************************************/

	/*		03_10_2017
			-----------------------------------------------------------------------------------------------------------------------
	(+)		xr_3da\device.cpp 					---> #pragma warning(push) � (pop)
	(+)		libtheora\lib\analyze.c 			---> OC_MV_ZERO = {0,0}; 		// fixed C4132 //
	(+)		libtheora\lib\x86_vc\mmxencfrag.c 	---> ret --> ret1 � ret2 		// fixed C4405 //
			-----------------------------------------------------------------------------------------------------------------------
	(~)		������������ ������ 'libvorbisfile' � 'libvorbisfile_static'. �� ����� ������������ ������ ����������� ����.
	(+)		�������� � ��������� �������� ���� � �������� � ���� �� dx9sdk 2007 � 2010.
	(~)		������� ���� �� 'Program Files x86' � 'Program Files'
	(~)		�������� � ��������� �������� ���� � �������� � ���� Luabind, LuaJIT.
	(-)		������   � ��������� �������� ���� � �������� � ���� FreeImage, MagicSoftware, xrLua, luabind_old.
			-----------------------------------------------------------------------------------------------------------------------
	(+)		system.ltx 	---> [actor_schedule] t_min = 0; t_max = 1; ��� Lua-������������ �� alpet.
	(+)		w_binoc.ltx ---> scope_dynamic_zoom = true  ---> ����� ������ � ActorInput.cpp, ����� �������� ��������� ���� � ������� � ������.
			-----------------------------------------------------------------------------------------------------------------------
	*/
	
	/** 	XX_10_2017 ******** // fixed warnings and errors // ********
			xrgame\game_cl_artefacthunt.cpp(442): 	warning C4723: potential divide by 0
			xrGame\ui\UIProgressShape.cpp			warning C4723: potential divide by 0
			xiph\libtheora\lib\decode.c(1582): 		warning C4701: potentially uninitialized local variable 'last_zzi' used
			base_client_classes_script.cpp(488): 	warning C4800: 'BOOL' : forcing value to bool 'true' or 'false' (performance warning)
			HUDCrosshair.cpp(46): 					warning C4800: 'BOOL' : forcing value to bool 'true' or 'false' (performance warning)
			script_game_object_script4.cpp(325): 	warning C4800: 'BOOL' : forcing value to bool 'true' or 'false' (performance warning)
			ui\UICellItem.cpp(149): 				warning C4244: 'argument' : conversion from 'int' to 'float', possible loss of data
			script_actor.cpp(8): 					warning C4627: '#include "StdAfx.h"': skipped when looking for precompiled header use 	| Add directive to 'pch_script.h' or rebuild precompiled header
			derived_client_classes.cpp(9): 			warning C4627: '#include "StdAfx.h"': skipped when looking for precompiled header use	| Add directive to 'pch_script.h' or rebuild precompiled header
			ui\UICellCustomItems.cpp(473): 			warning C4995: 'memset': name was marked as #pragma deprecated
			object_actions.cpp(56): 				warning C4310: cast truncates constant value
			pch_script.cpp(5): 						warning C4503: 'Loki::TL::Erase<TList,T>::In<Loki::Typelist<T,U>>' : decorated name length exceeded, name was truncated
			raypick.cpp(10): 						warning C4482: nonstandard extension used: enum 'collide::rq_target' used in qualified name
			ui\UIStatic.cpp(520): 					warning C4482: nonstandard extension used: enum 'CGameFont::EAligment' used in qualified name
			ui\UIDragDropListEx.cpp(110): 			warning C4482: nonstandard extension used: enum 'EUIMessages' used in qualified name
			ui\UIDragDropListEx.cpp(160): 			warning C4482: nonstandard extension used: enum 'EUIMessages' used in qualified name
			ui\UIMainIngameWnd.cpp(1273): 			warning C4482: nonstandard extension used: enum 'CUIWeaponCellItem::eAddonType' used in qualified name
			ui\UIMainIngameWnd.cpp(1279): 			warning C4482: nonstandard extension used: enum 'CUIWeaponCellItem::eAddonType' used in qualified name
			ui\UIMainIngameWnd.cpp(1285): 			warning C4482: nonstandard extension used: enum 'CUIWeaponCellItem::eAddonType' used in qualified name
			script_engine.cpp(434): 				warning C4482: nonstandard extension used: enum 'ScriptStorage::ELuaMessageType' used in qualified name
			ui/uiabstract.h(61): 					warning C4100: 'vis' : unreferenced formal parameter
			*************************************************************/

	/*		05_10_2017
	(+)		xrGame\WeaponMagazined.cpp 	---> HUD_SOUND::StopSound(sndReload);
	(/)		#pragma todo
	(/)		#pragma message
	(=)		// fixed warnings and errors //
	(+)		task_manager.script 		---> �� ���� KRodinn [��2016] ---> ����� �� �������� ��-�� ��������.
	*/
	
	/* 		07_10_2017
	(/)		xrGame\xrServer_process_event_destroy.cpp 	---> SV:ge_destroy: [%d] not found on server
	(/)		xrGame\group_hierarchy_holder.cpp 			---> DEBUG: m_members.erase, member = %p 
	*/
	
	/* 		09_10_2017
	(+)		xrCore\xrCore.cpp 						---> CoUninitialize();
	(-)		xrCore\xrCore.cpp 						---> CoInitializeEx	(NULL, COINIT_MULTITHREADED);
	(=)		xrGame\hit_memory_manager.cpp   		---> ����������� ������������ �������� ������ ���: revolucas/CoC-Xray@01e05b0
	(=)		xrGame\sound_memory_manager.cpp 		---> ����������� ������������ �������� ������ ���: revolucas/CoC-Xray@01e05b0
	(=)		xrGame\visual_memory_manager.cpp 		---> ����������� ������������ �������� ������ ���: revolucas/CoC-Xray@01e05b0
	(=)		xrGame\DestroyablePhysicsObject.cpp 	---> who_object ? (who_object->lua_game_object()) : 0 		// by Alundaio //
	(=)		gamedata\config\misc\task_manager.ltx 	---> ������ � ������� task_manager.ltx ---> ������� 		// by KRodin //
xxx	(=)		xrGame\ui\uiabstract.h 					---> SetTextureVisible(bool vis)	{m_bTextureVisible = vis;}
	(+)		xr_3da\xrGame\Weapon.cpp 				---> ONE_CLICK_ZOOM // ��� � ���� ����. ������ �� ����� ���������� ������� ������������. //
	(+)		xr_3da\xrGame\Weapon.cpp 				---> if( ... (flags&CMD_START) ... ) // Corrected zooming in/out command handler // by Sin! //
	======= build 6822 =======		
	*/
	
	/*		17_10_2017
	(=)		xrCore\_cylinder.h 								---> _valid(c.m_radius); // by OpenXRay //
	(/)		xr_3da\xrGame\shared_data.h 					---> Log("DestroySingleton::RefCounter:",_refcount);
	(/)		xr_3da\xrGame\Level.cpp 						---> Msg("* ProcessGameEvents, spawn event postponed. Events rest = %d", game_events->queue.size());	
			-------------------------------------------------------------------------------------------------------------------------------
	(/)		xr_3da\xrGame\Inventory.cpp						---> ����� �� ���� ������ � ���������� ������ � ���������� "��������� � ����", ����� ������� ���� ��� � �����.
	(=)		xrGame\derived_client_classes.cpp 				---> ("eat_start_portions_num", &CEatableItem::m_iStartPortionsNum) // by ������ //
	(=)		xrRender\WallmarksEngine.cpp 					---> ������ �� 100% ��������� ���������� // ssaCLIP // by SkyLoader //
	(=)		xr_3da\xrSheduler.cpp 							---> "../../build_config_defines.h" // by KRodin: ������� ������� ������ //
			-------------------------------------------------------------------------------------------------------------------------------
	(-)		xrGame\ui\UIMainIngameWnd.h 					---> ui_disk_io ---> ����� � ���� �������� ������ �������.
	(-)		xrGame\ui\UIMainIngameWnd.cpp 					---> ui_disk_io ---> ����� � ���� �������� ������ �������.
	(-)		xrGame\ui\UIInventoryWnd.cpp 					---> ../build_config_defines.h
 	(+)		xrGame\ui\UIInventoryWnd.h 						---> ../build_config_defines.h
	(+)		xrGame\inventory_item.h 						---> ../build_config_defines.h
	(+)		xrGame\xrServer_process_event_ownership.cpp 	---> #ifdef DEBUG "sv !ownership ... " #endif
			-------------------------------------------------------------------------------------------------------------------------------
	(+)		gamedata\config\m_netpk.ltx						---> NET-packet -- by Artos --
	(+)		gamedata\scripts\m_netpk.script 				---> NET-packet -- by Artos --
	(+)		gamedata\scripts\m_netpk_readme.txt				---> NET-packet -- by Artos --
	(+)		gamedata\scripts\xr_box.script 					---> ������ ������������ ��������� ����� �������� ��� ���������� ������. -- ����� Bak. --
			-------------------------------------------------------------------------------------------------------------------------------
	(~)		gamedata\config\weapons\w_bolt.ltx 				---> force_grow_speed	= 15 ;; �������� ������ ���� ������ (����� � �������)
	(~)		gamedata\config\ui\inventory_new.xml
	(~)		gamedata\config\ui\inventory_new_16.xml
	(+)		gamedata\scripts\ui_main_menu.script
			-------------------------------------------------------------------------------------------------------------------------------
	(+)		gamedata\scripts\ui_cheat_base.script 			---> �����-���� -- by naxac --
	(+)		gamedata\scripts\ui_cheat_naxac.script 			---> �����-���� -- by naxac --
	(+)		gamedata\textures\ui\ui_cheat_naxac.dds			---> �����-���� -- by naxac --
	(+)		gamedata\textures\ui\ui_inv_belt_w_slots.dds 	---> �������� ��� ���������.
			-------------------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\ui\UICarBodyWnd.cpp 						---> HIDE_WEAPON_IN_INV
	(+)		xrGame\ui\UIPdaWnd.cpp							---> HIDE_WEAPON_IN_INV
	(+)		xrGame\ui\UIWpnParams.cpp 						---> wpn_knife ---> ����� �� ������������ ������� ��������, ���������������� ��� ����.
 	(/)		xrGame\alife_simulator_base.cpp 				---> Msg("#SE_DBG: CALifeSimulatorBase '%s' ->m_objects = 0x%p ",
	(+)		xrCore\LocatorAPI.cpp 							---> #pragma warning(pop)
	(~)		xrGame\ai\monsters\basemonster\base_monster_startup.cpp ---> color_gray, color_add // by PVS-Studio //
			-------------------------------------------------------------------------------------------------------------------------------
	======= build 6834 =======			
	*/
	
	/*		25_10_2017
			3rd party\Xiph\libvorbis\lib\info.c 				---> #pragma warning(disable:4996)
			xr_3da\xrGame\ui\UIMainIngameWnd.cpp				---> CUIWindow* sil = ...
			xr_3da\xrGame\Weapon... 							---> [Bugfix] Incorrect weapon weight calculation // by Sin! //
	======= build 6837 (����: ��� ��� ������, ���� ������ ������� ������� �������-������. TODO: ��������� ���!!! ) =======
	*/
	
	/*		26_10_2017
	(~)		xrGame\game_base.h 								---> BlockedByID = 0; BlockTime = 0; 							// by PVS-Studio //
xxx	(=)		xrGame\ui\uiabstract.h 							---> SetTextureVisible(bool vis)	{m_bTextureVisible = vis;} 	// by PVS-Studio // 
															---> ���� �����������, ��� ��-�� �����, ��������� ������ � ���. //
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(~)		xrGame\ai\crow\ai_crow.cpp 						---> [Bugfix] Crows fix 										// by Sin! //
	(~)		xrGame\WeaponMagazinedWGrenade.cpp 				---> [Bugfix] Fix disappearing grenade 							// by Sin! //
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(~)		xrGame\WeaponBinoculars.cpp 					---> m_fRTZoomFactor = g_fov; ---> �����, � ������� ��� ������� ��� ����������.
	(=)		xrGame\AI\Crow\ai_crow.cpp 						---> ������ ������ �� �������� �� ����� ����� �� ����� 							// by Charsi //
	(=)		xrGame\CustomMonster.cpp 						---> ���� ��������� ����� ������������/���������� ��� �������� ����� � ������� 	// by KRodin //
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(=)		gamedata\scripts\xr_effects.script 				---> ��� ��� ��-�� ���� ������� ������� �� ���� ������� ��� ������� � ������! 	-- by KRodin --
	(~)		gamedata\scripts\xr_motivator.script 			---> motivator_binder:reinit() ---> if self.object:alive() then
	(~)		gamedata\scripts\gulag_military.script 			---> ������� �� ������� ����� �������� �� ��������� ������� ���-��. � �� �������� �� ����� � �������� �� ����� -- by KRodin --
	(~)		gamedata\scripts\xr_meet.script 				---> ����� �� ������ � �� �������� ������. -- �� ����, ��� �����. --
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(=)		gamedata\config\scripts\yan\yan_scientist.ltx 	---> ����� ������� �� �������� ���� � ���� ����� ����� �������� �����. 			;; by KRodin ;;
	(+)		gamedata\config\text\rus\ui_st_other.xml 		---> �������� ������ ---> st_actor_netspawn
	(/)		gamedata\config\ui\maingame.xml 				---> ui_hud_icon_PDA 		---> ����������� �������� ������ ���.
	(/)		gamedata\config\ui\maingame_16.xml 				---> ui_hud_icon_PDA 		---> ����������� �������� ������ ���.
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(=)		xrGame\ai\trader\trader_animation.cpp 			---> ����� �������� ������ ���� �� ��������, � �� ������������� � ������ � �� 	// by abramcumner //
	(=)		xrGame\ai\trader\trader_animation.cpp 			---> ������ ����� ������� ��� ������������ 3�-����� ���������  					// by abramcumner //
xxx	(=)		xrGame\Ai\Trader\ai_trader.cpp 					---> ������ �������� �� ������ ������� ����� �� ��  							// by abramcumner //
	(=)		xrGame\ui\UIButton.cpp 							---> fixed OnMouseAction 														// by kolmogor //
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\inventory_item.h 						---> virtual void SetWeight(float w){ m_weight = w; } ---> ����� ��� EAT_PORTIONS_INFLUENCE
	(+)		xrGame\eatable_item.cpp 						---> EAT_PORTIONS_INFLUENCE ---> ��������� ��� � ���� ��������, ����� �������������. 	// by Real Wolf //
	(+)		xrGame\Actor.cpp 								---> RepackAmmo() 			---> ������������ �������� 									// by Charsi //
	(-)		xrGame\GamePersistent.cpp 						---> ������� ��������� � �������, ����: "������:�������������..." ---> sprintf_s (buff, "%s...", CStringTable().translate(str).c_str());
	(+)		xrGame\eatable_item.h 							---> int GetStartPortionsNum() const { return m_iStartPortionsNum; }; 					// by Shkiper2012 //
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	======= build 6842 =======
	*/
	
	/*		07_11_2017
	(+)		// ������ ��� ��������� �� ������ CEatableItem // by Shkiper2012 //
			int GetPortions();					---> local portions 	  = obj:get_portions()
			int GetStartPortions(); 			---> local start_portions = obj:get_start_portions()
			--
			xr_3da\xrGame\script_game_object_script3.cpp
			xr_3da\xrGame\script_game_object.h
			xr_3da\xrGame\script_game_object.cpp
			--
			��� ����������� ��������� ����� ������ = 0.
			� ��������� ---> ���� ������ = -1, ����� ���������� = 1.
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
xxx	(=)		�������� ������ 					---> "�������� �� ������ ������� ����� �� ��" 						---> �.�. �� ���� ��� ������, ������� � ���� �����.
	(+)		xrGame\ui\UITradeWnd.h 				---> ������� ���������, ������� � ����� ��� �� �����, ����� ������. ---> ColorizeItem()
	(+)		xrGame\ui\UITradeWnd.cpp 			---> + ��������� �������� �� ���� "��-�����������".  				---> ColorizeItem()
	(+)		xrGame\ui\UICarBodyWnd.h 			---> ������� ���������, ������� � ����� ��� �� �����, ����� ������. ---> ColorizeItem()
	(+)		xrGame\ui\UICarBodyWnd.cpp 			---> ������� ���������, ������� � ����� ��� �� �����, ����� ������. ---> ColorizeItem()
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(-)		������� ��� ������ �� "BATTLEYE"
	(-)		������� ��� ������ �� "xrd3d9-null"
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	======= build 6850 =======			
	*/
	
	/*		10_11_2017
	(~)		xrGame\ai\Monsters\Controller\controller_psy_aura.cpp ---> ��������� ������ ---> m_fake_max_add_dist, m_fake_min_add_dist.
	(=)		xrGame\ui\UICarBodyWnd.cpp 						---> fix scrolling
	(+)		xrGame\script_engine.cpp 						---> lua_gc (lua(),LUA_GCCOLLECT,0); 	---> CScriptEngine::collect_all_garbage()
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
xxx	(+)		xrGame\ui\UICellItem.cpp 						---> xr_delete 							---> ����, �������� ��� ������, �� ����� !�����! ��� ������������� ���������. <---
	(+)		xrGame\ui\UIInventoryWnd.h 						---> �������, ������, ���.
	(+)		xrGame\ui\UIInventoryWnd.cpp 					---> �������, ������, ��� + ��������� ������: if( !pActor ) return;
	(+)		xrGame\ui\uiinventorywnd2.cpp 					---> �������, ������, ��� + UIPropertiesBox.IsShown
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(~)		xrGame\ui\UIInventoryWnd3.cpp 					---> ��������� ������ 					---> !m_pInv->InSlot(CurrentIItem())
	(~)		xrGame\ui\UIMainIngameWnd.cpp 					---> ��������� ������ 					---> ALife::_OBJECT_ID _id
	(~)		xrGame\ui\UIScrollBar.cpp						---> ��������� ������ 					---> +1
	(~)		xrGame\ui\UITradeWnd.cpp 						---> ��������� ������ 					---> ��������� ������ �������� ���� ��������.
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\alife_simulator_script.cpp 				---> iterate_objects() 					// by Charsi // 
	(-)		xrGame\base_client_classes_script.cpp 			---> ������ ---> ::EIIFlags:: 			// fixed C4482 //
	(~)		xrGame\console_commands.cpp 					---> CCC_DemoRecord 					---> �� ��������, ���� ������� �� ���������, 
	(~)														---> CCC_LoadLastSave 					---> �������� ���������� �� ����, 
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(~)		xrGame\alife_update_manager.cpp 				---> 'change_level_autosave' 			---> �������� ����� ��� �������� �� ������ �������.
	(+)		xrGame\CustomOutfit.cpp 						---> m_eItemPlace == eItemPlaceSlot
	(=)		xrGame\CustomZone.cpp 							---> ����������� �� ���������� ����� ����� ���������� ��������. // by lvg_brest //
	(~)		xrGame\InventoryBox.h 							---> public: xr_vector<u16> m_items; 	---> ��� IterateInventoryBox()
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	|>>>| 	�������� ����-����. 							|>>>|
	(-)		xrGame\Actor_Sleep.cpp							---> #include "autosave_manager.h" 
	(-)		xrGame\Level.h									---> #include "autosave_manager.h" 		---> CAutosaveManager  *m_autosave_manager;
	(-)		xrGame\Level.cpp								---> #include "autosave_manager.h" 		---> CAutosaveManager  *m_autosave_manager;
	(-)		xrGame\ActorCondition.cpp 						---> #include "autosave_manager.h"
	(-)		xrGame\console_commands.cpp 					---> #include "autosave_manager.h"  +  if (!Level().autosave_manager().ready_for_autosave()){ ...
	(-)		xrGame\Level_input.cpp 							---> #include "autosave_manager.h"
	(-)		xrGame\enemy_manager.h 							---> #include "autosave_manager.h" 		---> set_ready_to_save()
	(-)		xrGame\enemy_manager.cpp 						---> #include "autosave_manager.h" 		---> set_ready_to_save()
	(-)		xrGame\CustomMonster.h 							---> set_ready_to_save()
	(-)		xrGame\CustomMonster.cpp 						---> set_ready_to_save()
	(-)		xrGame\Entity.h									---> set_ready_to_save()
	(-)		xrGame\Entity.cpp								---> set_ready_to_save()
	|<<<| 	�������� ����-����. 							|<<<|
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\level_script.cpp							---> iterate_online_objects(), 			// by Charsi //
															---> GetTargetObj(), GetTargetDist(), 	// by Golden Sphere Mod //
	(+)		xrGame\script_game_object.h						---> IterateBelt() 						// by Kondr48 //
															---> IterateInventoryBox() 				// ���-�� ������� �� �� //
															---> void SetActorDirection( float dir, float pitch, float roll );
	(~)		xrGame\script_game_object2.cpp					---> void SetActorDirection( float dir, float pitch = 0.f, float roll = 0.f)
	(+)		xrGame\script_game_object_inventory_owner.cpp 	---> IterateBelt(), IterateInventoryBox()
	(+)		xrGame\script_game_object_script3.cpp 			---> IterateBelt(), IterateInventoryBox()
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\script_particles.cpp 					---> if (!m_particles) Msg("CScriptParticles::CScriptParticles : critical error ...
	(/)		xrGame\trade2.cpp 								---> ��������� ������ 					---> //float deficit_factor = 1.f;
	(+)		xrGame\WeaponRG6.cpp							---> ��������� ������ 					---> if(GetState() == eIdle && iAmmoElapsed ... + return t;
	(~)		xrGame\xrServer_Objects_script.cpp 				---> setup_direction 					---> sobj:setup_direction( x, y, z )
	(+)		xr_object_list.h 								---> IC xr_map<u32,CObject*> GetMap() 	---> ��� iterate_online_objects()
	(~)		xrGame\ui\UIDragDropListEx.cpp 					---> ������� ������� ������ 			---> for( u8 i = 0; i < 3; ++i ) m_vScrollBar->TryScrollInc();
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	======= build 6853 =======			
	*/

	/*		12_11_2017
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(+)		������� ��������� ������� �� CoP 				---> level.change_game_time( u32 days, u32 hours, u32 mins ) 				// by Kondr48 //
			level_script.cpp
			alife_time_manager.h
			alife_time_manager_inline.h 
			Environment.h
			Environment.cpp
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(~) 	xrGame\game_sv_single.cpp 						---> st_restart_simulator ---> game_sv_Single::restart_simulator
	(/)		xrGame\xrServer.cpp 							---> Player not found. New player created.
	(/)		xrNetServer\NET_Server.cpp 						---> MaxPlayers = 32
	(+)		xrGame\console_commands.cpp 					---> ������ ����� �� ����� �������� ����������. ---> Device.Pause( TRUE, ...
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
xxx	(=)		xrGame\ActorAnimation.cpp 						---> ���������� �������� ����������� �� "_torso_0_aim_0"->"_torso_5_aim_0" 	// by Cut X-Ray // 
xxx															---> ����� ��-�� ���������� ���� ��������: 'cl_torso_5_aim_0'
	(=)		xrGame\WeaponMagazinedWGrenade.cpp 				---> m_fZoomFactor = g_fov; 												// Karlan: ���������� ���. //
	(=)		xrRender\xrRender_console.cpp					---> ��������� "�����" ��� �������, ���������� ��� � ������. 				// by Stalker_Monolit //
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(=)		xrGame\derived_client_classes.cpp 				---> scrope_zoom_factor ---> scope_zoom_factor
	(-)		xrGame\alife_anomalous_zone.cpp 				---> ;;
	(+)		xrGame\PhraseScript.cpp 						---> R_ASSERT3(functor_exists, "Cannot find precondition: ...
	(+)		Environment_misc.cpp 							---> �������� �� "CEnvAmbient::load: sound_section '%s' not found"
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	(+)		xrGame\key_binding_registrator_script.cpp 		---> ��������� ����� ������ key_bindings � DIK_keys �� _g.script
	(+)		xrGame\UICustomItem.cpp							---> float kx =	(UI()->is_16_9_mode())?(UI()->get_current_kx()):1.0f;
	(+)		xrGame\ui_base.h								---> get_current_kx()
	(+)		xrGame\ui_base.cpp								---> get_current_kx()
			-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	======= build 6854 (����� ��-�� ���������� �������� ����������� ��: 'cl_torso_5_aim_0' ) =======			
	*/
	
#endif

#ifndef Legend & Shkiper_Marker's
	// xxx - ����� ������. //
	// UNKNOW_shkiper_marker // 	-  (?)  - ������, ��� ���, ��� ����, ��� ������������, ���� ������������.
	// TODO_shkiper_marker // 		-  (#)  - (�����/����������) �������!
	// WIP_shkiper_marker //		-  (@)  - ����� ������!
	// ADD_shkiper_marker // 		-  (+)  - ���������
	// DELME_shkiper_marker //  	-  (-)  - �����/����� �������! ���� ��� �������!
	// CHANGE_shkiper_marker //  	-  (~)  - ��������
	// BUG_FIX_shkiper_marker //  	-  (=)  - ���������
	// FIXME_shkiper_marker //  	-  (!)  - !!!����� ���������!!!
	// INFO_shkiper_marker //  		-  (i)  - ������� � ��������, ����� �����������!
	// COMMENT_shkiper_marker //  	-  (/) 	- ���������������.
 	// >>> ---> -- ������ ����� ����/��������� -- >>> begin >>>
 	// <<< <--- --  ����� ����� ����/��������� -- <<< end <<<
	// ������ ���� ���������: 00_00_0000 //
#endif