class DisableAI
{
	displayName = $STR_disableAI_headline;
	collapsed = 1;
	class Attributes
	{
		class Move
		{
			displayName = $STR_disableAI_move_displayName; 
			tooltip = $STR_disableAI_move_tooltip; 
			property = "Enh_disableAI_move"; 
			control = "Checkbox"; 
			expression = "if (_value) then {_this disableAI 'MOVE';};";
			defaultValue = "false";
			condition = "objectControllable";
		};
		class Target: Move
		{
			displayName = $STR_disableAI_target_displayName; 
			tooltip = $STR_disableAI_target_tooltip; 
			property = "Enh_disableAI_target"; 
			expression = "if (_value) then {_this disableAI 'TARGET';};";
		};
		class Cover: Move
		{
			displayName = $STR_disableAI_cover_displayName; 
			tooltip = $STR_disableAI_cover_tooltip; 
			property = "Enh_disableAI_cover"; 
			expression = "if (_value) then {_this disableAI 'COVER';};";
		};
		class Autotarget: Move
		{
			displayName = $STR_disableAI_autotarget_displayName; 
			tooltip = $STR_disableAI_autotarget_tooltip; 
			property = "Enh_disableAI_autotarget"; 
			expression = "if (_value) then {_this disableAI 'AUTOTARGET';};";
		};
		class Animation: Move
		{
			displayName = $STR_disableAI_anim_displayName; 
			tooltip = $STR_disableAI_anim_tooltip; 
			property = "Enh_disableAI_anim"; 
			expression = "if (_value) then {_this disableAI 'ANIM';};";
		};
		class FSM: Move
		{
			displayName = "FSM"; 
			tooltip = $STR_disableAI_FSM_tooltip; 
			property = "Enh_disableAI_FSM"; 
			expression = "if (_value) then {_this disableAI 'FSM';};";
		};
		class AimingError: Move
		{
			displayName = $STR_disableAI_aimingError_displayName; 
			tooltip =  $STR_disableAI_aimingError_tooltip; 
			property = "Enh_disableAI_aimingError"; 
			expression = "if (_value) then {_this disableAI 'AIMINGERROR';};";
		};
		class Teamswitch: Move
		{
			displayName = $STR_disableAI_teamSwitch_displayName; 
			tooltip = $STR_disableAI_teamSwitch_tooltip; 
			property = "Enh_disableAI_teamswitch"; 
			expression = "if (_value) then {_this disableAI 'TEAMSWITCH';};";
		};
		class Suppression: Move
		{
			displayName = $STR_disableAI_suppression_displayName; 
			tooltip = $STR_disableAI_suppression_tooltip
			property = "Enh_disableAI_suppression"; 
			expression = "if (_value) then {_this disableAI 'SUPPRESSION';};";
		};
		class CheckVisible: Move
		{
			displayName = $STR_disableAI_raycasts_displayName; 
			tooltip = $STR_disableAI_raycasts_tooltip; 
			property = "Enh_disableAI_checkVisible"; 
			expression = "if (_value) then {_this disableAI 'CHECKVISIBLE';};";
		};
		class Autocombat: Move
		{
			displayName = $STR_disableAI_autocombat_displayName; 
			tooltip = $STR_disableAI_autocombat_tooltip; 
			property = "Enh_disableAI_autocombat"; 
			expression = "if (_value) then {_this disableAI 'AUTOCOMBAT';};";
		};
	};	
};