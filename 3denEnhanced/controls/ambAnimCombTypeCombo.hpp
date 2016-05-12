class AmbAnimCombTypeCombo: Title
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

	class Controls: Controls{
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
				class SIT_LOW
				{
					text = $STR_ambAnimCombo_sitLow;
					data = "SIT_LOW";
				};
				class KNEEL
				{
					text = $STR_ambAnimCombo_kneel;
					data = "KNEEL";
				};
				class LEAN
				{
					text = $STR_ambAnimCombo_lean;
					data = "LEAN";
				};
				class WATCH
				{
					text = $STR_ambAnimCombo_watch;
					data = "WATCH";
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
			};
		};
	};
};
