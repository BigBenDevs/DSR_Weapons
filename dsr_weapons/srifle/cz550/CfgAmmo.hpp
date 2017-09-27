class cfgammo
{
	class bulletbase;
	class 243winchester_85grn: bulletbase
	{
		hit = 14.89033142;
		indirecthit = 0;
		indirecthitrange = 0; /// seems like standard 6.5mm round
		cartridge = "fxcartridge_762"; /// seems like standard 6.5mm round
		visiblefire = 3.1; /// how big does the shooter seem to be for ai to take notice after he shoots
		audiblefire = 6.15; /// how big does the shooter seem to be for ai to take notice after he shoots
		cost = 1.2; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		aiammousageflags = aiammousageoffensiveinf + aiammousageoffensiveveh + aiammousageoffensiveair; 
		typicalspeed = 975.36;
		caliber = 0.75; /// caliber 1 equals 6.5mm round
		deflecting = 18;
		model = \a3\weapons_f\data\bullettracer\tracer_red; /// just for tracer
		tracerscale = 1.0; /// how big is the flying tracer
		tracerstarttime = 0.05; // seconds
		tracerendtime = 1; // seconds
		airfriction = -0.00060562;
		
		dangerradiusbulletclose 		= 8;	/// defines how far the ai gets alerted by the projectile's impact or explosion. default value -1 makes this distance be automatically derived from the hit and indirecthit properties.
		dangerradiushit 				= 12;	/// defines how far the ai gets alerted by the bullet's pass. default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionradiusbulletclose 	= 6;	/// defines the max. distance at which the ai becomes suppressed by the projectile's impact or explosion. default value -1 disables the suppressive effect
		suppressionradiushit 			= 8;	/// defines the max. distance at which the ai becomes suppressed by the bullet's pass. default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootdistraction 				= 10;	/// -1 by default to be computed from visiblefire and audiblefire, describes how much does the shoot distract the shooter
		
		class camshakefire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class camshakeplayerfire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		
	};
};