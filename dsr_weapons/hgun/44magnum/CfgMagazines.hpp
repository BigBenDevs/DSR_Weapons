class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 6Rnd_44_Mag: CA_Magazine 
	{
		scope = 2; /// or 2, to be precise
		displayName = "6 Round .44 Magnum";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon
		ammo = 12Guage_Slug;
		count = 6; 
		initSpeed = 100; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 5; /// tracers to track low ammo
		descriptionShort = "Used in .44 Magnum Revolver"; /// on mouse-over in Inventory
		magazineGroup[]	= {"44_Mag_Group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};