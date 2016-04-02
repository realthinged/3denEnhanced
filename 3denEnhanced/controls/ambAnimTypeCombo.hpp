class AmbAnimTypeCombo: Title
{
	attributeLoad = "\
		_ctrl = _this controlsGroupCtrl 100;\
		_attCtrl = getText( _config >> 'control' );\
		_staticItemsCfg = configFile >> 'Cfg3DEN' >> 'Attributes' >> _attCtrl >> 'Controls' >> 'Value' >> 'items';\
		\
		_fnc_setValues = {\
			private [ '_index' ];\
			params[ '_path', [ '_apply', true ] ];\
			{\
				_cfg = _x;\
				if ( _apply ) then {\
					_index = _ctrl lbAdd getText( _cfg >> 'text' );\
					_ctrl lbSetData [ _index, getText( _cfg >> 'data' ) ];\
				}else{\
					_index = _foreachindex;\
				};\
				if ( !( _value isEqualType '' ) ) then {\
					if ( _index isEqualTo _value ) then {\
						_ctrl lbSetCurSel _index;\
					};\
				}else{\
					if ( _value == getText( _cfg >> 'data' ) ) then {\
						_ctrl lbSetCurSel _index;\
					};\
				};\
			}forEach configProperties [_path,'isclass _x'];\
		};\
		if ( isClass _staticItemsCfg ) then {\
			[ _staticItemsCfg, false ] call _fnc_setValues;\
		};\
		\
		_dynamicItemsCfg = configFile >> 'Cfg3DEN' >> 'Attributes' >> _attCtrl >> 'Controls' >> 'Value' >> 'ItemsConfig';\
		if ( isNumber( _dynamicItemsCfg >> 'localConfig' ) && { getNumber( _dynamicItemsCfg >> 'localConfig' ) > 0 } ) then {\
			_class = getArray( _dynamicItemsCfg >> 'path' ) select 0;\
			_path = missionConfigFile >> _class;\
			if ( isClass _path ) then {\
				_path call _fnc_setValues;\
			};\
		};\
	";

	attributeSave = "\
		_ctrl = (_this controlsGroupCtrl 100);\
		_value = _ctrl lbData lbCurSel _ctrl;\
		_att = getText( _config >> 'property' );\
		collect3DENHistory {\
			{\
				_x set3DENAttribute [_att,_value];\
			} forEach ( get3DENSelected 'object' );\
		};\
	";

	class Controls: Controls
	{
		class Title: Title{};
		class Value: ctrlCombo
		{
			idc = 100;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			w = ATTRIBUTE_CONTENT_W * GRID_W;
			h = SIZE_M * GRID_H;

			class Items
			{
				class STAND
				{
					text = $STR_ambAnimCombo_stand;
					data = "STAND";
					default = 1;
				};
				class STAND_IA
				{
					text = $STR_ambAnimCombo_standIA;
					data = "STAND_IA";
				};
				class STAND_U1
				{
					text = $STR_ambAnimCombo_standU1;
					data = "STAND_U1";
				};
				class STAND_U2
				{
					text = $STR_ambAnimCombo_standU2;
					data = "STAND_U2";
				};
				class STAND_U3
				{
					text = $STR_ambAnimCombo_standU3;
					data = "STAND_U3";
				};
				class WATCH1
				{
					text = $STR_ambAnimCombo_watch1;
					data = "WATCH1";
				};
				class WATCH2
				{
					text = $STR_ambAnimCombo_watch2;
					data = "WATCH2";
				};
				class LISTEN_BRIEFING
				{
					text = $STR_ambAnimCombo_listenBriefing;
					data = "LISTEN_BRIEFING";
				};
				class LEAN_ON_TABLE
				{
					text = $STR_ambAnimCombo_leanOnTable;
					data = "LEAN_ON_TABLE";
				};
				class LEAN
				{
					text = $STR_ambAnimCombo_lean;
					data = "LEAN";
				};
				class BRIEFING
				{
					text = $STR_ambAnimCombo_briefing;
					data = "BRIEFING";
				};
				class BRIEFING_POINT_LEFT
				{
					text = $STR_ambAnimCombo_briefingPointLeft;
					data = "BRIEFING_POINT_LEFT";
				};
				class BRIEFING_POINT_RIGHT
				{
					text = $STR_ambAnimCombo_briefingPointRight;
					data = "BRIEFING_POINT_right";
				};
				class BRIEFING_POINT_TABLE
				{
					text = $STR_ambAnimCombo_briefingPointTable;
					data = "BRIEFING_POINT_TABLE";
				};
				class SIT_U1
				{
					text = $STR_ambAnimCombo_sitU1;
					data = "SIT_U1";
				};
				class SIT_U2
				{
					text = $STR_ambAnimCombo_sitU2;
					data = "SIT_U2";
				};
				class SIT_U3
				{
					text = $STR_ambAnimCombo_sitU3;
					data = "SIT_U3";
				};
				class SIT1
				{
					text = $STR_ambAnimCombo_sit1;
					data = "SIT1";
				};
				class SIT2
				{
					text = $STR_ambAnimCombo_sit2;
					data = "SIT2";
				};
				class SIT3
				{
					text = $STR_ambAnimCombo_sit3;
					data = "SIT3";
				};
				class SIT_AT_TABLE
				{
					text = $STR_ambAnimCombo_sitAtTable;
					data = "SIT_AT_TABLE";
				};
				class SIT_LOW
				{
					text = $STR_ambAnimCombo_sitLow;
					data = "SIT_LOW";
				};
				class SIT_LOW_U
				{
					text = $STR_ambAnimCombo_sitLowU;
					data = "SIT_LOW_U";
				};
				class KNEEL
				{
					text = $STR_ambAnimCombo_kneel;
					data = "KNEEL";
				};
				class PRONE_INJURED_U1
				{
					text = $STR_ambAnimCombo_proneInjured2;
					data = "PRONE_INJURED_U1";
				};
				class PRONE_INJURED_U2
				{
					text = $STR_ambAnimCombo_proneInjured1;
					data = "PRONE_INJURED_U2";
				};
				class PRONE_INJURED
				{
					text = $STR_ambAnimCombo_proneInjured;
					data = "PRONE_INJURED";
				};
				class REPAIR_VEH_STAND
				{
					text = $STR_ambAnimCombo_repairVehStand;
					data = "REPAIR_VEH_STAND";
				};
				class REPAIR_VEH_KNEEL
				{
					text = $STR_ambAnimCombo_repairVehKneel;
					data = "REPAIR_VEH_KNEEL";
				};
				class REPAIR_VEH_PRONE
				{
					text = $STR_ambAnimCombo_repairVehProne;
					data = "REPAIR_VEH_PRONE";
				};
				// class KNEEL_TREAT //Bugged, won't loop
				// {
					// text = "Kneel treat (Treating wounded soldier)";
					// data = "KNEEL_TREAT";
				// };
				// class SIT_HIGH1//Bugged, unit is spawned underneath surface
				// {
					// text = "Sit high 1 (Sitting on higher object, legs swinging, needs a rifle)";
					// data = "SIT_HIGH1";
				// };
				// class SIT_HIGH2//Bugged, unit is spawned underneath surface
				// {
					// text = "Sit high 2 (Sitting on higher object, legs swinging, needs a rifle)";
					// data = "SIT_HIGH2";
				// };
				// class SIT_SAD1 //Bugged, unit is spawned underneath surface
				// {
					// text = "Sit sad 1 (Sitting on chair, looking sad)";
					// data = "SIT_SAD1";
				// };
				// class SIT_SAD2 //Bugged, unit is spawned underneath surface
				// {
					// text = "Sit sad 2 (Sitting on chair, looking sad)";
					// data = "SIT_SAD2";
				// };
			};
		};
	};
};
