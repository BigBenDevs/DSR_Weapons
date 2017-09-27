/*
 * desolation redux
 * http://desolationredux.com/
 * © 2016 desolation dev team
 *
 * this work is licensed under the arma public license share alike (apl-sa) + bohemia monetization rights.
 * to view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */
class cfgpatches
{
	class dsr_weapons_22lr
	{
		addonrootclass="a3_weapons_f_mark";
		requiredaddons[]=	{"a3_weapons_f_mark","dsr_weapons"};
		requiredversion=0.1;
		units[]={};
		weapons[]=	{"dsr_22lr"};
	};
};
class mode_semiauto;
class slotinfo;
class muzzleslot;
class cowsslot;
class pointerslot;
class underbarrelslot;
#include "cfgmagazines.hpp" /// specific magazines for this rifle
#include "cfgammo.hpp" /// specific ammo for this rifle
class cfgweapons
{
	class rifle_base_f;
	class rifle_long_base_f: rifle_base_f
	{
		class weaponslotsinfo;
	};
	class ugl_f;
	class dsr_srifle_22lr_base_f: rifle_long_base_f
	{
		author="bigben/cronicash";
		scope=2;
		displayname="dsr_22lr";
		selectionfireanim = "muzzleflash"; /// are we able to get rid of all the zaslehs?
		magazines[]= {"10rnd_22lr_26grn","10rnd_22lr_36grn","10rnd_22lr_40grn"};
		reloadaction="gesturereloaddmr06";
		recoil="recoil_smg_01";
		maxzeroing=300;
		handanim[]=
		{
			"ofp2_manskeleton",
			"dsr_weapons\srifle\22lr\data\anims\22lrhandanim.rtm"
			//"\a3\weapons_f_mark\longrangerifles\dmr_06\data\anim\dmr_06.rtm"
		};
		overviewpicture="\a3\data_f_mark\images\watermarkinfo_page02_ca.paa";
		hiddenselections[]=	{};
		hiddenselectionstextures[]= {};
		cursor="srifle";

		class weaponslotsinfo: weaponslotsinfo
		{
			class muzzleslot: muzzleslot
			{
				linkproxy="\a3\data_f\proxies\weapon_slots\muzzle";
				compatibleitems[]=	{"muzzle_snds_b"};
				iconposition[]={0.059999999,0.40000001};
				iconscale=0.15000001;
			};
			class cowsslot: cowsslot
			{
				iconposition[]={0.51999998,0.36000001};
				iconscale=0.15000001;
			};
			class pointerslot
			{
			};
			class underbarrelslot: underbarrelslot
			{
				iconposition[]={0.31999999,0.80000001};
				iconscale=0.30000001;
			};
		};
		distancezoommin=300;
		distancezoommax=300;
		changefiremodesound[]=	{"a3\sounds_f\arsenal\weapons\smg\vermin\firemode_vermin",0.25118864,1,5};
		drysound[]=  {"a3\sounds_f\arsenal\weapons\smg\vermin\dry_vermin",0.25118864,1,20};
		reloadmagazinesound[]=  {"a3\sounds_f\arsenal\weapons\smg\vermin\reload_vermin",1,1,10};
		modes[]=
		{
			"single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		bullet1[] = {"a3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"a3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"a3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"a3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"a3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.56234133,1,15};
		bullet6[] = {"a3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.56234133,1,15};
		bullet7[] = {"a3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.56234133,1,15};
		bullet8[] = {"a3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.56234133,1,15};
		bullet9[] = {"a3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.39810717,1,15};
		bullet10[] = {"a3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.39810717,1,15};
		bullet11[] = {"a3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.39810717,1,15};
		bullet12[] = {"a3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.39810717,1,15};
		soundbullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};

		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype
			{
				closure1[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\closure_vermin_01",0.56234133,1,10};
				closure2[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\closure_vermin_02",0.56234133,1.1,10};
				soundclosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class standardsound: basesoundmodetype
			{
				begin1[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\vermin_short_01",1.818383,1,1200};
				begin2[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\vermin_short_02",1.818383,1,1200};
				begin3[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\vermin_short_03",1.818383,1,1200};
				soundbegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class soundtails
				{
					class tailinterior
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\vermin_tail_interior",1.3848932,1,800};
						frequency = 1;
						volume = "interior";
					};
					class tailtrees
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\vermin_tail_trees",0.885530,1,800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class tailforest
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\vermin_tail_forest",0.885530,1,800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class tailmeadows
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\vermin_tail_meadows",0.885530,1,800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class tailhouses
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\vermin_tail_houses",0.885530,1,800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class silencedsound: basesoundmodetype
			{
				begin1[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\silencer_vermin_short_01",0.7912509,1,300};
				begin2[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\silencer_vermin_short_02",0.7912509,1,300};
				begin3[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\silencer_vermin_short_03",0.7912509,1,300};
				soundbegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class soundtails
				{
					class tailinterior
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\silencer_vermin_tail_interior",1.0,1,300};
						frequency = 1;
						volume = "interior";
					};
					class tailtrees
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\silencer_vermin_tail_trees",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class tailforest
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\silencer_vermin_tail_forest",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class tailmeadows
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\silencer_vermin_tail_meadows",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class tailhouses
					{
						sound[] = {"a3\sounds_f\arsenal\weapons\smg\vermin\silencer_vermin_tail_houses",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			
			reloadtime=0.085000001;
			dispersion=0.00086999999;
			recoil="recoil_single_dmr";
			recoilprone="recoil_single_prone_dmr";
			minrange=2;
			minrangeprobab=0.30000001;
			midrange=350;
			midrangeprobab=0.69999999;
			maxrange=500;
			maxrangeprobab=0.050000001;
		};
		class single_close_optics1: single
		{
			requiredoptictype=1;
			showtoplayer=0;
			minrange=2;
			minrangeprobab=0.050000001;
			midrange=300;
			midrangeprobab=0.80000001;
			maxrange=500;
			maxrangeprobab=0.0099999998;
			airateoffire=2;
			airateoffiredistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minrange=300;
			minrangeprobab=0.050000001;
			midrange=500;
			midrangeprobab=0.69999999;
			maxrange=700;
			maxrangeprobab=0.050000001;
			airateoffire=2;
			airateoffiredistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredoptictype=2;
			minrange=300;
			minrangeprobab=0.050000001;
			midrange=700;
			midrangeprobab=0.5;
			maxrange=1000;
			maxrangeprobab=0.050000001;
			airateoffire=4;
			airateoffiredistance=600;
		};
		aidispersioncoefy=3;
		aidispersioncoefx=2;
	};
	class dsr_srifle_22lr: dsr_srifle_22lr_base_f
	{
		author="bigben/cronicash";
		scope=2;
		model="dsr_weapons\srifle\22lr\dsr_22lr.p3d";
		handanim[]={"ofp2_manskeleton","dsr_weapons\srifle\22lr\data\anims\22lrhandanim.rtm"};
		dexterity=1.6799999;
		displayname="makeshift gun .22 lr (not currently used)";
		picture="dsr_weapons\srifle\m24\data\ui\m24_des_ca.paa";
		uipicture="\a3\weapons_f\data\ui\icon_regular_ca.paa";
		descriptionshort="22lr";
		inertia=0.80000001;
		class weaponslotsinfo: weaponslotsinfo
		{
			mass=90;
		};
		class iteminfo
		{
			priority=1;
		};
	};
};