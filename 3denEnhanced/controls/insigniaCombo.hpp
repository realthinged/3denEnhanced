class InsigniaCombo: Title
{
	attributeLoad =
	"\
		_ctrl = _this controlsGroupCtrl 100;\
		_ctrlPicture = _this controlsGroupCtrl 101;\
		_path = configProperties [configFile >> 'CfgUnitInsignia','isclass _x'];\
		missionNamespace setVariable ['Enh_insigniaTextures',[]];\
		{\
			_name = getText (_x >> 'displayName');\
			_index = _ctrl lbAdd _name;\
			(missionNamespace getVariable 'Enh_insigniaTextures') pushBack (getText (_x >> 'texture'));\
			_data = configName _x;\
			_ctrl lbSetData [_index,_data];\
			if (_value isEqualTo _data) then\
			{\
				_ctrl lbSetCurSel _index;\
				_curData = _ctrl lbData _index;\
				_ctrlPicture ctrlSetText (textures select _index);\
			};\
		} forEach _path;\
		\
		if (_value isEqualType true) then\
		{\
			_ctrl lbSetCurSel 0;\
			_curData = _ctrl lbData 0;\
			_ctrlPicture ctrlSetText (textures select 0);\
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
	h = ATTRIBUTE_CONTENT_W * GRID_W;
	class Controls: Controls
	{
		class Title: Title {};
		class Value: ctrlCombo
		{
			idc = 100;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			w = ATTRIBUTE_CONTENT_W * GRID_W;
			h = SIZE_M * GRID_H;
			onLBSelChanged =
			"\
				_ctrl = _this select 0;\
				_index = _this select 1;\
				_ctrlPicture = (ctrlParentControlsGroup _ctrl) controlsGroupCtrl 101;\
				_texture =  (missionNamespace getVariable 'Enh_insigniaTextures') select _index;\
				_ctrlPicture ctrlSetText _texture;\
			";
		};
		class Picture: ctrlStaticPicture
		{
			idc = 101;
			x = ATTRIBUTE_CONTENT_W * GRID_W / 1.2
			y = SIZE_M * GRID_H * 1.2;
			w = ATTRIBUTE_CONTENT_W * GRID_W / 2;
			h = ATTRIBUTE_CONTENT_W * GRID_W / 2;
		};
	};
};
