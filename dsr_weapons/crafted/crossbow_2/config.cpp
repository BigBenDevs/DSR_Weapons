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
	class dsr_weapons_crossbow
	{
		units[]={};
		weapons[]={"dsr_crossbow"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F", "dsr_weapons"};
	};
};
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
	};
	class DSR_Weapons_Crafted_Crossbow_Base: Rifle_Base_F /// Just basic values common for all testing rifle variants
	{
		author = "BigBen";
		displayName = "Crossbow";
		descriptionUse = "Crossbow";
		descriptionShort = "Crossbow";
		scope = 2;
		picture = "\dsr_weapons\arifle\m4a3\data\ui\m4a3_ca.paa";
		model = "dsr_weapons\crafted\crossbow_2\dsr_crossbow.p3d";
		editorSubcategory = "DSR_Weapons";
		magazines[] = {"DSR_Arrow"};
		//muzzles = "";
		class Library
		{
			libTextDesc = "Crafted Crossbow";
		};
		reloadAction = "GestureReloadMX";
		maxZeroing = 300;
		discreteDistanceInitIndex = 3;
		discreteDistance[] = {25,50,75,100,125,150,175,200,225,250,275,300};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 0.75;
		canShootInWater = 1;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "";
				directionName = "";
				effectName = "";
			};
		};
		opticsZoomMin = 0.575;
		opticsZoomMax = 1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		handAnim[] = {"OFP2_ManSkeleton","dsr_weapons\arifle\m4a3\data\anims\propergrip.rtm"};
		dexterity = 0.8;
		inertia = 0.4;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		changeFiremodeSound[] = {"",0.17782794,1,5};
		modes[] = {"Single"};
		UiPicture = "";
		class Single: Mode_SemiAuto /// Pew
		{
			// the new parameter to distinguish muzzle accessories type
			sounds[] =
			{
				StandardSound, // default sound
				SilencedSound // silenced sound - weapon with silencer on
			};

			class StandardSound
			{
				// array of sounds (SoundSet names) to be played at the game event (shot)
				// number of SoundSets in array is not limited
				// consider that several ms lag could appear between each SoundSet is played
				// closure (bolt action) sound definition should be part of SoundSet
				soundSetShot[] =
				{
					Test_Weapon_01_Shot_SoundSet,
					Test_Weapon_01_Tail_SoundSet
				};
			};
			reloadTime = 4.8;
			magazineReloadTime = 4.8;
			recoil = "recoil_single_Test_rifle_01";
			recoilProne = "recoil_single_prone_Test_rifle_01";
			dispersion = 7e-005;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 1;
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,35};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",1,1,20};
	};

	class DSR_Crafted_Crossbow: DSR_Weapons_Crafted_Crossbow_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Crossbow (Not currently used)"; /// some name
		model = "\dsr_weapons\crafted\crossbow_2\dsr_crossbow.p3d"; /// path to model
		picture = "\dsr_weapons\arifle\m4a3\data\ui\m4a3_ca.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa"; /// weapon with grenade launcher should be marked such way
		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100; /// some rough estimate
		};
	};
	#include "accessory.hpp"
};