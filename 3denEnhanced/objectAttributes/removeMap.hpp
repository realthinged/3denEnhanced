class RemoveMap: RemoveWeapons
{
	displayName = $STR_removeMap_displayName;
	tooltip = "";
	property = "Enh_removeMap";
	expression = "if(_value) then {_this unlinkItem 'ItemMap'}";
};