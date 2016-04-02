class VisualSettings
{
	displayName = $STR_visualSettings_headline;
	collapsed = 1;
	class Attributes
	{
		class ViewDistance
		{
			displayName = $STR_viewDistance_displayName; 
			tooltip = $STR_viewDistance_tooltip; 
			property = "Enh_viewDistance"; 
			control = "edit";
			expression = "_value remoteExec ['setViewDistance',0,true]";
			defaultValue = viewDistance;
			typeName = "NUMBER";
			validate = "number";
		};
		class DisableGrass
		{
			displayName = $STR_disableGrass_displayName; 
			tooltip = $STR_disableGrass_tooltip; 
			property = "Enh_disableGrass"; 
			control = "Checkbox";
			expression = "if(_value) then {50 remoteExec ['setTerrainGrid',0,true]}";
			defaultValue = "false";
		};
	};
};
