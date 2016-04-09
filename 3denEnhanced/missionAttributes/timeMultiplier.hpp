class Date
{
	class Attributes
	{
		class TimeMultiplier
		{
			displayName = $STR_timeMultiplier_displayName;
			tooltip = $STR_timeMultiplier_tooltip;
			property = "Enh_timeMultiplier";
			control = "SliderTimeMultiplier";
			expression = "if (!is3DEN) then {setTimeMultiplier _value}";
			defaultValue = "1";
			typeName = "NUMBER";
			validate = "number";
		};
	};
};
