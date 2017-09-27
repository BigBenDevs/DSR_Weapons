class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class DSR_Arrow: CA_Magazine
	{
		scope = 2;
		displayName = "Crafted Arrow";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		mass = 1;
		ammo = "DSR_Arrow_Bullet";
		model = "\dsr_weapons\crafted\crossbow_2\dsr_arrow.p3d";
		count = 1;
		initSpeed = 325;
		tracersEvery = 1;
		lastRoundsTracer = 1;
		descriptionShort = "Crafted Crossbow Arrow";
	};
};