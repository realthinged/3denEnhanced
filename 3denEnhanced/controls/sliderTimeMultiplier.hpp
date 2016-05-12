#define EDIT_W	10

class SliderTimeMultiplier: Title
{
	attributeLoad =
	"\
		_ctrlGroup = _this;\
		_ctrlSlider = _ctrlGroup controlsgroupctrl 100;\
		_ctrlEdit = _ctrlGroup controlsgroupctrl 101;\
		_value = _value max (sliderrange _ctrlSlider select 0) min (sliderrange _ctrlSlider select 1);\
		_ctrlEdit ctrlsettext (str ((round (_value * 10)) / 10) + 'x');\
		_ctrlSlider slidersetposition _value;\
	";
	attributeSave =
	"\
		_value = sliderposition (_this controlsGroupCtrl 100);\
		if (_value >= 1) then\
		{\
			_value = round _value;\
		}\
		else\
		{\
			_value = [_value,1] call BIS_fnc_cutDecimals;\
		};\
		_value;\
	";

	class Controls: Controls
	{
		class Title: Title{};
      class Edit: ctrlEdit
		{
			idc = 101;
			canModify = 1;
			x = (ATTRIBUTE_TITLE_W + ATTRIBUTE_CONTENT_W - EDIT_W) * GRID_W;
			w = EDIT_W * GRID_W;
			h = SIZE_M * GRID_H;
			onKillFocus =
			"\
				_ctrlEdit = _this select 0;\
				_ctrlGroup = ctrlParentControlsGroup _ctrlEdit;\
				_ctrlSlider = _ctrlGroup controlsgroupctrl 100;\
				_value = parsenumber ctrltext _ctrlEdit;\
				_value = _value max (sliderrange _ctrlSlider select 0) min (sliderrange _ctrlSlider select 1);\
				_ctrlEdit ctrlsettext (str ((round (_value * 10)) / 10) + 'x');\
				_ctrlSlider slidersetposition _value;\
			";
		};
		class Value: ctrlXSliderH
		{
			idc = 100;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			w = (ATTRIBUTE_CONTENT_W - EDIT_W) * GRID_W;
			h = SIZE_M * GRID_H;
         sliderPosition = 1;
         sliderRange[] = {0,120};
			onSliderPosChanged =
			"\
				_ctrlSlider = _this select 0;\
				_ctrlGroup = ctrlParentControlsGroup _ctrlSlider;\
				_ctrlEdit = _ctrlGroup controlsgroupctrl 101;\
				_value = sliderposition _ctrlSlider;\
				if (_value >= 1) then\
				{\
					_value = round _value;\
					_ctrlEdit ctrlsettext (str _value + 'x');\
				}\
				else\
				{\
					_value = [_value,1] call BIS_fnc_cutDecimals;\
					_ctrlEdit ctrlsettext (str _value + 'x');\
				};\
			";
		};
	};
};
