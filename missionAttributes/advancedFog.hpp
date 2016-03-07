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
			property = "Revo_fogActivate"; 
			control = "CheckboxState"; 
			expression = 
			"\
				[] spawn\
				{\
					waitUntil {time > 0.2};\
					[\
						(missionNamespace getVariable 'Revo_fogDelay'),\
						[\
							missionNamespace getVariable 'Revo_fogValue',\
							missionNamespace getVariable 'Revo_fogDecay',\
							missionNamespace getVariable 'Revo_fogBase'\
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
			property = "Revo_fogDelay"; 
			control = "Edit"; 
			expression = "missionNamespace setVariable ['Revo_fogDelay',_value]";
			defaultValue = "0";
			typeName = "NUMBER";
			validate = "number";
		};
		class FogValue: Delay
		{
			displayName = "Density";
			tooltip = "Value for fog at base level."; 
			property = "Revo_fogValue"; 
			control = "Slider";
			expression = "missionNamespace setVariable ['Revo_fogValue',_value]";
		};
		class FogDecay: Delay
		{
			displayName = "Decay"; 
			tooltip = "Decay of fog density with altitude."; 
			property = "Revo_fogDecay"; 
			control = "Slider"; 
			expression = "missionNamespace setVariable ['Revo_fogDecay',_value]";
		};
		class FogBase: Delay
		{
			displayName = "Base Altitude"; 
			tooltip = "Base altitude of fog [m]."; 
			property = "Revo_fogBase"; 
			control = "Edit"; 
			expression = "missionNamespace setVariable ['Revo_fogBase',_value]";
		};
	};
};

