class EnableEnvironment
{
	displayName = $STR_enableEnvironment_displayName;
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = $STR_enableEnvironment_displayName;
			tooltip = $STR_enableEnvironment_tooltip;
			property = "Enh_enableEnvironment";
			control = "Checkbox";
			expression = "if (!is3DEN) then {enableEnvironment _value};";
			defaultValue = "true";
		};
	};
};
