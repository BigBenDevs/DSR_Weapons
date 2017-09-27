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
	class dsr_weapon_44magnum
	{
		addonRootClass="A3_Weapons_F";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"dsr_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"dsr_44magnum"
		};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class dsr_44magnum: Pistol_Base_F
	{
		author="Desolation Redux Team";
		_generalMacro="dsr_44magnum";
		scope=2;
		model="dsr_weapons\hgun\44magnum\dsr_44magnum.p3d";
		picture="\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\UI\gear_Pistol_heavy_02_X_CA.paa";
		magazines[]= {6Rnd_44_Mag};
		displayname="44 Magnum Revolver";
		descriptionShort="Heavy Duty Revolver";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_Pistol_heavy_02_F_Library0";
		};
		reloadAction="GestureReloadPistolHeavy02";
		recoil="recoil_pistol_zubr";
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\dry_Zubr",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr",
			0.56234133,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_01",
					0.19952622,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_02",
					0.19952622,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_01",
					3.1622777,
					1,
					1400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_02",
					3.1622777,
					1,
					1400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_03",
					3.1622777,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_interior",
							1.4125376,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.25999999;
			dispersion=0.0040600002;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		bullet1[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=420;
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale=0.85000002;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]= {};
				iconPosition[]={0.40000001,0.30000001};
				iconScale=0.15000001;
			};
			class MuzzleSlot
			{
			};
		};
	};
};
