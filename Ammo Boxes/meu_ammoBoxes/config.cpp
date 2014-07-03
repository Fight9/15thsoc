// 15th MEU(SOC) Ammo Boxes //
// 
// By - 15th Mod Team
// 
// 


#define PREFIX meu_ammoBoxes
#define COMPONENT main
#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0
#define BUILD 0
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define REQUIRED_VERSION 1.0
#include "\x\cba\addons\main\script_macros_common.hpp"


class CfgPatches
{
	class PREFIX  
		{
			units[] = {
				"Box_meu_ace",
				"Box_meu_arty",
				"Box_meu_bas",
				"Box_meu_gator",
				"Box_meu_hq",
				"Box_meu_inf",
				"Box_meu_spectre",
				"Box_meu_suply",
				"Box_meu_titan",
				"Box_meu_wep",
				"Box_meu_vehicle",
				"Box_meu_lar"
			};
			weapons[] = {};
			requiredVersion = REQUIRED_VERSION;
			requiredAddons[] = {"CBA_MAIN"};
			versionDesc = "15th AmmoBoxes";
			versionAct = "";
			VERSION_CONFIG;
			author[] = {"15th Mod Team"};
			authorUrl = "";
		};
};

class CfgVehicles {
	#include <\meu_ammoBoxes\recon\reconConfig.hpp>
	#include <\meu_ammoBoxes\inf\infConfig.hpp>
	#include <\meu_ammoBoxes\wep\wepConfig.hpp>
	#include <\meu_ammoBoxes\bas\basConfig.hpp>
	#include <\meu_ammoBoxes\ace\aceConfig.hpp>
	#include <\meu_ammoBoxes\titan\titanConfig.hpp>
	#include <\meu_ammoBoxes\gator\gatorConfig.hpp>
	#include <\meu_ammoBoxes\arty\artyConfig.hpp>
	#include <\meu_ammoBoxes\hq\hqConfig.hpp>
	#include <\meu_ammoBoxes\resuply\resuplyConfig.hpp>
	#include <\meu_ammoBoxes\vehicle\vehicleConfig.hpp>
	#include <\meu_ammoBoxes\lar\larConfig.hpp>
};

class CfgNotifications {
	#include <\meu_ammoBoxes\vehicle\vehicleCfgNote.hpp>
};

class Extended_Init_EventHandlers {
 	#include <\meu_ammoBoxes\recon\reconEH.hpp>
	#include <\meu_ammoBoxes\inf\infEH.hpp>
	#include <\meu_ammoBoxes\wep\wepEH.hpp>
	#include <\meu_ammoBoxes\bas\basEH.hpp>   
	#include <\meu_ammoBoxes\ace\aceEH.hpp>
	#include <\meu_ammoBoxes\titan\titanEH.hpp>
	#include <\meu_ammoBoxes\gator\gatorEH.hpp>
	#include <\meu_ammoBoxes\arty\artyEH.hpp>
	#include <\meu_ammoBoxes\hq\hqEH.hpp>
	#include <\meu_ammoBoxes\resuply\resuplyEH.hpp>
	#include <\meu_ammoBoxes\lar\larEH.hpp>
}; 

class CfgFunctions {
	class meu {
		#include <\meu_ammoBoxes\vehicle\vehicleCfgFnc.hpp>
	};
};


