class Volume
{
	collapsed = 0;
	displayName = $STR_volume_headline;
	class attributes
	{
		class SoundVolume
		{
			displayName = $STR_soundVolume_displayName;
			tooltip = "";
			property = "Enh_soundVolume";
			control = "Slider";
			expression =
			"\
				if (!is3DEN) then\
				{\
					[0,_value] remoteExec ['fadeSound',0,true];\
				};\
			";
			defaultValue = "1";
		};
		class MusicVolume
		{
			displayName = $STR_musicVolume_displayName;
			tooltip = "";
			property = "Enh_musicVolume";
			control = "Slider";
			expression =
			"\
				if (!is3DEN) then\
				{\
					[0,_value] remoteExec ['fadeMusic',0,true];\
				};\
			";
			defaultValue = "1";
		};
		class RadioVolume
		{
			displayName = $STR_radioVolume_displayName;
			tooltip = "";
			property = "Enh_radioVolume";
			control = "Slider";
			expression =
			"\
				if (!is3DEN) then\
				{\
					[0,_value] remoteExec ['fadeRadio',0,true];\
				};\
			";
			defaultValue = "1";
		};
		class RandomMusic
		{
			displayName = $STR_randomMusic_displayName;
			tooltip = $STR_randomMusic_tooltip;
			property = "Enh_randomMusic";
			control = "EditArray";
			expression =
			"\
				if (!is3DEN && !(_value isEqualTo [])) then\
				{\
					(selectRandom _value) remoteExec ['playMusic',0];\
				};\
			";
			defaultValue = [];
		};
	};
};
