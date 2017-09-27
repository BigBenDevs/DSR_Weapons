class Rifle;
class M16_base : Rifle
{
	magazines[]={"M16A2_mag_A3PSF"};
    modes[]={"Single","Burst"};
	class Single : Mode_SemiAuto
    {
        begin1[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_1.wss",1.77828,1,1000};
        begin2[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_2.wss",1.77828,1,1000};
		begin3[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_3.wss",1.77828,1,1000};
		begin4[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_4.wss",1.77828,1,1000};
        soundBegin[]={"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
        reloadTime=0.075;
        recoil="recoil_single_primary_3outof10";
        recoilProne="recoil_single_primary_prone_3outof10";
        dispersion=0.001;
        minRange=2;
        minRangeProbab=0.3;
        midRange=250;
        midRangeProbab=0.7;
        maxRange=400;
        maxRangeProbab=0.05;
    };
	class Burst : Mode_Burst
    {
		begin1[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_1.wss",1.77828,1,1000};
        begin2[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_2.wss",1.77828,1,1000};
		begin3[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_3.wss",1.77828,1,1000};
		begin4[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_4.wss",1.77828,1,1000};
        soundBegin[]={"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
		soundBurst=0;
		recoil="recoil_single_primary_3outof10";
        recoilProne="recoil_single_primary_prone_3outof10";
		minRange=0;
		minRangeProbab=0.3;
		midRange=80;
		midRangeProbab=0.7;
		maxRange=120;
		maxRangeProbab=0.05;
		dispersion=0.001;
		reloadTime=0.075;
    };
	class FullAuto : Mode_FullAuto
    {
		begin1[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_1.wss",1.77828,1,1000};
        begin2[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_2.wss",1.77828,1,1000};
		begin3[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_3.wss",1.77828,1,1000};
		begin4[]={"\A3PSF\sounds_A3PSF\weapons\m16\m16_A3PSF_4.wss",1.77828,1,1000};
        soundBegin[]={"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
		reloadTime=0.09;
		recoil="recoil_auto_primary_3outof10";
		recoilProne="recoil_auto_primary_prone_3outof10";
		dispersion=0.00175;
		minRange=0;
		minRangeProbab=0.1;
		midRange=25;
		midRangeProbab=0.7;
		maxRange=70;
		maxRangeProbab=0.05;
    };
};