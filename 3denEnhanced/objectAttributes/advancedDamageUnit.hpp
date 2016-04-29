class AdvancedDamageUnit
{
	displayName = $STR_advancedDamage_headline;
	collapsed = 1;
	class Attributes
	{
		class Head
		{
			displayName = $STR_advancedDamageUnit_head;
			tooltip = "";
			property = "Enh_damageHead";
			control = "slider";
			expression = "_this setHitPointDamage ['hitHead',_value];";
			defaultValue = "0";
			validate = "number"; 
			condition = "objectControllable";
			typeName = "NUMBER"; 
		};
		class Face: Head
		{
			displayName = $STR_advancedDamageUnit_face;
			property = "Enh_damageFace";
			expression = "_this setHitPointDamage ['hitFace',_value];";
		};
		class Neck: Head
		{
			displayName = $STR_advancedDamageUnit_neck;
			property = "Enh_damageNeck";
			expression = "_this setHitPointDamage ['hitNeck',_value];";
		};
		class Chest: Head
		{
			displayName = $STR_advancedDamageUnit_chest;
			property = "Enh_damageChest";
			expression = "_this setHitPointDamage ['hitChest',_value];";
		};		
		class Arms: Head
		{
			displayName = $STR_advancedDamageUnit_arms;
			property = "Enh_damageArms";
			expression = "_this setHitPointDamage ['hitArms',_value];";
		};
		class Hands: Head
		{
			displayName = $STR_advancedDamageUnit_hands;
			property = "Enh_damageHands";
			expression = "_this setHitPointDamage ['hitHands',_value];";
		};
		class Abdomen: Head
		{
			displayName = $STR_advancedDamageUnit_abdomen;
			property = "Enh_damageAbdomen";
			expression = "_this setHitPointDamage ['hitAbdomen',_value];";
		};
		class Pelvis: Head
		{
			displayName = $STR_advancedDamageUnit_pelvis;
			property = "Enh_damagePelvis";
			expression = "_this setHitPointDamage ['hitPelvis',_value];";
		};
		class Diaphragm: Head
		{
			displayName = $STR_advancedDamageUnit_diaphragm;
			property = "Enh_damageDiaphragm";
			expression = "_this setHitPointDamage ['hitDiaphragm',_value];";
		};
		class Legs: Head
		{
			displayName = $STR_advancedDamageUnit_legs;
			property = "Enh_damageLegs";
			expression = "_this setHitPointDamage ['hitLegs',_value];";
		};
	};
};
