class EnableEnvironment
{
	displayName = "Enable Environment";
	collapsed = 1;
	class Attributes
	{	
		class Activate
		{
			displayName = "Enable Environment"; 
			tooltip = "Enable/disable environmental effects (ambient life + sound). Can have positive effect on performance if disabled"; 
			property = "Revo_enableEnvironment"; 
			control = "Checkbox"; 
			expression = "if (!(is3den)) then { enableEnvironment _value};";
			defaultValue = "true";
		};
	};
};

