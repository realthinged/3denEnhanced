class Date
{
	class Attributes
	{
		class TimeMultiplier
		{
			displayName = "Time Multiplier"; 
			tooltip = "Set how fast the time will pass. Values from 0.1 - 120 are valid"; 
			property = "3E_timeMultiplier"; 
			control = "EditShort"; //Replace with slider later
			expression = "setTimeMultiplier _value";
			defaultValue = "1";
			typeName = "NUMBER";
			validate = "number";
		};
	};
};
