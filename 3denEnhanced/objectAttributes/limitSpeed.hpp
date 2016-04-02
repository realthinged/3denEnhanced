class LimitSpeed: SetCaptive
{
	displayName = $STR_limitSpeed_displayName;
	tooltip = $STR_limitSpeed_tooltip;
	property = "Enh_limitSpeed";
	control = "EditShort";
	expression = "_this limitSpeed _value";
	condition = "objectVehicle";
	typeName = "NUMBER";
	defaultValue = "-1";
};