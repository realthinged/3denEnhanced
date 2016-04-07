class AmbientAnimation
{
	displayName = $STR_ambientAnimations_headline;
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = $STR_advancedFog_activate_displayName;
			tooltip = $STR_ambAnim_activate_tooltip;
			property = "Enh_animActivate";
			control = "CheckboxState";
			expression =
			"\
				if(_value) then\
				{\
					[_this] spawn\
					{\
						waitUntil {time > 0.2};\
						[_this select 0,(_this select 0) getVariable 'Enh_animType',(_this select 0) getVariable 'Enh_animEquipment'] remoteExec ['BIS_fnc_ambientAnim',0,true];\
					};\
				}\
				else\
				{\
					_this call BIS_fnc_ambientAnim__terminate;\
				};\
			";
			condition = "objectControllable";
			defaultValue = "false";
		};
		class Type
		{
			displayName = $STR_ambAnim_animation_displayName;
			tooltip = "";
			property = "Enh_animType";
			control = "AmbAnimTypeCombo";
			expression = "_this setVariable ['Enh_animType',_value];";
			condition = "objectControllable";
			defaultValue = "STAND";
			typeName = "STRING";
		};
		class Equipment
		{
			displayName = $STR_ambAnim_equipment_displayName
			tooltip = "";
			property = "Enh_animEquipment";
			control = "AmbAnimEquipmentCombo";
			expression = "_this setVariable ['Enh_animEquipment',_value];";
			condition = "objectControllable";
			defaultValue = "ASIS";
			typeName = "STRING";
		};
	};
};
