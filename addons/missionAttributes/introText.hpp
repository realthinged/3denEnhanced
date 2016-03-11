class IntroText
{
	displayName = "Intro Text";
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = "Activate"; 
			tooltip = ""; 
			property = "3E_introActivate"; 
			control = "CheckboxState"; 
			expression = 
			"\
				[\
					parseText format\
					[\
						""<t align='right' size='1.2'><t font='PuristaBold' size='1.6'>%1<br/></t>%2<br/>%3</t>"",\
						toUpper (missionNamespace getVariable '3E_line1'),\
						(missionNamespace getVariable '3E_line2'),\
						(missionNamespace getVariable '3E_line3')\
					],\
					true\
				] remoteExec ['BIS_fnc_textTiles',0];\
			";
			defaultValue = "false";	
		};
		
		class Delay
		{
			displayName = "Delay"; 
			tooltip = "Set the delay after which the intro text is shown"; 
			property = "3E_introDelay"; 
			control = "Edit"; 
			expression = "missionNamespace setVariable ['3E_introDelay',_value]";
			defaultValue = "3";
			typeName = "NUMBER";
		};
		class Line_1
		{
			displayName = "1st Line"; 
			tooltip = ""; 
			property = "3E_firstLine"; 
			control = "Edit"; 
			expression = "missionNamespace setVariable ['3E_line1',_value]";
			defaultValue = missionName;
		};
		class Line_2: Line_1
		{
			displayName = "2nd Line"; 
			expression = "missionNamespace setVariable ['3E_line2',_value]";
			property = '3E_line2';
			defaultValue = ('by ' + profileName);
			typeName = "STRING";
		};
		class Line_3: Line_1
		{
			displayName = "3rd Line"; 
			expression = "missionNamespace setVariable ['3E_line3',_value]";
			property = '3E_line3';
			defaultValue = ([daytime] call BIS_fnc_TimeToString);			
		};
	};
};

