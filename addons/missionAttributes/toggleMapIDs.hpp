class Misc
{
	class attributes
	{
		class ShowMapIDs
		{
			displayName = "Show Map IDs";
			tooltip = "If enabled, map IDs will be shown in zoomed in 2D view"; 
			property = "3E_mapIDs"; 
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
