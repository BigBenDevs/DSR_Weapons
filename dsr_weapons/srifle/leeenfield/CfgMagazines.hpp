class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 10Rnd_303_Mag: CA_Magazine 
	{
		scope = 2; /// or 2, to be precise
		displayName = ".303 10 Round Mk-1";
		picture = "\A3\Weapons_F\Data\ui\m_m24_ca.paa"; /// just some icon
		ammo = 303_british;
		count = 10; /// 30 rounds is enough
		initSpeed = 1650; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 0; /// tracers to track low ammo
		descriptionShort = ".303 British Magazine used in the Le-Enfield Mk.1"; /// on mouse-over in Inventory
		magazineGroup[]	= {"303_british"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};