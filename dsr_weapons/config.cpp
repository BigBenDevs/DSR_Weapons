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

/*
	quick n dirty
*/
class cfgpatches
{
	class dsr_weapons
	{
		filename = "dsr_weapons.pbo";
		requiredaddons[] = {"a3_data_f","a3_weapons_f"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"dsr_hgun_acpc2","dsr_hgun_p07","dsr_hgun_pdw2000","dsr_hgun_pistol_heavy_01","dsr_pistol_heavy_02","dsr_hgun_pistol_signal","dsr_hgun_rook","dsr_hgun_pistol_01","dsr_arifle_katiba","dsr_arifle_katiba_c","dsr_arifle_katiba_gl","dsr_arifle_mxc","dsr_arifle_mxc_black","dsr_arifle_mx","dsr_arifle_mx_black","dsr_arifle_mx_gl","dsr_arifle_mx_gl_black","dsr_arifle_mx_sw","dsr_arifle_mx_sw_black","dsr_arifle_mxm","dsr_arifle_mxm_black","dsr_smg_01","dsr_smg_02","dsr_lmg_mk200","dsr_lmg_zafir","dsr_mmg_01_hex","dsr_mmg_01_tan","dsr_mmg_02_camo","dsr_mmg_02_black","dsr_mmg_02_sand","dsr_srifle_dmr_01","dsr_srifle_dmr_02","dsr_srifle_dmr_02_camo","dsr_srifle_dmr_02_sniper","dsr_srifle_dmr_03","dsr_srifle_dmr_03_khaki","dsr_srifle_dmr_03_tan","dsr_srifle_dmr_03_multicam","dsr_srifle_dmr_03_woodland","dsr_srifle_dmr_04","dsr_srifle_dmr_04_tan","dsr_srifle_dmr_05_blk","dsr_srifle_dmr_05_hex","dsr_srifle_dmr_05_tan","dsr_srifle_dmr_06_camo","dsr_srifle_dmr_06_olive","dsr_srifle_ebr","dsr_srifle_gm6","dsr_srifle_gm6_camo","dsr_srifle_lrr","dsr_srifle_lrr_camo"};
		vehicles[] = {};
		author = "desolation redux dev team";
	};
};
class slotinfo;
class eventhandlers;
class boltactionweaponbase
{
	class eventhandlers: eventhandlers
		{
			fired="[(_this select 0)] spawn ds_fnc_dowepeffect";
		};
	class weaponeffects 
	{
		class bolteffects 
		{
			gesutre = "gesturefirelrr";
			sound = "\a3\sounds_f\weapons\other\reload_bolt_3.wss";
			sounddistance = 24;
		};
	};
};
class cfgweapons
{
	//--- import

	//handguns
    class hgun_acpc2_f;
	class hgun_p07_f;
    class hgun_pdw2000_f;
    class hgun_pistol_heavy_01_f;
    class hgun_pistol_heavy_02_f;
    class hgun_pistol_signal_f;
	class hgun_rook40_f;
	class hgun_pistol_01_f;
	//assault rifles
	class arifle_katiba_f;
	class arifle_katiba_c_f;
    class arifle_katiba_gl_f;
    class arifle_mxc_f;
    class arifle_mxc_black_f;
    class arifle_mx_f;
    class arifle_mx_black_f;
    class arifle_mx_gl_f;
    class arifle_mx_gl_black_f;
    class arifle_mx_sw_f;
    class arifle_mx_sw_black_f;
    class arifle_mxm_f;
    class arifle_mxm_black_f;
	class arifle_ak12_f;
	class arifle_ak12_gl_f;
	class arifle_akm_f;
	class arifle_aks_f;
	class arifle_spar_01_blk_f;
	class arifle_spar_01_khk_f;
	class arifle_spar_01_snd_f;
	class arifle_spar_03_blk_f;
	class arifle_spar_03_khk_f;
	class arifle_spar_03_snd_f;
 	//sub machinguns
    class smg_01_f;
    class smg_02_f;
    //light machinguns
    class lmg_mk200_f;
    class lmg_zafir_f;
    class mmg_01_hex_f;
    class mmg_01_tan_f;
    class mmg_02_camo_f;
    class mmg_02_black_f;
    class mmg_02_sand_f;
    //sniper rifles
    class srifle_dmr_01_f;
    class srifle_dmr_02_f;
    class srifle_dmr_02_camo_f;
    class srifle_dmr_02_sniper_f;
    class srifle_dmr_03_f;
    class srifle_dmr_03_khaki_f;
    class srifle_dmr_03_tan_f;
    class srifle_dmr_03_multicam_f;
    class srifle_dmr_03_woodland_f;
    class srifle_dmr_04_f;
    class srifle_dmr_04_tan_f;
    class srifle_dmr_05_blk_f;
    class srifle_dmr_05_hex_f;
    class srifle_dmr_05_tan_f;
    class srifle_dmr_06_camo_f;
    class srifle_dmr_06_olive_f;
    class srifle_ebr_f;
    class srifle_gm6_f;
    class srifle_gm6_camo_f;
    class srifle_lrr_f;
    class srifle_lrr_camo_f;
    //--- import end
	
	//--- handguns
	class dsr_hgun_acpc2 : hgun_acpc2_f {
		descriptionshort = "a acpc2 from the old war.";
		description = "an old acpc2 from the war between csat and nato. this is one of the few that survived. it fires .45 acp.";
	};
	class dsr_hgun_p07 : hgun_p07_f {
		descriptionshort = "a p07 from the old war.";
		description = "an old p07 from the war between csat and nato. this is one of the few that survived.";
		inertia = 0.1;
		dexterity = 1.9;
		initspeed = 410;
		maxzeroing = 100;
	};
	class dsr_hgun_pdw2000 : hgun_pdw2000_f {
		descriptionshort = "a pdw2000 from the old war.";
		description = "an old pdw2000 from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_hgun_pistol_heavy_01 : hgun_pistol_heavy_01_f {
		descriptionshort = "a 4-five from the old war.";
		description = "an old 4-five from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_pistol_heavy_02 : hgun_pistol_heavy_02_f {
		descriptionshort = "a zubr from the old war.";
		description = "an old zubr from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_hgun_pistol_signal : hgun_pistol_signal_f {
		descriptionshort = "a starter pistol from the old war.";
		description = "an old starter pistol from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_hgun_rook : hgun_rook40_f {
		descriptionshort = "a rook 40 from the old war.";
		description = "an old rook 40 from the war between csat and nato. this is one of the few that survived.";
		inertia = 0.2;
		dexterity = 1.8;
		initspeed = 450;
		maxzeroing = 100;
	};
	class dsr_hgun_pistol_01 : hgun_pistol_01_f {
		descriptionshort = "a pm 9mm from the old war.";
		description = "an old pm 9mm from the war between csat and nato. this is one of the few that survived.";
	};
	
	//--- rifles
	class dsr_arifle_katiba : arifle_katiba_f {
		descriptionshort = "a katiba from the old war.";
		description = "an old katiba from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_katiba_c : arifle_katiba_c_f {
		descriptionshort = "a katiba carbine from the old war.";
		description = "an old katiba carbine from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_katiba_gl : arifle_katiba_gl_f {
		descriptionshort = "a katiba gl from the old war.";
		description = "an old katiba gl from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mxc : arifle_mxc_f {
		descriptionshort = "a mxc from the old war.";
		description = "an old mxc from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mxc_black : arifle_mxc_black_f {
		descriptionshort = "a mxc black from the old war.";
		description = "an old mxc black from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mx : arifle_mx_f {
		descriptionshort = "a mx from the old war.";
		description = "an old mx from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mx_black : arifle_mx_black_f {
		descriptionshort = "a mx black from the old war.";
		description = "an old mx black from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mx_gl : arifle_mx_gl_f {
		descriptionshort = "a mx 3gl from the old war.";
		description = "an old mx 3gl from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mx_gl_black : arifle_mx_gl_black_f {
		descriptionshort = "a mx 3gl black from the old war.";
		description = "an old mx 3gl black from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mx_sw : arifle_mx_sw_f {
		descriptionshort = "a mx sw from the old war.";
		description = "an old mx sw from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mx_sw_black : arifle_mx_sw_black_f {
		descriptionshort = "a mx sw black from the old war.";
		description = "an old mx sw black from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mxm : arifle_mxm_f {
		descriptionshort = "a mxm from the old war.";
		description = "an old mxm from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_mxm_black : arifle_mxm_black_f {
		descriptionshort = "a mxm black from the old war.";
		description = "an old mxm black from the war between csat and nato. this is one of the few that survived.";
	};
		//requires apex dlc
	class dsr_arifle_ak12 : arifle_ak12_f {
		descriptionshort = "a ak12 from the old war.";
		description = "an old ak12 from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_ak12_gl : arifle_ak12_gl_f {
		descriptionshort = "a ak12 gl from the old war.";
		description = "an old ak12 gl from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_akm : arifle_akm_f {
		descriptionshort = "a akm from the old war.";
		description = "an old akm from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_aks : arifle_aks_f {
		descriptionshort = "a aks from the old war.";
		description = "an old aks from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_spar_01_blk : arifle_spar_01_blk_f {
		descriptionshort = "a spar16 blk from the old war.";
		description = "an old spar16 blk from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_spar_01_khk : arifle_spar_01_khk_f {
		descriptionshort = "a spar16 khk from the old war.";
		description = "an old spar16 khk from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_spar_01_snd : arifle_spar_01_snd_f {
		descriptionshort = "a spar16 snd from the old war.";
		description = "an old spar16 snd from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_spar_03_blk : arifle_spar_03_blk_f {
		descriptionshort = "a spar17 blk from the old war.";
		description = "an old spar17 blk from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_spar_03_khk : arifle_spar_03_khk_f {
		descriptionshort = "a spar17 khk from the old war.";
		description = "an old spar17 khk from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_arifle_spar_03_snd : arifle_spar_03_snd_f {
		descriptionshort = "a spar17 snd from the old war.";
		description = "an old spar17 snd from the war between csat and nato. this is one of the few that survived.";
	};
		//end apex dlc requirement
	//--- sub machineguns
	class dsr_smg_01 : smg_01_f {
		descriptionshort = "a vermin from the old war.";
		description = "an old vermin from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_smg_02 : smg_02_f {
		descriptionshort = "a sting from the old war.";
		description = "an old sting from the war between csat and nato. this is one of the few that survived.";
	};
	//--- light machineguns
	class dsr_lmg_mk200 : lmg_mk200_f {
		descriptionshort = "a mk200 from the old war.";
		description = "an old mk200 from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_lmg_zafir : lmg_zafir_f {
		descriptionshort = "a zafir from the old war.";
		description = "an old zafir from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_mmg_01_hex : mmg_01_hex_f {
		descriptionshort = "a navid hex from the old war.";
		description = "an old navid hex from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_mmg_01_tan : mmg_01_tan_f {
		descriptionshort = "a navid tan from the old war.";
		description = "an old navid tan from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_mmg_02_camo : mmg_02_camo_f {
		descriptionshort = "a spmg camo from the old war.";
		description = "an old spmg camo from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_mmg_02_black : mmg_02_black_f {
		descriptionshort = "a spmg black from the old war.";
		description = "an old spmg black from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_mmg_02_sand : mmg_02_sand_f {
		descriptionshort = "a spmg sand from the old war.";
		description = "an old spmg sand from the war between csat and nato. this is one of the few that survived.";
	};
	//--- sniper rifles
	class dsr_srifle_dmr_01 : srifle_dmr_01_f {
		descriptionshort = "a rahim from the old war.";
		description = "an old rahim from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_02 : srifle_dmr_02_f {
		descriptionshort = "a mar-10 from the old war.";
		description = "an old mar-10 from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_02_camo : srifle_dmr_02_camo_f {
		descriptionshort = "a mar-10 camo from the old war.";
		description = "an old mar-10 camo from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_02_sniper : srifle_dmr_02_sniper_f {
		descriptionshort = "a mar-10 sand from the old war.";
		description = "an old mar-10 sand from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_03 : srifle_dmr_03_f {
		descriptionshort = "a mk-i emr from the old war.";
		description = "an old mk-i emr from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_03_khaki : srifle_dmr_03_khaki_f {
		descriptionshort = "a mk-i emr khaki from the old war.";
		description = "an old mk-i emr khaki from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_03_tan : srifle_dmr_03_tan_f {
		descriptionshort = "a mk-i emr tan from the old war.";
		description = "an old mk-i emr tan from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_03_multicam : srifle_dmr_03_multicam_f {
		descriptionshort = "a mk-i emr camo from the old war.";
		description = "an old mk-i emr camo from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_03_woodland : srifle_dmr_03_woodland_f {
		descriptionshort = "a mk-i emr woodland from the old war.";
		description = "an old mk-i emr woodland from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_04 : srifle_dmr_04_f {
		descriptionshort = "a asp-1 kir from the old war.";
		description = "an old asp-1 kir from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_04_tan : srifle_dmr_04_tan_f {
		descriptionshort = "a asp-1 kir tan from the old war.";
		description = "an old asp-1 kir tan from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_05_blk : srifle_dmr_05_blk_f {
		descriptionshort = "a cyrus black from the old war.";
		description = "an old cyrus black from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_05_hex : srifle_dmr_05_hex_f {
		descriptionshort = "a cyrus hex from the old war.";
		description = "an old cyrus hex from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_05_tan : srifle_dmr_05_tan_f {
		descriptionshort = "a cyrus tan from the old war.";
		description = "an old cyrus tan from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_06_camo : srifle_dmr_06_camo_f {
		descriptionshort = "a mk14 camo from the old war.";
		description = "an old mk14 camo from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_dmr_06_olive : srifle_dmr_06_olive_f {
		descriptionshort = "a mk14 olive from the old war.";
		description = "an old mk14 olive from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_ebr : srifle_ebr_f {
		descriptionshort = "a ebr from the old war.";
		description = "an old ebr from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_gm6 : srifle_gm6_f {
		descriptionshort = "a lynx from the old war.";
		description = "an old lynx from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_gm6_camo : srifle_gm6_camo_f {
		descriptionshort = "a lynx camo from the old war.";
		description = "an old lynx camo from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_lrr : srifle_lrr_f {
		descriptionshort = "a m320 lrr from the old war.";
		description = "an old m320 lrr from the war between csat and nato. this is one of the few that survived.";
	};
	class dsr_srifle_lrr_camo : srifle_lrr_camo_f {
		descriptionshort = "a m320 lrr camo from the old war.";
		description = "an old m320 lrr camo from the war between csat and nato. this is one of the few that survived.";
	};
};