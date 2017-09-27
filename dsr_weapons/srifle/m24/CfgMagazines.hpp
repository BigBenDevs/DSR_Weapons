class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 762x51mm_Mk316_SB: CA_Magazine 
	{
		scope = 2; /// or 2, to be precise
		displayName = "7.62x51mm Mk316 Mod 0";
		picture = "\A3\Weapons_F\Data\ui\m_5rnd_127x108_ca.paa"; /// just some icon
		ammo = 762x51mm_Mk316_SB;
		count = 5; /// 30 rounds is enough
		initSpeed = 795; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 0; /// tracers to track low ammo
		descriptionShort = "Used in M24"; /// on mouse-over in Inventory
		magazineGroup[]	= {"M24_Group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};