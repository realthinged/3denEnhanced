class RemoveWeapons
{
	displayName = $STR_removeWeapons_displayName;
	tooltip = $STR_removeWeapons_tooltip;
	property = "Enh_removeWeapon";
	control = "Checkbox";
	expression = 
	"\
		if(_value) then\
		{\
			removeAllWeapons _this;\
			_this switchMove 'AmovPercMstpSnonWnonDnon'\
		};\
	";
	condition = "objectControllable";
	defaultValue = "false";
};