class cfgammo
{
	class bulletbase;
	class 22lr_36grn: bulletbase
	{
		hit = 4;
		indirecthit = 0;
		indirecthitrange = 0; /// seems like standard 6.5mm round
		cartridge = "fxcartridge_9mm"; /// seems like standard 6.5mm round
		visiblefire = 1.5; /// how big does the shooter seem to be for ai to take notice after he shoots
		audiblefire = 4.15; /// how big does the shooter seem to be for ai to take notice after he shoots
		cost = 1.0; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		aiammousageflags = aiammousageoffensiveinf + aiammousageoffensiveveh + aiammousageoffensiveair; 
		typicalspeed = 1260;
		caliber = 0.223; /// caliber 1 equals 6.5mm round
		deflecting = 12;
		model = \a3\weapons_f\data\bullettracer\tracer_red; /// just for tracer
		tracerscale = 0.5; /// how big is the flying tracer
		tracerstarttime = 0.05; // seconds
		tracerendtime = 1; // seconds
		airfriction = -0.00187335;
		
		dangerradiusbulletclose 		= 5;	/// defines how far the ai gets alerted by the projectile's impact or explosion. default value -1 makes this distance be automatically derived from the hit and indirecthit properties.
		dangerradiushit 				= 7;	/// defines how far the ai gets alerted by the bullet's pass. default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionradiusbulletclose 	= 4;	/// defines the max. distance at which the ai becomes suppressed by the projectile's impact or explosion. default value -1 disables the suppressive effect
		suppressionradiushit 			= 5;	/// defines the max. distance at which the ai becomes suppressed by the bullet's pass. default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootdistraction 				= 8;	/// -1 by default to be computed from visiblefire and audiblefire, describes how much does the shoot distract the shooter
		
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
	class 22lr_40grn: bulletbase
	{
		hit = 7.3;
		indirecthit = 0;
		indirecthitrange = 0; /// seems like standard 6.5mm round
		cartridge = "fxcartridge_9mm"; /// seems like standard 6.5mm round
		visiblefire = 1.5; /// how big does the shooter seem to be for ai to take notice after he shoots
		audiblefire = 4.15; /// how big does the shooter seem to be for ai to take notice after he shoots
		cost = 1.0; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		aiammousageflags = aiammousageoffensiveinf + aiammousageoffensiveveh + aiammousageoffensiveair; 
		typicalspeed = 1150;
		caliber = 0.223; /// caliber 1 equals 6.5mm round
		deflecting = 12;
		model = \a3\weapons_f\data\bullettracer\tracer_red; /// just for tracer
		tracerscale = 0.5; /// how big is the flying tracer
		tracerstarttime = 0.05; // seconds
		tracerendtime = 1; // seconds
		airfriction = -0.00159998;
		
		dangerradiusbulletclose 		= 5;	/// defines how far the ai gets alerted by the projectile's impact or explosion. default value -1 makes this distance be automatically derived from the hit and indirecthit properties.
		dangerradiushit 				= 7;	/// defines how far the ai gets alerted by the bullet's pass. default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionradiusbulletclose 	= 4;	/// defines the max. distance at which the ai becomes suppressed by the projectile's impact or explosion. default value -1 disables the suppressive effect
		suppressionradiushit 			= 5;	/// defines the max. distance at which the ai becomes suppressed by the bullet's pass. default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootdistraction 				= 8;	/// -1 by default to be computed from visiblefire and audiblefire, describes how much does the shoot distract the shooter
		
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
	class 22lr_26grn: bulletbase
	{
		hit = 6.8;
		indirecthit = 0;
		indirecthitrange = 0; /// seems like standard 6.5mm round
		cartridge = "fxcartridge_9mm"; /// seems like standard 6.5mm round
		visiblefire = 1.5; /// how big does the shooter seem to be for ai to take notice after he shoots
		audiblefire = 4.15; /// how big does the shooter seem to be for ai to take notice after he shoots
		cost = 1.0; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		aiammousageflags = aiammousageoffensiveinf + aiammousageoffensiveveh + aiammousageoffensiveair; 
		typicalspeed = 1650;
		caliber = 0.223; /// caliber 1 equals 6.5mm round
		deflecting = 10;
		model = \a3\weapons_f\data\bullettracer\tracer_red; /// just for tracer
		tracerscale = 0.5; /// how big is the flying tracer
		tracerstarttime = 0.05; // seconds
		tracerendtime = 1; // seconds
		airfriction = -0.00032889;
		
		dangerradiusbulletclose 		= 5;	/// defines how far the ai gets alerted by the projectile's impact or explosion. default value -1 makes this distance be automatically derived from the hit and indirecthit properties.
		dangerradiushit 				= 7;	/// defines how far the ai gets alerted by the bullet's pass. default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionradiusbulletclose 	= 4;	/// defines the max. distance at which the ai becomes suppressed by the projectile's impact or explosion. default value -1 disables the suppressive effect
		suppressionradiushit 			= 5;	/// defines the max. distance at which the ai becomes suppressed by the bullet's pass. default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootdistraction 				= 8;	/// -1 by default to be computed from visiblefire and audiblefire, describes how much does the shoot distract the shooter
		
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