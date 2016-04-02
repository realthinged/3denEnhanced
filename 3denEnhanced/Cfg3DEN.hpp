#include "\a3\3DEN\UI\macros.inc"

//Bases classes for all controls
class ctrlCombo;
class ctrlStatic;

class Cfg3DEN
{
	#include "notifications.hpp"
	#include "connections.hpp"
	class Attributes
	{
		//Bases classes for all controls
		class Default; 
		class Title: Default{}; 
		class TitleWide: Default{}; 
		
		#include "controls\ambAnimCombTypeCombo.hpp"
		#include "controls\ambAnimEquipCombo.hpp"
		#include "controls\ambAnimTypeCombo.hpp"
		#include "controls\garrisonFactionCombo.hpp"
		#include "controls\garrisonCoverageCombo.hpp"
		#include "controls\engineOnCombo.hpp"
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
				#include "missionAttributes\introText.hpp"
			};	
		};
		class Preferences
		{
			class AttributeCategories
			{
				#include "missionAttributes\music.hpp"
				#include "missionAttributes\garrisonBuildings.hpp"
				#include "missionAttributes\toggleMapIDs.hpp"
			};
		};
	};
	class Object
	{
		class AttributeCategories
		{
			#include "objectAttributes\advancedDamageUnit.hpp"
			#include "objectAttributes\advancedDamageVehicle.hpp"
			#include "objectAttributes\StatesSpecial.hpp"
			#include "objectAttributes\patrol.hpp"
			#include "objectAttributes\disableAI.hpp"
			#include "objectAttributes\ambientAnimation.hpp"
			#include "objectAttributes\ambientAnimationCombat.hpp"
			#include "objectAttributes\advancedSkill.hpp"
			#include "objectAttributes\inventory.hpp"
			#include "objectAttributes\state.hpp"
		};
	};
};
