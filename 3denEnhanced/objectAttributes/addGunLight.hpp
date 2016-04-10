class AddGunLight: RemoveWeapons
{
	displayName = $STR_addGunLight_displayName;
	tooltip = $STR_addGunLight_tooltip;
	property = "Enh_addGunLight";
	expression =
	"\
		if(_value) then\
		{\
			_this removePrimaryWeaponItem (primaryWeaponItems _this param [1,"",[""]]);\
			_this addPrimaryWeaponItem 'acc_flashlight';\
			_this enableGunLights 'forceOn';\
		};\
	";
};
