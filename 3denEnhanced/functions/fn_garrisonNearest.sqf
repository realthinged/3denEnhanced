/*
	Author: Revo

	Description:
	Garrison one or multiple buildings in the area with units. Radius of the area can be selected in the preferences menu.

	Parameter(s):
	-
	Returns:
	true
*/

private ["_selectedObjects", "_buildings", "_availablePos"];

_selectedObjects = get3DENSelected "object";
_center = (uiNamespace getVariable ["bis_fnc_3DENEntityMenu_data",[]]) select 0;
_radius = "Preferences" get3DENMissionAttribute "Enh_garrisonRadius";
_step   = "Preferences" get3DENMissionAttribute "Enh_garrisonCoverage";
//Get nearest buildings
_buildings = nearestObjects [_center,["House"],parseNumber _radius];
//Get all buildingpositions from nearby buildings
_availablePos = [];
{
	for "_i" from 0 to (count (_x buildingPos -1)) step (parseNumber _step) do
	{
		_availablePos pushBack (_x buildingPos _i);
	};
	false;
} count _buildings;
//Sort positions to make sure placed buildings are also filled
_availablePos = [_availablePos,[],{_center distance _x},"ASCEND"] call BIS_fnc_sortBy;
//Place units inside building positions
collect3DENHistory
{
	{
		if (_forEachIndex > count _availablePos) exitWith
		{
			_msg = format ["%1 %2",(count _selectedObjects - count _availablePos),localize "STR_garrison_notification"];
			[_msg] call BIS_fnc_3DENNotification;
		};
		_pos = _availablePos select _forEachIndex;
		_x set3DENAttribute ["position",_pos];
		_x set3DENAttribute ["rotation", [0,0,random 360]];
	} forEach _selectedObjects;
};

true;
