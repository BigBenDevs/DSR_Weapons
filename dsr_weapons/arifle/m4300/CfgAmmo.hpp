class CfgAmmo
{ 
	class BulletBase;
	class 762x35mm_300_AAC_FMJ: BulletBase
	{
		hit = 8.419520354;
		indirectHit = 0;
		indirectHitRange = 0; 
		cartridge = "FxCartridge_762";
		visibleFire = 5;
		audibleFire = 8;
		cost = 1.2; 
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir; 
		typicalSpeed = 610;
		caliber = 0.615; /// caliber 1 equals 6.5mm round
		deflecting = 20;
		model = \A3\Weapons_f\Data\bullettracer\tracer_red;
		tracerScale = 1.0; 
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.001084469;
		
		dangerRadiusBulletClose 		= 8;	/// defines how far the AI gets alerted by the projectile's impact or explosion. Default value -1 makes this distance be automatically derived from the hit and indirectHit properties.
		dangerRadiusHit 				= 12;	/// defines how far the AI gets alerted by the bullet's pass. Default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionRadiusBulletClose 	= 6;	/// defines the max. distance at which the AI becomes suppressed by the projectile's impact or explosion. Default value -1 disables the suppressive effect
		suppressionRadiusHit 			= 8;	/// defines the max. distance at which the AI becomes suppressed by the bullet's pass. Default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootDistraction 				= 10;	/// -1 by default to be computed from visibleFire and audibleFire, describes how much does the shoot distract the shooter
		
		class CamShakeFire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		
	}; 
	class 762x35mm_300_AAC_OT: BulletBase
	{
		hit = 10.82971547;
		indirectHit = 0;
		indirectHitRange = 0; 
		cartridge = "FxCartridge_762";
		visibleFire = 5;
		audibleFire = 8;
		cost = 1.2; 
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir; 
		typicalSpeed = 655;
		caliber = 0.417; /// caliber 1 equals 6.5mm round
		deflecting = 17;
		model = \A3\Weapons_f\Data\bullettracer\tracer_red;
		tracerScale = 1.0; 
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.001118505;
		
		dangerRadiusBulletClose 		= 8;	/// defines how far the AI gets alerted by the projectile's impact or explosion. Default value -1 makes this distance be automatically derived from the hit and indirectHit properties.
		dangerRadiusHit 				= 12;	/// defines how far the AI gets alerted by the bullet's pass. Default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionRadiusBulletClose 	= 6;	/// defines the max. distance at which the AI becomes suppressed by the projectile's impact or explosion. Default value -1 disables the suppressive effect
		suppressionRadiusHit 			= 8;	/// defines the max. distance at which the AI becomes suppressed by the bullet's pass. Default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootDistraction 				= 10;	/// -1 by default to be computed from visibleFire and audibleFire, describes how much does the shoot distract the shooter
		
		class CamShakeFire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		
	};
};