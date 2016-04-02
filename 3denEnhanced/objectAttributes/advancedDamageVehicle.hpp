class AdvancedDamageVehicle
{
	displayName = $STR_advancedDamage_headline;
	collapsed = 1;
	class Attributes
	{
		class Engine
		{
			displayName = $STR_advancedDamageVeh_engine;
			tooltip = "";
			property = "Enh_damageEngine";
			control = "slider";
			expression = "_this setHitPointDamage ['hitEngine',_value];";
			defaultValue = "0";
			validate = "number"; 
			condition = "objectVehicle";
			typeName = "NUMBER"; 
		};
		class Gun: Engine
		{
			displayName = $STR_advancedDamageVeh_gun;
			property = "Enh_damageGun";
			expression = "_this setHitPointDamage ['hitGun',_value];";
		};
		class FuelTank: Engine
		{
			displayName = $STR_advancedDamageVeh_fuelTank;
			property = "Enh_damageFuelTank";
			expression = "_this setHitPointDamage ['hitFuel',_value];";
		};
		class Turret: Engine
		{
			displayName = $STR_advancedDamageVeh_turret;
			property = "Enh_damageTurret";
			expression = "_this setHitPointDamage ['hitTurret',_value];";
		};	
		class Windows: Engine
		{
			displayName = $STR_advancedDamageVeh_windows;
			property = "Enh_damageWindows";
			expression = "{_this setHitPointDamage[_x,_value]} forEach ['HitGlass1','HitGlass2','HitGlass3','HitGlass4','HitRGlass','HitLGlass','HitGlass5','HitGlass6']";
		};	
		class LFWheel: Engine
		{
			displayName = $STR_advancedDamageVeh_LFWheel;
			property = "Enh_damageLFWheel";
			expression = "_this setHitPointDamage ['hitLFWheel',_value];";
		};		
		class RFWheel: Engine
		{
			displayName =$STR_advancedDamageVeh_RFWheel;
			property = "Enh_damageRFWheel";
			expression = "_this setHitPointDamage ['hitRFWheel',_value];";
		};
		class LF2Wheel: Engine 
		{
			displayName = $STR_advancedDamageVeh_LF2Wheel;
			property = "Enh_damageLF2Wheel";
			expression = "_this setHitPointDamage ['HitLF2Wheel',_value]";
		};
		class RF2Wheel: Engine 
		{
			displayName = $STR_advancedDamageVeh_RF2Wheel;
			property = "Enh_damageRF2Wheel";
			expression = "_this setHitPointDamage ['HitRF2Wheel',_value]";
		};
		class LMWheel: Engine 
		{
			displayName = $STR_advancedDamageVeh_LMWheel;
			property = "Enh_damageLMWheel";
			expression = "_this setHitPointDamage ['HitLMWheel',_value]";
		};
		class RMWheel: Engine 
		{
			displayName = $STR_advancedDamageVeh_RMWheel;
			property = "Enh_damageRMWheel";
			expression = "_this setHitPointDamage ['HitRMWheel',_value]";
		};
		class LBWheel: Engine
		{
			displayName = $STR_advancedDamageVeh_LBWheel;
			property = "Enh_damageLBWheel";
			expression = "_this setHitPointDamage ['HitLBWheel',_value];";
		};
		class RBWheel: Engine 
		{
			displayName = $STR_advancedDamageVeh_RBWheel;
			property = "Enh_damageRBWheel";
			expression = "_this setHitPointDamage ['HitRBWheel',_value];";
		};
		class vehBody: Engine
		{
			displayName = $STR_advancedDamageVeh_body;
			property = "Enh_damageVehBody";
			expression = "_this setHitPointDamage ['hitBody',_value];";
		};
		class LTrack: Engine
		{
			displayName = $STR_advancedDamageVeh_LTrack;
			property = "Enh_damageLTrack";
			expression = "_this setHitPointDamage ['hitLTrack',_value];";
		};
		class RTrack: Engine
		{
			displayName = $STR_advancedDamageVeh_RTrack;
			property = "Enh_damageRTrack";
			expression = "_this setHitPointDamage ['hitRTrack',_value];";
		};
		class Hull: Engine
		{
			displayName = $STR_advancedDamageVeh_hull;
			property = "Enh_damageHull";
			expression = "_this setHitPointDamage ['hitHull',_value];";
		};
		class Avionics: Engine
		{
			displayName = $STR_advancedDamageVeh_avionics;
			property = "Enh_damageAvionics";
			expression = "_this setHitPointDamage ['hitAvionics',_value];";
		};	
		class MainRotor: Engine
		{
			displayName = $STR_advancedDamageVeh_mainRotor;
			property = "Enh_damageMainRotor";
			expression = "_this setHitPointDamage ['hitRRotor',_value];";
		};	
		class TailRotor: Engine
		{
			displayName = $STR_advancedDamageVeh_tailRotor;
			property = "Enh_damageTailRotor";
			expression = "_this setHitPointDamage ['hitVRotor',_value];";
		};	
	};
};