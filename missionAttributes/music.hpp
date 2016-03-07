class Music
{
	collapsed = 0;
	displayName = "Music";
	class attributes
	{
		class EnableMusic
		{
			displayName = "Enable Music Loop"; 
			tooltip = "If enabled, random music from CfgMusic will be played in a loop."; 
			property = "Revo_enableMusic"; 
			control = "CheckboxState";
			expression = "[_value] spawn Revo_fnc_playMusic";
			defaultValue = "false";
		};
		class Volume
		{
			displayName = "Music Volume"; 
			tooltip = "Set the music volume."; 
			property = "Revo_musicVolume"; 
			control = "Slider";
			expression = "0 fadeMusic _value";
			defaultValue = "1";
		};
	};
};



