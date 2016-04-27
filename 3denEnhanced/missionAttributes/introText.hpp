class IntroText
{
	displayName = $STR_introText_headline;
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = $STR_advancedFog_activate_displayName;
			tooltip = $STR_introText_activate_tooltip;
			property = "Enh_introActivate";
			control = "CheckboxState";
			expression =
			"\
				if (_value && !is3DEN) then\
				{\
					[] spawn\
					{\
						waitUntil {time > 0.5};\
						waitUntil {time > ((missionNamespace getVariable ['Enh_introDelay',5]) - 0.5)};\
						[\
							parseText format\
							[\
								""<t align='right' size='1.6'><t font='PuristaBold' size='1.8'>%1<br/></t>%2<br/>%3</t>"",\
								(missionNamespace getVariable 'Enh_introLine1'),\
								(missionNamespace getVariable 'Enh_introLine2'),\
								(missionNamespace getVariable 'Enh_introLine3')\
							],\
							true\
						] remoteExec ['BIS_fnc_textTiles',0,true];\
					}\
				};\
			";
			defaultValue = "false";
		};
		class IntroDelay
		{
			displayName = $STR_introText_introDelay_displayName;
			tooltip = $STR_introText_introDelay_tooltip;
			property = "Enh_introDelay";
			control = "Edit";
			expression = "missionNamespace setVariable ['Enh_introDelay',_value]";
			defaultValue = "5";
			typeName = "NUMBER";
		};
		class Line_1
		{
			displayName = $STR_introText_line1_displayName;
			tooltip = "";
			property = "Enh_firstLine";
			control = "Edit";
			expression = "missionNamespace setVariable ['Enh_introLine1',_value]";
			defaultValue = briefingName;
			typeName = "STRING";
		};
		class Line_2: Line_1
		{
			displayName = $STR_introText_line2_displayName;
			expression = "missionNamespace setVariable ['Enh_introLine2',_value]";
			property = 'Enh_line2';
			defaultValue = ('by ' + profileName);
		};
		class Line_3: Line_1
		{
			displayName = $STR_introText_line3_displayName;
			expression = "missionNamespace setVariable ['Enh_introLine3',_value]";
			property = 'Enh_line3';
			defaultValue = ([daytime] call BIS_fnc_TimeToString);
		};
	};
};
