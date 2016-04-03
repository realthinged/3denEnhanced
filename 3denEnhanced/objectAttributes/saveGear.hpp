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
				[player,[missionNamespace,'Enh_savedInventory']] call BIS_fnc_saveInventory;\
				player addEventHandler ['respawn', {\
					[_this select 0,[missionNamespace,'Enh_savedInventory']] call BIS_fnc_loadInventory;\
				}];\
			} remoteExec ['call',owner _this,true];\
		};\
	";
};
