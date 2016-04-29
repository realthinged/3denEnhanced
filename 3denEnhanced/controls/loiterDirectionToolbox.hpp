class LoiterDirectionToolbox: Title
{
	attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel ([0,1] find _value)";
	attributeSave = "[0,1] select (missionnamespace getvariable ['LoiterDirection_value',0])";
	h = "2 * 5 * (pixelH * 	1.25 * 4)";
	class Controls: Controls
	{

		class Title: Title{};
		class Value: ctrlToolboxPicture
		{
			idc = 100;
			w = "82 * (pixelW * 	1.25 * 4)";
			x = "48 * (pixelW * 	1.25 * 4)";
			h = "2 * 	5 * (pixelH * 	1.25 * 4)";
			y = 0;
			sizeEx = "4.32 * (1 / (getResolution select 3)) * 1.25 * 4";
			onToolboxSelChanged = "missionnamespace setvariable ['LoiterDirection_value',_this select 1]";
			values[] = {0,1};
			style = "0x02 + 0x30 + 0x800";
			tooltipMaxWidth = 0.5;
			type = 6;
			default = 0;
			columns = 2;
			strings[] = {"\a3\3DEN\Data\Attributes\LoiterDirection\ccw_ca.paa","\a3\3DEN\Data\Attributes\LoiterDirection\cw_ca.paa"};
		};
	};
};
