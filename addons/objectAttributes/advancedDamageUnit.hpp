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
			property = "3E_damageHead";
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
			property = "3E_damageFace";
			expression = "_this setHitPointDamage ['hitFace',_value];";
		};
		class Neck: Head
		{
			displayName = "Neck";
			property = "3E_damageNeck";
			expression = "_this setHitPointDamage ['hitNeck',_value];";
		};
		class Chest: Head
		{
			displayName = "Chest";
			property = "3E_damageChest";
			expression = "_this setHitPointDamage ['hitChest',_value];";
		};		
		class Arms: Head
		{
			displayName = "Arms";
			property = "3E_damageArms";
			expression = "_this setHitPointDamage ['hitArms',_value];";
		};
		class Hands: Head
		{
			displayName = "Hands";
			property = "3E_damageHands";
			expression = "_this setHitPointDamage ['hitHands',_value];";
		};
		class Abdomen: Head
		{
			displayName = "Abdomen";
			property = "3E_damageAbdomen";
			expression = "_this setHitPointDamage ['hitAbdomen',_value];";
		};
		class Pelvis: Head
		{
			displayName = "Pelvis";
			property = "3E_damagePelvis";
			expression = "_this setHitPointDamage ['hitPelvis',_value];";
		};
		class Diaphragm: Head
		{
			displayName = "Diaphragm";
			property = "3E_damageDiaphragm";
			expression = "_this setHitPointDamage ['hitDiaphragm',_value];";
		};
		class Legs: Head
		{
			displayName = "Legs";
			property = "3E_damageLegs";
			expression = "_this setHitPointDamage ['hitLegs',_value];";
		};
	};
};