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
	class dsr_weapons_sten
	{
		units[]={};
		weapons[]={"dsr_sten"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F", "dsr_weapons"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
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
	};
	class dsr_weapons_crafted_sten_base: Rifle_Base_F /// Just basic values common for all testing rifle variants
	{
		magazines[] = {32Rnd_9x19mm_Mag}; /// original custom made magazines and a group of several standardized mags
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		magazineReloadSwitchPhase = 0.4; /// part of reload animation when new magazine ammo count should affect "revolving" animation source
		discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default
		maxRecoilSway=0.095;
        swayDecaySpeed=1.25;
		/// inertia coefficient of the weapon
		inertia = 0.4;
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
				compatibleItems[] = {"muzzle_snds_M"}; 				/// A custom made suppressor for this weapon
				iconPosition[] = {0.0, 0.45};							/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
				iconScale = 0.2;										/// scale of icon described in iconPicture
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa"; 	/// icon for selected slot
				iconPinpoint = "Center"; 										/// top, bottom, left, right, center alignment of the icon on snap point
			};
			class CowsSlot: CowsSlot /// default accessories for this slot
			{
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot /// default accessories for this slot
			{
				iconPosition[] = {0.20, 0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				//compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
			};
		};
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Sten"; /// displayed on mouseOver in Inventory
		handAnim[] = {"OFP2_ManSkeleton", "dsr_weapons\crafted\sten\data\anims\stenHandAnim.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;
		description = "Crafted Sten SMG";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "DSR_Weapons";
		icon = "iconObject_1x1";
		caseless[] = {"",1,1,1};  /// no sound of ejected brass
		soundBullet[] = {caseless,1};
		selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?
		modes[] = {Single, FullAuto, single_medium_optics1, single_far_optics2}; /// Includes fire modes for AI
		class Single: Mode_SemiAuto /// Pew
		{
			sounds[] =
			{
				StandardSound, // default sound
				SilencedSound // silenced sound - weapon with silencer on
			};
			class StandardSound
			{
				soundSetShot[] =
				{
					Mk20_Shot_SoundSet,
					Mk20_Tail_SoundSet
				};
			};
			class SilencedSound
			{
				soundSetShot[] =
				{
					Mk20_silencerShot_SoundSet,
					Mk20_silencerTail_SoundSet
				};
			};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.5011872,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",0.25118864,1,5};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",0.56234133,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",0.56234133,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.818383,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.818383,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.818383,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_01",0.8912509,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_02",0.8912509,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_03",0.8912509,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.05;
			dispersion = 0.00131;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 50;
		};
		class single_medium_optics1: Single /// Pew for AI with collimator sights
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2; minRangeProbab = 0.2;
			midRange = 450; midRangeProbab = 0.7;
			maxRange = 600; maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1	/// Pew for AI with better sights
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100; minRangeProbab = 0.1;
			midRange = 500; midRangeProbab = 0.6;
			maxRange = 700; maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
	};
	class dsr_sten: dsr_weapons_crafted_sten_base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Sten (Not currently used)"; /// some name
		model = "\dsr_weapons\crafted\sten\dsr_sten.p3d"; /// path to model
		picture = "\dsr_weapons\arifle\cz805\data\ui\picture_cz805_a1_ca.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa"; /// weapon with grenade launcher should be marked such way
		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100; /// some rough estimate
		};
	};
	#include "accessory.hpp"
};
