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
	attributeSave = "sliderposition (_this controlsGroupCtrl 100)";

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
				_value = _value max (sliderrange _ctrlSlider select 0) min (sliderrange _ctrlSlider select 1);\
				_ctrlEdit ctrlsettext (str ((round (_value * 10)) / 10) + 'x');\
				_ctrlSlider slidersetposition _value;\
			";
		};
		class Value: ctrlXSliderH
		{
			idc = 100;
			x = "48 * (pixelW * 1.25 * 4)";
			y = 0;
			w = "(82 - 10) * (pixelW * 1.25 * 4)";
			h = "5 * (pixelH * 1.25 * 4)";
         sliderPosition = 1;
         sliderRange[] = {0.1,120};
			onSliderPosChanged =
			"\
				_ctrlSlider = _this select 0;\
				_ctrlGroup = ctrlParentControlsGroup _ctrlSlider;\
				_ctrlEdit = _ctrlGroup controlsgroupctrl 101;\
				_value = sliderposition _ctrlSlider;\
				_ctrlEdit ctrlsettext (str ((round (_value * 10)) / 10) + 'x');\
			";
		};
	};
};
