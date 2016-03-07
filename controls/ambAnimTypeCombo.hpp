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

	class Controls {
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
					text = "Stand (Slightly turning to the sides, needs rifle!)";
					data = "STAND";
					default = 1;
				};
				class STAND_IA
				{
					text = "Stand IA (Default A3 animation)";
					data = "STAND_IA";
				};
				class STAND_U1
				{
					text = "Stand U1 (Slightly turning to the sides, no weapon)";
					data = "STAND_U1";
				};
				class STAND_U2
				{
					text = "Stand U2 ((Slightly turning to the sides, no weapon))";
					data = "STAND_U2";
				};
				class STAND_U3
				{
					text = "Stand U3 ((Slightly turning to the sides, no weapon))";
					data = "STAND_U3";
				};
				class WATCH1
				{
					text = "Watch 1 (Standing and turning around)";
					data = "WATCH1";
				};
				class WATCH2
				{
					text = "Watch 2 (Standing and turning around)";
					data = "WATCH2";
				};
				class LISTEN_BRIEFING
				{
					text = "Listen Briefing (Hands behind back, no weapon)";
					data = "LISTEN_BRIEFING";
				};
				class LEAN_ON_TABLE
				{
					text = "Lean on table (Standing while leaning on table)";
					data = "LEAN_ON_TABLE";
				};
				class LEAN
				{
					text = "Lean";
					data = "LEAN";
				};
				class BRIEFING
				{
					text = "Briefing (Ambient briefing loop)";
					data = "BRIEFING";
				};
				class BRIEFING_POINT_LEFT
				{
					text = "Briefing pointing left (Pointing left & high)";
					data = "BRIEFING_POINT_LEFT";
				};
				class BRIEFING_POINT_RIGHT
				{
					text = "Briefing pointing right (Pointing right & high)";
					data = "BRIEFING_POINT_right";
				};
				class BRIEFING_POINT_TABLE
				{
					text = "Briefing pointing down (pointing front & low)";
					data = "BRIEFING_POINT_TABLE";
				};
				class SIT_U1
				{
					text = "Sit U1 (Sitting on bench or similar, no weapon)";
					data = "SIT_U1";
				};
				class SIT_U2
				{
					text = "Sit U2 (Sitting on bench or similar, no weapon)";
					data = "SIT_U2";
				};
				class SIT_U3
				{
					text = "Sit U3 (Sitting on bench or similar, no weapon)";
					data = "SIT_U3";
				};
				class SIT1
				{
					text = "Sit 1 (Sitting on bench or similar)";
					data = "SIT1";
				};
				class SIT2
				{
					text = "Sit 2 (Sitting on bench or similar)";
					data = "SIT2";
				};
				class SIT3
				{
					text = "Sit 3 (Sitting on bench or similar, no weapon)";
					data = "SIT3";
				};
				class SIT_AT_TABLE
				{
					text = "Sit at table";
					data = "SIT_AT_TABLE";
				};
				class SIT_LOW
				{
					text = "Sit low (Sitting on the ground, with weapon)";
					data = "SIT_LOW";
				};
				class SIT_LOW_U
				{
					text = "Sit low U (Sitting on the ground, no weapon)";
					data = "SIT_LOW_U";
				};
				class SIT_HIGH1
				{
					text = "Sit high 1 (Sitting on higher object, legs swinging, needs a rifle)";
					data = "SIT_HIGH1";
				};
				class SIT_HIGH2
				{
					text = "Sit high 2 (Sitting on higher object, legs swinging, needs a rifle)";
					data = "SIT_HIGH2";
				};
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
				class KNEEL
				{
					text = "Kneel";
					data = "KNEEL";
				};
				class PRONE_INJURED_U1
				{
					text = "Prone injured 1 (Laying wounded on back, no weapon)";
					data = "PRONE_INJURED_U1";
				};
				class PRONE_INJURED_U2
				{
					text = "Prone injured 2 (Laying wounded on back, no weapon)";
					data = "PRONE_INJURED_U2";
				};
				class PRONE_INJURED
				{
					text = "Prone injured (Laying wounded on back, with or without weapon)";
					data = "PRONE_INJURED";
				};
				// class KNEEL_TREAT //Bugged, won't loop
				// {
					// text = "Kneel treat (Treating wounded soldier)";
					// data = "KNEEL_TREAT";
				// };
				class REPAIR_VEH_STAND 
				{
					text = "Repair vehicle (Reparing vehicle, standing)";
					data = "REPAIR_VEH_STAND";
				};
				class REPAIR_VEH_KNEEL
				{
					text = "Repair vehicle (Reparing vehicle, Kneeling)";
					data = "REPAIR_VEH_KNEEL";
				};
				class REPAIR_VEH_PRONE
				{
					text = "Repair vehicle (Reparing vehicle, Prone)";
					data = "REPAIR_VEH_PRONE";
				};
			};
		};
	};
};