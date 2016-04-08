/*
	Author: Revo

	Description:
	Copies the class name of the selected entity to the clipboard.

	Parameter(s):
	-
	Returns:
	true
*/

private ["_object", "_className","_i"];

_object = (get3DENSelected "object" + get3DENSelected "logic") select 0;

copyToClipboard (typeOf _object);

["LogClassName"] call BIS_fnc_3DENNotification;

true;
