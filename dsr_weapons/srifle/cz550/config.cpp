class cfgpatches
{
	class dsr_weapons_cz550
	{
		requiredaddons[]=
		{
			"a3_weapons_f"
		};
		requiredversion=0.1;
		units[]={};
		weapons[]=
		{
			"dsr_srifle_cz550_f"
		};
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class slotinfo;
class muzzleslot;
class cowsslot;
class pointerslot;
#include "cfgmagazines.hpp" /// specific magazines for this rifle
#include "cfgammo.hpp" /// specific ammo for this rifle
class cfgweapons
{
	class rifle;
	class rifle_base_f: rifle
	{
		class weaponslotsinfo;
	};
	class dsr_srifle_cz550_base_f: rifle_base_f
	{
		author="crazy mike";
		_generalmacro="dsr_srifle_cz550_base_f";
		scope=2;
		magazines[]=
		{
			"4rnd_243win_mag"
		};
		reloadaction="gesturereloadlrr";
		selectionfireanim = "muzzleflash";
		recoil="recoil_dmr_05";
		maxzeroing=1800;
		cursor="srifle";
		initspeed=910;
		handanim[]=
		{
			"ofp2_manskeleton",
			"\a3\weapons_f_mark\longrangerifles\dmr_06\data\anim\dmr_06.rtm"
		};
		opticsppeffects[]={};
		opticsflare=1;
		opticsdisableperipherialvision=1;
		class gunparticles
		{
			class firsteffect
			{
				effectname="snipercloud";
				positionname="usti hlavne";
				directionname="konec hlavne";
			};
		};
		distancezoommin=300;
		distancezoommax=300;
		bullet1[]=
		{
			"a3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.89125091,
			1,
			25
		};
		bullet2[]=
		{
			"a3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.89125091,
			1,
			25
		};
		bullet3[]=
		{
			"a3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.89125091,
			1,
			25
		};
		bullet4[]=
		{
			"a3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.89125091,
			1,
			25
		};
		bullet5[]=
		{
			"a3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.79432821,
			1,
			25
		};
		bullet6[]=
		{
			"a3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.79432821,
			1,
			25
		};
		bullet7[]=
		{
			"a3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.79432821,
			1,
			25
		};
		bullet8[]=
		{
			"a3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.79432821,
			1,
			25
		};
		bullet9[]=
		{
			"a3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.70794576,
			1,
			25
		};
		bullet10[]=
		{
			"a3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.70794576,
			1,
			25
		};
		bullet11[]=
		{
			"a3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.70794576,
			1,
			25
		};
		bullet12[]=
		{
			"a3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.70794576,
			1,
			25
		};
		soundbullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drysound[]=
		{
			"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_dry",
			0.50118721,
			1,
			20
		};
		reloadmagazinesound[]=
		{
			"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_reload",
			1,
			1,
			10
		};
		soundbipoddeploy[]=
		{
			"a3\sounds_f_mark\arsenal\sfx\bipods\bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundbipodfold[]=
		{
			"a3\sounds_f_mark\arsenal\sfx\bipods\bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundbipoddown[]=
		{
			"a3\sounds_f_mark\arsenal\sfx\bipods\bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundbipodup[]=
		{
			"a3\sounds_f_mark\arsenal\sfx\bipods\bipod_generic_up",
			0.70794576,
			1,
			20
		};
		class single: mode_semiauto
		{
			dispersion=0.00018;
			soundcontinuous=0;
			reloadtime=1.2;
			recoil="recoil_single_gm6";
			recoilprone="recoil_single_prone_gm6";
			sounds[]=
			{
				"standardsound"
			};
			class basesoundmodetype
			{
				closure1[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.5582794,
					0.95,
					10
				};
				closure2[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.5582794,
					0.95,
					10
				};
				soundclosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class standardsound: basesoundmodetype
			{
				begin1[]=
				{
					"dsr_weapons\srifle\cz750\data\sounds\enfield_2",
					2.3518864,
					1.5,
					1400
				};
				begin2[]=
				{
					"dsr_weapons\srifle\cz750\data\sounds\enfield_2",
					2.3518864,
					1.5,
					1400
				};
				soundbegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class soundtails
				{
					class tailforest
					{
						sound[]=
						{
							"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class tailhouses
					{
						sound[]=
						{
							"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class tailinterior
					{
						sound[]=
						{
							"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_tail_interior",
							1.9952624,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class tailmeadows
					{
						sound[]=
						{
							"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class tailtrees
					{
						sound[]=
						{
							"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			minrange=2;
			minrangeprobab=0.1;
			midrange=250;
			midrangeprobab=0.69999999;
			maxrange=350;
			maxrangeprobab=0.050000001;
			airateoffire=3;
			airateoffiredistance=500;
		};
		class far_optic1: single
		{
			showtoplayer=0;
			minrange=150;
			minrangeprobab=0.1;
			midrange=500;
			midrangeprobab=0.69999999;
			maxrange=1000;
			maxrangeprobab=0.30000001;
			airateoffire=5;
			airateoffiredistance=700;
			requiredoptictype=1;
		};
		class medium_optic2: single
		{
			showtoplayer=0;
			minrange=250;
			minrangeprobab=0.1;
			midrange=750;
			midrangeprobab=0.69999999;
			maxrange=1000;
			maxrangeprobab=0.30000001;
			airateoffire=6;
			airateoffiredistance=1000;
			requiredoptictype=2;
		};
		class far_optic2: far_optic1
		{
			minrange=500;
			minrangeprobab=0.1;
			midrange=1050;
			midrangeprobab=0.69999999;
			maxrange=2000;
			maxrangeprobab=0.30000001;
			airateoffire=8;
			airateoffiredistance=2000;
			requiredoptictype=2;
		};
	};
	class dsr_srifle_cz550_f: dsr_srifle_cz550_base_f
	{
		author="crazy mike";
		_generalmacro="dsr_srifle_cz550_f";
		baseweapon="dsr_srifle_cz550_f";
		scope=2;
		model="dsr_weapons\srifle\cz550\cz550.p3d";
		displayname="cz-550 custom .22 lr";
		picture="dsr_weapons\srifle\cz550\data\ui\w_huntingrifle_ca.paa";
		uipicture="\a3\weapons_f\data\ui\icon_sniper_ca.paa";
		modeloptics = "dsr_weapons\srifle\cz550\2dscope_hunter_12";
		class opticsmodes
		{
			class sniper
			{
				opticsid=1;
				usemodeloptics=1;
				opticsppeffects[]=
				{
					"opticschabera1",
					"opticsblur1"
				};
				opticszoommin=0.075000003;
				opticszoommax=0.075000003;
				opticszoominit=0.075000003;
				discretedistance[]={300,400,500,600,700,800,900,1000,1100,1200};
				discretedistanceinitindex=2;
				distancezoommin=300;
				distancezoommax=1200;
				discretefov[]={0.041999999,0.0099999998};
				discreteinitindex=0;
				memorypointcamera="opticview";
				visionmode[]=
				{
					"normal"
				};
				opticsflare=1;
				opticsdisableperipherialvision=1;
				cameradir="";
			};
		};
		class library
		{
			libtextdesc=".22 lr hunting rifle";
		};
		descriptionshort=".22 lr hunting rifle";
		class weaponslotsinfo: weaponslotsinfo
		{
			mass=120;
			class muzzleslot
			{
			};
			class cowsslot: cowsslot
			{
				compatibleitems[]=
				{
				};
				iconposition[]={0.60000002,0.34999999};
				iconscale=0.2;
			};
			class pointerslot
			{
			};
		};
		inertia=1.1;
		aimtransitionspeed=0.5;
		dexterity=1.1;
		class iteminfo
		{
			priority=1;
		};
	};
	
	class dsr_srifle_cz550_camo_f: dsr_srifle_cz550_f
	{
		descriptionshort=".22 lr hunting rifle (camo)";
	};
	
};