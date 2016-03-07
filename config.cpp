#include "\a3\3DEN\UI\macros.inc"
#include "display3DEN.hpp"
//Bases classes for all controls
class ctrlCombo;
class ctrlStatic;
class CfgPatches

{
	class Revo_3denEnhanced
	{
		units[]= {};
		weapons[]= {};
		requiredVersion= 1.57;
		requiredAddons[]= {3den};
		author[] = {"Revo"};
	};
};

class CfgGroups
{
	class Empty
	{
		class civilian;
		class Revo_compositions: civilian
		{	
			name = "Custom Compositions";
			#include "compositions\fob.hpp"
			#include "compositions\antiAir.hpp"
			#include "compositions\roadblocks.hpp"
			#include "compositions\misc.hpp"
			#include "compositions\camps.hpp"
			#include "compositions\training.hpp"
		};
	};
};

class CfgFunctions
{
	class Revo
	{
		class Eden_Enhanced
		{
			file="3den_enhanced\functions";
			class playMusic {};
			class logClassName {};
			class setRandomDir {};
		};
	};
};

class Cfg3DEN
{
	#include "notifications.hpp"
	
	class Attributes
	{
		//Bases classes for all controls
		class Default; 
		class Title: Default{}; 
		class TitleWide: Default{}; 
		
		#include "controls\ambAnimCombTypeCombo.hpp"
		#include "controls\ambAnimEquipCombo.hpp"
		#include "controls\ambAnimTypeCombo.hpp"
	};

	class Mission
	{
		class Intel
		{
			class AttributeCategories
			{			
				#include "missionAttributes\timeMultiplier.hpp"
				#include "missionAttributes\visualSettings.hpp"
				#include "missionAttributes\enableEnvironment.hpp"
				#include "missionAttributes\advancedFog.hpp"
			};
		};
		class Scenario
		{
			class AttributeCategories
			{			
				#include "missionAttributes\volume.hpp"
				//#include "missionAttributes\introText.hpp"//Works if code is called via debugConsole, but not when called via 3den attribute
			};	
		};
		class Preferences
		{
			class AttributeCategories
			{
				#include "missionAttributes\music.hpp"
			};
		};
	};
	class Object
	{
		class AttributeCategories
		{
			#include "objectAttributes\advancedDamageUnit.hpp"
			#include "objectAttributes\advancedDamageVehicle.hpp"
			#include "objectAttributes\StatesSpecial.hpp"//works,except save loadout(dedicated only)
			#include "objectAttributes\patrol.hpp"//works,behaviour issue still exists
			#include "objectAttributes\disableAI.hpp"
			#include "objectAttributes\ambientAnimation.hpp"
			#include "objectAttributes\ambientAnimationCombat.hpp"
			#include "objectAttributes\advancedSkill.hpp"
			#include "objectAttributes\inventory.hpp"
			#include "objectAttributes\state.hpp"
		};
	};
};




