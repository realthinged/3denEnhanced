class RemoveNVG: RemoveWeapons
{
	displayName = $STR_removeNVG_displayName;
	tooltip = "";
	property = "Enh_removeNVG";
	expression =
	"\
		if(_value) then\
		{\
			{\
				_this unlinkItem _x;\
				false;\
			} count ['NVGoggles','NVGoggles_OPFOR','NVGoggles_INDEP'];\
		};\
	";
};
