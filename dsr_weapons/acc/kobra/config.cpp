class CfgPatches
{
	class dsr_weapons_optic_kobra
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class DSR_optic_Kobra_red: ItemCore		
	{
		displayName="Kobra (Red)";
		author="Crazy Mike";
		picture="\dsr_weapons\acc\kobra\data\ui\dsr_kobra_red_ca.paa";
		model = "\dsr_weapons\acc\kobra\kobra_red.p3d";
		scope = 2;
		descriptionShort = "Short Range Russian Optic";
		weaponInfoType = "RscWeaponZeroing";

		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0;
	};
	class DSR_optic_Kobra_green: ItemCore		
	{
		displayName="Kobra (Green)";
		author="Crazy Mike";
		picture="\dsr_weapons\acc\kobra\data\ui\dsr_kobra_green_ca.paa";
		model = "dsr_weapons\acc\kobra\kobra_green.p3d";
		scope = 2;
		descriptionShort = "Short Range Russian Optic";
		weaponInfoType = "RscWeaponZeroing";

		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0;
	};
};