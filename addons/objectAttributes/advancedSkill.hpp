class AdvancedSkill
{
	displayName = "Advanced Skill";
	collapsed = 1;
	class Attributes
	{
		class AimingShake
		{
			displayName = "Aiming Shake";
			tooltip = "Affects how steadily the AI can hold a weapon (Higher value = less weapon sway).";
			property = "3E_aimingShake";
			expression = "_this setSkill ['aimingShake',_value]";
			control = "Skill"; 
			defaultValue = "0.5";
			typeName = "NUMBER";
			validate = "number";
			condition = "objectControllable";
		};	
		class AimingSpeed: AimingShake
		{
			displayName = "Aiming Speed";
			tooltip = "Affects how quickly the AI can rotate and stabilize its aim (Higher value = faster, less error).";
			property = "3E_aimingSpeed";
			expression = "_this setSkill ['aimingSpeed',_value]";
		};	
		class AimingAccuracy: AimingShake
		{
			displayName = "Aiming Accuracy";
			tooltip = "Affects how well the AI can lead a target\nAffects how accurately the AI estimate range and calculates bullet drop\nAffects how well the AI compensates for weapon dispersion\nAffects how much the AI will know to compensate for recoil (Higher value = more controlled fire)\nAffects how certain the AI must be about its aim on target before opening fire.";
			property = "3E_aimingAccuracy";
			expression = "_this setSkill ['aimingAccuracy',_value]";
		};	
		class Commanding: AimingShake
		{
			displayName = "Commanding";
			tooltip = "Affects how quickly recognized targets are shared with the group (Higher value = faster reporting).";
			property = "3E_commanding";
			expression = "_this setSkill ['commanding',_value]";
		};	
		class Courage: AimingShake
		{
			displayName = "Courage";
			tooltip = "Affects unit's subordinates' morale (Higher value = more courage).";
			property = "3E_courage";
			expression = "_this setSkill ['courage',_value]";
		};	
		class General: AimingShake
		{
			displayName = "General";
			tooltip = "Raw Skill, value is distributed to sub-skills unless defined otherwise. Affects the AI's decision making.";
			property = "3E_general";
			expression = "_this setSkill ['general',_value]";
		};
		class ReloadSpeed: AimingShake
		{
			displayName = "Reloading Speed";
			tooltip = "Affects the delay between switching or reloading a weapon (Higher value = less delay).";
			property = "3E_reloadingSpeed";
			expression = "_this setSkill ['reloadSpeed',_value]";
		};
		class SpotDistance: AimingShake
		{
			displayName = "Spot Distance";
			tooltip = "Affects the AI ability to spot targets within it's visual or audible range (Higher value = more likely to spot). Affects the accuracy of the information (Higher value = more accurate information).";
			property = "3E_spotDistance";
			expression = "_this setSkill ['spotDistance',_value]";
		};	
		class SpotTime: AimingShake
		{
			displayName = "Spot Time";
			tooltip = "Affects how quick the AI react to death, damage or observing an enemy (Higher value = quicker reaction).";
			property = "3E_spotTime";
			expression = "_this setSkill ['spotTime',_value]";
		};
	};
};