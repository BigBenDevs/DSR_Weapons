class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 30Rnd_762x35mm_300_ACC_FMJ_mag: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "30Rnd 7.62x35mm .300 ACC FMJ Mag";
		picture = "\A3\Weapons_F\Data\ui\m_30stanag_caseless_ca.paa"; /// just some icon
		ammo = 762x35mm_300_AAC_FMJ;
		count = 30; /// 30 rounds is enough
		initSpeed = 700; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "30 Round 300 Blackout Full Metal Jacket Ammunition"; /// on mouse-over in Inventory
		magazineGroup[]	= {"300_ACC_Group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};

	class 30Rnd_762x35mm_300_ACC_OT_mag: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "30Rnd 7.62x35mm .300 ACC OT Mag";
		picture = "\A3\Weapons_F\Data\ui\m_30stanag_caseless_ca.paa"; /// just some icon
		ammo = 762x35mm_300_AAC_OT;
		count = 30; /// 30 rounds is enough
		initSpeed = 700; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "30 Round 300 Blackout Open Tip Ammunition"; /// on mouse-over in Inventory
		magazineGroup[]	= {"300_ACC_Group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
	
	class 30Rnd_762x35mm_300_ACC_FMJ_Tracer: 30Rnd_762x35mm_300_ACC_FMJ_mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 30; /// tracers everywhere
		displayName = "30Rnd 7.62x35mm 300 ACC FMJ tracer magazine";
		descriptionShort = "Used to shoot 300 Blackout Full Metal Jacket tracer bullets";
		displaynameshort = "Tracers";
		magazineGroup[]	= {"300_ACC_group"};
	};
		class 30Rnd_762x35mm_300_ACC_OT_Tracer: 30Rnd_762x35mm_300_ACC_OT_mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 30; /// tracers everywhere
		displayName = "30Rnd 7.62x35mm 300 ACC OT tracer magazine";
		descriptionShort = "Used to shoot 300 Blackout Open Tip tracer bullets";
		displaynameshort = "Tracers";
		magazineGroup[]	= {"300_ACC_group"};
	};
};