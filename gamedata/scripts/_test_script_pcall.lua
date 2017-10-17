--[[ -------------------------------------------------------------------------------------------------------
-- File: 			_test_script_pcall.lua
-- Idea: 			Malandrinus
-- Description: 	�������� ������� ��� ������������� �� ���������. ����������� � ���������� ������ (pcall).
--]] -------------------------------------------------------------------------------------------------------

















-------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------


-- ������������ �������. --
-- _G.mag_ammo_manager = nil


--[=[ 	-- ������� ����� � ����... --
log1("##�������� ����...") -- ��������-������� 	-- �� ��������.
log1("~~�������� ����...") -- ����� 			-- ������
log1("**�������� ����...") -- ����� 			-- �� ������������
log1("!!�������� ����...") -- ������� 			-- ������
log1("--�������� ����...") -- ������ 			-- ��� ���������, ��������.
--]=]



--[=[ 	-- ������ ��� ������ ������ �������. --

--> START timer >---------------------------------------------------------------------------
-- local PTimer = profile_timer()
-- log1("--Start_Profile_Timer")
-- PTimer:start()
--> ----------------------------------------------------------------------------------------


-- bla bla bla ... --


--< ----------------------------------------------------------------------------------------
-- PTimer:stop()
-- log1("--" .. string.format("Stop_Profile_Timer:  =  [%.3f] ms", PTimer:time()*0.001) )
--< STOP timer <----------------------------------------------------------------------------

--]=]


--[=[ 	-- ���� ������� �� ������� � ������ �� ��� �����. --
function search_item_on_loc()
	local search_item = false
	local obj_ID = 0
	local obj_sec = "������"
	
	for i=1,65535 do
		local obj = level.object_by_id(i)
		if obj and obj:section() == "puzir_doc" then
			search_item = true
			obj_ID = obj:id()
			obj_sec = obj:section()
		end
	end

	if search_item == true then
		local news_text = "������ �������: "..(game.translate_string(ini:r_string(obj_sec, "inv_name")) or obj_sec)
		db.actor:give_game_news(news_text, "ui\\ui_iconsTotal", Frect():set(83,470,83,47), 1, 15000)
		-- ������ ����� �� �������.
		level.map_add_object_spot_ser(obj_ID, "red_location", "%c[255,238,155,23]����� ����������: "..(game.translate_string(ini:r_string(obj_sec, "inv_name")) or "<nil>").." ")
		-- ������� �����.
		-- level.map_remove_object_spot(obj_ID, "red_location")
	else
		local news_text = "������� �� ������ !!!"
		db.actor:give_game_news(news_text, "ui\\ui_iconsTotal", Frect():set(83,470,83,47), 1, 15000)
	end
end
search_item_on_loc()
--]=] ---------------------------------------------------


--[=[	-- ���-����� ��������, �� ������� �����. --
{
	[dynamic_out_restrictions] = {}
	[dynamic_in_restrictions] = {}
	[bones_mask] = {	[1] = 255, 
						[2] = 255, 
						[3] = 255, 
						[4] = 255, 
						[5] = 255, 
						[6] = 31, 
						[7] = 0, 
						[8] = 0, 	}
	[job_online] = 2, 
	[bbox_min] = userdata, 
	[game_vertex_id] = 57, 
	[g_team] = 4, 
	[object_flags] = -65, 
	[visual_flags] = 0, 
	[spawn_story_id] = -1, 
	[skeleton_flags] = 4, 
	[money] = 1447, 
	[bones] = {	[1] = {	[ph_rotation] = {[1] = 128, 
                                         [2] = 128, 
                                         [3] = 128, 
                                         [4] = 255, }
						[enabled] = false, 
						[ph_position] = {[1] = 128, 
                                         [2] = 128, 
                                         [3] = 128, }	}	}
	[character_profile] = esc_wolf, 
	[bbox_max] = userdata, 
	[smart_terrain_id] = 6305, 
	[bones_count] = 1, 
	[death_dropped] = 0, 
	[story_id] = 6, 
	[root_bone] = 0, 
	[source_id] = 65535, 
	[skeleton_name] = $editor, 
	[community_index] = 3, 
	[was_in_smart_terrain] = 1, 
	[upd] = {	[prev_game_vertex_id] = 57, 
				[distance_to_point] = 3.636976480484, 
				[distance_from_point] = 3.636976480484, 
				[start_dialog] = escape_lager_volk_talk, 
				[next_game_vertex_id] = 57, 
				[g_team] = 4, 
				[o_torso] = userdata, 
				[g_squad] = 1, 
				[health] = 1, 
				[position] = userdata, 
				[creature_flags] = 0, 
				[timestamp] = 87617, 
				[g_group] = 5, 
				[o_model] = -2.5811643600464, 
			}
	[killer_id] = 65535, 
	[equipment_preferences] = {	[1] = 1, 
								[2] = 0, 
								[3] = 0, 
								[4] = 2, 
								[5] = 0, 
								}
	[direct_control] = 1, 
	[main_weapon_preferences] = {	[1] = 2, 
									[2] = 2, 
									[3] = 1, 
									[4] = 2, 
									}
	[smart_terrain_task_active] = 0, 
	[base_in_restrictors] = , 
	[base_out_restrictors] = , 
	[game_death_time] = {	[1] = 0, 
							[2] = 0, 
							[3] = 0, 
							[4] = 0, 
							[5] = 0, 
							[6] = 0, 
							[7] = 0, 
							[8] = 0, }
	[reputation] = 5, 
	[distance] = 4.9000000953674, 
	[health] = 1, 
	[custom_data] = userdata, 
	[level_vertex_id] = 52330, 
	[visual_name] = actors\neytral\stalker_neytral_balon_1, 
	[trader_flags] = 1, 
	[specific_character] = esc_wolf, 
	[checked_characters] = ����, 
	[g_squad] = 1, 
	[g_group] = 5, 
	[rank] = 463, 
}
--]=]


--[=[ 	-- ���-����� ������. --

local t = {
   [upd] = {
               [num_items] = 0, 
               [ammo_type] = 1, 	-- ��� ��������. 0 - �������, 1 - �����������. ������ ����, ��� ����������� � ������� ������. 
									-- ���� �� ��������� ����������� ������� � �������� ��� ��������, upd:ammo_type ��������� ��� ����� ��������
               [weapon_state] = 0,  -- ����� ����������. ��� ��������� ������:
									-- 0 - � �����, idle
									-- 1 - �������� ������� �����/������ (��� ���� �����)
									-- 2 - �������������� ���� (������ ���)
									-- 3 - �����������
									-- 4 - ���������
									-- 5 - ��������� (��� �������������)
									-- 6 - ��������
									-- 7 - ���������
									-- 8 - ??? ������� �� ������������� (� ������ ���� "�"-�������)
									-- 9 - ���������/���������� ������������� �����������
               [condition] = 0, 
               [weapon_flags] = 1, 	-- 0 - ������ ��������, 1 - ������ � �����
               [current_fire_mode] = 1, -- ������� ����� ����. ����������� ��� � �������.
               [weapon_zoom] = 0, 	-- ��������� ���� ������: 0 - ������� ���������, 1 - ������ (������� ������ �����).
               [ammo_elapsed] = 5, 	-- ������� �������� � ������
               [addon_flags] = 0, 	-- ���������� ������. �������� ���� �� ����, �� ������� ���������:
									-- 0 - ����
									-- 1 - ������
									-- 2 - ����������
									-- 3 - ������+������������ ����������
									-- 4 - ���������
									-- 5 - ������ + ���������
									-- 6 - ������������ ���������� + ���������
									-- 7 - ��� �����
				[grenade_mode] = 0	-- ���� ������ � ������� � ������������ ��������� �������������. ����� �������������. 0 - ��������, 1 - ������� 
			[ammo_ids] = 5			-- ���� ������ � ���������� � �����.
									-- ����� ����� ��������� ������ ������������� ���� ���������� ����� � ���������� upd:ammo_ids 
									-- ����� �������� �������� ������, ������� � �. �. ������������.
			},
  [ammo_current] = 90, 
  [story_id] = -1, 
  [condition] = 0, 
  [game_vertex_id] = 4, 
  [object_flags] = -65, 
  [visual_flags] = 0, 
  [spawn_story_id] = -1, 
  [ammo_elapsed] = 5, 
  [weapon_state] = 0, 
   [custom_data] = userdata, 
  [visual_name] = arsenal_mod\wpn_aks74u_sk2, 
  [ammo_type] = 1, 
  [level_vertex_id] = 11713, 
  [direct_control] = 1, 
  [distance] = 0.69999998807907, 
  [addon_flags] = 0, 
}
--]=]


--[=[ 	-- ���-����� �������. --
local t = {
	[level_vertex_id] = 2803, 
	[spawn_story_id] = -1, 
	[distance] = 0, 
	[condition] = 1, 
	[game_vertex_id] = 717, 
	[visual_name] = wpn_m67_world, 
	[object_flags] = -65, 
	[visual_flags] = 0, 
	[upd] = {
				[num_items] = 0, 
			}
	[story_id] = -1, 
	[custom_data] = userdata, 
	[direct_control] = 1, 
}
--]=]


--[=[ 	-- ��������� �� �����. --

news_text = "��������� ����� ��������"
db.actor:give_game_news(news_text, "ui\\ui_iconsTotal", Frect():set(83,470,83,47), 1, 15000)

--]=]


--[=[ 	-- ������� ���� �������� �� �������. --
function kill_all_monsters_in_level()
	for i=1,65535 do
		local obj = level.object_by_id(i)
		if obj and IsMonster(obj) then
			if obj:alive() then
				local h = hit()
				h.direction = vector():set(0,0,0)
				h.impulse = 10
				h.draftsman = obj
				h.power = 1000
				h.type = hit.explosion
				obj:hit(h)
			end
		end
	end
	-- ������� � ����� ����. --
	if ogsm_funcs then
		if type(ogsm_funcs.kill_crow) == 'function' then
			ogsm_funcs.kill_crow()
		end
	end
end
kill_all_monsters_in_level()
--]=]


--[=[ 	-- ������� ���� ��������� �� �������. --
function kill_all_stalkers_in_level()
	for i=1,65535 do
		local obj = level.object_by_id(i)
		if obj and IsStalker(obj) then
			local otype = get_clsid(obj)
			if otype ~= clsid.actor and otype ~= clsid.script_trader then
				if obj:alive() then
					local h = hit()
					h.direction = vector():set(0,0,0)
					h.impulse = 10
					h.draftsman = obj
					h.power = 1000
					h.type = hit.explosion
					obj:hit(h)
				end
			end
		end
	end
end
kill_all_stalkers_in_level()
--]=]


--[=[ 	-- ����� ���� ��� ������������? �������, ���� �� ������... --
---------------------------------------------------------------------
-- local active_slot = db.actor:active_slot()
-- active_slot == ...
-- 0 - ���/������
-- 1 - ��������
-- 2 - �������
-- 3 - �������
-- 4 - �������
-- 5 - ����
-- -----------------------
-- 6 - �����������
-- 7 - ���
-- 8 - ��������
-- 9 - �������
-- 10 - ��������???
#define NO_ACTIVE_SLOT		0xffffffff
#define KNIFE_SLOT			0
#define PISTOL_SLOT			1
#define RIFLE_SLOT			2
#define GRENADE_SLOT		3
#define APPARATUS_SLOT		4
#define BOLT_SLOT			5
#define OUTFIT_SLOT			6
#define PDA_SLOT			7
#define DETECTOR_SLOT		8
#define TORCH_SLOT			9
#define ARTEFACT_SLOT		10
---------------------------------------------------------------------
-- bind == key_bindings.kWPN_...
-- key_bindings.kWPN_1, cmd_name_key = "wpn_1" 		-- ���/������
-- key_bindings.kWPN_2, cmd_name_key = "wpn_2"		-- ��������
-- key_bindings.kWPN_3, cmd_name_key = "wpn_3"		-- �������
-- key_bindings.kWPN_4, cmd_name_key = "wpn_4"		-- �������
-- key_bindings.kWPN_5, cmd_name_key = "wpn_5"		-- �������
-- key_bindings.kWPN_6, cmd_name_key = "wpn_6"		-- ����
---------------------------------------------------------------------
--]=]


--[=[ 	-- ����� ��. --
local satiety = db.actor.satiety
log1("satiety = "..tostring(satiety))

local str = string.format(" %1.3f",db.actor.satiety)
log1("satiety 2 =  "..math.ceil(tonumber(str)*100).."%")

-- �������: ������� �� ����������� �� 0.05 � ���. ��� �� 5% �� 100%-��� �������.
--]=]


--[=[ 	-- ������ -- ����� ����/����������� �����������. ��������� �����. --

-- ��������� ������ ��
-- local money = 1000000
-- db.actor:give_money(money)
-- game_stats.money_quest_update(money)

-- cmd("g_god on")
-- cmd("g_god off")

-- cmd("g_unlimitedammo on")
-- cmd("g_unlimitedammo off")

--]=]


--[=[ 	-- ����� ���������. -- ����� �� AMK mod. --
function spawn_item_in_inv(section,npc)
	local npc = (npc or db.actor)
	local sobj_abstr = alife():create(section,
			npc:position(),
			npc:level_vertex_id(),
			npc:game_vertex_id(),
			npc:id())
	if sobj_abstr then
		dbg_logf("**mag_base  >>>  spawn_item_in_inv  >>>  "..tostring(section)..",  npc:  "..tostring(npc:name()))
		return alife():object(sobj_abstr.id)
	else	
		abort("ERROR  >>>  "..sn.."  >>>  spawn_item_in_inv  >>>  "..tostring(section)..",  npc:  "..tostring(npc:name()))
		return false
	end	
end
spawn_item_in_inv("matras")
--]=]


--[=[ 	-- ����� �������� (������������ ����). --
NPC:    esc_bd__m_boar_e_0007   ID: 6315    story_ID:  NONE  
NPC:    esc_dog_weak_0002    	ID: 7067    story_ID:  NONE  
NPC:    esc_dog_weak_0006    	ID: 7069    story_ID:  NONE  
NPC:    esc_dog_weak_0007    	ID: 7071    story_ID:  NONE  
NPC:    bar_m_dog_e_0009    	ID: 12328    story_ID:  NONE  
NPC:    bar_m_dog_e_0010    	ID: 12330    story_ID:  NONE  
NPC:    bar_m_dog_e_0011    	ID: 12332    story_ID:  NONE  
NPC:    bar_m_dog_e_0012    	ID: 12334    story_ID:  NONE  
NPC:    bar_m_dog_e_0013    	ID: 12336    story_ID:  NONE  
NPC:    bar_m_dog_e_0014    	ID: 12338    story_ID:  NONE  
NPC:    bar_m_dog_e_0015    	ID: 12339    story_ID:  NONE  
NPC:    bar_m_dog_e_0016    	ID: 12340    story_ID:  NONE  
NPC:    bar_m_dog_e_0017    	ID: 12341    story_ID:  NONE  
NPC:    bar_m_dog_e_0018    	ID: 12342    story_ID:  NONE  
NPC:    bar_m_dog_e_0019    	ID: 12713    story_ID:  NONE  
NPC:    bar_m_dog_e_0020    	ID: 12715    story_ID:  NONE  
NPC:    bar_m_dog_e_0021    	ID: 12717    story_ID:  NONE  
NPC:    rostok_dog_dead_1    	ID: 13394    story_ID:  NONE  
NPC:    rostok_dog_dead_2    	ID: 13396    story_ID:  NONE  
NPC:    rostok_m_tushkano_e_0024 ID: 13410    story_ID:  NONE  
--]=]


--[=[ 	-- ��������� (������������ ����). --
--heli: helicopter  ID:  6295  	name:  esc_heli  			Story_ID:  14
--heli: helicopter  ID:  8755  	name:  agr_nii_heli  		Story_ID:  none
--heli: helicopter  ID:  9228  	name:  agr_helicopter1  	Story_ID:  none
--heli: helicopter  ID:  9232  	name:  agr_helicopter2  	Story_ID:  393
--heli: helicopter  ID:  9233  	name:  agr_helicopter4  	Story_ID:  none
--heli: helicopter  ID:  9234  	name:  agr_helicopter3  	Story_ID:  none
--heli: helicopter  ID:  10583  name:  val_chase_heli  		Story_ID:  none
--heli: helicopter  ID:  13398  name:  rostok_helicopter  	Story_ID:  none
--heli: helicopter  ID:  16037  name:  yan_helicopter_1  	Story_ID:  none
--heli: helicopter  ID:  16038  name:  yan_helicopter_2  	Story_ID:  none
--heli: helicopter  ID:  17476  name:  rad_helicopter  		Story_ID:  none
--heli: helicopter  ID:  20016  name:  pri_helicopter_24  	Story_ID:  none
--heli: helicopter  ID:  20017  name:  pri_helicopter1  	Story_ID:  800
--heli: helicopter  ID:  20018  name:  pri_helicopter2  	Story_ID:  801
--heli: helicopter  ID:  20019  name:  pri_helicopter4  	Story_ID:  803
--heli: helicopter  ID:  20021  name:  pri_helicopter_21  	Story_ID:  none
--heli: helicopter  ID:  20022  name:  pri_helicopter_22  	Story_ID:  none
--heli: helicopter  ID:  21458  name:  aes_helicopter  		Story_ID:  none
--heli: helicopter  ID:  21459  name:  aes_helicopter_0000  Story_ID:  none
--heli: helicopter  ID:  21460  name:  aes_helicopter_0001  Story_ID:  none
--heli: helicopter  ID:  21461  name:  aes_helicopter_0002  Story_ID:  none
--heli: helicopter  ID:  21617  name:  aes_helicopter_0008  Story_ID:  none
--heli: helicopter  ID:  21767  name:  aes_helicopter_0009  Story_ID:  none
--heli: helicopter  ID:  22034  name:  aes_helicopter_0007  Story_ID:  none
--heli: helicopter  ID:  22075  name:  aes_helicopter_0010  Story_ID:  none
--heli: helicopter  ID:  22464  name:  aes_helicopter_0003  Story_ID:  none
--heli: helicopter  ID:  22465  name:  aes_helicopter_0004  Story_ID:  none
--]=]


--[=[ 	-- m_netpk --
-- local sobj = alife():object(6297) -- ���� --
-- local pk = m_netpk.get(sobj)
-- if pk:isOk() then
	-- local data = pk:get()
	-- local description = pk:dumpDesc()
	-- print_table_in_log(data)	
-- end
--]=]


--[=[ 	-- ������, ��� � ��� � ���������. --
function npc_inventory()
	local sobj = alife():object(6199) -- ����� �����. --
	if sobj then
		log1("npc")
		local npc = level.object_by_id(sobj.id)
		if npc then
			log1("npc 2 ")
			local function __del_item(npc, item)
				local section = item:section()
				log1("section = "..tostring(section))
			end
			npc:iterate_inventory(__del_item, npc)
		end
	else
		log1("NO npc")
	end
end
npc_inventory()
--]=]


--[=[ 	-- ����-������, ���� �� ������. --
-- db.actor:give_info_portion("opkon_red_forest") 		-- ������.
-- db.actor:disable_info_portion("opkon_red_forest") 	-- ���������.

-- db.actor:has_info("opkon_red_forest") 				-- ��������: �����?
-- db.actor:dont_has_info("opkon_red_forest") 			-- ��������: ��������?
--]=]


--[=[ 	-- ����������, ����������� (position, direction) ������ � ��. --

-- local dev_cam_right 	= device().cam_right 	-- ��������� ������, ���������������� ����������� ������ � ������������ ������
-- local dev_cam_top 	= device().cam_top 		-- ��������� ������, ���������������� ����������� ������ � ������������ �����

-- ������� ��������� ���� �������� ������ �� ��� �
function dir_angleY()
  local dir = device().cam_dir
  return -dir:getH()
end
-- � �������� ����� ����������� ������� �� ��� Y. 
-- �� ���������� � �� ������ ���� �����������. 
-- ��� ��� Y: �����������  �� ����� 	- ������ ���������� � direction ����� 0, 
						-- �� �� 		- +3,14 ��� -3,14 (��� �������), 
						-- �� ������ 	- -1,57, 
						-- �� ����� 	- +1,57.
--]=]--


--[=[ 	-- ������� ������������ ������ LUA. --
	-- dbg_logf(string.rep("-",95))
	-- dbg_logf("--_test_script_pcall.lua > Memory used by Lua before cleanup:  "..collectgarbage('count').."  Kb. ")
	-- collectgarbage('collect')
	-- collectgarbage('collect')
	-- dbg_logf("--_test_script_pcall.lua >> Memory used by Lua after cleanup:  "..collectgarbage('count').."  Kb. ")
	-- dbg_logf(string.rep("-",95))
--]=]--

