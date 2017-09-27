class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 30Rnd_762x39_mag: CA_Magazine 
	{
		scope = 2; /// or 2, to be precise
		displayName = "30 Round 7.62x39mm Mag";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon
		ammo = 762x39_Ball;
		count = 30; /// 30 rounds is enough
		initSpeed = 795; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "30 Round 7.62x39mm Magazine"; /// on mouse-over in Inventory
		magazineGroup[]	= {"762x39_Group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};

	class 30Rnd_762x39_mag_tracer: 30Rnd_762x39_mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 30; /// tracers everywhere
		displayName = "30Rnd 7.62x39 tracer magazine";
		descriptionShort = "30 Round 7.62x39 Tracer Mag";
		displaynameshort = "Tracers";
		magazineGroup[]	= {"762x39_Group"};
	};
};