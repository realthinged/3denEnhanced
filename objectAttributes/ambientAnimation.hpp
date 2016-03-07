class AmbientAnimation
{
	displayName = "Ambient Animation";
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = "Activate"; 
			tooltip = "Enables ambient animation for selected unit, unit will not react to danger"; 
			property = "Revo_animActivate"; 
			control = "CheckboxState"; 
			expression = 
			"\
				if(_value) then\
				{\
					[_this] spawn\
					{\
						waitUntil {time > 0.2};\
						[_this select 0,(_this select 0) getVariable 'Revo_animType',(_this select 0) getVariable 'Revo_animEquipment'] remoteExec ['BIS_fnc_ambientAnim',0,true];\
					};\
				}\
				else\
				{\
					[_this] remoteExec ['BIS_fnc_ambientAnim__terminate',0,true];\
				};\
			";
			condition = "objectControllable";
			defaultValue = "false";
		};
		class Type
		{
			displayName = "Animation"; 
			tooltip = ""; 
			property = "Revo_animType"; 
			control = "AmbAnimTypeCombo";
			expression = "_this setVariable ['Revo_animType',_value];";
			condition = "objectControllable";
			defaultValue = "STAND";
			typeName = "STRING";
		};
		class Equipment
		{
			displayName = "Equipment"; 
			tooltip = ""; 
			property = "Revo_animEquipment"; 
			control = "AmbAnimEquipmentCombo";
			expression = "_this setVariable ['Revo_animEquipment',_value];";
			condition = "objectControllable";
			defaultValue = "ASIS";
			typeName = "STRING";
		};
	};
};
