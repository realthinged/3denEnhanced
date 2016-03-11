class Inventory
{
	displayName = "Inventory, Gear & Vehicle Cargo";
	collapsed = 1;
	class Attributes
	{		
		class RemoveWeapons
		{
			displayName = "Remove Weapons";
			tooltip = "Removes entities' weapons";
			property = "3E_removeWeapon";
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
		class ClearInventory: RemoveWeapons
		{
			displayName = "Clear Inventory";
			tooltip = "Removes all items from entities' inventory, including uniform, vest and backpack";
			property = "3E_clearInventory";
			expression = 
			"\
				if(_value) then\
				{\
					removeAllWeapons _this;\
					removeAllItems _this;\
					removeAllContainers _this;\
					removeHeadgear _this;\
					removeAllAssignedItems _this;\
					removeGoggles _this;\
					_this switchMove 'AmovPercMstpSnonWnonDnon';\
				};\
			";
		};
		class RemoveNVG: RemoveWeapons
		{
			displayName = "Remove NVG";
			tooltip = "";
			property = "3E_removeNVG";
			expression = 
			"\
				if(_value) then\
				{\
					{\
						_this unlinkItem _x;\
					} forEach ['NVGoggles','NVGoggles_OPFOR','NVGoggles_INDEP'];\
				};\
			";
		};
		class RemoveMap: RemoveWeapons
		{
			displayName = "Remove Map";
			tooltip = "";
			property = "3E_removeMap";
			expression = "if(_value) then {_this unlinkItem 'ItemMap'}";
		};
		class RemoveGPS: RemoveWeapons
		{
			displayName = "Remove GPS";
			tooltip = "";
			property = "3E_removeGPS";
			expression = "if(_value) then {_this unlinkItem 'ItemGPS'}";
		};
		class AddGunLight: RemoveWeapons
		{
			displayName = "Add Gun Light";
			tooltip = "Forces unit to have gun light turned on.";
			property = "3E_addGunLight";
			expression = 
			"\
				if(_value) then\
				{\
					_this removePrimaryWeaponItem (primaryWeaponItems _this select 1);\
					_this addPrimaryWeaponItem 'acc_flashlight';\
					_this enableGunLights 'forceOn';\
				};\
			";
		};
		class SaveGear: RemoveWeapons
		{
			displayName = "Save Loadout";
			tooltip = "If enabled, the loadout of the unit will be restored on respawn";
			property = "3E_saveGear";
			expression = 
			"\
				_this spawn\
				{\
					waitUntil { isPlayer _this };\
					{\
						[player,[missionNamespace,'inventory_var']] call BIS_fnc_saveInventory;\
						player addEventHandler ['respawn', {\
							[_this select 0,[missionNamespace,'inventory_var']] call BIS_fnc_loadInventory;\
						}];\
					} remoteExec [ 'BIS_fnc_spawn', owner _this,true ];\
				};\
			";
		};
		class Arsenal: RemoveWeapons
		{
			displayName = "Arsenal";
			tooltip = "If enabled, the object will have an option to open the Arsenal with all items";
			property = "3E_arsenal";
			expression = "if (_value && !(is3den)) then {['AmmoboxInit',[_this,true]] spawn BIS_fnc_arsenal}";
			condition = "objectControllable + objectVehicle + objectSimulated";
		};
		class ClearVehCargo: RemoveWeapons
		{
			displayName = "Clear Vehicle Cargo";
			tooltip = "Removes all items from vehicle's cargo";
			property = "3E_clearVehCargo";
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
	};
};