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
					text = "Stand (Default A3 animation)";
					data = "STAND_IA";
				};
				class SIT_LOW
				{
					text = "Sit (Sitting on the ground, with weapon";
					data = "SIT_LOW";
				};
				class KNEEL
				{
					text = "Kneel (Kneeling, with weapon)";
					data = "KNEEL";
				};
				class LEAN
				{
					text = "Lean";
					data = "LEAN";
				};
				class WATCH
				{
					text = "Watch (Standing and turning around)";
					data = "WATCH";
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
			};
		};
	};
};