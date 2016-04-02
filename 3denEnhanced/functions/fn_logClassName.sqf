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

_object = get3DENSelected "";

for "_i" from 0 to ((count _object) - 1) do
{
	if (!(((get3DENSelected "") select _i) isEqualTo [])) exitWith {_object = (((get3DENSelected "") select _i) select 0)};
};

copyToClipboard (typeOf _object);

["LogClassName"] call BIS_fnc_3DENNotification;

true;