class CfgPatches
{
	class dsr_weapons_g17
	{
		requiredAddons[]=
		{
			"a3_weapons_f"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"hgun_G17_F"
		};
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class DSR_hgun_G17_F: Pistol_Base_F
	{
		author="Crazy Mike";
		_generalMacro="DSR_hgun_G17_F";
		baseWeapon="DSR_hgun_G17_F";
		scope=2;
		selectionFireAnim = "muzzleFlash";
		model="dsr_weapons\hgun\g17\glock17.p3d";
		picture="dsr_weapons\hgun\g17\data\UI\gear_Glock17_x_ca.paa";
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_yellow_Mag"
		};
		displayname="Glock-17 9 mm";
		descriptionShort="9mm Handgun";
		class Library
		{
			libTextDesc="9mm Handgun";
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",
			0.22387211,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",
			1,
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
					"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",
					0.15848932,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",
					0.15848932,
					1.1,
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
					"dsr_weapons\hgun\g17\data\sounds\glock17_1",
					3.1622777,
					1,
					1200
				};
				begin2[]=
				{
					"dsr_weapons\hgun\g17\data\sounds\glock17_2",
					3.1622777,
					1,
					1200
				};
				begin3[]=
				{
					"dsr_weapons\hgun\g17\data\sounds\glock17_1",
					3.1622777,
					1,
					1200
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",
							1.4125376,
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",
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
					"dsr_weapons\hgun\g17\data\sounds\m9SD_single1",
					0.56234133,
					1,
					400
				};
				begin2[]=
				{
					"dsr_weapons\hgun\g17\data\sounds\m9SD_single1",
					0.56234133,
					1,
					400
				};
				begin3[]=
				{
					"dsr_weapons\hgun\g17\data\sounds\m9SD_single1",
					0.56234133,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.1;
			dispersion=0.0043500001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.2;
		aimTransitionSpeed=1.6;
		dexterity=1.8;
		initSpeed=450;
		recoil="recoil_pistol_rook40";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot
			{
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_L"
				};
				iconPosition[]={0.30000001,0.38};
				iconScale=0.2;
			};
		};
	};
};