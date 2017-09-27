class CfgAmmo
{
	class BulletBase;
	class DSR_Arrow_Bullet: BulletBase
	{
		hit = 45;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		typicalSpeed = 325;
		airFriction = -0.000267;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 0;
		model = "\dsr_weapons\crafted\crossbow_2\dsr_arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = 1;
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 25;
		};
		class Medical
		{
			InstantBleeding = 1;
			MedicalState = 4;
			MedicalChance = 70;
			BleedingLevel = 2;
			BleedingChance = 60;
			Infection = 0;
			InfectionChance = 0;
			Knockout = 0;
			KnockoutChance = 0;
			scale = 0;
		};
	};
};