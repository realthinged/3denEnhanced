class MakeHostage: SetCaptive
{
	displayName = $STR_makeHostage_displayName;
	tooltip = $STR_makeHostage_tooltip;
	property = "Enh_makeHostage";
	expression =
	"\
		if (_value && !is3DEN) then\
		{\
			Enh_fnc_makeHostage =\
			{\
				_this playMoveNow 'Acts_AidlPsitMstpSsurWnonDnon04';\
				_this addAction ['Free Hostage',\
				{\
					[_this select 0,_this select 2] remoteExec ['removeAction',0];\
					(_this select 0) playMoveNow 'AmovPercMstpSnonWnonDnon';\
					(_this select 0) setVariable ['Enh_isHostage',false];\
				}];\
				_this setVariable ['Enh_isHostage',true];\
			};\
			\
			_this remoteExec ['Enh_fnc_makeHostage',0,true];\
		};\
	";
};
