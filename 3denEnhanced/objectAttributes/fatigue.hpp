class Fatigue
{
	displayName = $STR_fatigue_displayName;
	tooltip = "";
	property = "Enh_setFatigue";
	control = "Slider";
	expression = "_this setFatigue _value;";
	condition = "objectControllable";
	defaultValue = "0";
};
