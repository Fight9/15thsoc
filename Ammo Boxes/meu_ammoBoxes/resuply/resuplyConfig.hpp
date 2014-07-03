// REVISION 02JUL14

	// Alpha
	class Box_meu_suply : B_supplyCrate_F { // Box_meu_suply_Alpha
		displayname = "[15th] Resupply Box"; // "[15th] Resupply ALPHA";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		SLX_XEH_DISABLED = 0;

#include <\meu_ammoBoxes\resuply\transportGear\alpha.hpp>				
	};
	
	// Bravo
	class Box_meu_suply_Bravo : B_supplyCrate_F {
		displayname = "[15th] Resupply BRAVO";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		SLX_XEH_DISABLED = 0;
		scope = 0; // remove to enable box

#include <\meu_ammoBoxes\resuply\transportGear\alpha.hpp> // bravo.hpp		
	};	
	
