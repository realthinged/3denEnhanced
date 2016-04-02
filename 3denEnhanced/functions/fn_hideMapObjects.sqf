/*
	Author: Revo

	Description:
	Creates a trigger in 3DEN which will hide all terrain objects in it's area. After placement, the trigger size can be adjusted.

	Parameter(s):
	-
	Returns:
	true
*/

private ["_triggerInit", "_objects", "_trigger"];

_pos = (uiNamespace getVariable ["bis_fnc_3DENEntityMenu_data",[]]) param [0,[position player],[[]]];
_pos set [2,0];

_triggerInit = "_objects = nearestTerrainObjects [thisTrigger,[],((triggerArea thisTrigger select 0) + (triggerArea thisTrigger select 1)) / 2 ];
	{
		{
			hideObject _x;
		} forEach _objects;
	} remoteExec ['call',0,true];";

collect3DENHistory {

	//_layer = -1 add3DENLayer "Hide Terrain Obj. Triggers"; //Not propely implemented

	_trigger = create3DENEntity ["Trigger","EmptyDetectorArea10x10",_pos];
	_trigger set3DENLayer _layer;
	set3DENAttributes [
		[[_trigger],"size3",[2,2,0]],
		[[_trigger],"IsRectangle",false],
		[[_trigger],"text","Hide Terrain Objects"],
		[[_trigger],"onActivation",_triggerInit],
		[[_trigger],"condition","true"]
	];
};

true;
