class MakeHostage: SetCaptive
{
	displayName = $STR_makeHostage_displayName;
	tooltip = $STR_makeHostage_tooltip;
	property = "Enh_makeHostage";
	expression =
	"\
		if (_value && !is3DEN) then\
		{\
			_this setVariable ['Enh_isHostage',true,true];\
			Enh_fnc_makeHostage =\
			{\
			   if (_this getVariable ['Enh_isHostage',false]) then\
			   {\
			      _this playMoveNow 'Acts_AidlPsitMstpSsurWnonDnon04';\
			      _this addAction ['Free Hostage',\
			      {\
			         [_this select 0,_this select 2] remoteExec ['removeAction',0];\
			         [_this select 0,'AmovPercMstpSnonWnonDnon'] remoteExec ['playMoveNow',0];\
			         (_this select 0) setVariable ['Enh_isHostage',false,true];\
			      }];\
			   };\
			};\
			[_this,Enh_fnc_makeHostage] remoteExec ['call',0,true];\
		};\
	";
};
