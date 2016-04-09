#include "\a3\3DEN\UI\macros.inc"

//Bases classes for all controls
class ctrlCombo;
class ctrlStatic;
class ctrlEdit;
class ctrlXSliderH;
class ctrlCheckbox;

class Cfg3DEN
{
	#include "notifications.hpp"
	#include "connections.hpp"
	class Attributes
	{
		// Base class templates
		class Default;
		class Title: Default
		{
			class Controls
			{
				class Title;
			};
		};

		#include "controls\ambAnimCombTypeCombo.hpp"
		#include "controls\ambAnimEquipCombo.hpp"
		#include "controls\ambAnimTypeCombo.hpp"
		#include "controls\garrisonFactionCombo.hpp"
		#include "controls\garrisonCoverageCombo.hpp"
		#include "controls\sliderTimeMultiplier.hpp"
		#include "controls\sliderCheckbViewDistance.hpp"
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
				#include "missionAttributes\establishingShot.hpp"
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
		class Multiplayer
		{
			class AttributeCategories
			{
				class Respawn
				{
					class Attributes
					{
						#include "missionAttributes\saveGearAllPlayers.hpp"
						#include "missionAttributes\respawnTickets.hpp"
					};
				};
				#include "missionAttributes\dynamicGroups.hpp"
			};
		};
	};
	class Object
	{
		class AttributeCategories
		{
			#include "objectAttributes\advancedDamageUnit.hpp"
			#include "objectAttributes\advancedDamageVehicle.hpp"
			#include "objectAttributes\randomPatrol.hpp"
			#include "objectAttributes\disableAI.hpp"
			#include "objectAttributes\ambientAnimation.hpp"
			#include "objectAttributes\ambientAnimationCombat.hpp"
			#include "objectAttributes\advancedSkill.hpp"
			class StateSpecial
			{
				class Attributes
				{
					#include "objectAttributes\setCaptive.hpp"
					#include "objectAttributes\allowSprint.hpp"
					#include "objectAttributes\disableBISRevive.hpp"
					#include "objectAttributes\makeHostage.hpp"
					#include "objectAttributes\enableHeadlights.hpp"
					#include "objectAttributes\allowCrewInImmobile.hpp"
					#include "objectAttributes\engineOn.hpp"
					#include "objectAttributes\limitSpeed.hpp"
				};
			};
			class Inventory
			{
				class Attributes
				{
					#include "objectAttributes\removeWeapons.hpp"
					#include "objectAttributes\clearInventory.hpp"
					#include "objectAttributes\removeFAKs.hpp"
					#include "objectAttributes\removeNVG.hpp"
					#include "objectAttributes\removeMap.hpp"
					#include "objectAttributes\removeGPS.hpp"
					#include "objectAttributes\addGunLight.hpp"
					#include "objectAttributes\arsenal.hpp"
					#include "objectAttributes\clearVehCargo.hpp"
				};
			};
			class State
			{
				class Attributes
				{
					#include "objectAttributes\stance.hpp"
					#include "objectAttributes\fatigue.hpp"
					#include "objectAttributes\suppression.hpp"
				};
			};
		};
	};
};
