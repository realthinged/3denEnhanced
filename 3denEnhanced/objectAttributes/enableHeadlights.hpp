class EnableHeadlights: SetCaptive
{
	displayName = $STR_enableHeadlights_displayName;
	tooltip = $STR_enableHeadlights_tooltip;
	property = "Enh_enableHeadlights";
	expression = "_this setPilotLight _value";
	condition = "objectVehicle";
};
