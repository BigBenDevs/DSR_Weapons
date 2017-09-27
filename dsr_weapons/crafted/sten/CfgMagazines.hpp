class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 32Rnd_9x19mm_Mag: CA_Magazine 
	{
		scope = 2; /// or 2, to be precise
		displayName = "32Rnd 9x19mm Mag";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon
		ammo = 9x19mm_Parabellum;
		count = 32; /// 30 rounds is enough
		initSpeed = 360; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "32 Round 9x19mm Parabellum Mag"; /// on mouse-over in Inventory
		magazineGroup[]	= {"9x19_Group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};

	class 32Rnd_9x19mm_Mag_Tracer: 32Rnd_9x19mm_Mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 32; /// tracers everywhere
		displayName = "32Rnd 9x19mm Tracer Mag";
		descriptionShort = "32Rnd 9x19mm Tracer Mag";
		displaynameshort = "Tracers";
		magazineGroup[]	= {"9x19_Group"};
	};
};