--[[ -------------------------------------------------------------------------------------------------------
-- File: 			_test_script_pcall.lua
-- Idea: 			Malandrinus
-- Description: 	�������� ������� ��� ������������� �� ���������. ����������� � ���������� ������ (pcall).
--]] -------------------------------------------------------------------------------------------------------
if (not log1) or (type(log1) ~= 'function')  then
	local console = nil
	log1 = function(fmt, ...)
		if not console then console = get_console() end
		console:execute(string.gsub(string.format(fmt,...), " ", "_"))
	end
end
local ini = system_ini() local function dbg_logf(fmt,...) log1(fmt,...) end
































-------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------
-- ������������ �������. --
-- _G.bind_stalker = nil


--[=[ 	-- ������� ����� ������ ��� ������ � ��� ������. --
function show_sect_weather()
    local time_h 		= sr_timer.time2str(level.get_time_hours()) -- ������� ������� ���
	local ini 			= system_ini()								-- ��� ������ ��������
	local weather 		= level.get_weather() 						-- ������� ��� ������
	local weather_sect 	= ini:r_string("weathers", weather) 		-- ������ ������, ��������������� �������� ����
	local weather_time 	= tostring(time_h)..":00:00"				-- ����� ������� ��� ������ � ������� ������
	
	if ini:section_exist(weather_sect) and ini:line_exist(weather_sect, weather_time) then
		local time_sect = ini:r_string(weather_sect, weather_time) 			-- ������ ������� ������ �� ������ ���
		news_manager.send_tip(db.actor, "��� ������    : "..tostring(weather)..
									 "\\n������� ������ : "..tostring(time_sect).."", nil, nil, 7000)
	else
		news_manager.send_tip(db.actor, "��� ������: "..tostring(weather).."\\n�������! \\n������� ������ ������ ����������� � ����!", nil, nil, 7000)
	end 
end 
show_sect_weather()
--]=]


--[=[ 	-- FOV --
-- original_fov_shoc = 67.5
-- local f = device().fov -- ������� fov, �� ������ ������.
-- log1("  device().fov  =  "..tostring( f ))

local g = device():get_fov()
log1("  device().fov  =  "..tostring( g ))

device():set_fov( 67.5 )

local h = device():get_fov()
log1("  device().fov  =  "..tostring( h ))
--]=]


--[=[ 	-- iterate_objects -- �������� �� ��������. -- �������� ������� �-���, ����� ���������� ��� �������� �������. --
local func = function( sobj )
	local sobj_name = sobj:name()
	log1(" sobj_name = ".. tostring( sobj_name ))
-- 	local sobj_sect_name = sobj:section_name()
-- 	log1(" sobj_sect_name = ".. tostring( sobj_sect_name ))
end
alife():iterate_objects( func )
--]=]


--[=[ 	-- iterate_online_objects -- �������� �� ������-��������. --
	local func = function( obj )
		local obj_sect = obj:section()
		log1("obj_sect = ".. tostring( obj_sect ))
	end
	level.iterate_online_objects( func )
--]=]


--[=[ 	-- get_target_obj() -- ������ �� ������� ������� -- get_target_dist() -- ��������� �� �������, �� ������� �������. --

	local target_obj 	= level.get_target_obj()
	local target_dist 	= level.get_target_dist()
	local section 		= target_obj:section()
	local target_obj_id = target_obj:id()
	
	log1("section = "..tostring(section))
	log1("target_dist = "..tostring(target_dist))
	log1("target_obj_id = "..tostring(target_obj_id))
--]=]


--[=[ 	-- iterate_inventory_box() -- �������� �� �����. --

-- 	local sobj = alife():object( 1078 ) 		-- ���� � ������ ��������, � ������. --
-- 	local inv_box = level.object_by_id(sobj.id)
	
	local inv_box = level.object_by_id( 1078 )	-- ���� � ������ ��������, � ������. --
	if inv_box then
		log1(" inv_box 2 ")
		local func = function( item )
			local section = item:section()
			log1("section = "..tostring(section))
		end
		inv_box:iterate_inventory_box( func )
	end
--]=]


--[=[ 	-- iterate_belt() -- �������� �� ����� ��. --
	local func = function( item )
		local section = item:section()
		log1("section = "..tostring(section))
	end
	db.actor:iterate_belt( func, db.actor )
--]=]


--[=[ 	-- UsedAI_Locations -- ������ ������������ ��������� ����� �������� ��� ���������� ������. -->>-- ����� Bak. -->>--
		local obj_itm 	= alife():create( item, position, obj:level_vertex_id(), obj:game_vertex_id() )
		local sobj_item = alife():object( obj_itm.id )
		local pk 		= m_netpk.get( sobj_item )
		local data 		= pk:get()
		data.object_flags = bit_and( data.object_flags, bit_not( 128 ) ) 	-- ����� 		���� flUsedAI_Locations
	-- 	data.object_flags = bit_or(data.object_flags, 128) 					-- ���������� 	���� flUsedAI_Locations
		pk:set( data )
--]=]


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


--[=[ 	-- m_netpk --
-- local sobj = alife():object(6297) -- ���� --
-- local pk = m_netpk.get(sobj)
-- if pk:isOk() then
	-- local data = pk:get()
	-- local description = pk:dumpDesc()
	-- print_table_in_log(data)	
-- end
--]=]


--[=[ 	-- ����-������, ���� �� ������. --
-- db.actor:give_info_portion("opkon_red_forest") 		-- ������.
-- db.actor:disable_info_portion("opkon_red_forest") 	-- ���������.

-- db.actor:has_info("opkon_red_forest") 				-- ��������: �����?
-- db.actor:dont_has_info("opkon_red_forest") 			-- ��������: ��������?
--]=]


--[=[ 	-- ������� ������������ ������ LUA. --
	-- dbg_logf(string.rep("-",95))
	-- dbg_logf("--_test_script_pcall.lua > Memory used by Lua before cleanup:  "..collectgarbage('count').."  Kb. ")
	-- collectgarbage('collect')
	-- collectgarbage('collect')
	-- dbg_logf("--_test_script_pcall.lua >> Memory used by Lua after cleanup:  "..collectgarbage('count').."  Kb. ")
	-- dbg_logf(string.rep("-",95))
--]=]--

