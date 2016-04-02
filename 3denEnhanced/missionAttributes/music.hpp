class Music
{
	collapsed = 0;
	displayName = $STR_playMusic_headline;
	class attributes
	{
		class EnableMusic
		{
			displayName = $STR_enableMusic_displayName; 
			tooltip = $STR_enableMusic_tooltip; 
			property = "Enh_enableMusic"; 
			control = "CheckboxState";
			expression = "[_value] spawn Enh_fnc_playMusic";
			defaultValue = "false";
		};
		class Volume
		{
			displayName = $STR_musicVolume_displayName; 
			tooltip = ""; 
			property = "Enh_musicVolume"; 
			control = "Slider";
			expression = "0 fadeMusic _value";
			defaultValue = "1";
		};
	};
};



