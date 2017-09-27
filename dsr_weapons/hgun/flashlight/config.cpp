class CfgPatches
{
	class dsr_flashlight
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = 
		{
			"A3_Weapons_F",
			"dsr_weapons"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"dsr_flashlight"};
	};
};
class SlotInfo;
class CfgWeapons
{
	class Pistol_Base_F;
	class DSR_Flashlight: Pistol_Base_F
	{
		scope = 2;
		model = "\dsr_weapons\hgun\flashlight\dsr_flashlight_2";
		modelOptics = "-";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		magazines[] = {};
		displayName = "Flashlight";
		begin1[] = {"",1.0,1,800};
		begin2[] = {"",1.0,1,800};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadMagazineSound[] = {"",1.0,1,20};
		recoil = "";
		recoilProne = "";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		class Library
		{
			libTextDesc = "Flash Light";
		};
		descriptionShort = "Light";
		autoFire = 0;
		textureType = "semi";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "nabojnicestart";
			};
		};
		class WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[] = {};
			};
		};
        class FlashLight
        {
            color[] = {1800,1500,1200};
            ambient[] = {9,8.5,7};
            intensity = 2.5;
            size = 1;
            innerAngle = 40;
            outerAngle = 80;
            coneFadeCoef = 10;
            position = "Usti hlavne";
            direction = "nabojnicestart";
            useFlare = 1;
            flareSize = 1.5;
            flareMaxDistance = "600.0f";
            dayLight = 0;
            class Attenuation
            {
                start = 0.5;
                constant = 0;
                linear = 0;
                quadratic = 1;
                hardLimitStart = 200;
                hardLimitEnd = 300;
            };
            scale[] = {0};
        };
	};
};