class SetCaptive
{
	displayName = $STR_setCaptive_displayName;
	tooltip = $STR_setCaptive_tooltip;
	property = "Enh_setCaptive";
	control = "Checkbox";
	expression = "_this setCaptive _value;";
	condition = "objectControllable";
	defaultValue = "false";
};