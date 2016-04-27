class UnitTraits
{
	displayName = $STR_unitTraits_headline;
	collapsed = 1;
	class Attributes
	{
		class Medic
		{
			displayName = $STR_unitTraits_medic_displayName;
			tooltip = $STR_unitTraits_medic_tooltip;
			property = "Enh_unitTraits_medic";
			control = "UnitTraitsCombo";
			expression =
			"\
				switch (parseNumber _value) do\
				{\
					case 2: {};\
					case 1: {_this setUnitTrait ['Medic',true];};\
					case 0: {_this setUnitTrait ['Medic',false]};\
				};\
			";
			typeName = "NUMBER";
			defaultValue = "2";
			condition = "objectControllable";
		};
		class Engineer: Medic
		{
			displayName = $STR_unitTraits_engineer_displayName;
			tooltip = $STR_unitTraits_engineer_tooltip;
			property = "Enh_unitTraits_engineer";
			expression =
			"\
				switch (parseNumber _value) do\
				{\
					case 2: {};\
					case 1: {_this setUnitTrait ['Engineer',true];};\
					case 0: {_this setUnitTrait ['Engineer',false]};\
				};\
			";
		};
		class ExplosiveSpecialist: Medic
		{
			displayName = $STR_unitTraits_explosiveSpecialist_displayName;
			tooltip = $STR_unitTraits_explosiveSpecialist_tooltip;
			property = "Enh_unitTrait_explosiveSpecialist";
			expression =
			"\
				switch (parseNumber _value) do\
				{\
					case 2: {};\
					case 1: {_this setUnitTrait ['ExplosiveSpecialist',true];};\
					case 0: {_this setUnitTrait ['ExplosiveSpecialist',false]};\
				};\
			";
		};
		class UAVHacker: Medic
		{
			displayName = $STR_unitTraits_UAVHacker_displayName;
			tooltip = $STR_unitTraits_UAVHacker_tooltip;
			property = "Enh_unitTrait_UAVHacker";
			expression =
			"\
				switch (parseNumber _value) do\
				{\
					case 2: {};\
					case 1: {_this setUnitTrait ['UAVHacker',true];};\
					case 0: {_this setUnitTrait ['UAVHacker',false]};\
				};\
			";
		};
		class Camouflage
		{
         displayName = $STR_camouflageCoef_displayName;
         tooltip = $STR_camouflageCoef_tooltip;
         property = "Enh_unitTraits_camouflage";
         control = "EditShort";
         expression =
         "\
            if (_value != 1) then\
            {\
               _this setUnitTrait ['CamouflageCoef',_value];\
            };\
         ";
         defaultValue = "1";
         typeName = "NUMBER";
         condition = "objectControllable";
		};
		class AudibleCoef: Camouflage
		{
			displayName = $STR_audibleCoef_displayName;
         tooltip = $STR_audibleCoef_tooltip;
			property = "Enh_unitTraits_audibleCoef";
			expression =
         "\
            if (_value != 1) then\
            {\
               _this setUnitTrait ['AudibleCoef',_value];\
            };\
         ";
		};
      class LoadCoef: Camouflage
      {
         displayName = $STR_loadCoef_displayName;
         tooltip = $STR_loadCoef_tooltip;
         property = "Enh_unitTraits_loadCoef";
         expression =
         "\
            if (_value != 1) then\
            {\
               _this setUnitTrait ['LoadCoef',_value];\
            };\
         ";
      };
	};
};
