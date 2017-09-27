class CfgPatches
{
	class dsr_weapons_optic_pso3
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
	class DSR_optic_PSO3: ItemCore		
	{
		displayName="PSO-03";
		author="Crazy Mike";
		picture="\dsr_weapons\acc\pso3\data\ui\dsr_pso3_ca.paa";
		model = "\dsr_weapons\acc\pso3\pso3.p3d";
		scope = 2;
		descriptionShort = "Long Range Russian Scope";
		weaponInfoType = "RscWeaponZeroing";

		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=12;
			opticType=2;
			optics=1;
			modelOptics="dsr_weapons\acc\pso3\pso3_optics";	
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1200;
					discretefov[]={0.125,0.0625};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"dsr_weapons\acc\pso3\pso3_optics"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron: Snip
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
			};
		};
		inertia=0.2;
	};
};