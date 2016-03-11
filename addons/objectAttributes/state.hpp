class State
{
	class Attributes
	{
		class Stance
		{
			displayName = "Stance";
			tooltip = "";
			property = "3E_unitPos";
			control = "Stance";
			expression = "_this setUnitPos _value";
			condition = "objectControllable";
		};	
		class Fatigue
		{
			displayName = "Fatigue";
			tooltip = "Will increase the fatigue for the unit at mission start";
			property = "3E_setFatigue";
			control = "Slider";
			expression = "_this setFatigue _value;";
			condition = "objectControllable";
			defaultValue = "0";
		};
		class Suppression: Fatigue
		{
			displayName = "Suppression";
			tooltip = "Sets the soldier's suppression";
			property = "3E_setSuppression";
			expression = "_this setSuppression _value;";
		};
	};
};