class CfgPatches
{
	class dsr_weapons_SCAR
	{
		requiredAddons[]=
		{
			"a3_weapons_f"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DSR_arifle_SCAR_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class SlotInfo;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	//Scar-L
	class DSR_arifle_SCAR_base_F: Rifle_Base_F
	{
		author="Crazy Mike";
		_generalMacro="DSR_arifle_SCAR_base_F";
		scope=2;
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		reloadAction="GestureReloadSPAR_01";
		recoil="recoil_mx";
		maxZeroing=800;
		selectionFireAnim = "muzzleFlash";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 			/// this can be set, but having some common helps a bit
				compatibleItems[] = {"muzzle_snds_M"}; 							/// A custom made suppressor for this weapon
				iconPosition[] = {0.0, 0.45};									/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
				iconScale = 0.2;												/// scale of icon described in iconPicture
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
				compatibleItems[] = {}; 
				iconPosition[] = {0.20, 0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				compatibleItems[] = {};
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="5.56 mm Assault Rifle";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",
			0.44668359,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",
			0.44668359,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",
			0.44668359,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",
			0.44668359,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",
			0.44668359,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",
			0.44668359,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",
			0.44668359,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",
			0.44668359,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.072999999,
			"bullet8",
			0.072999999,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",
			0.31622776,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
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
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",
					0.70794576,
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
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2a",
					2.2118864,
					1.5,
					1400
				};
				begin2[]=
				{
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2",
					2.2118864,
					1.5,
					1400
				};
				begin3[]=
				{
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2a",
					2.2118864,
					1.5,
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",
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
				begin1[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_1",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_2",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_2",
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.07;
			dispersion=0.00116;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
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
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",
					0.25118864,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",
					0.25118864,
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
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2a",
					2.2118864,
					1.5,
					1400
				};
				begin2[]=
				{
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2",
					2.2118864,
					1.5,
					1400
				};
				begin3[]=
				{
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2a",
					2.2118864,
					1.5,
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",
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
				begin1[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_1",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_2",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_2",
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.079999998;
			dispersion=0.00116;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
	class DSR_arifle_SCAR_F: DSR_arifle_SCAR_base_F
	{
		author="Crazy Mike";
		_generalMacro="DSR_arifle_SCAR_F";
		baseWeapon="DSR_arifle_SCAR_F";
		scope=2;
		model="dsr_weapons\arifle\SCAR\mk16.p3d";
		displayName="Scar-L 5.56 mm";
		picture="dsr_weapons\arifle\SCAR\Data\ui\scar_l_cqc_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="5.56 mm Assault Rifle";
		};
		descriptionShort="5.56 mm Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1.3;
		dexterity=1.6;
		initSpeed=900;
		class ItemInfo
		{
			priority=1;
		};
	};
	//Scar-H
	class DSR_arifle_SCARH_base_F: Rifle_Base_F
	{
		author="Crazy Mike";
		_generalMacro="DSR_arifle_SCARH_base_F";
		scope=2;
		magazines[]=
		{
			"20Rnd_762x51_Mag"
		};
		reloadAction="GestureReloadSPAR_01";
		recoil="recoil_mx";
		maxZeroing=800;
		selectionFireAnim = "muzzleFlash";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 			/// this can be set, but having some common helps a bit
				compatibleItems[] = {"muzzle_snds_B"}; 							/// A custom made suppressor for this weapon
				iconPosition[] = {0.0, 0.45};									/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
				iconScale = 0.2;												/// scale of icon described in iconPicture
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
				compatibleItems[] = {}; 
				iconPosition[] = {0.20, 0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				compatibleItems[] = {};
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="7.62 mm Assault Rifle";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",
			0.44668359,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",
			0.44668359,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",
			0.44668359,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",
			0.44668359,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",
			0.44668359,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",
			0.44668359,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",
			0.44668359,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",
			0.44668359,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.072999999,
			"bullet8",
			0.072999999,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",
			0.31622776,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
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
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",
					0.70794576,
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
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2a",
					2.2118864,
					1.2,
					1400
				};
				begin2[]=
				{
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2",
					2.2118864,
					1.2,
					1400
				};
				begin3[]=
				{
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2a",
					2.2118864,
					1.2,
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",
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
				begin1[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_1",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_2",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_2",
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.07;
			dispersion=0.00116;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
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
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",
					0.25118864,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",
					0.25118864,
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
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2a",
					2.2118864,
					1.2,
					1400
				};
				begin2[]=
				{
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2",
					2.2118864,
					1.2,
					1400
				};
				begin3[]=
				{
					"dsr_weapons\arifle\SCAR\Data\sounds\SCAR_single_shot_v2a",
					2.2118864,
					1.2,
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",
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
				begin1[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_1",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_2",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\weapons\zafir\silencer_zafir_2",
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.079999998;
			dispersion=0.00116;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
	class DSR_arifle_SCARH_F: DSR_arifle_SCARH_base_F
	{
		author="Crazy Mike";
		_generalMacro="DSR_arifle_SCARH_F";
		baseWeapon="DSR_arifle_SCARH_F";
		scope=2;
		model="dsr_weapons\arifle\SCAR\mk17.p3d";
		displayName="Scar-H 7.62 mm";
		picture="dsr_weapons\arifle\SCAR\Data\ui\scar_l_cqc_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="7.62 mm Assault Rifle";
		};
		descriptionShort="7.62 mm Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=105;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1.3;
		dexterity=1.6;
		initSpeed=900;
		class ItemInfo
		{
			priority=1;
		};
	};
};