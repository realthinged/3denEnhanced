class RemoveGPS: RemoveWeapons
{
	displayName = $STR_removeGPS_displayName;
	tooltip = "";
	property = "Enh_removeGPS";
	expression = "if(_value) then {_this unlinkItem 'ItemGPS'}";
};