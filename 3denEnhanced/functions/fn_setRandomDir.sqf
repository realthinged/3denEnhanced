/*
	Author: Revo, improved by dixon13

	Description:
	Sets random direction for selected 3den entities (objects,markers,triggers,Logics).

	Parameter(s):
	-
	Returns:
	true
*/

private _selectedObjects  = get3DENSelected "object";
private _selectedMarkers  = get3DENSelected "Marker";
private _selectedTriggers = get3DENSelected "Trigger";
private _selectedLogics   = get3DENSelected "Logic";

private _selectedEntities = _selectedObjects + _selectedMarkers + _selectedTriggers + _selectedLogics;

collect3DENHistory {
	{
		_x set3DENAttribute ["rotation", [0,0,random 360]];
		false
	} count _selectedEntities;
};

true
