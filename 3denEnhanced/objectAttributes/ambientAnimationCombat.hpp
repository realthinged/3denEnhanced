class AmbientAnimationCombat
{
	displayName = $STR_ambientAnimCombat_headline;
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = $STR_advancedFog_activate_displayName;
			tooltip = $STR_ambAnimCombat_activate_tooltip;
			expression =
			"\
				if(_value) then\
				{\
					[_this] spawn\
					{\
						waitUntil {time > 0.2};\
						[_this select 0,(_this select 0) getVariable 'Enh_animCombType',(_this select 0) getVariable 'Enh_animCombEquipment'] remoteExec ['BIS_fnc_ambientAnimCombat',0,true];\
					};\
				}\
				else\
				{\
					[_this] remoteExec ['BIS_fnc_ambientAnim__terminate',0,true];\
				};\
			";
			property = "Enh_ambAnimCombActivate";
			control = "CheckboxState";
			condition = "objectControllable";
			defaultValue = "false";
		};
		class Type
		{
			displayName = $STR_ambAnim_animation_displayName;
			tooltip = "";
			property = "Enh_animCombType";
			control = "AmbAnimCombTypeCombo";
			expression = "_this setVariable ['Enh_animCombType',_value]";
			condition = "objectControllable";
			defaultValue = "STAND";
			typeName = "STRING";
		};
		class Equipment
		{
			displayName = $STR_ambAnim_equipment_displayName;
			tooltip = "";
			property = "Enh_animCombEquipment";
			control = "AmbAnimEquipmentCombo";
			expression = "_this setVariable ['Enh_animCombEquipment',_value]";
			condition = "objectControllable";
			defaultValue = "ASIS";
			typeName = "STRING";
		};
	};
};
