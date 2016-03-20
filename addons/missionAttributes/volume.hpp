class Volume
{
	collapsed = 0;
	displayName = "Music, Sound & Radio Volume";
	class attributes
	{
		class SoundVolume
		{
			displayName = "Sound Volume"; 
			tooltip = ""; 
			property = "3E_soundVolume"; 
			control = "Slider";
			expression = 
			"\
				if (!(is3den)) then\
				{\
					[0,_value] remoteExec ['fadeSound',0,true];\
				};\
			"
			defaultValue = soundVolume;
		};
		class MusicVolume
		{
			displayName = "Music Volume"; 
			tooltip = ""; 
			property = "3E_musicVolume"; 
			control = "Slider";
			expression = 
			"\
				if (!(is3den)) then\
				{\
					[0,_value] remoteExec ['fadeMusic',0,true];\
				};\
				"
			defaultValue = musicVolume;
		};
		class RadioVolume
		{
			displayName = "Radio Volume"; 
			tooltip = ""; 
			property = "3E_radioVolume"; 
			control = "Slider";
			expression = 
			"\
				if (!(is3den)) then\
				{\
					[0,_value] remoteExec ['fadeRadio',0,true];\
				};\
				"
			defaultValue = radiovolume;
		};
	};
};



