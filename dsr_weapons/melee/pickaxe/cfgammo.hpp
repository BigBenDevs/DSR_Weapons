class CfgAmmo
{
	class BulletBase;
	class DSR_Ammo_AbstractMelee: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 85;
		timeToLive = 0.05;
		airFriction = 0;
		waterFriction = 0;
		caliber = 0.7;
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		soundHitBody1[] = {"",1.584893,1,10};
		soundHitBody2[] = {"",1.584893,1,10};
		hitMan[] = {"soundHitBody1",0.5,"soundHitBody2",0.5};
		maxControlRange = 1;
		simulation = "shotRocket";
		explosive = 0;
		visibleFireTime = 0;
		whistleOnFire = 0;
		whistleDist = 0;
		effectsMissileInit = "EmptyEffect";
		effectsMissile = "EmptyEffect";
		effectsSmoke = "EmptyEffect";
		explosionEffects = "NoExplosion";
		craterEffects = "NoCrater";
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class DSR_Ammo_Swing: DSR_Ammo_AbstractMelee
	{
		hit = 9;
		timeToLive = 0.02;
		visibleFire = 0.1;
		audibleFire = 1;
		caliber = 1;
		simulationStep = 0.1;
		typicalSpeed = 0.3;
		maxSpeed = 0.3;
		initSpeed = 0.3;
		maxLeadSpeed = 0.3;
	};
};