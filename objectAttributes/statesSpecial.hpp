class StateSpecial
{
	class Attributes
	{
		class AllowSprint
		{
			displayName = "Allow Sprinting";
			control = "Checkbox";
			tooltip = "Force player to run if unchecked.";
			property = "Revo_allowSprint";
			expression = "_this allowSprint _value;";
			condition = "objectControllable";
			defaultValue = "true";
		};
		class SetCaptive
		{
			displayName = "Set Captive";
			tooltip = "Change unit's status to captive, unit will be on civilian side";
			property = "Revo_setCaptive";
			control = "Checkbox";
			expression = "_this setCaptive _value;";
			condition = "objectControllable";
			defaultValue = "false";
		};
		class EnableHeadlights: SetCaptive
		{
			displayName = "Enable Headlights";
			tooltip = "Will enable headlights of selected EMPTY vehicle";
			property = "Revo_enableHeadlights";
			expression = 
			"\
				if (!(is3den)) then\
				{\
					_this setPilotLight _value;\
				};\
			";
			condition = "objectVehicle";
		};
		class ForceWalk: SetCaptive
		{
			displayName = "Force Walk";
			tooltip = "Forces unit to walk even if run or sprint is selected";
			property = "Revo_forceWalk";
			expression = "_this forceWalk _value;";
		};
		class AllowCrewInImmobile: SetCaptive
		{
			displayName = "Crew in Immobile";
			tooltip = "If enabled, crew will stay in vehicle even if tracks/wheels are damaged";
			property = "Revo_allowCrewInImmobile";
			expression = 
			"\
				_this allowCrewInImmobile _value;\
				{\
					_x disableAI 'FSM';\
					_x setBehaviour 'CARELESS';\
				} forEach crew _this;\
			";
			condition = "objectVehicle";
		};

		class LimitSpeed: SetCaptive
		{
			displayName = "Speed Limit";
			tooltip = "Limit speed of given vehicle or person to given value (in km/h). Does only work for AI controlled vehicles.";
			property = "Revo_limitSpeed";
			control = "edit";
			expression = 
			"\
				_this limitSpeed _value;\
			";
			condition = "objectVehicle";
			typeName = "NUMBER";
			defaultValue = "-1";
		};
	};
};