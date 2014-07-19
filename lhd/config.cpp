class CfgPatches
{
	class CAWater2_LHD
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.10;
		requiredAddons[]={};
	};
};
class CfgVehicles
{

	class StaticShip;
	class Land_LHD_1: StaticShip
	{
		model=\lhd\lhd_1;
		displayName=$STR_DN_LHD;
		destrType=0;//DestructNo;
		featureSize = 100;
		class MarkerLights
		{
			class WhiteStill
			{
				name="bily pozicni";
				color[]={0.0388,0.0388,0.0388,1.0};
				ambient[]={0.03,0.023,0.0056,1.0};
				brightness=0.01;
				blinking=false;
			};
			class BlueStill
			{
				name="modry pozicni";
				color[]={0.012,0.012,0.12,1.0};
				ambient[]={0.03,0.023,0.0056,1.0};
				brightness=0.01;
				blinking=false;
			};
			class YellowStill
			{
				name="zluty pozicni";
				color[]={0.03,0.027,0.00672,1.0};
				ambient[]={0.03,0.023,0.0056,1.0};
				brightness=0.01;
				blinking=false;
			};
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.12,0.006,0.006,1.0};
				ambient[]={0.1,0.01,0.01,1.0};
				brightness=0.01;
				blinking=false;
			};
		};
	};

	class Land_LHD_2: Land_LHD_1
	{
		model=\lhd\lhd_2;
		displayName=$STR_DN_LHD;
	};

	class Land_LHD_3: Land_LHD_1
	{
		model=\lhd\lhd_3;
		displayName=$STR_DN_LHD;
		ladders[]={{"start1","end1"}};
		class AnimationSources
		{
				class dveremale {animPeriod=1; initPhase=1;};
				class dveremale1 {animPeriod=1; initPhase=1;};

		};

		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault=$STR_DN_OUT_O_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_O_DOOR;
				position=osa_dveremale;
				radius=2;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale"" < 0.5";
				statement="this animate [""dveremale"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault=$STR_DN_OUT_C_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_C_DOOR;
				position=osa_dveremale;
				radius=2;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale"" >= 0.5";
				statement="this animate [""dveremale"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault=$STR_DN_OUT_O_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_O_DOOR;
				position=osa_dveremale1;
				radius=2;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale1"" < 0.5";
				statement="this animate [""dveremale1"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault=$STR_DN_OUT_C_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_C_DOOR;
				position=osa_dveremale1;
				radius=2;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale1"" >= 0.5";
				statement="this animate [""dveremale1"", 0]";
			};
		};
		actionBegin1=OpenDoors1;
		actionEnd1=OpenDoors1;
		actionBegin2=OpenDoors2;
		actionEnd2=OpenDoors2;
	};

	class Land_LHD_4: Land_LHD_1
	{
		model=\lhd\lhd_4;
		displayName=$STR_DN_LHD;

		class AnimationSources
		{
				class dveremale {animPeriod=1; initPhase=1;};
		};

		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault=$STR_DN_OUT_O_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_O_DOOR;
				position=osa_dveremale;
				radius=2;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale"" < 0.5";
				statement="this animate [""dveremale"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault=$STR_DN_OUT_C_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_C_DOOR;
				position=osa_dveremale;
				radius=2;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale"" >= 0.5";
				statement="this animate [""dveremale"", 0]";
			};
		};

		actionBegin1=OpenDoors1;
		actionEnd1=OpenDoors1;

	};

	class Land_LHD_5: Land_LHD_1
	{
		model=\lhd\lhd_5;
		displayName=$STR_DN_LHD;
	};

	class Land_LHD_6: Land_LHD_1
	{
		model=\lhd\lhd_6;
		displayName=$STR_DN_LHD;
		ladders[]={{"start1","end1"},{"start2","end2"}};
	};

	class Land_LHD_house_1: StaticShip
	{
		model=\lhd\lhd_house_1;
		featureSize = 100;
		displayName=$STR_DN_LHD;
		ladders[]={{"start1","end1"},{"start2","end2"}};
		destrType=0;//DestructNo;
		class MarkerLights
		{
			class BlueStill
			{
				name="modry pozicni";
				color[]={0.012,0.012,0.12,1.0};
				ambient[]={0.03,0.023,0.0056,1.0};
				brightness=0.01;
				blinking=false;
			};
			class YellowStill
			{
				name="zluty pozicni";
				color[]={0.03,0.027,0.00672,1.0};
				ambient[]={0.03,0.023,0.0056,1.0};
				brightness=0.01;
				blinking=false;
			};
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.12,0.006,0.006,1.0};
				ambient[]={0.1,0.01,0.01,1.0};
				brightness=0.01;
				blinking=false;
			};
		};
	};

	class Land_LHD_house_2: StaticShip
	{
		model=\lhd\lhd_house_2;
		displayName=$STR_DN_LHD;
		ladders[]={{"start1","end1"}};
		featureSize = 100;
		destrType=0;//DestructNo;
		class MarkerLights
		{
			class WhiteStill
			{
				name="bila sedma";
				color[]={0.003,0.003,0.003,0.0};
				ambient[]={0.03,0.023,0.0056,0.0};
				brightness=0.1;
				blinking=false;
			};
			class BlueStill
			{
				name="modry pozicni";
				color[]={0.012,0.012,0.12,1.0};
				ambient[]={0.03,0.023,0.0056,1.0};
				brightness=0.01;
				blinking=false;
			};
			class YellowStill
			{
				name="zluty pozicni";
				color[]={0.03,0.027,0.00672,1.0};
				ambient[]={0.03,0.023,0.0056,1.0};
				brightness=0.01;
				blinking=false;
			};
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.12,0.006,0.006,1.0};
				ambient[]={0.1,0.01,0.01,1.0};
				brightness=0.01;
				blinking=false;
			};
		};
		class AnimationSources
		{
				class dveremale {animPeriod=1; initPhase=1;};
				class dverevelkeL {animPeriod=1; initPhase=0;};
				class dverevelkeR {animPeriod=1; initPhase=0;};
				class Lights_1
				{
					source="user";
					animPeriod=0.001;
					initPhase = 0;
				};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault=$STR_DN_OUT_O_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_O_DOOR;
				position=osa_dveremale;
				radius=2;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale"" < 0.5";
				statement="this animate [""dveremale"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault=$STR_DN_OUT_C_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_C_DOOR;
				position=osa_dveremale;
				radius=2;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale"" >= 0.5";
				statement="this animate [""dveremale"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault=$STR_DN_OUT_O_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_O_DOOR;
				position=osa_dverevelkeL;
				radius=4;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_large"" and this animationPhase ""dverevelkeL"" < 0.5";
				statement="this animate [""dverevelkeL"", 1];this animate [""dverevelkeR"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault=$STR_DN_OUT_C_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_C_DOOR;
				position=osa_dverevelkeL;
				radius=4;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors_large"" and this animationPhase ""dverevelkeL"" >= 0.5";
				statement="this animate [""dverevelkeL"", 0];this animate [""dverevelkeR"", 0]";
			};
			/*class OpenDoors3
			{
				displayNameDefault=$STR_DN_OUT_O_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_O_DOOR;
				position=osa_dverevelkeR;
				radius=4;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors"" and this animationPhase ""dverevelkeR"" < 0.5";
				statement="this animate [""dverevelkeR"", 1]";
			};
			class CloseDoors3
			{
				displayNameDefault=$STR_DN_OUT_C_DOOR_DEFAULT;
				displayName=$STR_DN_OUT_C_DOOR;
				position=osa_dverevelkeR;
				radius=4;
				onlyForPlayer=false;
				condition="isnil""BIS_lockKheSanhDoors"" and this animationPhase ""dverevelkeR"" >= 0.5";
				statement="this animate [""dverevelkeR"", 0]";
			}; */
		};

		actionBegin1=OpenDoors1;
		actionEnd1=OpenDoors1;
		actionBegin2=OpenDoors2;
		actionEnd2=OpenDoors2;
		/*actionBegin3=OpenDoors3;
		actionEnd3=OpenDoors3; */

	};
class Land_LHD_elev_R: StaticShip
	{
		model=\lhd\lhd_elev_r;
		displayName=$STR_DN_LHD;
		destrType=0;//DestructNo;
	};
};