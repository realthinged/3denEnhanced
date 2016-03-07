class TaskPatrol
{
	displayName = "Task Patrol";
	collapsed = 1;
	class Attributes
	{
		class Patrol
		{
			displayName = "Radius of patrolled area"; 
			tooltip = "A radius > 0 will automatically make unit or unit's group patrol. -1 to disable it again"; 
			property = "Revo_taskPatrol"; 
			control = "EditShort"; 
			expression = "if (_value > 0 && !(is3den)) then {[group _this,getPos _this,_value] call BIS_fnc_taskPatrol}";
			defaultValue = "-1";
			typeName = "NUMBER";
			validate = "number";
			condition = "objectControllable";
		};
	};
};