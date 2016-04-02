class AdvancedSkill
{
	displayName = $STR_advancedSkill_headline;
	collapsed = 1;
	class Attributes
	{
		class AimingShake
		{
			displayName = $STR_aimingShake_displayName;
			tooltip = $STR_aimingShake_tooltip;
			property = "Enh_aimingShake";
			expression = "_this setSkill ['aimingShake',_value]";
			control = "Skill"; 
			defaultValue = "0.5";
			typeName = "NUMBER";
			validate = "number";
			condition = "objectControllable";
		};	
		class AimingSpeed: AimingShake
		{
			displayName = $STR_aimingSpeed_displayName;
			tooltip = $STR_aimingSpeed_tooltip;
			property = "Enh_aimingSpeed";
			expression = "_this setSkill ['aimingSpeed',_value]";
		};	
		class AimingAccuracy: AimingShake
		{
			displayName = $STR_aimingAccuracy_displayName;
			tooltip = $STR_aimingAccuracy_tooltip;
			property = "Enh_aimingAccuracy";
			expression = "_this setSkill ['aimingAccuracy',_value]";
		};	
		class Commanding: AimingShake
		{
			displayName = $STR_commanding_displayName;
			tooltip = $STR_commanding_tooltip;
			property = "Enh_commanding";
			expression = "_this setSkill ['commanding',_value]";
		};	
		class Courage: AimingShake
		{
			displayName = $STR_courage_displayName;
			tooltip = $STR_courage_tooltip;
			property = "Enh_courage";
			expression = "_this setSkill ['courage',_value]";
		};	
		class General: AimingShake
		{
			displayName = $STR_general_displayName;
			tooltip = $STR_general_tooltip;
			property = "Enh_general";
			expression = "_this setSkill ['general',_value]";
		};
		class ReloadSpeed: AimingShake
		{
			displayName = $STR_reloadSpeed_displayName;
			tooltip = $STR_reloadSpeed_tooltip;
			property = "Enh_reloadingSpeed";
			expression = "_this setSkill ['reloadSpeed',_value]";
		};
		class SpotDistance: AimingShake
		{
			displayName = $STR_spotDistance_displayName;
			tooltip = $STR_spotDistance_tooltip;
			property = "Enh_spotDistance";
			expression = "_this setSkill ['spotDistance',_value]";
		};	
		class SpotTime: AimingShake
		{
			displayName = $STR_spotTime_displayName;
			tooltip = $STR_spotTime_tooltip;
			property = "Enh_spotTime";
			expression = "_this setSkill ['spotTime',_value]";
		};
	};
};