class RandomPatrol
{
	displayName = $STR_randomPatrol_headline;
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = $STR_advancedFog_activate_displayName;
			tooltip = "";
			property = "Enh_taskPatrol_activate";
			control = "CheckboxState";
			expression =
			"\
				if (!is3DEN && _value) then\
				{\
					_this spawn\
					{\
						waitUntil {time > 0.2};\
						_radius =  _this getVariable ['Enh_taskPatrol_radius',200];\
						_behaviour =  _this getVariable ['Enh_taskPatrol_behaviour','safe'];\
						_speed =  _this getVariable ['Enh_taskPatrol_speed','limited'];\
						_group = group _this;\
						_center = getPosWorld _this;\
						_water = 0;\
						for '_i' from 1 to 5 do\
						{\
							if (vehicle _this isKindOf 'ship') then {_water = 2};\
							_wpPos = [_center, 1,_radius,2,_water,20,0] call BIS_fnc_findSafePos;\
							_wp = _group addWaypoint [_wpPos,1];\
							if (_i == 1) then\
							{\
								_wp setWaypointType 'MOVE';\
								_wp setWaypointBehaviour _behaviour;\
								_wp setWaypointSpeed _speed;\
							};\
							if (_i == 5) then\
							{\
								_wp setWaypointType 'CYCLE';\
							};\
						};\
					};\
				};\
			";
			defaultValue = "false";
			condition = "objectControllable";
		};
		class Radius
		{
			displayName = $STR_randomPatrol_radius_displayName;
			tooltip = $STR_randomPatrol_radius_tooltip;
			property = "Enh_taskPatrol_radius";
			control = "Edit"
			expression = "_this setVariable ['Enh_taskPatrol_radius',_value];";
			defaultValue = "200";
			typeName = "NUMBER";
			condition = "objectControllable";
		};
		class Behaviour
		{
			displayName = $STR_randomPatrol_behaviour_displayName;
			tooltip = "";
			property = "Enh_taskPatrol_behaviour";
			control = "BehaviourGroup";
			expression = "_this setVariable ['Enh_taskPatrol_behaviour',_value];";
			condition = "objectControllable";
			defaultValue = "safe";
		};
		class Speed
		{
			displayName = $STR_randomPatrol_speed_displayName;
			tooltip = "";
			property = "Enh_taskPatrol_speed";
			control = "SpeedModeGroup";
			expression = "_this setVariable ['Enh_taskPatrol_speed',_value];";
			condition = "objectControllable";
			defaultValue = "limited";
		};
	};
};
