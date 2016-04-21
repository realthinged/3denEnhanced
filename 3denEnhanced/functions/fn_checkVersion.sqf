/*
	Author: Revo

	Description:
	Gets current 3den Enhanced version and compares it with game version.
   In case game version is not equal to required version and dev branch is enabled a warning will be shown.

	Parameter(s):
	-
	Returns:
	true
*/
private ["_requiredVersion", "_currentVersion", "_branch"];

_requiredVersion = getNumber (configfile >> "CfgPatches" >> "3denEnhanced">> "requiredVersion");
_currentVersion = (productVersion select 2) / 100;
_branch = (productVersion select 4);

if (_currentVersion >= _requiredVersion && _branch == "Development") then
{
   ["checkVersionWarning",nil,10] call BIS_fnc_3DENNotification;
};
true;
