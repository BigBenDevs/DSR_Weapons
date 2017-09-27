class cfgmagazines
{
	class default;

	class ca_magazine;

	class 10rnd_22lr_26grn: ca_magazine 
	{
		scope = 2; /// or 2, to be precise
		displayname = "10 round 22lr 26 grain";
		picture = "\a3\weapons_f\data\placeholder_co.paa"; /// just some icon
		ammo = 22lr_26grn;
		count = 10; /// 30 rounds is enough
		initspeed = 1650; /// standard muzzle speed
		tracersevery = 0; /// disable tracers by default
		lastroundstracer = 0; /// tracers to track low ammo
		descriptionshort = "22lr magazine"; /// on mouse-over in inventory
		magazinegroup[]	= {"22lr_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
	class 10rnd_22lr_36grn: ca_magazine 
	{
		scope = 2; /// or 2, to be precise
		displayname = "10 round 22lr 36 grain";
		picture = "\a3\weapons_f\data\placeholder_co.paa"; /// just some icon
		ammo = 22lr_36grn;
		count = 10; /// 30 rounds is enough
		initspeed = 1260; /// standard muzzle speed
		tracersevery = 0; /// disable tracers by default
		lastroundstracer = 0; /// tracers to track low ammo
		descriptionshort = "22lr magazine"; /// on mouse-over in inventory
		magazinegroup[]	= {"22lr_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
	class 10rnd_22lr_40grn: ca_magazine 
	{
		scope = 2; /// or 2, to be precise
		displayname = "10 round 22lr 40 grain";
		picture = "\a3\weapons_f\data\placeholder_co.paa"; /// just some icon
		ammo = 22lr_46grn;
		count = 10; /// 30 rounds is enough
		initspeed = 1150; /// standard muzzle speed
		tracersevery = 0; /// disable tracers by default
		lastroundstracer = 0; /// tracers to track low ammo
		descriptionshort = "22lr magazine"; /// on mouse-over in inventory
		magazinegroup[]	= {"22lr_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};