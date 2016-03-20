class StateSpecial
{
	class Attributes
	{
		class AllowSprint
		{
			displayName = "Allow Sprinting";
			control = "Checkbox";
			tooltip = "Force player to run if unchecked.";
			property = "3E_allowSprint";
			expression = "_this allowSprint _value;";
			condition = "objectControllable";
			defaultValue = "true";
		};
		class SetCaptive
		{
			displayName = "Set Captive";
			tooltip = "Change unit's status to captive, unit will be on civilian side";
			property = "3E_setCaptive";
			control = "Checkbox";
			expression = "_this setCaptive _value;";
			condition = "objectControllable";
			defaultValue = "false";
		};
		class MakeHostage: SetCaptive //Doesn't work at all yet
		{
			displayName = "Make Hostage";
			tooltip = "";
			property = "3E_makeHostage";
			expression = 
			"\
				[\
					[_this,\
						{\
							systemChat str (_this select 0);\
							(_this select 0) playMoveNow 'Acts_AidlPsitMstpSsurWnonDnon04';\
							(_this select 0) addAction ['Free Hostage',{(_this select 0) playMoveNow 'AmovPercMstpSnonWnonDnon'}];\
						}\
					]\
				] remoteExec ['BIS_fnc_spawn',0];\
			";
		};
		class EnableHeadlights: SetCaptive
		{
			displayName = "Enable Headlights";
			tooltip = "Will enable headlights of selected EMPTY vehicle";
			property = "3E_enableHeadlights";
			expression = 
			"\
				if (!(is3den)) then\
				{\
					_this setPilotLight _value;\
				};\
			";
			condition = "objectVehicle";
		};
		class AllowCrewInImmobile: SetCaptive
		{
			displayName = "Crew in Immobile";
			tooltip = "If enabled, crew will stay in vehicle even if tracks/wheels are damaged";
			property = "3E_allowCrewInImmobile";
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
		class EngineOn: SetCaptive
		{
			displayName = "Turn Engine On";
			tooltip = "If enabled, engine of the vehicle will be turned on";
			property = "3E_engine";
			control = "Checkbox";
			expression = "if (!(is3den) then {_this engineOn _value};";
			condition = "objectVehicle";
		};
		class LimitSpeed: SetCaptive
		{
			displayName = "Speed Limit";
			tooltip = "Limit speed of given vehicle or person to given value (in km/h). Does only work for AI controlled vehicles.";
			property = "3E_limitSpeed";
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