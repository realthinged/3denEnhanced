class RandomPatrol
{
	displayName = $STR_randomPatrol_headline;
	collapsed = 1;
	class Attributes
	{
		class Radius
		{
			displayName = $STR_randomPatrol_radius_displayName;
			tooltip = $STR_randomPatrol_radius_tooltip;
			property = "Enh_randomPatrol_radius";
			control = "Edit"
			expression =
			"\
				if (!is3DEN && (_value > 0)) then\
				{\
					[_this,_value] spawn\
					{\
						waitUntil {time > 0.2};\
						_unit = _this select 0;\
						_radius = _this select 1;\
						_behaviour =  _unit getVariable ['Enh_randomPatrol_behaviour','SAFE'];\
						_speed =  _unit getVariable ['Enh_randomPatrol_speed','LIMITED'];\
						_group = group _unit;\
						_center = getPosWorld _unit;\
						_water = 0;\
						for '_i' from 1 to 5 do\
						{\
							if (vehicle _unit isKindOf 'ship') then {_water = 2};\
							_wpPos = [_center,1,_radius,2,_water,20,0] call BIS_fnc_findSafePos;\
							_wp = _group addWaypoint [_wpPos,10];\
							if (_i == 1) then\
							{\
								_wp setWaypointType 'MOVE';\
								_wp setWaypointBehaviour toUpper _behaviour;\
								_wp setWaypointSpeed toUpper _speed;\
							};\
							if (_i == 5) then\
							{\
								_wp setWaypointType 'CYCLE';\
							};\
						};\
					};\
				};\
			";
			defaultValue = "-1";
			typeName = "NUMBER";
			condition = "objectControllable";
		};
		class Behaviour
		{
			displayName = $STR_randomPatrol_behaviour_displayName;
			tooltip = "";
			property = "Enh_taskPatrol_behaviour";
			control = "BehaviourGroup";
			expression = "_this setVariable ['Enh_randomPatrol_behaviour',_value];";
			condition = "objectControllable";
			typeName = "STRING";
			defaultValue = "safe";
		};
		class Speed
		{
			displayName = $STR_randomPatrol_speed_displayName;
			tooltip = "";
			property = "Enh_taskPatrol_speed";
			control = "SpeedModeGroup";
			expression = "_this setVariable ['Enh_randomPatrol_speed',_value];";
			condition = "objectControllable";
			typeName = "STRING";
			defaultValue = "limited";
		};
	};
};
