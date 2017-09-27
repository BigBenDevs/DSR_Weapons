class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 6Rnd_12g_Slug: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "6 Round 12 Guage Slug";
		picture = "\A3\Weapons_F\Data\ui\m_12gauge_slugs_ca.paa"; /// just some icon
		ammo = 12Guage_Slug;
		count = 6; 
		initSpeed = 300; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 5; /// tracers to track low ammo
		descriptionShort = "Used in 12 Guage shotguns"; /// on mouse-over in Inventory
		magazineGroup[]	= {"12G_Slug_Group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
	class 6Rnd_12g_Buck: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "6 Round 12 Guage Buckshot";
		picture = "\A3\Weapons_F\Data\ui\m_12gauge_ca.paa"; /// just some icon
		ammo = 12Guage_Buck;
		count = 6; 
		initSpeed = 300; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 5; /// tracers to track low ammo
		descriptionShort = "Used in 12 Guage shotguns"; /// on mouse-over in Inventory
		magazineGroup[]	= {"12G_Buck_Group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};