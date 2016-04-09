/*
This control retuns an array [number,bool] after it was saved for the first time
Controls needs some finetuning, on first load, the _value is a number not an array, which forces me to check if (_value isEqualType [])..
Gonna see if I can fix that later
*/
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
			x = "(48 + 	82 - 	10) * (pixelW * 1.25 * 4)";
			y = 0;
			h = "5 * (pixelH * 1.25 * 4)";
			w = "10 * (pixelW * 1.25 * 4)";
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
			x = "53 * (pixelW * 1.25 * 4)";
			y = 0;
			w = "(82 - 10) * (pixelW * 1.25 * 3.7)";
			h = "5 * (pixelH * 1.25 * 4)";
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
         x = "48 * (pixelW * 	1.25 * 4)";
         y = 0;
         w = "5 * (pixelW * 	1.25 * 4)";
         h = "5 * (pixelH * 	1.25 * 4)";
      };
	};
};
