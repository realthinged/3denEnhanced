class RemoveFirstAidKits: RemoveWeapons
{
	displayName = $STR_removeFAKs_displayName;
	tooltip = "";
	property = "Enh_removeFAK";
	expression =
	"\
		if (_value) then\
		{\
			{\
				if (_x == 'FirstAidKit') then\
				{\
					_this removeItem _x;\
					false;\
				}\
			} count  (items _this);\
		};\
	";
};
