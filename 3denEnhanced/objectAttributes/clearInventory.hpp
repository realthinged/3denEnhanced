class ClearInventory: RemoveWeapons
{
	displayName = $STR_clearInventory_displayName;
	tooltip = $STR_clearInventory_tooltip;
	property = "Enh_clearInventory";
	expression = 
	"\
		if(_value) then\
		{\
			removeAllWeapons _this;\
			removeAllItems _this;\
			removeAllContainers _this;\
			removeHeadgear _this;\
			removeAllAssignedItems _this;\
			removeGoggles _this;\
			_this switchMove 'AmovPercMstpSnonWnonDnon';\
		};\
	";
};