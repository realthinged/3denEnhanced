class AllowCrewInImmobile: SetCaptive
{
	displayName = $STR_allowCrewImmobile_displayName;
	tooltip = $STR_allowCrewImmobile_tooltip;
	property = "Enh_allowCrewInImmobile";
	expression =
	"\
		if (_value) then
		{\
			_this allowCrewInImmobile _value;\
			{\
				_x disableAI 'FSM';\
				_x setBehaviour 'CARELESS';\
			} forEach crew _this;\
		}\
	";

	condition = "objectVehicle";
};
