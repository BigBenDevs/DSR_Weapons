class CfgMagazines
{
	class CA_Magazine;
	class DSR_Magazine_Swing: CA_Magazine
	{
		scope = 2;
		count = 999;
		autoReload = 1;
		flash = "";
		flashSize = 0;
		displayName = "Swing";
		ammo = "DSR_Ammo_Swing";
		mass = 0;
		descriptionShort = "Dummy";
		class Interactions{};
		picture = "\dsr_weapons\melee\data\DSR_Magazine_Swing.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		initSpeed = 0.01;
		sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
	};
};