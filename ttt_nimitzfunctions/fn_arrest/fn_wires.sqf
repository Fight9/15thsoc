// animation handling from JDog

private ["_pointJet","_dWide","_dLong","_dHigh","_jet",
         "_pointWire1","_pointWire2","_pointWire3","_pointWire4",
         "_hookPosA","_hookPosB","_dist1","_dist2","_dist3","_dist4",
         "_cableA","_cableB","_cable","_tailhook", "_nimCar4", "_nimCar3"];

_nimCar3 = ["nimCar3"] call TTT_fnc_global;
_nimCar4 = ["nimCar4"] call TTT_fnc_global;

_jet = [_this, 0, ObjNull] call BIS_fnc_param;

_pointWire1 = _nimCar4 selectionPosition "wire1pos";
_pointWire2 = _nimCar4 selectionPosition "wire2pos";
_pointWire3 = _nimCar3 selectionPosition "wire3pos";
_pointWire4 = _nimCar3 selectionPosition "wire4pos";

_hookPosA = _nimCar4 worldToModel (_jet modelToWorld (_jet selectionPosition "tailhook"));
_hookPosB = _nimCar3 worldToModel (_jet modelToWorld (_jet selectionPosition "tailhook"));

_dist1 = _pointWire1 distance _hookPosA;
_dist2 = _pointWire2 distance _hookPosA;
_dist3 = _pointWire3 distance _hookPosB;
_dist4 = _pointWire4 distance _hookPosB;

_cableA = _dist1 min _dist2;
_cableB = _dist3 min _dist4;
_cable = _cableA min _cableB;

switch(_cable) do {
	case _dist1: {
		_nimcar4 say3d "trap";
		while{true} do{
			_pointJet = _nimCar4 worldToModel (_jet modelToWorld (_jet selectionPosition "tailhook"));
			_dWide = (_pointJet select 0) - (_pointWire1 select 0);
			_dLong = (_pointJet select 1) - (_pointWire1 select 1);
			_dHigh = ((_pointJet select 2) - (_pointWire1 select 2));

			_nimCar4 animate["ani_cable1_wide", _dWide];
			_nimCar4 animate["ani_cable1_long", _dLong];
			_nimCar4 animate["ani_cable1_high", _dHigh];
			sleep 0.04;
			
			_tailhook = _jet getVariable "NimitzTailhook";
			if (isNil "_tailhook") exitWith {
			  _nimCar4 animate["ani_cable1_wide", 0];
			  _nimCar4 animate["ani_cable1_long", 0];
			  _nimCar4 animate["ani_cable1_high", 0];
			};
		};
	};
	case _dist2: {
		_nimcar4 say3d "trap";
		while{true} do{
			_pointJet = _nimCar4 worldToModel (_jet modelToWorld (_jet selectionPosition "tailhook"));
			_dWide = (_pointJet select 0) - (_pointWire2 select 0);
			_dLong = (_pointJet select 1) - (_pointWire2 select 1);
			_dHigh = ((_pointJet select 2) - (_pointWire2 select 2));

			_nimCar4 animate["ani_cable2_wide", _dWide];
			_nimCar4 animate["ani_cable2_long", _dLong];
			_nimCar4 animate["ani_cable2_high", _dHigh];
			sleep 0.04;
			
			_tailhook = _jet getVariable "NimitzTailhook";
			if (isNil "_tailhook") exitWith {
			  _nimCar4 animate["ani_cable2_wide", 0];
			  _nimCar4 animate["ani_cable2_long", 0];
			  _nimCar4 animate["ani_cable2_high", 0];
			};
		};
	};
	case _dist3: {
		_nimcar3 say3d "trap";
		while{true} do{
			_pointJet = _nimCar3 worldToModel (_jet modelToWorld (_jet selectionPosition "tailhook"));
			_dWide = (_pointJet select 0) - (_pointWire3 select 0);
			_dLong = (_pointJet select 1) - (_pointWire3 select 1);
			_dHigh = ((_pointJet select 2) - (_pointWire3 select 2));

			_nimCar3 animate["ani_cable3_wide", _dWide];
			_nimCar3 animate["ani_cable3_long", _dLong];
			_nimCar3 animate["ani_cable3_high", _dHigh];
			sleep 0.04;
			
			_tailhook = _jet getVariable "NimitzTailhook";
			if (isNil "_tailhook") exitWith {
			  _nimCar3 animate["ani_cable3_wide", 0];
			  _nimCar3 animate["ani_cable3_long", 0];
			  _nimCar3 animate["ani_cable3_high", 0];
			};
		};
	};
	case _dist4: {
		_nimcar3 say3d "trap";
		while{true} do{
			_pointJet = _nimCar3 worldToModel (_jet modelToWorld (_jet selectionPosition "tailhook"));
			_dWide = (_pointJet select 0) - (_pointWire4 select 0);
			_dLong = (_pointJet select 1) - (_pointWire4 select 1);
			_dHigh = ((_pointJet select 2) - (_pointWire4 select 2));

			_nimCar3 animate["ani_cable4_wide", _dWide];
			_nimCar3 animate["ani_cable4_long", _dLong];
			_nimCar3 animate["ani_cable4_high", _dHigh];
			sleep 0.04;
			
			_tailhook = _jet getVariable "NimitzTailhook";
			if (isNil "_tailhook") exitWith {};
			
			_nimCar3 animate["ani_cable4_wide", 0];
			_nimCar3 animate["ani_cable4_long", 0];
			_nimCar3 animate["ani_cable4_high", 0];
		};
	};
};
