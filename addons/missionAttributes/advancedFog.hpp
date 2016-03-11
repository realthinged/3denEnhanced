class AdvancedFogSettings
{
	displayName = "Advanced Fog Settings";
	collapsed = 1;
	class Attributes
	{	
		class Activate
		{
			displayName = "Activate"; 
			tooltip = ""; 
			property = "3E_fogActivate"; 
			control = "CheckboxState"; 
			expression = 
			"\
				[] spawn\
				{\
					waitUntil {time > 0.2};\
					[\
						(missionNamespace getVariable '3E_fogDelay'),\
						[\
							missionNamespace getVariable '3E_fogValue',\
							missionNamespace getVariable '3E_fogDecay',\
							missionNamespace getVariable '3E_fogBase'\
						]\
					]remoteExec ['setFog',2];\
				};\
			";
			defaultValue = "false";
		};
		class Delay
		{
			displayName = "Delay"; 
			tooltip = "Define how long it will take for the fog to appear. [sec]"; 
			property = "3E_fogDelay"; 
			control = "Edit"; 
			expression = "missionNamespace setVariable ['3E_fogDelay',_value]";
			defaultValue = "0";
			typeName = "NUMBER";
			validate = "number";
		};
		class FogValue: Delay
		{
			displayName = "Density";
			tooltip = "Value for fog at base level."; 
			property = "3E_fogValue"; 
			control = "Slider";
			expression = "missionNamespace setVariable ['3E_fogValue',_value]";
		};
		class FogDecay: Delay
		{
			displayName = "Decay"; 
			tooltip = "Decay of fog density with altitude."; 
			property = "3E_fogDecay"; 
			control = "Slider"; 
			expression = "missionNamespace setVariable ['3E_fogDecay',_value]";
		};
		class FogBase: Delay
		{
			displayName = "Base Altitude"; 
			tooltip = "Base altitude of fog [m]."; 
			property = "3E_fogBase"; 
			control = "Edit"; 
			expression = "missionNamespace setVariable ['3E_fogBase',_value]";
		};
	};
};

