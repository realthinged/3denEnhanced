class Insignia
{
	displayName = $STR_insignia_displayName;
	tooltip = $STR_insignia_tooltip;
	property = "Enh_insignia";
	expression = "if !(_value == '') then {[_this,_value] remoteExec ['BIS_fnc_setUnitInsignia',0,true]}";
	control = "InsigniaCombo";
	condition = "objectControllable";
	defaultValue = "";
};
