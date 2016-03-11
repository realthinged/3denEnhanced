class AmbientAnimationCombat
{
	displayName = "Ambient Combat Animation";
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = "Activate"; 
			tooltip = "Enables ambient combat animation for selected unit, unit will react to danger";
			expression = 
			"\
				if(_value) then\
				{\
					[_this] spawn\
					{\
						waitUntil {time > 0.2};\
						[_this select 0,(_this select 0) getVariable '3E_animCombType',(_this select 0) getVariable '3E_animCombEquipment'] remoteExec ['BIS_fnc_ambientAnimCombat',0,true];\
					};\
				}\
				else\
				{\
					[_this] remoteExec ['BIS_fnc_ambientAnim__terminate',0,true];\
				};\
			";
			property = "3E_ambAnimCombActivate"; 
			control = "CheckboxState"; 
			condition = "objectControllable";
			defaultValue = "false";
		};
		class Type
		{
			displayName = "Animation"; 
			tooltip = ""; 
			property = "3E_animCombType"; 
			control = "AmbAnimCombTypeCombo";
			expression = "_this setVariable ['3E_animCombType',_value]";
			condition = "objectControllable";
			defaultValue = "STAND";
			typeName = "STRING";
		};
		class Equipment
		{
			displayName = "Equipment"; 
			tooltip = ""; 
			property = "3E_animCombEquipment"; 
			control = "AmbAnimEquipmentCombo";
			expression = "_this setVariable ['3E_animCombEquipment',_value]";
			condition = "objectControllable";
			defaultValue = "ASIS";
			typeName = "STRING";
		};
	};
};