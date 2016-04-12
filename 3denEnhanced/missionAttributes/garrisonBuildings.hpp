class GarrisonBuildings
{
	collapsed = 0;
	displayName = $STR_garrisonSettings_headline;
	class Attributes
	{
		class BuildingPosCoverage
		{
			displayName = $STR_buildingPosCoverage_displayName;
			tooltip = $STR_buildingPosCoverage_tooltip;
			property = "Enh_coverageBuildingsPos";
			control = "GarrisonCoverageCombo";
			expression = "";
			defaultValue = 1;
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
