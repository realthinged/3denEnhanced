class GarrisonRadiusCombo: Title
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

	attributeSave =
	"\
		_ctrl = _this controlsGroupCtrl 100;\
		_ctrl lbData lbCurSel _ctrl;\
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
				class radius_20
				{
					text = "20 m";
					data = "20";
					default = 1;
				};
				class radius_50
				{
					text = "50 m";
					data = "50";
				};
				class radius_100
				{
					text = "100 m";
					data = "100";
				};
				class radius_200
				{
					text = "200 m";
					data = "200";
				};
				class radius_400
				{
					text = "400 m";
					data = "400";
				};
				class radius_700
				{
					text = "700 m";
					data = "700";
				};
				class radius_1000
				{
					text = "1000 m";
					data = "1000";
				};
			};
		};
	};
};
