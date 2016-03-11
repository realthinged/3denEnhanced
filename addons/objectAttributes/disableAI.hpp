class DisableAI
{
	displayName = "Disable AI Features";
	collapsed = 1;
	class Attributes
	{
		class Move
		{
			displayName = "Move"; 
			tooltip = "Disables AI's ability to move."; 
			property = "3E_disableAI_move"; 
			control = "Checkbox"; 
			expression = "if (_value) then {_this disableAI 'MOVE';};";
			defaultValue = "false";
			condition = "objectControllable";
		};
		class Target: Move
		{
			displayName = "Target"; 
			tooltip = "Disables AI's ability to target."; 
			property = "3E_disableAI_target"; 
			expression = "if (_value) then {_this disableAI 'TARGET';};";
		};
		class Cover: Move
		{
			displayName = "Cover"; 
			tooltip = "Disables AI's ability to take cover."; 
			property = "3E_disableAI_cover"; 
			expression = "if (_value) then {_this disableAI 'COVER';};";
		};
		class Autotarget: Move
		{
			displayName = "Autotarget"; 
			tooltip = "Disables AI's ability automatically assign targets."; 
			property = "3E_disableAI_autotarget"; 
			expression = "if (_value) then {_this disableAI 'AUTOTARGET';};";
		};
		class Animation: Move
		{
			displayName = "Animation"; 
			tooltip = "Disables animations."; 
			property = "3E_disableAI_anim"; 
			expression = "if (_value) then {_this disableAI 'ANIM';};";
		};
		class FSM: Move
		{
			displayName = "FSM"; 
			tooltip = "Disable the execution of AI behaviour scripts."; 
			property = "3E_disableAI_FSM"; 
			expression = "if (_value) then {_this disableAI 'FSM';};";
		};
		class AimingError: Move
		{
			displayName = "Aiming Error"; 
			tooltip = "Prevents AI's aiming from being distracted by its shooting, moving, turning, reloading, hit, injury, fatigue, suppression or concealed/lost target."; 
			property = "3E_disableAI_aimingError"; 
			expression = "if (_value) then {_this disableAI 'AIMINGERROR';};";
		};
		class Teamswitch: Move
		{
			displayName = "Teamswitch"; 
			tooltip = "AI disabled because of Team Switch."; 
			property = "3E_disableAI_teamswitch"; 
			expression = "if (_value) then {_this disableAI 'TEAMSWITCH';};";
		};
		class Suppression: Move
		{
			displayName = "Suppression"; 
			tooltip = "Prevents AI from being suppressed."; 
			property = "3E_disableAI_suppression"; 
			expression = "if (_value) then {_this disableAI 'SUPPRESSION';};";
		};
		class CheckVisible: Move
		{
			displayName = "Raycasts"; 
			tooltip = "Disables visibility raycasts."; 
			property = "3E_disableAI_checkVisible"; 
			expression = "if (_value) then {_this disableAI 'CHECKVISIBLE';};";
		};
		class Autocombat: Move
		{
			displayName = "Autocombat"; 
			tooltip = "Disables autonomous switching to COMBAT when in danger."; 
			property = "3E_disableAI_autocombat"; 
			expression = "if (_value) then {_this disableAI 'AUTOCOMBAT';};";
		};
	};	
};