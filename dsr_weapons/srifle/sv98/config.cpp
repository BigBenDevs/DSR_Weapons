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
	class dsr_weapons_sv98
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
			"dsr_sv98"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class dsr_sv98_base_F: Rifle_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="DMR_06_base_F";
		scope=2;
		displayName="dsr_sv98";
		selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?
		magazines[]=
		{
			"10Rnd_762x54_Mag"
		};
		reloadAction="GestureReloadDMR06";
		recoil="recoil_dmr_06";
		maxZeroing=1600;
		handAnim[]={"OFP2_ManSkeleton","dsr_weapons\srifle\sv98\anim\sv98handAnim.rtm"};
		DLC="Mark";
		overviewPicture="\A3\Data_F_Mark\Images\watermarkInfo_page02_ca.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		cursor="srifle";
		class Library
		{
			libTextDesc="A 7.62 Russian bolt-action sniper rifle.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.51999998,0.36000001};
				iconScale=0.15000001;
			};
			class PointerSlot
			{
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.31999999,0.80000001};
				iconScale=0.30000001;
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Safety",
			0.25118864,
			1,
			5
		};
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_dry",
			0.25118864,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_reload",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.1,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.1,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.177828,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.177828,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.1,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.1,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.1,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.1,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.1,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.1,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.1,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.1,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.083,
			"bullet2",
			0.083,
			"bullet3",
			0.083,
			"bullet4",
			0.083,
			"bullet5",
			0.083,
			"bullet6",
			0.083,
			"bullet7",
			0.083,
			"bullet8",
			0.083,
			"bullet9",
			0.083,
			"bullet10",
			0.083,
			"bullet11",
			0.083,
			"bullet12",
			0.083
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
					"A3\sounds_f\weapons\closure\closure_rifle_4",
					0.39810717,
					1,
					30
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_5",
					0.39810717,
					1,
					30
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
					"A3\sounds_f_mark\arsenal\weapons\LongRangeRifles\DMR_06_MK14\DMR_06_01",
					2.818383,
					1,
					1200
				};
				begin2[]=
				{
					"A3\sounds_f_mark\arsenal\weapons\LongRangeRifles\DMR_06_MK14\DMR_06_01",
					2.818383,
					1,
					1200
				};
				begin3[]=
				{
					"A3\sounds_f_mark\arsenal\weapons\LongRangeRifles\DMR_06_MK14\DMR_06_01",,
					2.818383,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",
							1,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_03",
					1,
					1,
					400
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
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=1.2;
			dispersion=0.00086999999;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=700;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
	};
	class DSR_srifle_SV98: dsr_sv98_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="srifle_DMR_06_camo_F";
		scope=2;
		model="dsr_weapons\srifle\sv98\dsr_sv98.p3d";
		handAnim[]={"OFP2_ManSkeleton","dsr_weapons\srifle\sv98\anim\sv98handAnim.rtm"};
		dexterity=1.6799999;
		displayName="SV-98 7.62 mm";
		picture="dsr_weapons\srifle\sv98\ui\gear_sv98_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort="Sniper Rifle <br />Caliber: 7.62x54 mm<br />Rounds: 10<br";
		inertia=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
		};
		class ItemInfo
		{
			priority=1;
		};
	};
};