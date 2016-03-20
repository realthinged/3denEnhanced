//Custom connects are not yet supported by 3den according to Karel Moricky
class Connections
{
	class SlingLoad
	{
		displayName = "Sling Load";
		condition1 = "objectVehicle";
		condition2 = "objectVehicle";
		data = "custom";
		color[] = {1,1,1,1};
		cursor = "3DENConnectSync";
		expression = "hint str [_this,_target];"; // _this is array of source entities, _target is target entity
	};
	class AttachTo
	{
		displayName = "Attach To";
		condition1 = "objectVehicle";
		condition2 = "objectVehicle";
		data = "custom";
		color[] = {1,1,1,1};
		cursor = "3DENConnectSync";
		expression = "hint str [_this,_target];"; // _this is array of source entities, _target is target entity
	};
};