class Arsenal: RemoveWeapons
{
	displayName = $STR_arsenal_displayName;
	tooltip = $STR_arsenal_tooltip;
	property = "Enh_arsenal";
	expression = "if (_value && !is3DEN) then {['AmmoboxInit',[_this,true]] spawn BIS_fnc_arsenal}"; //Shows an error message "class %all% not found in CfgWeapons
	condition = "objectControllable + objectVehicle + objectSimulated";
};
