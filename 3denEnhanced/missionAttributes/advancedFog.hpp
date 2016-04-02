class AdvancedFogSettings
{
	displayName = $STR_advancedFog_headline;
	collapsed = 1;
	class Attributes
	{	
		class Activate
		{
			displayName = $STR_advancedFog_activate_displayName; 
			tooltip = ""; 
			property = "Enh_fogActivate"; 
			control = "CheckboxState"; 
			expression = 
			"\
				if(_value) then\
				{\
					[] spawn\
					{\
						waitUntil {time > 0.2};\
						(missionNamespace getVariable 'Enh_fogDelay') setFog\
						[\
							missionNamespace getVariable 'Enh_fogValue',\
							missionNamespace getVariable 'Enh_fogDecay',\
							missionNamespace getVariable 'Enh_fogBase'\
						]\
					};\
				};\
			";
			defaultValue = "false";
		};
		class Delay
		{
			displayName = $STR_advancedFog_Delay_displayName; 
			tooltip = $STR_advancedFog_Delay_tooltip; 
			property = "Enh_fogDelay"; 
			control = "Edit"; 
			expression = "missionNamespace setVariable ['Enh_fogDelay',_value]";
			defaultValue = "0";
			typeName = "NUMBER";
			validate = "number";
		};
		class FogValue: Delay
		{
			displayName = $STR_advancedFog_FogValue_displayName;
			tooltip = $STR_advancedFog_FogValue_tooltip; 
			property = "Enh_fogValue"; 
			control = "Slider";
			expression = "missionNamespace setVariable ['Enh_fogValue',_value]";
		};
		class FogDecay: Delay
		{
			displayName = $STR_advancedFog_FogDecay_displayName; 
			tooltip = $STR_advancedFog_FogDecay_tooltip; 
			property = "Enh_fogDecay"; 
			control = "Slider"; 
			expression = "missionNamespace setVariable ['Enh_fogDecay',_value]";
		};
		class FogBase: Delay
		{
			displayName = $STR_advancedFog_FogBase_displayName; 
			tooltip = $STR_advancedFog_FogBase_tooltip; 
			property = "Enh_fogBase"; 
			control = "Edit"; 
			expression = "missionNamespace setVariable ['Enh_fogBase',_value]";
		};
	};
};

