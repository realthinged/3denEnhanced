class ClearVehCargo: RemoveWeapons
{
	displayName = $STR_clearVehCargo_displayName;
	tooltip = $STR_clearVehCargo_tooltip;
	property = "Enh_clearVehCargo";
	expression = 
	"\
		if(_value) then\
		{\
			clearItemCargoGlobal _this;\
			clearMagazineCargoGlobal _this;\
			clearWeaponCargoGlobal _this;\
			clearBackpackCargoGlobal _this;\
		};\
	";
	condition = "objectVehicle";
};