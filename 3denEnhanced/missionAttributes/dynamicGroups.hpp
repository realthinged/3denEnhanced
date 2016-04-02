class DynamicGroups
{
	displayName = "Dynamic Groups";
	collapsed = 1;
	class Attributes
	{
		class EnableDynamicGroups
		{
			displayName = $STR_advancedFog_activate_displayName;
			tooltip = $STR_dynamicGroups_tooltip;
			property = "Enh_dynamicGroups";
			control = "Checkbox";
			expression =
			"\
				if (!is3DEN && _value && isMultiplayer) then\
				{\
					if (isServer) then\
					{\
						['Initialize'] call BIS_fnc_dynamicGroups;\
					};\
					{\
						['InitializePlayer',[player]] call BIS_fnc_dynamicGroups;\
					} remoteExec ['BIS_fnc_spawn',-2,true];\
				};\
			";
			defaultValue = "false";
		};
	};
};
