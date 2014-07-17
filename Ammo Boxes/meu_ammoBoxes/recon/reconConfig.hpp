// REVISION 16JUL14

// class CfgVehicles
// {

	class Box_NATO_WpsSpecial_F;
	class Box_meu_spectre : Box_NATO_WpsSpecial_F {
		displayname = "[15th] Spectre Box";
		icon = "iconCrateLarge";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		//scope = 2;
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		SLX_XEH_DISABLED = 0;


		class TransportItems {

// SUPPRESSORS + CARRY HANDLE
			class _xx_RH_gemtech45 {
				count = 25;
				name = "RH_gemtech45";
			};
			class _xx_muzzle_mas_snds_C {
				count = 25;
				name = "muzzle_mas_snds_C";
			};
			class _xx_muzzle_mas_snds_M {
				count = 25;
				name = "muzzle_mas_snds_M";
			};
			class _xx_muzzle_mas_snds_SM {
				count = 25;
				name = "muzzle_mas_snds_SM";
			};
			class _xx_muzzle_mas_snds_SV {
				count = 25;
				name = "muzzle_mas_snds_SV";
			};
			class _xx_optic_mas_handle {
				count = 25;
				name = "optic_mas_handle";
			};

// OPTICS
			class _xx_optic_mas_term {
				count = 25;
				name = "optic_mas_term";
			};
			class _xx_optic_Arco {
				count = 25;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 25;
				name = "optic_Hamr";
			};
			class _xx_optic_Aco {
				count = 25;
				name = "optic_Aco";
			};
			class _xx_optic_Aco_smg {
				count = 25;
				name = "optic_Aco_smg";
			};
			class _xx_optic_Holosight {
				count = 25;
				name = "optic_Holosight";
			};
			class _xx_optic_Holosight_smg {
				count = 25;
				name = "optic_Holosight_smg";
			};
			class _xx_optic_mas_zeiss {
				count = 25;
				name = "optic_mas_zeiss";
			};
			class _xx_optic_mas_zeiss_eo {
				count = 25;
				name = "optic_mas_zeiss_eo";
			};
			class _xx_optic_SOS {
				count = 25;
				name = "optic_SOS";
			};
			class _xx_acc_flashlight {
				count = 25;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 25;
				name = "acc_pointer_IR";
			};
			class _xx_optic_MRCO {
				count = 25;
				name = "optic_MRCO";
			};
			class _xx_optic_DMS {
				count = 25;
				name = "optic_DMS";
			};
			class _xx_optic_LRPS {
				count = 25;
				name = "optic_LRPS";
			};
			class _xx_optic_NVS {
				count = 25;
				name = "optic_NVS";
			};
			class _xx_optic_Nightstalker {
				count = 25;
				name = "optic_Nightstalker";
			};
			class _xx_optic_tws {
				count = 25;
				name = "optic_tws";
			};
			class _xx_optic_tws_mg {
				count = 25;
				name = "optic_tws_mg";
			};
			class _xx_FHQ_optic_ACOG {
				count = 25;
				name = "FHQ_optic_ACOG";
			};
			class _xx_FHQ_optic_AIM {
				count = 25;
				name = "FHQ_optic_AIM";
			};
			class _xx_FHQ_optic_TWS3050 {
				count = 25;
				name = "FHQ_optic_TWS3050";
			};
			class _xx_FHQ_optic_HWS {
				count = 25;
				name = "FHQ_optic_HWS";
			};
			class _xx_FHQ_optic_HWS_G33 {
				count = 25;
				name = "FHQ_optic_HWS_G33";
			};
			class _xx_FHQ_optic_MicroCCO {
				count = 25;
				name = "FHQ_optic_MicroCCO";
			};
			class _xx_FHQ_optic_MicroCCO_low {
				count = 25;
				name = "FHQ_optic_MicroCCO_low";
			};
			class _xx_FHQ_optic_AC11704 {
				count = 25;
				name = "FHQ_optic_AC11704";
			};
			class _xx_RH_x300 {
				count = 25;
				name = "RH_x300";
			};
			class _xx_RH_docter {
				count = 25;
				name = "RH_docter";
			};

// HELMETS
			class _xx_H_mas_mar_HelmetB {
				count = 25;
				name = "H_mas_mar_HelmetB";
			};
			class _xx_H_mas_mar_HelmetB_paint {
				count = 25;
				name = "H_mas_mar_HelmetB_paint";
			};
			class _xx_H_mas_mar_HelmetB_light {
				count = 25;
				name = "H_mas_mar_HelmetB_light";
			};
			class _xx_H_mas_mar_HelmetB_d {
				count = 25;
				name = "H_mas_mar_HelmetB_d";
			};
			class _xx_H_mas_mar_HelmetB_paint_d {
				count = 25;
				name = "H_mas_mar_HelmetB_paint_d";
			};
			class _xx_H_mas_mar_HelmetB_light_d {
				count = 25;
				name = "H_mas_mar_HelmetB_light_d";
			};
			class _xx_H_mas_mar_HelmetB_v {
				count = 25;
				name = "H_mas_mar_HelmetB_v";
			};
			class _xx_H_mas_mar_HelmetB_paint_v {
				count = 25;
				name = "H_mas_mar_HelmetB_paint_v";
			};
			class _xx_H_mas_mar_HelmetB_light_v {
				count = 25;
				name = "H_mas_mar_HelmetB_light_v";
			};
			class _xx_H_mas_mar_HelmetB_b {
				count = 25;
				name = "H_mas_mar_HelmetB_b";
			};
			class _xx_H_mas_mar_HelmetB_paint_b {
				count = 25;
				name = "H_mas_mar_HelmetB_paint_b";
			};
			class _xx_H_mas_mar_HelmetB_light_b {
				count = 25;
				name = "H_mas_mar_HelmetB_light_b";
			};
			class _xx_H_mas_mar_HelmetBind_v {
				count = 25;
				name = "H_mas_mar_HelmetBind_v";
			};
			class _xx_H_mas_mar_HelmetBind_d {
				count = 25;
				name = "H_mas_mar_HelmetBind_d";
			};
			class _xx_H_mas_mar_Woolhat {
				count = 25;
				name = "H_mas_mar_Woolhat";
			};
			class _xx_H_mas_mar_Woolhat_c {
				count = 25;
				name = "H_mas_mar_Woolhat_c";
			};
			class _xx_H_mas_mar_Booniehat_wood {
				count = 25;
				name = "H_mas_mar_Booniehat_wood";
			};
			class _xx_H_mas_mar_Booniehat_rgr {
				count = 25;
				name = "H_mas_mar_Booniehat_rgr";
			};
			class _xx_H_mas_mar_Booniehat_des {
				count = 25;
				name = "H_mas_mar_Booniehat_des";
			};
			class _xx_H_mas_mar_Balaclava_ht {
				count = 25;
				name = "H_mas_mar_Balaclava_ht";
			};
			class _xx_H_mas_mar_Balaclava_ht_b {
				count = 25;
				name = "H_mas_mar_Balaclava_ht_b";
			};
			class _xx_H_mas_mar_helmet_us {
				count = 25;
				name = "H_mas_mar_helmet_us";
			};
			class _xx_H_mas_mar_helmet_bala_us {
				count = 25;
				name = "H_mas_mar_helmet_bala_us";
			};
			class _xx_H_mas_mar_helmet_l_us {
				count = 25;
				name = "H_mas_mar_helmet_l_us";
			};
			class _xx_H_mas_mar_helmet_l_bala_us {
				count = 25;
				name = "H_mas_mar_helmet_l_bala_us";
			};
			class _xx_H_mas_mar_Cap_headphones {
				count = 25;
				name = "H_mas_mar_Cap_headphones";
			};
			class _xx_H_mas_mar_revcapheadset_b {
				count = 25;
				name = "H_mas_mar_revcapheadset_b";
			};
			class _xx_H_mas_mar_bandana {
				count = 25;
				name = "H_mas_mar_bandana";
			};
			class _xx_H_mas_mar_bandana_v {
				count = 25;
				name = "H_mas_mar_bandana_v";
			};
			class _xx_H_mas_mar_bandana_d {
				count = 25;
				name = "H_mas_mar_bandana_d";
			};

// NVG AND GOGGLES
			class _xx_NVGoggles {
				count = 25;
				name = "NVGoggles";
			};
			class _xx_NVGoggles_mas_mask {
				count = 25;
				name = "NVGoggles_mas_mask";
			};
			class _xx_NVGoggles_mas_mask2 {
				count = 25;
				name = "NVGoggles_mas_mask2";
			};
			class _xx_NVGoggles_mas_mask_t {
				count = 25;
				name = "NVGoggles_mas_mask_t";
			};
			class _xx_NVGoggles_mas_mask2_t {
				count = 25;
				name = "NVGoggles_mas_mask2_t";
			};
			class _xx_NVGoggles_mas_mask3 {
				count = 25;
				name = "NVGoggles_mas_mask3";
			};
			class _xx_NVGoggles_mas {
				count = 25;
				name = "NVGoggles_mas";
			};
			class _xx_AV_ESS_blk {
				count = 25;
				name = "AV_ESS_blk";
			};
			class _xx_AV_ESS_blk_clr {
				count = 25;
				name = "AV_ESS_blk_clr";
			};
			class _xx_AV_ESS_tan {
				count = 25;
				name = "AV_ESS_tan";
			};
			class _xx_AV_ESS_tan_clr {
				count = 25;
				name = "AV_ESS_tan_clr";
			};
			class _xx_AV_ESS_grn {
				count = 25;
				name = "AV_ESS_grn";
			};
			class _xx_AV_ESS_grn_clr {
				count = 25;
				name = "AV_ESS_grn_clr";
			};		

// ACCESSORIES
			class _xx_ItemWatch {
				count = 25;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 25;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 25;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 100;
				name = "ItemRadio";
			};
			class _xx_tf_anprc152 {
				count = 100;
				name = "tf_anprc152";
			};
			class _xx_ItemMap {
				count = 25;
				name = "ItemMap";
			};
			class _xx_MineDetector {
				count = 25;
				name = "MineDetector";
			};
			class _xx_Binocular {
				count = 25;
				name = "Binocular";
			};
			class _xx_Rangefinder {
				count = 25;
				name = "Rangefinder";
			};
			class _xx_Laserdesignator {
				count = 25;
				name = "Laserdesignator";
			};
			class _xx_Laserbatteries {
				count = 25;
				name = "Laserbatteries";
			};
			class _xx_B_UavTerminal {
				count = 25;
				name = "B_UavTerminal";
			};
			class _xx_itemctab {
				count = 25;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 25;
				name = "itemandroid";
			};
			class _xx_ItemcTabHCam {
				count = 25;
				name = "ItemcTabHCam";
			};
			class _xx_ToolKit {
				count = 25;
				name = "ToolKit";
			};
			class _xx_ItemSMGR {
				count = 25;
				name = "ItemSMGR";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};
			
// UNIFORMS
			class _xx_V_mas_mar_PlateCarrier1_rgr {
				count = 25;
				name = "V_mas_mar_PlateCarrier1_rgr";
			};
			class _xx_V_mas_mar_PlateCarrier2_rgr {
				count = 25;
				name = "V_mas_mar_PlateCarrier2_rgr";
			};
			class _xx_V_PlateCarrier1_blk {
				count = 25;
				name = "V_PlateCarrier1_blk";
			};
			class _xx_V_RebreatherB {
				count = 25;
				name = "V_RebreatherB";
			};
			class _xx_U_mas_mar_B_Wetsuit {
				count = 25;
				name = "U_mas_mar_B_Wetsuit";
			};
			class _xx_U_mas_mar_B_GhillieSuit_d {
				count = 25;
				name = "U_mas_mar_B_GhillieSuit_d";
			};
			class _xx_U_mas_mar_B_CombatUniform_des_vest {
				count = 25;
				name = "U_mas_mar_B_CombatUniform_des_vest";
			};
			class _xx_U_mas_mar_B_CombatUniform_wood_vest3 {
				count = 25;
				name = "U_mas_mar_B_CombatUniform_wood_vest3";
			};
			class _xx_U_mas_mar_B_CombatUniform_sage_vest {
				count = 25;
				name = "U_mas_mar_B_CombatUniform_sage_vest";
			};
			class _xx_U_mas_mar_B_GhillieSuit_v {
				count = 25;
				name = "U_mas_mar_B_GhillieSuit_v";
			};
			class _xx_U_mas_mar_B_CombatUniform_veg_vest {
				count = 25;
				name = "U_mas_mar_B_CombatUniform_veg_vest";
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
		    class _xx_AGM_Morphine  {
			     count = 100; 
				 name = "AGM_Morphine";
			};
		    class _xx_AGM_Bloodbag  {
			     count = 100; 
				 name = "AGM_Bloodbag";
			};
		};
	
// AMMO
		class TransportMagazines {
			class _xx_30Rnd_mas_556x45_Stanag {
				count = 750;
				magazine = "30Rnd_mas_556x45_Stanag";
			};
			class _xx_30Rnd_mas_556x45_T_Stanag {
				count = 750;
				magazine = "30Rnd_mas_556x45_T_Stanag";
			};
			class _xx_20Rnd_mas_762x51_Stanag {
				count = 750;
				magazine = "20Rnd_mas_762x51_Stanag";
			};
			class _xx_20Rnd_mas_762x51_T_Stanag {
				count = 750;
				magazine = "20Rnd_mas_762x51_T_Stanag";
			};
			class _xx_20Rnd_762x51_Mag {
				count = 750;
				magazine = "20Rnd_762x51_Mag";
			};
			class _xx_30Rnd_mas_9x21_Stanag {
				count = 750;
				magazine = "30Rnd_mas_9x21_Stanag";
			};
			class _xx_30Rnd_mas_9x21d_Stanag {
				count = 750;
				magazine = "30Rnd_mas_9x21d_Stanag";
			};
			class _xx_200Rnd_mas_556x45_Stanag {
				count = 750;
				magazine = "200Rnd_mas_556x45_Stanag";
			};
			class _xx_200Rnd_mas_556x45_T_Stanag {
				count = 750;
				magazine = "200Rnd_mas_556x45_T_Stanag";
			};
			class _xx_100Rnd_mas_762x51_Stanag {
				count = 750;
				magazine = "100Rnd_mas_762x51_Stanag";
			};
			class _xx_100Rnd_mas_762x51_T_Stanag {
				count = 750;
				magazine = "100Rnd_mas_762x51_T_Stanag";
			};
			class _xx_150Rnd_762x51_Box {
				count = 750;
				magazine = "150Rnd_762x51_Box";
			};
			class _xx_150Rnd_762x51_Box_Tracer {
				count = 750;
				magazine = "150Rnd_762x51_Box_Tracer";
			};
			class _xx_5Rnd_mas_127x99_Stanag {
				count = 750;
				magazine = "5Rnd_mas_127x99_Stanag";
			};
			class _xx_5Rnd_mas_127x99_T_Stanag {
				count = 750;
				magazine = "5Rnd_mas_127x99_T_Stanag";
			};
			class _xx_NLAW_F {
				count = 50;
				magazine = "NLAW_F";
			};
			class _xx_RPG32_F {
				count = 50;
				magazine = "RPG32_F";
			};
			class _xx_RPG32_HE_F {
				count = 50;
				magazine = "RPG32_HE_F";
			};
			class _xx_SMAW_HEAA {
				count = 50;
				magazine = "SMAW_HEAA";
			};
			class _xx_SMAW_HEDP {
				count = 50;
				magazine = "SMAW_HEDP";
			};
			class _xx_SmokeShell {
				count = 50;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 50;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellRed {
				count = 50;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeShellYellow {
				count = 50;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellBlue {
				count = 50;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellPurple {
				count = 50;
				magazine = "SmokeShellPurple";
			};
			class _xx_HandGrenade {
				count = 100;
				magazine = "HandGrenade";
			};
			class _xx_MiniGrenade {
				count = 100;
				magazine = "MiniGrenade";
			};
			class _xx_REV1_flash {
				count = 100;
				magazine = "REV1_flash";
			};
			class _xx_Chemlight_blue {
				count = 50;
				magazine = "Chemlight_blue";
			};
			class _xx_Chemlight_red {
				count = 50;
				magazine = "Chemlight_red";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
			class _xx_Chemlight_yellow {
				count = 50;
				magazine = "Chemlight_yellow";
			};
			class _xx_RH_15Rnd_45cal_fnp {
				count = 250;
				magazine = "RH_15Rnd_45cal_fnp";
			};
			class _xx_1Rnd_HE_Grenade_shell {
				count = 50;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 50;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell {
				count = 50;
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
			};
			class _xx_6Rnd_Smoke_M32 {
				count = 15;
				magazine = "6Rnd_Smoke_M32";
			};
			class _xx_6Rnd_HE_M32 {
				count = 30;
				magazine = "6Rnd_HE_M32";
			};
			class _xx_ATMine_Range_Mag {
				count = 50;
				magazine = "ATMine_Range_Mag";
			};
			class _xx_APERSMine_Range_Mag {
				count = 50;
				magazine = "APERSMine_Range_Mag";
			};
			class _xx_APERSBoundingMine_Range_Mag {
				count = 50;
				magazine = "APERSBoundingMine_Range_Mag";
			};
			class _xx_SLAMDirectionalMine_Wire_Mag {
				count = 50;
				magazine = "SLAMDirectionalMine_Wire_Mag";
			};
			class _xx_APERSTripMine_Wire_Mag {
				count = 50;
				magazine = "APERSTripMine_Wire_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				count = 50;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag {
				count = 50;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_SatchelCharge_Remote_Mag {
				count = 50;
				magazine = "SatchelCharge_Remote_Mag";
			};
		};
		
// WEAPONS
		class TransportWeapons {
			class _xx_arifle_mas_hk416_ {
				count = 25;
				weapon = "arifle_mas_hk416";
			};
			class _xx_arifle_mas_hk416_gl_ {
				count = 25;
				weapon = "arifle_mas_hk416_gl";
			};
			class _xx_arifle_mas_hk416_m203_ {
				count = 25;
				weapon = "arifle_mas_hk416_m203";
			};
			class _xx_arifle_mas_hk416c_ {
				count = 25;
				weapon = "arifle_mas_hk416c";
			};
			class _xx_arifle_mas_hk416_m203c {
				count = 25;
				weapon = "arifle_mas_hk416_m203c";
			};
			class _xx_srifle_mas_hk417 {
				count = 25;
				weapon = "srifle_mas_hk417";
			};
			class _xx_arifle_mas_hk417c {
				count = 25;
				weapon = "arifle_mas_hk417c";
			};
			class _xx_arifle_mas_hk417_m203c {
				count = 25;
				weapon = "arifle_mas_hk417_m203c";
			};
			class _xx_arifle_mas_mp5 {
				count = 25;
				weapon = "arifle_mas_mp5";
			};
//			class _xx_arifle_mas_mp5_sd {
//				count = 25;
//				weapon = "arifle_mas_mp5_sd";
//			};
			class _xx_arifle_mas_mp5sd_ds {
				count = 25;
				weapon = "arifle_mas_mp5sd_ds";
			};
			class _xx_LMG_mas_M249_F {
				count = 25;
				weapon = "LMG_mas_M249_F";
			};
			class _xx_LMG_mas_M249a_F {
				count = 25;
				weapon = "LMG_mas_M249a_F";
			};
			class _xx_LMG_mas_Mk48_F {
				count = 25;
				weapon = "LMG_mas_Mk48_F";
			};
			class _xx_LMG_mas_M240_F {
				count = 25;
				weapon = "LMG_mas_M240_F";
			};
			class _xx_srifle_mas_m107 {
				count = 25;
				weapon = "srifle_mas_m107";
			};
			class _xx_srifle_mas_sr25 {
				count = 25;
				weapon = "srifle_mas_sr25";
			};
			class _xx_RH_fnp45 {
				count = 25;
				weapon = "RH_fnp45";
			};
			class _xx_launch_NLAW_F {
				count = 25;
				weapon = "launch_NLAW_F";
			};
			class _xx_launch_RPG32_F {
				count = 25;
				weapon = "launch_RPG32_F";
			};
			class _xx_SMAW_Launcher {
				count = 5;
				weapon = "SMAW_Launcher";
			};
			class _xx_M32 {
				count = 5;
				weapon = "M32";
			};
		};
	};
	
	
// Dont need this};