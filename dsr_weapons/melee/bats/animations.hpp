class CfgGesturesMale
{
	skeletonName = "OFP2_ManSkeleton";
	class ManActions{};
	class Actions
	{
		class NoActions
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	class Default;
	class States
	{
		class dsr_BatSlashGst: Default
		{
			file = "\dsr_weapons\melee\data\anim\bat_slash.rtm";
			looped = 0;
			speed = 0.5555;
			mask = "handsWeapon2";
			headBobStrength = 1;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			weaponIK = 0;
		};
	};
	class BlendAnims
	{
		handsWeapon2[] = {"head",1,"neck1",1,"neck",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		dsr_BatSlashGst = "";
	};
	class StandBase;
	class Actions
	{
		class NoActions: ManActions
		{
			dsr_BatSlashGst[] = {"dsr_BatSlashGst","Gesture"};
		};
	};
};