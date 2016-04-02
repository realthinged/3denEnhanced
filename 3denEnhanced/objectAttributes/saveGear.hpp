class SaveGear: RemoveWeapons
{
	displayName = $STR_saveGear_displayName;
	tooltip = $STR_saveGear_tooltip;
	property = "Enh_saveGear";
	expression = 
	"\
		_this spawn\
		{\
			waitUntil {isPlayer _this};\
			{\
				[player,[missionNamespace,'inventory_var']] call BIS_fnc_saveInventory;\
				player addEventHandler ['respawn', {\
					[_this select 0,[missionNamespace,'inventory_var']] call BIS_fnc_loadInventory;\
				}];\
			} remoteExec ['BIS_fnc_spawn', owner _this,true];\
		};\
	";
};