class cfgmagazines
{
	class default;

	class ca_magazine;

	class 4rnd_243win_mag: ca_magazine 
	{
		scope = 2; /// or 2, to be precise
		displayname = "4rnd .243 winchester mag";
		picture = "\a3\weapons_f\data\ui\m_m24_ca.paa"; /// just some icon
		ammo = 243winchester_85grn;
		count = 4; /// 30 rounds is enough
		initspeed = 975.36; /// standard muzzle speed
		tracersevery = 0; /// disable tracers by default
		lastroundstracer = 0; /// tracers to track low ammo
		descriptionshort = "used in cz550"; /// on mouse-over in inventory
		magazinegroup[]	= {"cz550 group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};