/*
	Author: Revo

	Description:
	Sets random direction for selected 3den entities (objects,markers,triggers,Logics).

	Parameter(s):
	-
	Returns:
	true
*/

private ["_selectedObjects", "_selectedMarkers", "_selectedTriggers", "_selectedLogics", "_selectedEntities"];

_selectedObjects  = get3denSelected "object";
_selectedMarkers  = get3denSelected "Marker";
_selectedTriggers = get3denSelected "Trigger";
_selectedLogics   = get3denSelected "Logic";

_selectedEntities = _selectedObjects + _selectedMarkers + _selectedTriggers + _selectedLogics;

collect3DENHistory 
{
	{
		_x set3DENAttribute ["rotation", [0,0,random 360]];
	} forEach _selectedEntities;
};

true;