class CfgPatches
{
	class DSR_Fishingrod
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"dsr_weapons","dsr_anims"};
	};
};

//#include "animations.hpp"
#include "cfgmagazine.hpp"
#include "cfgammo.hpp"

class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle;
	class MeleeWeapon: Rifle
	{
		distanceZoomMin = 25;
		distanceZoomMax = 25;
		canDrop = 0;
		optics = 1;
		modelOptics = "-";
		fireLightDuration = 0;
		fireLightIntensity = 0;
		reloadMagazineSound[] = {"",1};
		muzzles[] = {"this"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"","db3",1,10};
				closure2[] = {"","db3",1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"","db3",1,1200};
				begin2[] = {"","db3",1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"","db3",1,1200};
				begin2[] = {"","db3",1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 1.5;
			dispersion = 0.00087;
			recoil = "recoil_single_Test_rifle_01";
			recoilProne = "recoil_single_prone_Test_rifle_01";
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 2;
			midRangeProbab = 0.7;
			maxRange = 3;
			maxRangeProbab = 0.3;
		};
		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
		weaponInfoType = "RscWeaponEmpty";
		cameraDir = "look";
		class WeaponSlotsInfo
		{
			mass = 35;
		};
		handAnim[]={"OFP2_ManSkeleton","\dsr_anims\anim\fishing_idle.rtm"};
	};
	class DSR_Melee_Fishingrod: MeleeWeapon
	{
		author = "DesolationRedux.com";
		scope = 2;
		scopeCurator = 2;
		type = 4;
		primary = 0;
		reloadAction = "ReloadRPG";
		autoreload = 1;
		magazineReloadTime = 0;
		model = "\dsr_weapons\melee\fishing_rod\dsr_fishingrod_fixed.p3d";
		picture = "\dsr_weapons\melee\data\ui\dsr_item_x_axe.paa";
		displayName = "Fishing Rod Fixed";
		magazines[] = {"DSR_Magazine_Swing"};
		descriptionShort = "It's a Fishing Rod......";
	};
};