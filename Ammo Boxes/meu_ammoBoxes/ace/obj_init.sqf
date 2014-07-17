_crate = _this select 0;
_crate allowDamage false;

if (isServer) then
{
	_crate addBackpackCargoGlobal ["tf_rt1523g", 5];
	_crate addBackpackCargoGlobal ["B_AssaultPack_cbr", 5];   
	_crate addBackpackCargoGlobal ["B_Kitbag_cbr", 5];    
	_crate addBackpackCargoGlobal ["B_Parachute", 15];
};
_crate addAction ["<t color=""#01019E"">" + ("15th Loadout Manager") + "</t>","\15th_main\lomgr\gui_start.sqf"]; 
_crate addAction ["<t color=""#DB3503"">" + ("ACE Fixed Pilot") + "</t>","\meu_ammoBoxes\ace\A_Fixed_Pilot.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("ACE Rotary Crew Desert)") + "</t>","\meu_ammoBoxes\ace\A_Rotary_Crew_D.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("ACE Rotary Pilot(Desert)") + "</t>","\meu_ammoBoxes\ace\A_Rotary_Pilot_D.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("ACE Rotary Crew (Woodland)") + "</t>","\meu_ammoBoxes\ace\A_Rotary_Crew_W.sqf"];
_crate addAction ["<t color=""#DB3503"">" + ("ACE Rotary Pilot (Woodland)") + "</t>","\meu_ammoBoxes\ace\A_Rotary_Pilot_W.sqf"];