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
class CfgPatches
{
	class dsr_weapons_mp40
	{
		addonRootClass="A3_Weapons_F_Mark";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark",
			"dsr_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"dsr_mp40"
		};
	};
};
class Mode_FullAuto;
class SlotInfo;
#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F {};
	class SMG_40_Base: Rifle_Short_Base_F
	{
		author = "Desolation Redux";
		scope = 0;
		magazines[] = {32Rnd_9x19mm_Mag};
		maxZeroing = 200;
		reloadAction = "GestureReloadSMG_01";
		recoil = "recoil_smg_01";
		cursor = "smg";
		discreteDistance[] = {100,200};
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8.0;
		aiDispersionCoefX = 9.0;
		selectionFireAnim = "muzzleFlash";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\a3\weapons_f_beta\smgs\smg_01\data\smg_01_co.paa"};
		descriptionShort = "MP40...";
		handAnim[] = {"OFP2_ManSkeleton","\dsr_weapons\smg\mp40\data\anim\mp40HandAnim.rtm"};
		class WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.1,0.4};
				iconScale = 0.2;
			};
			class CowsSlot {};
			class PointerSlot {};
			mass = 60;
		};
		class FlashLight
		{
			color[] = {1800,1500,1200};
			ambient[] = {9,7.5,6};
			intensity = 1;
			size = 1;
			innerAngle = 20;
			outerAngle = 80;
			coneFadeCoef = 5;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 0;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.56234133,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.56234133,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.56234133,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.56234133,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.39810717,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.39810717,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.39810717,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.39810717,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		modes[] = {"FullAuto"};
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
	};
	class DSR_SMG_MP40: SMG_40_Base
	{
		scope = 2;
		model = "\dsr_weapons\smg\mp40\dsr_mp40.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\dsr_weapons\smg\mp40\data\anim\mp40HandAnim.rtm"};
		displayName = "MP40";
		picture = "\dsr_weapons\smg\mp40\data\ui\dsr_mp40_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "An mp40....";
		inertia = 0.3;
		aimTransitionSpeed = 1.4;
		dexterity = 1.7;
		initSpeed = 280;
	};
};