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
				class Help3denEnhanced
				{
					text = "3den Enhanced";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://forums.bistudio.com/topic/188312-3den-enhanced/";
				};
				class HelpFunctionsList
				{
					text = "Functions Overview";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://community.bistudio.com/wiki/Category:Arma_3:_Functions";
				};
				class HelpAssets
				{
					text = "Assets Overview";
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
				items[] += {"SetRandomDir"};
			};
			class LogClassName
			{
				action = "call 3E_fnc_logClassName";
				Text = "Log Class Name to Clipboard";
				conditionShow = "selectedObject + selectedWaypoint + selectedLogic + selectedMarker";
			};	
			class SetRandomDir
			{
				action = "call 3E_fnc_setRandomDir";
				Text = "Set Random Direction";
				conditionShow = "selectedObject + selectedWaypoint + selectedLogic + selectedMarker";
			};		
			// class LogTerrainObject
			// {
				// action = "call 3E_fnc_logTerrainObjectData";
				// Text = "Log Terrain Object Data to Clipboard";
			// };				
		};
	};
};