class cfgpatches
{
	class dsr_weapons_cz750
	{
		requiredaddons[]=
		{
			"a3_weapons_f"
		};
		requiredversion=0.1;
		units[]={};
		weapons[]=
		{
			"dsr_srifle_cz750_f"
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
	class dsr_srifle_cz750_base_f: rifle_base_f
	{
		author="crazy mike";
		_generalmacro="dsr_srifle_cz750_base_f";
		scope=2;
		magazines[]=
		{
			"7rnd_308win_mag"
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
					1.7782794,
					1,
					10
				};
				closure2[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.7782794,
					1,
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
					2.3118864,
					0.8,
					2200
				};
				begin2[]=
				{
					"dsr_weapons\srifle\cz750\data\sounds\enfield_2",
					2.3118864,
					0.8,
					2200
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
	class dsr_srifle_cz750_f: dsr_srifle_cz750_base_f
	{
		author="crazy mike";
		_generalmacro="dsr_srifle_cz750_f";
		baseweapon="dsr_srifle_cz750_f";
		scope=2;
		model="dsr_weapons\srifle\cz750\cz750.p3d";
		displayname="cz-750 7.62 mm";
		picture="\a3\weapons_f\longrangerifles\m320\data\ui\gear_m320_lrr_x_ca.paa";
		uipicture="\a3\weapons_f\data\ui\icon_sniper_ca.paa";
		class library
		{
			libtextdesc="7.62 long range precision rifle";
		};
		descriptionshort="7.62 long range precision rifle";
		class weaponslotsinfo: weaponslotsinfo
		{
			mass=120;
			class muzzleslot
			{
			};
			class cowsslot: cowsslot
			{
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
};
class cfgvehicles
{
	class weapon_base_f;
	class weapon_srifle_cz750_f: weapon_base_f
	{
		scope=2;
		scopecurator=2;
		displayname="cz-750 7.62 mm";
		author="crazy mike";
		editorcategory="edcat_weapons";
		editorsubcategory="edsubcat_sniperrifles";
		vehicleclass="weaponsprimary";
		class transportweapons
		{
			class dsr_srifle_cz750_f
			{
				weapon="dsr_srifle_cz750_f";
				count=1;
			};
		};
		class transportmagazines
		{
			class 10rnd_762x54_mag
			{
				magazine="10rnd_762x54_mag";
				count=1;
			};
		};
	};
};