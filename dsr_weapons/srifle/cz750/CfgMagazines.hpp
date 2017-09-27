class cfgmagazines
{
	class default;

	class ca_magazine;

	class 7rnd_308win_mag: ca_magazine 
	{
		scope = 2; /// or 2, to be precise
		displayname = "7rnd .308 winchester mag";
		picture = "\a3\weapons_f\data\ui\m_m24_ca.paa"; /// just some icon
		ammo = 308winchester_168grn;
		count = 7; /// 30 rounds is enough
		initspeed = 944.88; /// standard muzzle speed
		tracersevery = 0; /// disable tracers by default
		lastroundstracer = 0; /// tracers to track low ammo
		descriptionshort = "used in cz750"; /// on mouse-over in inventory
		magazinegroup[]	= {"cz750 group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};