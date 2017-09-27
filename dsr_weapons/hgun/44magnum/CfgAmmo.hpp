class CfgAmmo
{
	class BulletBase;
	class 44_Mag: BulletBase
	{
		hit = 8;indirectHit = 0;indirectHitRange = 0; /// seems like standard 6.5mm round
		cartridge = ".44 Magnum"; /// seems like standard 6.5mm round
		visibleFire = 5; /// how big does the shooter seem to be for AI to take notice after he shoots
		audibleFire = 8; /// how big does the shooter seem to be for AI to take notice after he shoots
		cost = 1.2; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
		typicalSpeed = 450;
		caliber = 0.45; /// caliber 1 equals 6.5mm round
		deflecting = 30;
		model = \A3\Weapons_f\Data\bullettracer\tracer_red; /// just for tracer
		tracerScale = 1.0; /// how big is the flying tracer
		tracerStartTime = 0.05; // seconds
		tracerEndTime = 1; // seconds
		airFriction = -0.000296;
		
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