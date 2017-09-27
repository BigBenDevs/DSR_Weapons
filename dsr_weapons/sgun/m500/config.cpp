/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 Desolation Dev Team
 *
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */
#include "basicdefines_A3.hpp"
class CfgPatches
{
	class dsr_weapons_m500
	{
		units[]={};
		weapons[]={"dsr_m500"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F", "dsr_weapons", "a3_sounds_f"};
	};
};
class BoltActionWeaponBase;

/// All firemodes, to be sure
class Mode_SemiAuto;

/// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class EventHandlers;
	};
	class DSR_Weapons_SGun_M500_Base: Rifle_Base_F /// Just basic values common for all testing rifle variants
	{
		class WeaponEffects {
			class BoltEffects {
				Gesutre = "GestureFireLRR";
				Sound [] = {"a3\sounds_f\weapons\other\reload_bolt_1",0.1,1,30};
				SoundDistance = 24;
			};
		};
		class EventHandlers: EventHandlers
			{
				fired="[(_this select 0)] spawn DS_fnc_doWepEffect";
			};
		
		
		magazines[] = {"6Rnd_12g_Slug", "6Rnd_12g_Buck"}; /// original custom made magazines and a group of several standardized mags
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		magazineReloadSwitchPhase = 0.4; /// part of reload animation when new magazine ammo count should affect "revolving" animation source
		discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default

		// Size of recoil sway of the cursor
		maxRecoilSway=0.0225;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=1.25;
		/// inertia coefficient of the weapon
		inertia = 0.5;
		fireSpreadAngle = 0.95;
		/// positive value defines speed of the muzzle independent on the magazine setting, negative value is a coefficient of magazine initSpeed
		initSpeed = -1; /// this means that initSpeed of magazine is used

		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 	/// this can be set, but having some common helps a bit
				compatibleItems[] = {}; 				/// A custom made suppressor for this weapon
				iconPosition[] = {0.0, 0.45};							/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
				iconScale = 0.2;										/// scale of icon described in iconPicture
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa"; 	/// icon for selected slot
				iconPinpoint = "Center"; 										/// top, bottom, left, right, center alignment of the icon on snap point
			};
			class CowsSlot: CowsSlot /// default accessories for this slot
			{
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot /// default accessories for this slot
			{
				iconPosition[] = {0.20, 0.45};
				iconScale = 0.25;
				compatibleItems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				compatibleItems[] = {};
			};
		};

/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;

		distanceZoomMin = 300;
		distanceZoomMax = 300;
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

		descriptionShort = "M-500 Shotgun"; /// displayed on mouseOver in Inventory
		handAnim[] = {"OFP2_ManSkeleton", "dsr_weapons\sgun\m500\anims\m500_handAnim_base.rtm"}; /// M16 Hand Animation
		dexterity = 1.8;
		description = "12 Guage M-500 Pump Action Shotgun";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "DSR_Weapons";
		icon = "iconObject_1x1";
//caseless ammo//
		caseless[] = {"",1,1,1};  /// no sound of ejected brass
		soundBullet[] = {caseless,1};

		selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?

		modes[] = {Single}; /// Includes fire modes for AI

    ////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////

		class Single: Mode_SemiAuto /// Pew
		{
		   sounds[] = {"StandardSound"};
		   class StandardSound
		   {
			begin1[] = {"\dsr_weapons\sgun\m500\sounds\shotgun1", 1, 1, 1300};
			begin2[] = {"\dsr_weapons\sgun\m500\sounds\shotgun2", 1, 1, 1300};
			begin3[] = {"\dsr_weapons\sgun\m500\sounds\shotgun3", 1, 1, 1300};
			begin4[] = {"\dsr_weapons\sgun\m500\sounds\shotgun4", 1, 1, 1300};
			begin5[] = {"\dsr_weapons\sgun\m500\sounds\shotgun5", 1, 1, 1300};
			soundBegin[] = {"begin1", 0.20, "begin2", 0.20, "begin3", 0.20, "begin4", 0.20, "begin5", 0.20};
			weaponSoundEffect = "DefaultRifle";
		   };
	        reloadTime = 0.5;
			reloadSound[] = {"A3\sounds_f\weapons\M320\M320_reload",0.1,1,30};
			minRange = 1;
			minRangeProbab = 0.45;
		};
		aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
		drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
		reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_MX",db-8,1, 30}; /// custom made sounds
	};

	class DSR_SGun_M500: dsr_weapons_sgun_m500_base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "M500 .12 Gauge"; /// some name
		model = "\dsr_weapons\sgun\m500\dsr_m500.p3d"; /// path to model

		picture = "\dsr_weapons\sgun\m500\data\ui\dsr_m500_ca.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100; /// some rough estimate
		};
	};

	/**** SLOTABLE WEAPONS ****/

	/*class Test_weapon_01_holo_pointer_F: Test_weapon_01_F /// standard issue variant with holo optics and laser pointer
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};*/

	/// include accessory from separate file to not clutter this one
	#include "accessory.hpp"
};
