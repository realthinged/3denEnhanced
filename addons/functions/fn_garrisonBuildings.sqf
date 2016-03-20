/*
	Author: Revo

	Description:
	Garrisons one or multiple selected buildings in 3den. Settings are available in the 3den Preferences.
	
	Parameter(s):
	-
	Returns:
	true
*/
private 
[
	"_classesNATO",
	"_classesNATORecon",
	"_classesCSAT",
	"_classesCSATRecon",
	"_classesAAF",
	"_classesFIA",
	"_selectedObjects",
	"_stepBuildings",
	"_stepBuildingPos",
	"_faction",
	"_classes",
	"_building",
	"_i",
	"_unit",
	"_j",
	"_pos"
];

_NATO 		= ["B_Soldier_SL_F","B_Soldier_F","B_soldier_LAT_F","B_soldier_M_F","B_Soldier_TL_F","B_soldier_AR_F","B_Soldier_A_F","B_medic_F"];
_NATORecon 	= ["B_recon_TL_F","B_recon_M_F","B_recon_medic_F","B_recon_F","B_recon_LAT_F","B_recon_JTAC_F","B_recon_exp_F","B_Recon_Sharpshooter_F"];
_CSAT 		= ["O_Soldier_SL_F","O_Soldier_AR_F","O_HeavyGunner_F","O_Soldier_AAR_F","O_soldier_M_F","O_Sharpshooter_F","O_Soldier_LAT_F","O_medic_F"];
_CSATRecon 	= ["O_recon_TL_F","O_recon_M_F","O_recon_medic_F","O_recon_F","O_recon_LAT_F","O_recon_JTAC_F","O_recon_exp_F","O_Pathfinder_F"];
_AAF 		= ["I_Soldier_SL_F","I_soldier_F","I_Soldier_LAT_F","I_Soldier_M_F","I_Soldier_TL_F","I_Soldier_AR_F","I_Soldier_A_F","I_medic_F"];
_FIA 		= ["B_G_Soldier_SL_F","B_G_Soldier_F","B_G_Soldier_LAT_F","B_G_Soldier_M_F","B_G_Soldier_TL_F","B_G_Soldier_AR_F","B_G_Soldier_A_F","B_G_medic_F"];

_selectedObjects = get3DENSelected "object";
_stepBuildings = "Preferences" get3DENMissionAttribute "3E_coverageBuildings";
_stepBuildingPos = "Preferences" get3DENMissionAttribute "3E_coverageBuildingsPos";
_faction = "Preferences" get3DENMissionAttribute "3E_garrisonFaction";
_classes = [];

switch (_faction) do
{
	case "NATO": {_classes = _NATO};
	case "NATO_recon": {_classes = _NatoRecon};
	case "CSAT": {_classes = _CSAT};
	case "CSAT_recon": {_classes = _CSATRecon};
	case "AAF": {_classes = _AAF};
	case "FIA": {_classes = _FIA};
};

collect3DENHistory 
{
	for "_i" from 0 to (count _selectedObjects - 1) step _stepBuildings do
	{
		_building = _selectedObjects select _i;
		if ((count (_building buildingPos -1)) > 0) then
		{
			for "_j" from 0 to count (_building buildingPos -1) step _stepBuildingPos do
			{
				_pos = _building buildingPos _j;
				if( surfaceIsWater _x ) then 
				{
					create3DENEntity ["Object",selectRandom _classes,ASLToATL _pos];
				}
				else
				{
					create3DENEntity ["Object",selectRandom _classes,_pos];
				};
				_unit set3DENAttribute ["rotation", [0,0,random 360]];
			};
		};
	};
};

["GarrisonDone"] call BIS_fnc_3DENNotification;

true;