class Misc
{
	class attributes
	{
		class ShowMapIDs
		{
			displayName = $STR_showMapIDs_displayName;
			tooltip = $STR_showMapIDs_tooltip; 
			property = "Enh_showMapIDs"; 
			control = "Checkbox";
			expression = 
			"\
				if (_value && ((get3DENActionState 'ToggleMapIDs') == 0)) then\
				{\
					do3DENAction 'ToggleMapIDs';\
				}\
				else\
				{\
					if (!(_value) && ((get3DENActionState 'ToggleMapIDs') == 1)) then\
					{\
						do3DENAction 'ToggleMapIDs';\
					};\
				};\
			";
			defaultValue = "false";
		};
	};
};
