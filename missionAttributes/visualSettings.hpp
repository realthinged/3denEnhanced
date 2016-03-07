class VisualSettings
{
	displayName = "Visual Settings";
	collapsed = 1;
	class Attributes
	{
		class ViewDistance
		{
			displayName = "View Distance"; 
			tooltip = "Set the view distance for all players. JIP compatible"; 
			property = "Revo_viewDistance"; 
			control = "edit";
			expression = "_value remoteExec ['setViewDistance',0,true]";
			defaultValue = viewDistance;
			typeName = "NUMBER";
			validate = "number";
		};
		class DisableGrass
		{
			displayName = "Disable Grass"; 
			tooltip = "This disables grass for all players. Effect can be seen after first preview. JIP compatible"; 
			property = "Revo_disableGrass"; 
			control = "Checkbox";
			expression = "if(_value) then {50 remoteExec ['setTerrainGrid',0,true]}";
			defaultValue = "false";
		};
	};
};
