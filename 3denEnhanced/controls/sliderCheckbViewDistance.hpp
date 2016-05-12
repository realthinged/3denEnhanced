/*
This control retuns an array [number,bool] after it was saved for the first time
Controls needs some finetuning, on first load, the _value is a number not an array, which forces me to check if (_value isEqualType [])..
Gonna see if I can fix that later
*/
#define EDIT_W	10

class SliderCheckBviewDistance: Title
{
	attributeLoad =
	"\
		_ctrlGroup = _this;\
		_ctrlSlider = _ctrlGroup controlsgroupctrl 100;\
		_ctrlEdit = _ctrlGroup controlsgroupctrl 101;\
      _ctrlCheck = _ctrlGroup controlsgroupctrl 102;\
      if (_value isEqualType []) then {_ctrlCheck cbSetChecked (_value select 1)};\
      _value = if !(_value isEqualType []) then { _value  max (sliderrange _ctrlSlider select 0) min (sliderrange _ctrlSlider select 1)} else {(_value select 0) max (sliderrange _ctrlSlider select 0) min (sliderrange _ctrlSlider select 1)};\
		_ctrlEdit ctrlsettext (str round _value);\
		_ctrlSlider slidersetposition _value;\
	";
	attributeSave = "[round sliderposition (_this controlsGroupCtrl 100),cbchecked (_this controlsGroupCtrl 102)]";

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
            _value = if !(_value isEqualType []) then { _value  max (sliderrange _ctrlSlider select 0) min (sliderrange _ctrlSlider select 1)} else {(_value select 0) max (sliderrange _ctrlSlider select 0) min (sliderrange _ctrlSlider select 1)};\
				_ctrlEdit ctrlsettext (str round _value);\
				_ctrlSlider slidersetposition _value;\
			";
		};
		class Value: ctrlXSliderH
		{
			idc = 100;
			x = "pixelGrid * pixelW * 13.5";
			w = "pixelGrid * pixelW * 16.5";
			h = SIZE_M * GRID_H;
         sliderPosition = 1;
         sliderRange[] = {500,9999};
         lineSize = 100;
			onSliderPosChanged =
			"\
				_ctrlSlider = _this select 0;\
				_ctrlGroup = ctrlParentControlsGroup _ctrlSlider;\
				_ctrlEdit = _ctrlGroup controlsgroupctrl 101;\
				_value = sliderposition _ctrlSlider;\
				_ctrlEdit ctrlsettext (str round _value);\
			";
		};
      class Checkbox: ctrlCheckbox
      {
         idc = 102;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			w = SIZE_M * GRID_W;
			h = SIZE_M * GRID_H;
      };
	};
};
