class GarrisonBuildings
{
	collapsed = 0;
	displayName = "Garrison Settings";
	class attributes
	{
		class BuildingCoverage
		{
			displayName = "Coverage of selected Buildings"; 
			tooltip = "Set how many of the selected buildings will be garrisoned"; 
			property = "3E_coverageBuildings"; 
			control = "GarrisonCoverageCombo";
			expression = "";
			defaultValue = 1;
			typeName = "NUMBER";
		};
		class BuildingPosCoverage: BuildingCoverage
		{
			displayName = "Coverage of Building Positions"; 
			tooltip = "Set how many building positions should be garrisoned"; 
			property = "3E_coverageBuildingsPos";
			typeName = "NUMBER";
		};
		class GarrisonFaction
		{
			displayName = "Faction"; 
			tooltip = "Set what faction should garrison the building"; 
			property = "3E_garrisonFaction"; 
			control = "GarrisonFactionCombo";
			expression = "";
			defaultValue = "NATO";
			typeName = "STRING";
		};
	};
};



