class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 30Rnd_762x51_M80A1_Mag: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "30Rnd 7.62x51mm M80A1 Mag";
		picture = "\A3\Weapons_F\Data\ui\m_20rnd_762x51_ca.paa"; /// just some icon
		ammo = m80a1_epr;
		count = 30; /// 30 rounds is enough
		initSpeed = 840; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "30Rnd 7.62x51mm M80A1 Mag"; /// on mouse-over in Inventory
		magazineGroup[]	= {"762x51_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};

	class 30Rnd_762x51_M80A1_Mag_Tracer: 30Rnd_762x51_M80A1_Mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 30; /// tracers everywhere
		displayName = "762x51 tracer magazine";
		descriptionShort = "7.62x51mm Tracer Rounds";
		displaynameshort = "Tracers";
		magazineGroup[]	= {"762x51_group"};
	};
};