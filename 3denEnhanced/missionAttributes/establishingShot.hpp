class EstablishingShot
{
	displayName = $STR_establishingShot_headline;
	collapsed = 1;
	class Attributes
	{
		class Activate
		{
			displayName = $STR_advancedFog_activate_displayName;
			tooltip = "";
			property = "Enh_establisingShot_activate";
			control = "CheckboxState";
			expression =
			"\
				if (!is3DEN && _value) then\
				{\
					[] spawn\
					{\
						waitUntil {time > 0.005};\
						[\
							missionNamespace getVariable 'Enh_centerPosition',\
							missionNamespace getVariable 'Enh_displayText',\
							missionNamespace getVariable 'Enh_altitude',\
							missionNamespace getVariable 'Enh_radius',\
							missionNamespace getVariable 'Enh_viewingAngle',\
							missionNamespace getVariable 'Enh_directionCamera'\
						]\
						remoteExec ['BIS_fnc_establishingShot',0,true];\
					}\
				};\
			";
			defaultValue = "false";
		};
		class CenterPos
		{
			displayName = $STR_establishingShot_centerPos_displayName;
			tooltip = $STR_establishingShot_centerPos_displayName;
			property = "Enh_centerPosition";
			control = "EditXYZ";
			defaultValue = [0,0,0];
			expression = "missionNamespace setVariable ['Enh_centerPosition',_value]";
		};
		class DisplayText
		{
			displayName = $STR_establishingShot_displayedText;
			tooltip = "";
			expression = "missionNamespace setVariable ['Enh_displayText',_value]";
			property = 'Enh_displayText';
			control = "Edit";
			defaultValue = worldName;
			typeName = "STRING";
		};
		class Altitude
		{
			displayName = $STR_establishingShot_altitude_displayName;
			tooltip = "";
			expression = "missionNamespace setVariable ['Enh_altitude',_value]";
			control = "EditZ";
			property = 'Enh_altitude';
			defaultValue = 300;
		};
		class Radius
		{
			displayName = $STR_establishingShot_radius_displayName;
			tooltip = "";
			expression = "missionNamespace setVariable ['Enh_radius',_value]";
			property = 'Enh_radius';
			control = "Edit";
			defaultValue = 100;
			typeName = "NUMBER";
		};
		class ViewingAngle
		{
			displayName = $STR_establishingShot_viewingAngle_displayName;
			tooltip = "";
			expression = "missionNamespace setVariable ['Enh_viewingAngle',_value]";
			property = 'Enh_viewingAngle';
			control = "Edit";
			defaultValue = 45;
			typeName = "NUMBER";
		};
		class DirectionCamera
		{
			displayName = $STR_establishingShot_dirCamera_displayName;
			tooltip = $STR_establishingShot_dirCamera_tooltip;
			expression = "missionNamespace setVariable ['Enh_directionCamera',_value]";
			property = 'Enh_directionCamera';
			control = "Edit";//Use combo or toolbox in the future
			defaultValue = nil;
			typeName = "NUMBER";
		};
	};
};
