class Fatigue
{
	displayName = $STR_fatigue_displayName;
	tooltip = "Will increase the fatigue for the unit at mission start";
	property = "Enh_setFatigue";
	control = "Slider";
	expression = "_this setFatigue _value;";
	condition = "objectControllable";
	defaultValue = "0";
};