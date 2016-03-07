/*
	Author: Revo

	Description:
	Copies the class name of the selected entity to the clipboard.

	Parameter(s):
	-
	Returns:
	true
*/

private ["_object", "_className"];

_object = ((get3DENSelected "") select 0) param [0,objNull,[objNull]];
_className = typeOf _object;

copyToClipboard _className;
["LogClassName"] call bis_fnc_3DENNotification;

true;