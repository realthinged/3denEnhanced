class GarrisonBuildings
{
	collapsed = 0;
	displayName = $STR_garrisonSettings_headline;
	class attributes
	{
		class BuildingCoverage
		{
			displayName = $STR_buildingCoverage_displayName; 
			tooltip = $STR_buildingCoverage_tooltip; 
			property = "Enh_coverageBuildings"; 
			control = "GarrisonCoverageCombo";
			expression = "";
			defaultValue = 1;
			typeName = "NUMBER";
		};
		class BuildingPosCoverage: BuildingCoverage
		{
			displayName = $STR_buildingPosCoverage_displayName; 
			tooltip = $STR_buildingPosCoverage_tooltip; 
			property = "Enh_coverageBuildingsPos";
			typeName = "NUMBER";
		};
		class GarrisonFaction
		{
			displayName = $STR_faction_displayName; 
			tooltip = $STR_faction_tooltip; 
			property = "Enh_garrisonFaction"; 
			control = "GarrisonFactionCombo";
			expression = "";
			defaultValue = "NATO";
			typeName = "STRING";
		};
	};
};



