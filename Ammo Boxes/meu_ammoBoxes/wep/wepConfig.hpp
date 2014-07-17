// REVISION 16JUL14

// class CfgVehicles
// {
	//Defined already
	//class B_supplyCrate_F;
	class Box_meu_wep : B_supplyCrate_F {
		displayname = "[15th] Weapons Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		transportMaxitems = 9999;
		SLX_XEH_DISABLED = 0;

		class TransportItems {

// OPTICS

			class _xx_acc_flashlight {
				count = 5;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 5;
				name = "acc_pointer_IR";
			};	
			class _xx_FHQ_optic_ACOG {
				count = 5;
				name = "FHQ_optic_ACOG";
			};
			class _xx_FHQ_optic_AIM {
				count = 5;
				name = "FHQ_optic_AIM";
			};		
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};			
			class _xx_FHQ_optic_HWS {
				count = 5;
				name = "FHQ_optic_HWS";
			};
			class _xx_FHQ_optic_HWS_G33 {
				count = 15;
				name = "FHQ_optic_HWS_G33";
			};
			class _xx_FHQ_acc_ANPEQ15 {
				count = 5;
				name = "FHQ_acc_ANPEQ15";
			};	
			class _xx_optic_tws {
				count = 5;
				name = "optic_tws";
			};
			class _xx_FHQ_optic_tws3050 {
				count = 15;
				name = "FHQ_optic_tws3050";
			};
			class _xx_optic_tws_mg {
				count = 5;
				name = "optic_tws_mg";
			};


// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 20;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
			class _xx_Rangefinder {
				count = 20;
				name = "Rangefinder";
			};
			class _xx_B_UavTerminal {
				count = 4;
				name = "B_UavTerminal";
			};
			class _xx_itemctab {
				count = 4;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 10;
				name = "itemandroid";
			};
			class _xx_ItemcTabHCam {
				count = 10;
				name = "ItemcTabHCam";
			};
			class _xx_ToolKit {
				count = 20;
				name = "ToolKit";
			};
			class _xx_MineDetector {
				count = 10;
				name = "MineDetector";
			};	
			class _xx_NVGoggles_Opfor {
				count = 20;
				name = "NVGoggles_Opfor";
			};
			class _xx_ItemSMGR {
				count = 20;
				name = "ItemSMGR";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			class _xx_AGM_SpareBarrel {
				count = 6;
				name = "AGM_SpareBarrel";
			};
			
// HELMETS
			class _xx_H_mas_mar_HelmetBind_v {
				count = 15;
				name = "H_mas_mar_HelmetBind_v";
			};
			class _xx_H_mas_mar_HelmetB_v {
				count = 15;
				name = "H_mas_mar_HelmetB_v";
			};


// UNIFORMS
			class _xx_U_mas_mar_B_IndUniform1_v {
				count = 15;
				name = "U_mas_mar_B_IndUniform1_v";
			};
			class _xx_V_mas_mar_PlateCarrier2_rgr {
				count = 15;
				name = "U_mas_mar_B_CombatUniform_veg";
			};

// VESTS
			class _xx_V_mas_mar_PlateCarrier2_rgr_d {
				count = 15;
				name = "V_mas_mar_PlateCarrier2_rgr_d";
			};
			class _xx_V_mas_mar_PlateCarrierGL_rgr_d {
				count = 15;
				name = "V_mas_mar_PlateCarrierGL_rgr_d";
			};
			class _xx_V_mas_mar_PlateCarrier1_rgr_d {
				count = 6;
				name = "V_mas_mar_PlateCarrier1_rgr_d";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};
		};

// AMMO
		class TransportMagazines {
			class _xx_rh_15rnd_9x19_m9 {
				count = 100;
				magazine = "rh_15rnd_9x19_m9";
			};
			class _xx_30Rnd_556x45_Stanag {
				count = 200;
				magazine = "30Rnd_556x45_Stanag";
			};
			class _xx_30Rnd_mas_556x45_T_Stanag {
				count = 100;
				magazine = "30Rnd_mas_556x45_T_Stanag";
			};
			class _xx_100Rnd_mas_762x51_Stanag {
				count = 100;
				magazine = "100Rnd_mas_762x51_Stanag";
			};
			class _xx_100Rnd_mas_762x51_T_Stanag {
				count = 100;
				magazine = "100Rnd_mas_762x51_T_Stanag";
			};
			class _xx_SMAW_HEDP {
				count = 50;
				magazine = "SMAW_HEDP";
			};
			class _xx_SMAW_HEAA {
				count = 50;
				magazine = "SMAW_HEAA";
			};

//Smoke 203
			class _xx_SmokeShell {
				count = 100;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 50;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 50;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 50;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellPurple {
				count = 50;
				magazine = "SmokeShellPurple";
			};
			class _xx_SmokeShellOrange {
				count = 50;
				magazine = "SmokeShellOrange";
			};
			class _xx_SmokeshellBlue {
				count = 50;
				magazine = "SmokeshellBlue";
			};
			class _xx_HandGrenade {
				count = 100;
				magazine = "HandGrenade";
			};
			class _xx_1Rnd_HE_Grenade_shell {
				count = 100;
				magazine = "1Rnd_HE_Grenade_shell";
			};			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 25;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 25;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_REV1_flash {
				count = 100;
				magazine = "REV1_flash";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};


// EXPLOSIVES
			class _xx_APERSMine_Range_Mag {
				count = 20;
				magazine = "APERSMine_Range_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				count = 20;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag {
				count = 20;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_SatchelCharge_Remote_Mag {
				count = 20;
				magazine = "SatchelCharge_Remote_Mag";
			};	

// Laser designator
			class _xx_Laserbatteries {
				count = 5;
				magazine = "Laserbatteries";
			};
		};

// WEAPONS
		class TransportWeapons {
			class _xx_rh_m9 {
				count = 20;
				weapon = "rh_m9";
			};
			class _xx_arifle_mas_m4 {
				count = 20;
				weapon = "arifle_mas_m4";
			};
			class _xx_arifle_mas_m4_m203 {
				count = 20;
				weapon = "arifle_mas_m4_m203";
			};
			class _xx_arifle_mas_m16 {
				count = 20;
				weapon = "arifle_mas_m16";
			};
			class _xx_arifle_mas_m16_gl {
				count = 20;
				weapon = "arifle_mas_m16_gl";
			};
			class _xx_LMG_mas_M240_F {
				count = 20;
				weapon = "LMG_mas_M240_F";
			};
			class _xx_SMAW_Launcher {
				count = 20;
				weapon = "SMAW_Launcher";
			};
			class _xx_Laserdesignator {
				count = 1;
				weapon = "Laserdesignator";
			};
		};
	};
	
	
// Dont need this };