class AdvancedDamageUnit
{
	displayName = "Advanced Damage";
	collapsed = 1;
	class Attributes
	{
		class Head
		{
			displayName = "Head";
			tooltip = "Damages a specific body part.";
			property = "Revo_damageHead";
			control = "slider";
			expression = "_this setHitPointDamage ['hitHead',_value];";
			defaultValue = "0";
			validate = "number"; 
			condition = "objectControllable";
			typeName = "NUMBER"; 
		};
		class Face: Head
		{
			displayName = "Face";
			property = "Revo_damageFace";
			expression = "_this setHitPointDamage ['hitFace',_value];";
		};
		class Neck: Head
		{
			displayName = "Neck";
			property = "Revo_damageNeck";
			expression = "_this setHitPointDamage ['hitNeck',_value];";
		};
		class Chest: Head
		{
			displayName = "Chest";
			property = "Revo_damageChest";
			expression = "_this setHitPointDamage ['hitChest',_value];";
		};		
		class Arms: Head
		{
			displayName = "Arms";
			property = "Revo_damageArms";
			expression = "_this setHitPointDamage ['hitArms',_value];";
		};
		class Hands: Head
		{
			displayName = "Hands";
			property = "Revo_damageHands";
			expression = "_this setHitPointDamage ['hitHands',_value];";
		};
		class Abdomen: Head
		{
			displayName = "Abdomen";
			property = "Revo_damageAbdomen";
			expression = "_this setHitPointDamage ['hitAbdomen',_value];";
		};
		class Pelvis: Head
		{
			displayName = "Pelvis";
			property = "Revo_damagePelvis";
			expression = "_this setHitPointDamage ['hitPelvis',_value];";
		};
		class Diaphragm: Head
		{
			displayName = "Diaphragm";
			property = "Revo_damageDiaphragm";
			expression = "_this setHitPointDamage ['hitDiaphragm',_value];";
		};
		class Legs: Head
		{
			displayName = "Legs";
			property = "Revo_damageLegs";
			expression = "_this setHitPointDamage ['hitLegs',_value];";
		};
	};
};