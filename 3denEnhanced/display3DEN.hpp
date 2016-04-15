class ctrlMenuStrip;
class ctrlMenu;
class display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class Help
				{
					items[] += {"Help3denEnhanced","HelpFunctionsList","HelpAssets"};
				};
				class Tools
				{
					items[] += {"Enh_toggleMapIDs"};
				};
				class Enh_toggleMapIDs
				{
					text = $STR_showMapIDs_displayName;
					picture = "\3denEnhanced\data\Enh_icon_id.paa";
					action = "do3DENAction 'ToggleMapIDs';";
				};
				class Help3denEnhanced
				{
					text = $STR_Help3denEnhanced;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://forums.bistudio.com/topic/188312-3den-enhanced/";
				};
				class HelpFunctionsList
				{
					text = $STR_HelpFunctionsOverview;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://community.bistudio.com/wiki/Category:Arma_3:_Functions";
				};
				class HelpAssets
				{
					text = $STR_HelpAssets;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://community.bistudio.com/wiki/Arma_3_Assets";
				};
			};
		};
	};
	class ContextMenu: ctrlMenu
	{
		class Items
		{
			class Log
			{
				items[] += {"LogClassName"};
			};
			class Edit
			{
				items[] += {"SetRandomDir","GarrisonBuildings","HideMapObjects"};
			};
			class LogClassName
			{
				action = "call Enh_fnc_logClassName";
				Text = $STR_LogClassName;
				conditionShow = "selectedObject + selectedLogic";
			};
			class SetRandomDir
			{
				action = "call Enh_fnc_setRandomDir";
				Text = $STR_SetRandomDir;
				conditionShow = "selectedObject + selectedWaypoint + selectedLogic + selectedMarker";
			};
			class GarrisonBuildings
			{
				action = "call Enh_fnc_garrisonBuildings";
				Text = $STR_GarrisonBuilding;
				conditionShow = "selectedObject";
			};
			class HideMapObjects
			{
				action = "call Enh_fnc_hideMapObjects";
				Text = "Hide Map Objects";
			};
		};
	};
};
