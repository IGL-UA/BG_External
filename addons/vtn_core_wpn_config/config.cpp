class CfgPatches
{
	class vtn_core_wpn_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_UI_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"vtn_snd_rwkd"
		};
	};
};
class CfgFunctions
{
	class VTN
	{
		tag="VTN";
		class AUDIO
		{
			file="vtn_core_wpn_config\scripts";
			class InitSFX
			{
				preInit=1;
				recompile=1;
			};
		};
		class PWCONTROL
		{
			file="vtn_core_wpn_config\scripts";
			class InitPWC
			{
				preInit=1;
				recompile=1;
			};
		};
	};
};
class CfgOpticsEffect
{
	class VTN_BN1_FilmGrain
	{
		type="FilmGrain";
		priority=2000;
		params[]={0.34999999,1,3.5,0.34999999,1,0};
	};
	class VTN_BN1_OpticsBlur
	{
		type="DynamicBlur";
		priority=400;
		params[]={0.85000002};
	};
	class VTN_BN1_OpticsChromAberration
	{
		type="ChromAberration";
		priority=200;
		params[]={0.045000002,0.045000002,1};
	};
	class VTN_BN1_ColorCorrection
	{
		type="ColorCorrections";
		priority=1500;
		params[]={3,3,3,0,0,0,0,1,1,0.2,0.60000002,0.199,0.58700001,0.114,0};
	};
	class VTN_BN3_FilmGrain
	{
		type="FilmGrain";
		priority=2000;
		params[]={0.30000001,1,2,0.34999999,1,0};
	};
	class VTN_BN3_OpticsBlur
	{
		type="DynamicBlur";
		priority=400;
		params[]={0.55000001};
	};
	class VTN_BN3_OpticsChromAberration
	{
		type="ChromAberration";
		priority=200;
		params[]={0.015,0.015,1};
	};
	class VTN_NV_FilmGrain
	{
		type="FilmGrain";
		priority=2000;
		params[]={0.30000001,1,2,0.34999999,1,0};
	};
	class VTN_NV_OpticsBlur
	{
		type="DynamicBlur";
		priority=400;
		params[]={0.30000001};
	};
	class VTN_Optics_RadialBlur
	{
		type="RadialBlur";
		priority=100;
		params[]={0.024499999,0.024499999,0.11,0.18000001};
	};
	class VTN_OpticsCHAbera1
	{
		type="ChromAberration";
		priority=200;
		params[]={0.0175,0.0175,0};
	};
	class VTN_TPKU2B_ColorCorrection
	{
		type="ColorCorrections";
		priority=1500;
		params[]={1,1,0,0.80000001,1,0.60000002,0,0.80000001,1,0.60000002,0.69999999,1,1,1,0};
	};
	class VTN_PSO1_ColorCorrection
	{
		type="ColorCorrections";
		priority=2500;
		params[]={1,1,0,0.80000001,1,0.60000002,0,0.80000001,1,0.60000002,0.69999999,1,1,1,0};
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class NVGPars
		{
			filmGrainEnabled=1;
			filmGrainPars[]={0.34999999,1,3.75,0.34999999,1,0};
		};
	};
};
class Mode_SemiAuto
{
	displayName="$STR_DN_VTN_AKOD";
	textureType="semi";
	recoil="recoil_single_primary_3outof10";
	recoilProne="recoil_single_primary_prone_3outof10";
	aiDispersionCoefY=1.5;
	aiDispersionCoefX=1.25;
	soundBurst=0;
	requiredOpticType=-1;
	aiRateOfFire=2;
	aiRateOfFireDistance=500;
};
class Mode_Burst: Mode_SemiAuto
{
	displayName="$STR_DN_VTN_AKAV";
	textureType="burst";
	recoil="recoil_auto_primary_3outof10";
	recoilProne="recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY=2;
	aiDispersionCoefX=1.75;
	soundBurst=0;
	requiredOpticType=-1;
	aiRateOfFire=2;
	aiRateOfFireDistance=500;
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName="$STR_DN_VTN_AKAV";
	textureType="fullAuto";
	recoil="recoil_auto_primary_3outof10";
	recoilProne="recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY=2.25;
	aiDispersionCoefX=2;
	soundBurst=0;
	requiredOpticType=-1;
	aiRateOfFire=2;
	aiRateOfFireDistance=500;
};
class cfgRecoils
{
	access=0;
	empty[]={};
	impulse[]={0.029999999,0.02,0.2,0.079999998,0.079999998,0.80000001,0.1,0.029999999,-0.1,0.30000001,0,0};
	class Default;
	recoil_m4a1ptw[]={0.001,0.001,0.001};
	recoil_single_ak74[]=
	{
		0,
		0,
		0,
		0.029999999,
		"36.943*((0.001))*(0.3)",
		"3.587*((0.004))*(1)",
		0.029999999,
		"31.817*((0.001))*(0.5)",
		"1.251*((0.004))*(1.4)",
		0.029999999,
		"19.755*((0.001))*(0.7)",
		"0.764*((0.004))*(1.8)",
		0.059999999,
		"7.388*((0.001))*(0.9)",
		"0.285*((0.004))*(2.2)",
		0.059999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(4)",
		0.059999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(2)",
		0.059999999,
		"-3.677*((0.001))*(0.5)",
		"-0.147*((0.004))*(1)",
		0.059999999,
		"-3.138*((0.001))*(0.3)",
		"-0.125*((0.004))*(1)",
		0.059999999,
		0,
		0
	};
	recoil_single_prone_ak74[]=
	{
		0,
		0,
		0,
		0.029999999,
		"36.943*((0.001))*(0.3)",
		"3.587*((0.004))*(0.7)",
		0.029999999,
		"31.817*((0.001))*(0.5)",
		"1.251*((0.004))*(1.1)",
		0.029999999,
		"19.755*((0.001))*(0.7)",
		"0.764*((0.004))*(1.5)",
		0.059999999,
		"7.388*((0.001))*(0.9)",
		"0.285*((0.004))*(1.9)",
		0.059999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(2)",
		0.059999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(1)",
		0.059999999,
		"-3.677*((0.001))*(0.5)",
		"-0.147*((0.004))*(0.5)",
		0.059999999,
		"-3.138*((0.001))*(0.3)",
		"-0.125*((0.004))*(0.3)",
		0.059999999,
		0,
		0
	};
	recoil_auto_ak74[]=
	{
		0,
		0,
		0,
		0.059999999,
		"36.943*((0.001))*(1.2)",
		"3.587*((0.004))*(1.1)",
		0.059999999,
		"31.817*((0.001))*(1.1)",
		"1.251*((0.004))*(1.6)",
		0.059999999,
		"19.755*((0.001))*(1.7)",
		"0.764*((0.004))*(2.4)",
		0.059999999,
		"7.388*((0.001))*(1.9)",
		"0.285*((0.004))*(2)",
		0.029999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(6)",
		0.029999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(3)",
		0.029999999,
		"-3.677*((0.001))*(0.5)",
		"-0.147*((0.004))*(2)",
		0.059999999,
		0,
		0
	};
	recoil_auto_prone_ak74[]=
	{
		0,
		0,
		0,
		0.059999999,
		"36.943*((0.001))*(1.2)",
		"3.587*((0.004))*(0.3)",
		0.059999999,
		"31.817*((0.001))*(1.5)",
		"1.251*((0.004))*(0.7)",
		0.059999999,
		"19.755*((0.001))*(1.7)",
		"0.764*((0.004))*(1.1)",
		0.059999999,
		"7.388*((0.001))*(1.9)",
		"0.285*((0.004))*(1.5)",
		0.029999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(4)",
		0.029999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(2)",
		0.029999999,
		"-3.677*((0.001))*(0.5)",
		"-0.147*((0.004))*(1)",
		0.059999999,
		0,
		0
	};
	recoil_single_ak47[]=
	{
		0,
		0,
		0,
		0.029999999,
		"36.943*((0.001))*(0.3)",
		"3.587*((0.004))*(3)",
		0.029999999,
		"31.817*((0.001))*(0.5)",
		"1.251*((0.004))*(3.4)",
		0.029999999,
		"19.755*((0.001))*(0.7)",
		"0.764*((0.004))*(3.8)",
		0.059999999,
		"7.388*((0.001))*(0.9)",
		"0.285*((0.004))*(4.2)",
		0.059999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(7)",
		0.059999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(5)",
		0.059999999,
		"-3.677*((0.001))*(0.5)",
		"-0.147*((0.004))*(3)",
		0.059999999,
		"-3.138*((0.001))*(0.3)",
		"-0.125*((0.004))*(1)",
		0.059999999,
		0,
		0
	};
	recoil_single_prone_ak47[]=
	{
		0,
		0,
		0,
		0.029999999,
		"36.943*((0.001))*(0.3)",
		"3.587*((0.004))*(0.7)",
		0.029999999,
		"31.817*((0.001))*(0.5)",
		"1.251*((0.004))*(1.1)",
		0.029999999,
		"19.755*((0.001))*(0.7)",
		"0.764*((0.004))*(1.5)",
		0.059999999,
		"7.388*((0.001))*(0.9)",
		"0.285*((0.004))*(1.9)",
		0.059999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(2)",
		0.059999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(1)",
		0.059999999,
		"-3.677*((0.001))*(0.5)",
		"-0.147*((0.004))*(0.5)",
		0.059999999,
		"-3.138*((0.001))*(0.3)",
		"-0.125*((0.004))*(0.3)",
		0.059999999,
		0,
		0
	};
	recoil_auto_ak47[]=
	{
		0,
		0,
		0,
		0.059999999,
		"36.943*((0.001))*(1.2)",
		"3.587*((0.004))*(1.7)",
		0.059999999,
		"31.817*((0.001))*(1.5)",
		"1.251*((0.004))*(2.1)",
		0.059999999,
		"19.755*((0.001))*(1.7)",
		"0.764*((0.004))*(2.4)",
		0.059999999,
		"7.388*((0.001))*(1.9)",
		"0.285*((0.004))*(2.8)",
		0.029999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(7)",
		0.029999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(5)",
		0.029999999,
		"-3.677*((0.001))*(0.5)",
		"-0.147*((0.004))*(3)",
		0.059999999,
		0,
		0
	};
	recoil_auto_prone_ak47[]=
	{
		0,
		0,
		0,
		0.059999999,
		"36.943*((0.001))*(1.2)",
		"3.587*((0.004))*(0.3)",
		0.059999999,
		"31.817*((0.001))*(1.5)",
		"1.251*((0.004))*(0.7)",
		0.059999999,
		"19.755*((0.001))*(1.7)",
		"0.764*((0.004))*(1.1)",
		0.059999999,
		"7.388*((0.001))*(1.9)",
		"0.285*((0.004))*(1.5)",
		0.029999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(4)",
		0.029999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(2)",
		0.029999999,
		"-3.677*((0.001))*(0.5)",
		"-0.147*((0.004))*(1)",
		0.059999999,
		0,
		0
	};
	recoil_single_gp25[]=
	{
		0,
		0,
		0,
		0.02,
		"36.943*((0.001))*(0.3)",
		"3.587*((0.004))*(20)",
		0.029999999,
		"31.817*((0.001))*(0.5)",
		"1.251*((0.004))*(22)",
		0.029999999,
		"19.755*((0.001))*(0.7)",
		"0.764*((0.004))*(22)",
		0.029999999,
		"7.388*((0.001))*(21)",
		"0.285*((0.004))*(24)",
		0.029999999,
		"-2.402*((0.001))*(21)",
		"-0.096*((0.004))*(27)",
		0.029999999,
		"-3.53*((0.001))*(21)",
		"-0.141*((0.004))*(25)",
		0.029999999,
		"-3.677*((0.001))*(18)",
		"-0.147*((0.004))*(24)",
		0.029999999,
		"-3.138*((0.001))*(18)",
		"-0.125*((0.004))*(22)",
		0.059999999,
		"-2.206*((0.001))*(18)",
		"-0.088*((0.004))*(17)",
		0.059999999,
		0,
		0
	};
	recoil_single_prone_gp25[]=
	{
		0,
		0,
		0,
		0.02,
		"36.943*((0.001))*(0.1)",
		"3.587*(0.5)*((0.004))*(15)",
		0.029999999,
		"31.817*((0.001))*(0.3)",
		"1.251*(0.5)*((0.004))*(15)",
		0.029999999,
		"19.755*((0.001))*(0.5)",
		"0.764*(0.5)*((0.004))*(14)",
		0.029999999,
		"7.388*((0.001))*(0.7)",
		"0.285*(0.5)*((0.004))*(15)",
		0.059999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*(0.5)*(0.5)*((0.004))*(16)",
		0.059999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*(0.5)*((0.004))*(15)",
		0.059999999,
		"-3.677*((0.001))*(0.4)",
		"-0.147*(0.5)*((0.004))*(14)",
		0.059999999,
		"-3.138*((0.001))*(0.3)",
		"-0.125*(0.5)*((0.004))*(15)",
		0.059999999,
		0,
		0
	};
	recoil_single_m203[]=
	{
		0,
		0,
		0,
		0.02,
		"36.943*((0.001))*(0.3)",
		"3.587*((0.004))*(20)",
		0.029999999,
		"31.817*((0.001))*(0.5)",
		"1.251*((0.004))*(22)",
		0.029999999,
		"19.755*((0.001))*(0.7)",
		"0.764*((0.004))*(22)",
		0.029999999,
		"7.388*((0.001))*(21)",
		"0.285*((0.004))*(24)",
		0.029999999,
		"-2.402*((0.001))*(21)",
		"-0.096*((0.004))*(27)",
		0.029999999,
		"-3.53*((0.001))*(21)",
		"-0.141*((0.004))*(25)",
		0.029999999,
		"-3.677*((0.001))*(18)",
		"-0.147*((0.004))*(24)",
		0.029999999,
		"-3.138*((0.001))*(18)",
		"-0.125*((0.004))*(22)",
		0.059999999,
		"-2.206*((0.001))*(18)",
		"-0.088*((0.004))*(17)",
		0.059999999,
		0,
		0
	};
	recoil_single_prone_m203[]=
	{
		0,
		0,
		0,
		0.02,
		"36.943*((0.001))*(0.1)",
		"3.587*(0.5)*((0.004))*(15)",
		0.029999999,
		"31.817*((0.001))*(0.3)",
		"1.251*(0.5)*((0.004))*(15)",
		0.029999999,
		"19.755*((0.001))*(0.5)",
		"0.764*(0.5)*((0.004))*(14)",
		0.029999999,
		"7.388*((0.001))*(0.7)",
		"0.285*(0.5)*((0.004))*(15)",
		0.059999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*(0.5)*(0.5)*((0.004))*(16)",
		0.059999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*(0.5)*((0.004))*(15)",
		0.059999999,
		"-3.677*((0.001))*(0.4)",
		"-0.147*(0.5)*((0.004))*(14)",
		0.059999999,
		"-3.138*((0.001))*(0.3)",
		"-0.125*(0.5)*((0.004))*(15)",
		0.059999999,
		0,
		0
	};
	recoil_single_svd[]=
	{
		0,
		0,
		0,
		0.02,
		"36.943*((0.001))*(0.3)",
		"3.587*((0.004))*(10)",
		0.029999999,
		"31.817*((0.001))*(0.5)",
		"1.251*((0.004))*(12)",
		0.029999999,
		"19.755*((0.001))*(0.7)",
		"0.764*((0.004))*(12)",
		0.029999999,
		"7.388*((0.001))*(0.9)",
		"0.285*((0.004))*(14)",
		0.029999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*((0.004))*(17)",
		0.029999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*((0.004))*(15)",
		0.029999999,
		"-3.677*((0.001))*(0.3)",
		"-0.147*((0.004))*(14)",
		0.029999999,
		"-3.138*((0.001))*(0.3)",
		"-0.125*((0.004))*(11)",
		0.059999999,
		"-2.206*((0.001))*(0.3)",
		"-0.088*((0.004))*(7)",
		0.059999999,
		0,
		0
	};
	recoil_single_prone_svd[]=
	{
		0,
		0,
		0,
		0.02,
		"36.943*((0.001))*(0.1)",
		"3.587*(0.5)*((0.004))*(5)",
		0.029999999,
		"31.817*((0.001))*(0.3)",
		"1.251*(0.5)*((0.004))*(7)",
		0.029999999,
		"19.755*((0.001))*(0.5)",
		"0.764*(0.5)*((0.004))*(6)",
		0.029999999,
		"7.388*((0.001))*(0.7)",
		"0.285*(0.5)*((0.004))*(7)",
		0.059999999,
		"-2.402*((0.001))*(0.3)",
		"-0.096*(0.5)*(0.5)*((0.004))*(9)",
		0.059999999,
		"-3.53*((0.001))*(0.5)",
		"-0.141*(0.5)*((0.004))*(7)",
		0.059999999,
		"-3.677*((0.001))*(0.4)",
		"-0.147*(0.5)*((0.004))*(8)",
		0.059999999,
		"-3.138*((0.001))*(0.3)",
		"-0.125*(0.5)*((0.004))*(6)",
		0.059999999,
		0,
		0
	};
	class recoil_default;
	class recoil_gp25: recoil_default
	{
		muzzleOuter[]={1.4,3.5,0.69999999,0.80000001};
		kickBack[]={0.2,0.2};
		temporary=0.025;
	};
	class recoil_m203: recoil_default
	{
		muzzleOuter[]={1.4,3.5,0.69999999,0.80000001};
		kickBack[]={0.1,0.1};
		temporary=0.025;
	};
};
class CfgMineTriggers
{
	class Default;
	class TimeTrigger50: Default
	{
		mineTriggerType="timer";
		timerStep=50;
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class B_762x51_Ball;
	class G_40mm_HE;
	class GrenadeHand;
	class SmokeShell;

/*--------------------------RPK-----------------------------*/
	class rhs_B_545x39_Ball_Tracer_Green;
	class rhs_B_545x39_7U1_Ball;
	class rhs_B_545x39_7N10_Ball;
    class rhs_B_545x39_7N22_Ball;
    class rhs_B_545x39_Ball;
	class rhs_B_762x54_Ball;

	class VTN_545x39_Ball_SC: rhs_B_545x39_7N22_Ball
	{
		allowAgainstInfantry=1;
		aiAmmoUsageFlags="64";
		airFriction=-0.0013379999;
		waterFriction=-0.30000001;
		timeToLive=20;
		cost=1;
		deflecting=40;
		hit=9;
		caliber=1.3;
		cartridge="RHS_Cartridge_545x39";
		indirecthit=0;
		indirecthitrange=0;
		dangerRadiusBulletClose=0.5;
		dangerRadiusHit=-1;
		suppressionRadiusBulletClose=0.5;
		suppressionRadiusHit=0.5;
		class CamShakeExplode
		{
			power="(5^0.5)";
			duration="((round (5^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class VTN_545x39_Ball_SC2: rhs_B_545x39_7N22_Ball
	{
		allowAgainstInfantry=1;
		aiAmmoUsageFlags="64";
		deflecting=45;
		hit=9;
		caliber=1.2;
	};
	class VTN_545x39_Ball_TRC: VTN_545x39_Ball_SC
	{
		airFriction=-0.001238;
		hit=8;
		caliber=1.25;
/* 		model="vtn_tracer_md\vtn_tracer_green"; */
		tracerScale=0.75;
		tracerStartTime=0.050000001;
		tracerEndTime=1.85;
		nvgOnly=0;
/* 		explosive=9.9999997e-005; */
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
	class VTN_545x39_Ball_TRC2: VTN_545x39_Ball_TRC
	{
		caliber=1.2;
		deflecting=45;
	};
	class VTN_545x39_Ball_AP: VTN_545x39_Ball_TRC
	{
		airFriction=-0.001438;
		waterFriction=-0.40000001;
		hit=13;
		caliber=1.6;
	};
	class VTN_545x39_Ball_AP2: VTN_545x39_Ball_AP
	{
		hit=14;
		caliber=1.65;
	};
	class VTN_545x39_Ball_SS: VTN_545x39_Ball_SC
	{
		audiblefire=0.07;
		hit=6;
		caliber=1.2;
		cartridge="RHS_Cartridge_545x39";
		indirecthit=0;
		indirecthitrange=0;
		typicalspeed=300;
	};
	class VTN_762x25_Ball_FMJ: rhs_B_762x54_Ball
	{
		allowAgainstInfantry=1;
		aiAmmoUsageFlags="64";
		audiblefire=5;
		airFriction=-0.0022499999;
		waterFriction=-0.5;
		timeToLive=20;
		cost=1;
		deflecting=20;
		hit=6.25;
		caliber=0.80000001;
		cartridge="RHS_Cartridge_762x54r";
		indirecthit=0;
		indirecthitrange=0;
		typicalspeed=395;
		dangerRadiusBulletClose=0.5;
		dangerRadiusHit=-1;
		suppressionRadiusBulletClose=0.5;
		suppressionRadiusHit=0.5;
		class CamShakeExplode
		{
			power="(8^0.5)";
			duration="((round (8^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class VTN_762x25_Ball_FMJ1: VTN_762x25_Ball_FMJ
	{
		hit=6;
		caliber=0.80000001;
	};
	class VTN_762x25_Ball_SC: VTN_762x25_Ball_FMJ
	{
		hit=8;
		caliber=0.92500001;
	};
	class VTN_762x25_Ball_TRC: VTN_762x25_Ball_FMJ
	{
		hit=6;
		caliber=0.80000001;
/* 		model="vtn_tracer_md\vtn_tracer_green"; */
		tracerScale=0.81999999;
		tracerStartTime=0.050000001;
		tracerEndTime=0.99000001;
		nvgOnly=0;
/* 		explosive=9.9999997e-005; */
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
	class VTN_762x39_Ball_SC: rhs_B_762x54_Ball
	{
		allowAgainstInfantry=1;
		aiAmmoUsageFlags="64";
		airFriction=-0.0012769999;
		waterFriction=-0.40000001;
		timeToLive=20;
		audiblefire=18;
		cost=1;
		deflecting=20;
		hit=8;
		caliber=1.5;
		cartridge="RHS_Cartridge_762x54r";
		indirecthit=0;
		indirecthitrange=0;
		class CamShakeExplode
		{
			power="(8^0.5)";
			duration="((round (8^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class VTN_762x39_Ball_TRC: VTN_762x39_Ball_SC
	{
		airFriction=-0.001177;
		hit=7;
		caliber=1.45;
/* 		model="vtn_tracer_md\vtn_tracer_green"; */
		tracerScale=0.80000001;
		tracerStartTime=0.1;
		tracerEndTime=3.0999999;
		nvgOnly=0;
/* 		explosive=9.9999997e-005; */
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
	class VTN_762x39_Ball_AP: VTN_762x39_Ball_SC
	{
		airFriction=-0.001477;
		waterFriction=-0.44999999;
		hit=13;
		caliber=1.7;
	};
	class VTN_762x39_Ball_INC: VTN_762x39_Ball_AP
	{
		hit=10;
		caliber=1.45;
		indirecthit=2;
		indirecthitrange=0.0049999999;
/* 		explosive=0.1; */
	};
	class VTN_762x39_Ball_API: VTN_762x39_Ball_INC
	{
		hit=14;
		caliber=1.7;
/* 		model="vtn_tracer_md\vtn_tracer_green"; */
		tracerScale=0.80000001;
		tracerStartTime=0.050000001;
		tracerEndTime=2.95;
		nvgOnly=0;
	};
	class VTN_762x39_Ball_SS: VTN_762x39_Ball_SC
	{
		airFriction=-0.00056499999;
		audiblefire=0.075000003;
		hit=7;
		caliber=1.35;
		indirecthit=0;
		indirecthitrange=0;
		typicalspeed=300;
	};
	class VTN_762x39_Ball_PRS: VTN_762x39_Ball_SC
	{
		deflecting=7;
	};
	class VTN_762x41_Ball_SS: rhs_B_762x54_Ball
	{
		allowAgainstInfantry=1;
		aiAmmoUsageFlags="64";
		airFriction=-0.0012769999;
		waterFriction=-0.5;
		visibleFire=0;
		audiblefire=0.075000003;
		cost=1;
		deflecting=20;
		hit=8;
		caliber=0.75;
		cartridge="RHS_Cartridge_762x54r";
		indirecthit=0;
		indirecthitrange=0;
		typicalspeed=190;
		timeToLive=30;
		dangerRadiusBulletClose=0.5;
		dangerRadiusHit=-1;
		suppressionRadiusBulletClose=0.5;
		suppressionRadiusHit=0.5;
	};
	class VTN_762x54_Ball_SC: VTN_762x39_Ball_SC
	{
		airFriction=-0.000955;
		waterFriction=-0.34999999;
		timeToLive=20;
		audiblefire=20;
		cost=1;
		deflecting=20;
		hit=12;
		caliber=1.6;
		cartridge="RHS_Cartridge_762x54r";
		indirecthit=0;
		indirecthitrange=0;
		tracerStartTime=-1;
	};
	class VTN_762x54_Ball_SC2: VTN_762x54_Ball_SC
	{
		airFriction=-0.000955;
		hit=12;
		caliber=1.575;
	};
	class VTN_762x54_Ball_SC3: VTN_762x54_Ball_SC
	{
		airFriction=-0.000955;
		hit=11;
		caliber=1.515;
	};
	class VTN_762x54_Ball_TRC: VTN_762x54_Ball_SC
	{
		airFriction=-0.00091499998;
		hit=11;
		caliber=1.55;
/* 		model="vtn_tracer_md\vtn_tracer_green"; */
		tracerScale=0.81;
		tracerStartTime=0.050000001;
		tracerEndTime=2.95;
		nvgOnly=0;
		explosive=0.1;
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
	class VTN_762x54_Ball_AP: VTN_762x54_Ball_SC
	{
		airFriction=-0.00098500005;
		waterFriction=-0.40000001;
		hit=15.5;
		caliber=1.75;
	};
	class VTN_762x54_Ball_AP2: VTN_762x54_Ball_AP
	{
		hit=15;
		caliber=1.75;
	};
	class VTN_762x54_Ball_INC: VTN_762x54_Ball_AP
	{
		hit=13;
		caliber=1.55;
		indirecthit=2;
		indirecthitrange=0.0049999999;
/* 		explosive=0.1; */
	};
	class VTN_762x54_Ball_API: VTN_762x54_Ball_INC
	{
		hit=16;
		caliber=1.8;
/* 		model="vtn_tracer_md\vtn_tracer_green"; */
		tracerScale=0.81;
		tracerStartTime=0.050000001;
		tracerEndTime=3;
		nvgOnly=0;
	};

/*--------------------------end RPK-----------------------------*/	
	
/*--------------------------ags-----------------------------*/	
	class VTN_VOG25_HE: G_40mm_HE
	{
		airFriction=-0.0011390001;
		timeToLive=19;
		simulation="shotShell";
		model="vtn_tripode_ags30_cf\wog25_vistrel";
		hit=10;
		indirectHit=5;
		indirectHitRange=1;
		explosive=1;
		cost=10;
		deflecting=0;
		fuseDistance=15;
		whistleDist=5;
		CraterEffects="GrenadeCrater";
		CraterWaterEffects="ImpactEffectsWaterExplosion";
		class CamShakeExplode
		{
			distance=5;
			duration=1;
			frequency=20;
			power=5;
		};
		class CamShakePlayerFire
		{
			duration=0.1;
			frequency=20;
			power=1;
		};
	};
	class VTN_VOG17A_HE: VTN_VOG25_HE
	{
		airfriction=-0.00044800001;
		timeToLive=60;
		fusedistance=10;
		explosive=1;
		hit=25;
		indirecthit=5;
		indirecthitrange=0.64999998;
		explosioneffects="GrenadeExplosion";
		explosionsoundeffect="DefaultExplosion";
		caliber=1.39;
		typicalspeed=150;
		deflecting=0;
		airlock=1;
		allowAgainstInfantry=1;
		cost=50;
		audiblefire=32;
		supersonicCrackNear[]=
		{
			"",
			0,
			1,
			0
		};
		supersonicCrackFar[]=
		{
			"",
			0,
			1,
			0
		};
		class CamShakeExplode
		{
			distance=5;
			duration=1;
			frequency=20;
			power=5;
		};
		class CamShakePlayerFire
		{
			duration=0.1;
			frequency=20;
			power=1;
		};
	};
	class VTN_VOG17M_HE: VTN_VOG17A_HE
	{
		timeToLive=36;
	};
	class VTN_VOG30_HE: VTN_VOG17M_HE
	{
		caliber=1.39;
		hit=27;
		indirecthit=5;
		indirecthitrange=0.85000002;
	};
	class VTN_M406_HE: G_40mm_HE
	{
		simulation="shotShell";
		model="\vtn_wpnw_m203_grenades_md\m406_vistrel";
		hit=10;
		indirectHit=5;
		indirectHitRange=1;
		visibleFireTime=3;
		explosive=1;
		cost=10;
		deflecting=0;
		airFriction=-0.001064;
		fuseDistance=15;
		whistleDist=5;
		CraterEffects="GrenadeCrater";
		CraterWaterEffects="ImpactEffectsWaterExplosion";
		class CamShakeExplode
		{
			distance=5;
			duration=1;
			frequency=20;
			power=5;
		};
		class CamShakePlayerFire
		{
			duration=0.1;
			frequency=20;
			power=1.55;
		};
	};
	class VTN_M384_HE: VTN_M406_HE
	{
		hit=20;
		model="\vtn_wpnw_m203_grenades_md\m406_vistrel";
		typicalSpeed=185;
		fuseDistance=22.5;
		airFriction=-0.001;
	};
	class VTN_M1001_HE: VTN_M384_HE
	{
		hit=15;
		indirectHitRange=2.6500001;
		model="\vtn_wpnw_m203_grenades_md\m406_vistrel";
		airFriction=-0.001;
	};
	class VTN_M430_HEDP: VTN_M384_HE
	{
		model="\vtn_wpnw_m203_grenades_md\m433_vistrel";
		hit=55;
		indirectHitRange=0.34999999;
	};
	
/*-----------------------end ags--------------------------------*/		

};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class HandGrenade;

	class VTN_RPK74_45p_SC: 30Rnd_556x45_Stanag
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		displayName="$STR_DN_VTN_RPK74_45p_SC";
		displaynameShort="$STR_DN_VTN_5.45x39_SC";
		descriptionShort="$STR_DS_VTN_RPK74_45p_SC";
		model="\vtn_wpne_rpk74m_magaz_md\mag45_plastic_SC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		ammo="VTN_545x39_Ball_SC";
		count=45;
		initspeed=900;
		lastroundstracer=0;
		mass=12.215;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"vtn_wpne_ak74m_magaz_tx\osnsv_rpk74m_plastic.paa"
		};
		modelSpecial="vtn_wpne_ak74m_magaz_md\magazineProxy\rpk74m_45rnd";
	};
	class VTN_RPK74_45p_TRC: VTN_RPK74_45p_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK74_45p_TRC";
		displaynameShort="$STR_DN_VTN_5.45x39_TRC";
		descriptionShort="$STR_DS_VTN_RPK74_45p_TRC";
		model="\vtn_wpne_rpk74m_magaz_md\mag45_plastic_TRC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		ammo="VTN_545x39_Ball_TRC";
		tracersEvery=3;
		lastroundstracer=5;
		mass=12.104;
	};
	class VTN_RPK74_45p_AP: VTN_RPK74_45p_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK74_45p_AP2";
		displaynameShort="$STR_DN_VTN_5.45x39_AP2";
		descriptionShort="$STR_DS_VTN_RPK74_45p_AP2";
		model="\vtn_wpne_rpk74m_magaz_md\mag45_plastic_AP";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		ammo="VTN_545x39_Ball_AP";
		mass=12.312;
	};
	class VTN_RPK74_45b_SC: VTN_RPK74_45p_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK74_45b_SC";
		displaynameShort="$STR_DN_VTN_5.45x39_SC2";
		descriptionShort="$STR_DS_VTN_RPK74_45b_SC";
		model="\vtn_wpne_rpk74m_magaz_md\mag45_bakelit_SC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		ammo="VTN_545x39_Ball_SC2";
		count=45;
		initspeed=890;
		lastroundstracer=0;
		mass=12.076;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"vtn_wpne_ak74m_magaz_tx\osnsv_rpk74_bakelit.paa"
		};
		modelSpecial="vtn_wpne_ak74m_magaz_md\magazineProxy\rpk74_45rnd";
	};
	class VTN_RPK74_45b_TRC: VTN_RPK74_45b_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK74_45b_TRC";
		displaynameShort="$STR_DN_VTN_5.45x39_TRC2";
		descriptionShort="$STR_DS_VTN_RPK74_45b_TRC";
		model="\vtn_wpne_rpk74m_magaz_md\mag45_bakelit_TRC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		ammo="VTN_545x39_Ball_TRC2";
		tracersEvery=3;
		lastroundstracer=5;
		mass=12.02;
	};
	class VTN_RPK74_45b_AP: VTN_RPK74_45b_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK74_45b_AP";
		displaynameShort="$STR_DN_VTN_5.45x39_AP";
		descriptionShort="$STR_DS_VTN_RPK74_45b_AP";
		model="\vtn_wpne_rpk74m_magaz_md\mag45_bakelit_AP";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		ammo="VTN_545x39_Ball_AP";
		mass=12.145;
	};
	class VTN_RPK_40b_SC: VTN_RPK74_45p_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40b_SC";
		displaynameShort="$STR_DN_VTN_7.62x39_SC";
		descriptionShort="$STR_DS_VTN_RPK_40b_SC";
		model="\vtn_wpne_rpk_magaz_md\mag40_bakelit_SC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_SC";
		count=40;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"vtn_wpne_rpk_magaz_tx\osnsv_rpk_bakelit_co.paa"
		};
		modelSpecial="vtn_wpne_akm_magaz_md\magazineProxy\rpk_b_40rnd";
		modelSpecialIsProxy=1;
		initspeed=715;
		lastroundstracer=0;
		mass=13.148;
	};
	class VTN_RPK_40b_TRC: VTN_RPK_40b_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40b_TRC";
		displaynameShort="$STR_DN_VTN_7.62x39_TRC";
		descriptionShort="$STR_DS_VTN_RPK_40b_TRC";
		model="\vtn_wpne_rpk_magaz_md\mag40_bakelit_TRC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_TRC";
		count=40;
		tracersEvery=3;
		lastroundstracer=5;
		mass=13.173;
	};
	class VTN_RPK_40b_AP: VTN_RPK_40b_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40b_AP";
		displaynameShort="$STR_DN_VTN_7.62x39_AP";
		descriptionShort="$STR_DS_VTN_RPK_40b_AP";
		model="\vtn_wpne_rpk_magaz_md\mag40_bakelit_AP";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_AP";
		count=40;
		mass=13.148;
	};
	class VTN_RPK_40b_API: VTN_RPK_40b_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40b_API";
		displaynameShort="$STR_DN_VTN_7.62x39_API";
		descriptionShort="$STR_DS_VTN_RPK_40b_API";
		model="\vtn_wpne_rpk_magaz_md\mag40_bakelit_API";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_API";
		count=40;
		mass=13.099;
	};
	class VTN_RPK_40b_INC: VTN_RPK_40b_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40b_INC";
		displaynameShort="$STR_DN_VTN_7.62x39_INC";
		descriptionShort="$STR_DS_VTN_RPK_40b_INC";
		model="\vtn_wpne_rpk_magaz_md\mag40_bakelit_INC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_INC";
		count=40;
		lastroundstracer=0;
		mass=12.469;
	};
	class VTN_RPK_40s_SC: VTN_RPK_40b_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40s_SC";
		displaynameShort="$STR_DN_VTN_7.62x39_SC";
		descriptionShort="$STR_DS_VTN_RPK_40s_SC";
		model="\vtn_wpne_rpk_magaz_md\mag40_metal_SC";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"vtn_wpne_rpk_magaz_tx\osnsv_rpk_metal_co.paa"
		};
		modelSpecial="vtn_wpne_akm_magaz_md\magazineProxy\rpk_s_40rnd";
		modelSpecialIsProxy=1;
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		count=40;
	};
	class VTN_RPK_40s_TRC: VTN_RPK_40s_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40s_TRC";
		displaynameShort="$STR_DN_VTN_7.62x39_TRC";
		descriptionShort="$STR_DS_VTN_RPK_40s_TRC";
		model="\vtn_wpne_rpk_magaz_md\mag40_metal_SC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_TRC";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"vtn_wpne_rpk_magaz_tx\osnsv_rpk_metal_co.paa"
		};
		modelSpecial="vtn_wpne_akm_magaz_md\magazineProxy\rpk_s_40rnd";
		modelSpecialIsProxy=1;
		count=40;
		tracersEvery=3;
		lastroundstracer=5;
	};
	class VTN_RPK_40s_AP: VTN_RPK_40b_AP
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40s_AP";
		displaynameShort="$STR_DN_VTN_7.62x39_AP";
		descriptionShort="$STR_DS_VTN_RPK_40s_AP";
		model="\vtn_wpne_rpk_magaz_md\mag40_metal_SC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_AP";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"vtn_wpne_rpk_magaz_tx\osnsv_rpk_metal_co.paa"
		};
		modelSpecial="vtn_wpne_akm_magaz_md\magazineProxy\rpk_s_40rnd";
		modelSpecialIsProxy=1;
		count=40;
	};
	class VTN_RPK_40s_API: VTN_RPK_40s_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40s_API";
		displaynameShort="$STR_DN_VTN_7.62x39_API";
		descriptionShort="$STR_DS_VTN_RPK_40s_API";
		model="\vtn_wpne_rpk_magaz_md\mag40_metal_SC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_API";
		count=40;
	};
	class VTN_RPK_40s_INC: VTN_RPK_40b_INC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_40s_INC";
		displaynameShort="$STR_DN_VTN_7.62x39_INC";
		descriptionShort="$STR_DS_VTN_RPK_40s_INC";
		model="\vtn_wpne_rpk_magaz_md\mag40_metal_SC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_INC";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"vtn_wpne_rpk_magaz_tx\osnsv_rpk_metal_co.paa"
		};
		modelSpecial="vtn_wpne_akm_magaz_md\magazineProxy\rpk_s_40rnd";
		modelSpecialIsProxy=1;
		count=40;
	};
	class VTN_RPK_75s_SC: VTN_RPK74_45p_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_75s_SC";
		displaynameShort="$STR_DN_VTN_7.62x39_SC";
		descriptionShort="$STR_DS_VTN_RPK_75s_SC";
		model="\vtn_wpne_rpk_magaz_md\mag75_bakelit_SC";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_SC";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"vtn_wpne_rpk_magaz_tx\osnsv_rpk_metal75_co.paa"
		};
		modelSpecial="vtn_wpne_akm_magaz_md\magazineProxy\rpk_s_75rnd";
		modelSpecialIsProxy=1;
		count=75;
		initspeed=715;
		lastroundstracer=0;
		mass=33.063999;
	};
	class VTN_RPK_75s_TRC: VTN_RPK_75s_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_75s_TRC";
		displaynameShort="$STR_DN_VTN_7.62x39_TRC";
		descriptionShort="$STR_DS_VTN_RPK_75s_TRC";
		model="\vtn_wpne_rpk_magaz_md\mag75_bakelit_SC.p3d";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_TRC";
		count=75;
		tracersEvery=3;
		lastroundstracer=5;
		mass=33.106998;
	};
	class VTN_RPK_75s_AP: VTN_RPK_75s_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_75s_AP";
		displaynameShort="$STR_DN_VTN_7.62x39_AP";
		descriptionShort="$STR_DS_VTN_RPK_75s_AP";
		model="\vtn_wpne_rpk_magaz_md\mag75_bakelit_SC.p3d";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_AP";
		count=75;
		mass=33.063999;
	};
	class VTN_RPK_75s_API: VTN_RPK_75s_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_75s_API";
		displaynameShort="$STR_DN_VTN_7.62x39_API";
		descriptionShort="$STR_DS_VTN_RPK_75s_API";
		model="\vtn_wpne_rpk_magaz_md\mag75_bakelit_SC.p3d";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_API";
		count=75;
		mass=32.962002;
	};
	class VTN_RPK_75s_INC: VTN_RPK_75s_SC
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		displayName="$STR_DN_VTN_RPK_75s_INC";
		displaynameShort="$STR_DN_VTN_7.62x39_INC";
		descriptionShort="$STR_DS_VTN_RPK_75s_INC";
		model="\vtn_wpne_rpk_magaz_md\mag75_bakelit_SC.p3d";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_tracer_ca.paa";
		ammo="VTN_762x39_Ball_INC";
		lastroundstracer=0;
		count=75;
		mass=31.791;
	};
	
	
	class VTN_AGS30_VOG17A_29s: CA_Magazine
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		ammo="VTN_VOG17A_HE";
		count=30;
		model="vtn_tripode_ags30_md\ags_magaz";
		displayname="$STR_DN_VTN_AGS30_VOG17A_29s";
		displaynameShort="$STR_DN_VTN_30mm_VOG17A";
		descriptionShort="$STR_DS_VTN_AGS30_VOG17A_29s";
		picture="\vtn_tripode_ags30_cf\ico\vtn_ags30_30mag_ca.paa";
		initspeed=185;
		namesound="cannon";
		tracersevery=0;
		mass="(350 * 29 + 650 + 2500) / 64.79891";
		vtn_additionalcontrol=1;
		vtn_magazinevisualdata[]=
		{
			"vtn_tripode_ags30_tx\ags30_co.paa"
		};
		vtn_magazineemptymodel="VTN_AGS30_EMPTYAMMOBOX";
	};
	class VTN_AGS30_VOG17M_29s: VTN_AGS30_VOG17A_29s
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		ammo="VTN_VOG17M_HE";
		displayname="$STR_DN_VTN_AGS30_VOG17M_29s";
		displaynameShort="$STR_DN_VTN_30mm_VOG17M";
		descriptionShort="$STR_DS_VTN_AGS30_VOG17M_29s";
		mass="(348 * 29 + 650 + 2500) / 64.79891";
	};
	class VTN_AGS30_VOG30_30s: VTN_AGS30_VOG17A_29s
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		ammo="VTN_VOG30_HE";
		displayname="$STR_DN_VTN_AGS30_VOG30_30s";
		displaynameShort="$STR_DN_VTN_30mm_VOG30";
		descriptionShort="$STR_DS_VTN_AGS30_VOG30_30s";
		mass="(348 * 30 + 3500) / 64.79891";
	};
	class VTN_MK19_M384_48b: CA_Magazine
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_MK19_M384_48b";
		type=16;
		displayName="$STR_DN_VTN_MK19_M384_48b";
		displayNameShort="$STR_DN_VTN_40mm_M384";
		descriptionShort="$STR_DS_VTN_MK19_M384_48b";
		picture="\vtn_tripodw_mk19_cf\ico\vtn_mk19_48box_ca.paa";
		ammo="VTN_M384_HE";
		initSpeed=320;
		count=48;
		model="\vtn_tripodw_mk19_md\mk19_magaz.p3d";
		mass=377.47501;
		vtn_additionalcontrol=1;
		vtn_magazinevisualdata[]=
		{
			"vtn_wheeledw_m1151_tx\mk19\mk19_co.paa"
		};
		vtn_magazineemptymodel="VTN_MK19_EMPTYAMMOBOX";
	};
	class VTN_MK19_M430A1_48b: VTN_MK19_M384_48b
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_MK19_M430A1_48b";
		displayName="$STR_DN_VTN_MK19_M430A1_48b";
		displayNameShort="$STR_DN_VTN_40mm_M430A1";
		descriptionShort="$STR_DS_VTN_MK19_M430A1_48b";
		ammo="VTN_M430_HEDP";
		initSpeed=320;
		mass=399.698;
	};
	class VTN_MK19_M1001_48b: VTN_MK19_M384_48b
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_MK19_M1001_48b";
		displayName="$STR_DN_VTN_MK19_M1001_48b";
		displayNameShort="$STR_DN_VTN_40mm_M1001";
		descriptionShort="$STR_DS_VTN_MK19_M1001_48b";
		ammo="VTN_M1001_HE";
	};

};
class cfgVehicles
{
	class ThingEffect;
	class Strategic;
	class FxExploGround1;
	class FxExploGround2;
	class FxExploArmor1;
	class FxExploArmor2;
	class FxExploArmor3;
	class FxExploArmor4;
	class FxCartridge;
	class FxCartridge_Small;
	class FxCartridge_9mm;
	class FxCartridge_556;
	class FxCartridge_65;
	class FxCartridge_65_caseless;
	class FxCartridge_762;
	class FxCartridge_127;
	class FxCartridge_slug;
	class All;
	class LaserTarget;
	class LaserTargetBase;
	class LaserTargetCBase;
	class LaserTargetWBase;
	class LaserTargetEBase;
	class LaserTargetC;
	class LaserTargetW;
	class LaserTargetE;
	class Bomb;
	class MineGeneric;
	class Logic;
	class ReammoBox;
	class WeaponHolder;
	class WeaponHolder_Single_F;
	class ContainerSupply;
	class placed_chemlight_green;
	class placed_chemlight_red;
	class placed_chemlight_yellow;
	class placed_chemlight_blue;
	class thing;
	class test_EmptyObjectForBubbles;
	class test_EmptyObjectForFireBig;
	class test_EmptyObjectForSmoke;
	class Man;
	class CAManBase: Man
	{
		class VTN_EEH_INIT
		{
			audiofx_init="_this spawn compile preprocessFile ""\vtn_core_wpn_config\scripts\x_init.sqf"";";
		};
		class VTN_EEH_FIRED
		{
			audiofx_handler="_this call X_Snds_Chk;";
		};
	};
	class Land;
	class LandVehicle: Land
	{
		class VTN_EEH_INIT
		{
			audiofx_init="_this spawn compile preprocessFile ""\vtn_core_wpn_config\scripts\x_init.sqf"";";
		};
		class VTN_EEH_FIRED
		{
			audiofx_handler="_this call X_Veh_Snds_Chk;";
		};
	};
	class StaticMGWeapon;
	class HMG_01_base_F: StaticMGWeapon
	{
		class VTN_EEH_INIT
		{
			audiofx_init="_this spawn compile preprocessFile ""\vtn_core_wpn_config\scripts\x_init.sqf"";";
		};
		class VTN_EEH_FIRED
		{
			audiofx_handler="_this call X_Veh_Snds_Chk;";
		};
	};
	class GMG_TriPod;
	class GMG_01_base_F: GMG_TriPod
	{
		class VTN_EEH_INIT
		{
		};
		class VTN_EEH_FIRED
		{
		};
	};
	class VTN_RSP30_EMPTY: ThingEffect
	{
		model="\vtn_wpne_rsp_30mm_md\rsp_30mm_empty";
	};
	class FxCartridge_5_45: FxCartridge_556
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		mapSize=0.029999999;
		_generalMacro="FxCartridge_5_45";
		model="vtn_nabojnice\nabojnice5_45";
		submerged=2;
		submergeSpeed=2;
		timeToLive=10;
		disappearAtContact=0;
		airRotation=1.5;
	};
	class FxCartridge_7_62_54: FxCartridge_762
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		mapSize=0.029999999;
		_generalMacro="FxCartridge_7_62_54";
		model="vtn_nabojnice\nabojnice7_62_54r";
	};
	class FxCartridge_7_62_39: FxCartridge_762
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		mapSize=0.029999999;
		_generalMacro="FxCartridge_7_62_39";
		model="vtn_nabojnice\nabojnice7_62_39";
	};
	class FxCartridge_9_39: FxCartridge_762
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		mapSize=0.029999999;
		_generalMacro="FxCartridge_9_39";
		model="vtn_nabojnice\nabojnice9_39";
	};
	class FxCartridge_m240: FxCartridge_762
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		mapSize=0.029999999;
		_generalMacro="FxCartridge_m240";
		model="vtn_nabojnice\nabojnice7_62_51";
	};
	class FxCartridge_1270: FxCartridge_762
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		mapSize=0.029999999;
		_generalMacro="FxCartridge_1270";
		model="vtn_nabojnice\nabojnice12_70";
	};
	class FxCartridge_2070: FxCartridge_762
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		mapSize=0.029999999;
		_generalMacro="FxCartridge_2070";
		model="vtn_nabojnice\nabojnice12_70";
	};
};
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class AnimationSources;
class MGun;
class cfgWeapons
{
	class autocannon_Base_F;
	class CannonCore;
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher
	{
		scope=1;
	};
	class VTN_SAFE: UGL_F
	{
		displayName="$STR_DN_VTN_SAFE";
		displaynameShort="$STR_DN_VTN_SAFE";
		cameraDir="op_look2";
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		discreteDistance[]={440};
		opticsPPEffects[]={};
		opticsZoomMin="tan(atan(0.546281) / 1)";
		opticsZoomMax="tan(atan(0.546281) / 1)";
		opticsZoomInit="tan(atan(0.546281) / 1)";
		discreteDistanceCameraPoint[]=
		{
			"eye"
		};
		discreteDistanceInitIndex=0;
		magazines[]={};
		magazineWell[]={};
		minRange=0;
		minRangeProbab=0.001;
		midRange=0.001;
		midRangeProbab=0.001;
		maxRange=0.0099999998;
		maxRangeProbab=0.001;
	};
	class Default;
	class GMG_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		autoreload=0;
		class ItemInfo;
		class GunParticles;
		class WeaponSlotsInfo;
	};
/*---------------------RPK------------------------------*/
	class VTN_RPK74_BASE: Rifle_Base_F
	{
		scope=2;
		_generalMacro="VTN_RPK74_BASE";
		model="\vtn_wpne_rpk74_md\vtn_rpk74";
		picture="\vtn_wpne_rpk74m_cf\ico\vtn_rpk74n84_ca.paa";
		displayname="RPK74";
		cameraDir="op_look2";
		reloadAction="GestureReloadAKRL"; 
		deployedPivot="bipod";
		hasBipod="true";
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			0.70794576,
			1,
			20
		};
		maxRecoilSway=0.025;
		swayDecaySpeed=2.5;
		magazineReloadSwitchPhase=0.60000002;
		inertia=2.5;
		dexterity=0.2;
		fireLightDuration=0.0024999999;
		fireLightIntensity=0.64999998;
		initSpeed=-1.066667;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye2",
			"eye3",
			"eye4",
			"eye5",
			"eye6",
			"eye7",
			"eye8",
			"eye9",
			"eye10"
		};
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=3;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=84.844002;
			allowedSlots[]={};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"rhs_acc_dtk",
					"rhs_acc_dtk1983",
					"rhs_acc_dtk1",
					"rhs_acc_dtk2",
					"rhs_acc_dtk3",
					"rhs_acc_dtk4short",
					"rhs_acc_ak5",
					"rhs_acc_uuk",
					"rhs_acc_tgpa"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class PointerSlot2: SlotInfo
			{
				linkProxy="\vtn_weaponproxies\side2";
				compatibleItems[]=
				{
					"rhs_acc_perst3",
					"rhs_acc_perst1ik_ris",
					"rhs_acc_2dpzenit_ris"
				};
			};
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="end";
				directionName="end2";
				effectName="CaselessAmmoCloud";
			};
			class FirstEffect1
			{
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class SecondEffect1
			{
				positionName="Cloud3";
				directionName="Cloud4";
				effectName="CaselessAmmoCloud";
			};
			class SecondEffect2
			{
				positionName="Cloud4";
				directionName="Cloud3";
				effectName="CaselessAmmoCloud";
			};
		};
/* 		opticsZoomMin="0.46 / 1.0";
		opticsZoomMax="0.46 / 1.0";
		opticsZoomInit="0.46 / 1.0"; */
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		opticsPPEffects[]={};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.446684,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.446684,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.446684,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.446684,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",
			0.56234097,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",
			0.56234097,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",
			0.56234097,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",
			0.56234097,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",
			0.56234097,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",
			0.56234097,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",
			0.56234097,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234097,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
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
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.56234097,
			1,
			30
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.0040000002;
			displayname="$STR_DN_VTN_AKAV";
			displaynameShort="$STR_DN_VTN_AKAV";
			recoil="recoil_auto_ak47";
			recoilProne="recoil_single_prone_ak47";
			minRange=1;
			minRangeProbab=0.69999999;
			midRange=5;
			midRangeProbab=0.5;
			maxRange=10;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.0035000001;
			displayname="$STR_DN_VTN_AKOD";
			displaynameShort="$STR_DN_VTN_AKOD";
			recoil="recoil_single_ak47";
			recoilProne="recoil_auto_prone_ak47";
			minRange=1;
			minRangeProbab=0.69999999;
			midRange=5;
			midRangeProbab=0.5;
			maxRange=10;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
		};
		class close: FullAuto
		{
			burst=10;
			minRange=10;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			showToPlayer=0;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=100;
		};
		class short: close
		{
			burst=8;
			minRange=100;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.1;
			aiRateOfFire=2.5;
			aiRateOfFireDistance=200;
		};
		class medium: close
		{
			burst=5;
			minRange=200;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=400;
		};
		class far_optic1: close
		{
			requiredOpticType=1;
			burst=3;
			minRange=400;
			minRangeProbab=0.89999998;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			burst=3;
			minRange=400;
			minRangeProbab=0.89999998;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
		};
		class SAFE: VTN_SAFE
		{
			displayName="$STR_DN_VTN_SAFE";
			displaynameShort="$STR_DN_VTN_SAFE";
			cameraDir="op_look2";
			opticsPPEffects[]={};
			opticsZoomMin="0.46 / 1.0";
			opticsZoomMax="0.46 / 1.0";
			opticsZoomInit="0.46 / 1.0";
			discreteDistanceCameraPoint[]=
			{
				"eye",
				"eye2",
				"eye3",
				"eye4",
				"eye5",
				"eye6",
				"eye7",
				"eye8",
				"eye9",
				"eye10"
			};
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=3;
			magazineWell[]={};
			magazines[]={};
		};
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
		aiDispersionCoefY=1;
		aiDispersionCoefX=1;
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry7",
			0.39810699,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"vtn_sound_bank\ak_rel.wav",
			0.39810699,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\vtn_wpne_akms_cf\anim\akms.rtm"
		};
		magazines[]=
		{
			"VTN_RPK74_45b_SC",
			"VTN_RPK74_45b_TRC",
			"VTN_RPK74_45b_AP",
			"VTN_RPK74_45p_SC",
			"VTN_RPK74_45p_TRC",
			"VTN_RPK74_45p_AP"
		};
	};
	class VTN_RPK74_1984: VTN_RPK74_BASE
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_RPK74_1984";
		scopeArsenal=2;
		dexterity=1.41;
		model="\vtn_wpne_rpk74_md\vtn_rpk74";
		displayname="$STR_DN_VTN_RPK74_1984";
		descriptionShort="$STR_DS_VTN_RPK74_1984";
		picture="\vtn_wpne_rpk74m_cf\ico\vtn_rpk74_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"vtn_wpne_akms_cf\anim\akms.rtm"
		};
		class Library
		{
			libTextDesc="";
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class SAFE: VTN_SAFE
		{
			displayName="$STR_DN_VTN_SAFE";
			displaynameShort="$STR_DN_VTN_SAFE";
			cameraDir="op_look2";
			opticsPPEffects[]={};
/* 			opticsZoomMin="0.46 / 1.0";
			opticsZoomMax="0.46 / 1.0";
			opticsZoomInit="0.46 / 1.0"; */
			opticsZoomMin=0.25;
		    opticsZoomMax=1.1;
		    opticsZoomInit=0.75;
		    distanceZoomMin=300;
		    distanceZoomMax=300;
			discreteDistanceCameraPoint[]=
			{
				"eye",
				"eye2",
				"eye3",
				"eye4",
				"eye5",
				"eye6",
				"eye7",
				"eye8",
				"eye9",
				"eye10"
			};
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=3;
			magazines[]={};
		};
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
		magazines[]=
		{
			"VTN_RPK74_45b_SC",
			"VTN_RPK74_45b_TRC",
			"VTN_RPK74_45b_AP",
			"VTN_RPK74_45p_SC",
			"VTN_RPK74_45p_TRC",
			"VTN_RPK74_45p_AP"
		};
	};
	class VTN_RPK74N_1984: VTN_RPK74_BASE
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_RPK74N_1984";
		scopeArsenal=2;
		dexterity=1.41;
		model="\vtn_wpne_rpk74_md\vtn_rpk74n";
		displayname="$STR_DN_VTN_RPK74N_1984";
		descriptionShort="$STR_DS_VTN_RPK74N_1984";
		picture="\vtn_wpne_rpk74m_cf\ico\vtn_rpk74n_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"vtn_wpne_akms_cf\anim\akms.rtm"
		};
		class Library
		{
			libTextDesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80.248001;
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"rhs_acc_dtk",
					"rhs_acc_dtk1983",
					"rhs_acc_dtk1",
					"rhs_acc_dtk2",
					"rhs_acc_dtk3",
					"rhs_acc_dtk4short",
					"rhs_acc_ak5",
					"rhs_acc_uuk",
					"rhs_acc_tgpa"
				};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"rhs_acc_1p29",
					"rhs_acc_1p63",
					"rhs_acc_1p78",
					"rhs_acc_1pn34",
					"rhs_acc_1pn93_1",
					"rhs_acc_1pn93_2",
					"rhs_acc_ekp1",
					"rhs_acc_ekp8_02",
					"rhs_acc_nita",
					"rhs_acc_pgo7v",
					"rhs_acc_pgo7v2",
					"rhs_acc_pgo7v3",
					"rhs_acc_pkas",
					"rhs_acc_pso1m2",
					"rhs_acc_pso1m21"
				};
			};
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class PointerSlot2: SlotInfo
			{
				linkProxy="\vtn_weaponproxies\side2";
				compatibleItems[]=
				{
					"rhs_acc_perst3",
					"rhs_acc_perst1ik_ris",
					"rhs_acc_2dpzenit_ris"
				};
			};
		};
		class SAFE: VTN_SAFE
		{
			displayName="$STR_DN_VTN_SAFE";
			displaynameShort="$STR_DN_VTN_SAFE";
			cameraDir="op_look2";
			opticsPPEffects[]={};
			opticsZoomMin="0.46 / 1.0";
			opticsZoomMax="0.46 / 1.0";
			opticsZoomInit="0.46 / 1.0";
			discreteDistanceCameraPoint[]=
			{
				"eye",
				"eye2",
				"eye3",
				"eye4",
				"eye5",
				"eye6",
				"eye7",
				"eye8",
				"eye9",
				"eye10"
			};
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=3;
			magazines[]={};
		};
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
		magazines[]=
		{
			"VTN_RPK74_45b_SC",
			"VTN_RPK74_45b_TRC",
			"VTN_RPK74_45b_AP",
			"VTN_RPK74_45p_SC",
			"VTN_RPK74_45p_TRC",
			"VTN_RPK74_45p_AP"
		};
	};
	class VTN_RPK74: VTN_RPK74_1984
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_RPK74";
		model="\vtn_wpne_rpk74_md\vtn_rpk74_84";
		displayname="$STR_DN_VTN_RPK74";
		descriptionShort="$STR_DS_VTN_RPK74";
		picture="\vtn_wpne_rpk74m_cf\ico\vtn_rpk7484_ca.paa";
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
		magazines[]=
		{
			"VTN_RPK74_45p_SC",
			"VTN_RPK74_45p_TRC",
			"VTN_RPK74_45p_AP",
			"VTN_RPK74_45b_SC",
			"VTN_RPK74_45b_TRC",
			"VTN_RPK74_45b_AP"
		};
	};
	class VTN_RPK74N: VTN_RPK74N_1984
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_RPK74N";
		scopeArsenal=2;
		model="\vtn_wpne_rpk74_md\vtn_rpk74n_84";
		displayname="$STR_DN_VTN_RPK74N";
		descriptionShort="$STR_DS_VTN_RPK74N";
		picture="\vtn_wpne_rpk74m_cf\ico\vtn_rpk74n84_ca.paa";
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
		magazines[]=
		{
			"VTN_RPK74_45p_SC",
			"VTN_RPK74_45p_TRC",
			"VTN_RPK74_45p_AP",
			"VTN_RPK74_45b_SC",
			"VTN_RPK74_45b_TRC",
			"VTN_RPK74_45b_AP"
		};
	};

	class VTN_RPK_BASE: Rifle_Base_F
	{
		scope=2;
		_generalMacro="VTN_RPK_BASE";
		model="\vtn_wpne_rpk_md\vtn_rpk";
		picture="\vtn_wpne_rpk_cf\ico\vtn_rpk.paa";
		displayname="RPK";
		cameraDir="op_look2";
		reloadAction="GestureReloadAKRL";
		maxRecoilSway=0.029999999;
		swayDecaySpeed=2;
		inertia=3;
		dexterity=0.1;
		fireLightDuration=0.0024999999;
		fireLightIntensity=0.64999998;
		magazineReloadSwitchPhase=0.60000002;
		deployedPivot="bipod";
		hasBipod="true";
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			0.70794576,
			1,
			20
		};
		initSpeed=-1.041958;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye2",
			"eye3",
			"eye4",
			"eye5",
			"eye6",
			"eye7",
			"eye8",
			"eye9",
			"eye10"
		};
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=74.074997;
			allowedSlots[]={};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"rhs_acc_dtk",
					"rhs_acc_dtk1983",
					"rhs_acc_dtk1",
					"rhs_acc_dtk2",
					"rhs_acc_dtk3",
					"rhs_acc_dtk4short",
					"rhs_acc_ak5",
					"rhs_acc_uuk",
					"rhs_acc_tgpa"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class PointerSlot2: SlotInfo
			{
				linkProxy="\vtn_weaponproxies\side2";
				compatibleItems[]=
				{
					"rhs_acc_perst3",
					"rhs_acc_perst1ik_ris",
					"rhs_acc_2dpzenit_ris"
				};
			};
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="end";
				directionName="end2";
				effectName="CaselessAmmoCloud";
			};
			class FirstEffect1
			{
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class SecondEffect1
			{
				positionName="Cloud3";
				directionName="Cloud4";
				effectName="CaselessAmmoCloud";
			};
			class SecondEffect2
			{
				positionName="Cloud4";
				directionName="Cloud3";
				effectName="CaselessAmmoCloud";
			};
		};
/* 		opticsZoomMin="0.46 / 1.0";
		opticsZoomMax="0.46 / 1.0";
		opticsZoomInit="0.46 / 1.0"; */
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		opticsPPEffects[]={};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118703,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118703,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118703,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118703,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810699,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810699,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810699,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810699,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118899,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118899,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118899,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118899,
			1,
			15
		};
		soundBullet[]=
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
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.56234097,
			1,
			30
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.0040000002;
			displayname="$STR_DN_VTN_AKAV";
			displaynameShort="$STR_DN_VTN_AKAV";
			recoil="recoil_auto_ak47";
			recoilProne="recoil_single_prone_ak47";
			minRange=1;
			minRangeProbab=0.89999998;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.5;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.0035000001;
			displayname="$STR_DN_VTN_AKOD";
			displaynameShort="$STR_DN_VTN_AKOD";
			recoil="recoil_single_ak47";
			recoilProne="recoil_auto_prone_ak47";
			minRange=1;
			minRangeProbab=0.69999999;
			midRange=5;
			midRangeProbab=0.5;
			maxRange=10;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
		};
		class close: FullAuto
		{
			burst=10;
			minRange=10;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			showToPlayer=0;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=100;
		};
		class short: close
		{
			burst=8;
			minRange=100;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.1;
			aiRateOfFire=2.5;
			aiRateOfFireDistance=200;
		};
		class medium: close
		{
			burst=5;
			minRange=200;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=400;
		};
		class far_optic1: close
		{
			requiredOpticType=1;
			burst=3;
			minRange=400;
			minRangeProbab=0.89999998;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			burst=3;
			minRange=400;
			minRangeProbab=0.89999998;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
		};
		class SAFE: VTN_SAFE
		{
			displayName="$STR_DN_VTN_SAFE";
			displaynameShort="$STR_DN_VTN_SAFE";
			cameraDir="op_look2";
			opticsPPEffects[]={};
			opticsZoomMin="0.46 / 1.0";
			opticsZoomMax="0.46 / 1.0";
			opticsZoomInit="0.46 / 1.0";
			discreteDistanceCameraPoint[]=
			{
				"eye",
				"eye2",
				"eye3",
				"eye4",
				"eye5",
				"eye6",
				"eye7",
				"eye8",
				"eye9",
				"eye10"
			};
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=2;
			magazineWell[]={};
			magazines[]={};
		};
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
		aiDispersionCoefY=1;
		aiDispersionCoefX=1;
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry7",
			0.39810699,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"vtn_sound_bank\ak_rel.wav",
			0.39810699,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\vtn_wpne_akms_cf\anim\akms.rtm"
		};
		magazines[]=
		{
			"VTN_RPK_40s_SC",
			"VTN_RPK_40s_TRC",
			"VTN_RPK_40s_AP",
			"VTN_RPK_40s_INC",
			"VTN_RPK_40s_API",
			"VTN_RPK_40b_SC",
			"VTN_RPK_40b_TRC",
			"VTN_RPK_40b_AP",
			"VTN_RPK_40b_INC",
			"VTN_RPK_40b_API",
			"VTN_RPK_75s_SC",
			"VTN_RPK_75s_TRC",
			"VTN_RPK_75s_AP",
			"VTN_RPK_75s_INC",
			"VTN_RPK_75s_API"
		};
	};
	class VTN_RPK: VTN_RPK_BASE
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_RPK";
		scopeArsenal=2;
		dexterity=1.41;
		model="\vtn_wpne_rpk_md\vtn_rpk";
		displayname="$STR_DN_VTN_RPK";
		descriptionShort="$STR_DS_VTN_RPK";
		picture="\vtn_wpne_rpk_cf\ico\vtn_rpk.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"vtn_wpne_akms_cf\anim\akms.rtm"
		};
		class Library
		{
			libTextDesc="";
		};
		magazines[]=
		{
			"VTN_RPK_40s_SC",
			"VTN_RPK_40s_TRC",
			"VTN_RPK_40s_AP",
			"VTN_RPK_40s_INC",
			"VTN_RPK_40s_API",
			"VTN_RPK_40b_SC",
			"VTN_RPK_40b_TRC",
			"VTN_RPK_40b_AP",
			"VTN_RPK_40b_INC",
			"VTN_RPK_40b_API",
			"VTN_RPK_75s_SC",
			"VTN_RPK_75s_TRC",
			"VTN_RPK_75s_AP",
			"VTN_RPK_75s_INC",
			"VTN_RPK_75s_API"
		};
		class SAFE: VTN_SAFE
		{
			displayName="$STR_DN_VTN_SAFE";
			displaynameShort="$STR_DN_VTN_SAFE";
			cameraDir="op_look2";
			opticsPPEffects[]={};
/* 			opticsZoomMin="0.46 / 1.0";
			opticsZoomMax="0.46 / 1.0";
			opticsZoomInit="0.46 / 1.0"; */
			opticsZoomMin=0.25;
		    opticsZoomMax=1.1;
		    opticsZoomInit=0.75;
		    distanceZoomMin=300;
		    distanceZoomMax=300;
			discreteDistanceCameraPoint[]=
			{
				"eye",
				"eye2",
				"eye3",
				"eye4",
				"eye5",
				"eye6",
				"eye7",
				"eye8",
				"eye9",
				"eye10"
			};
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=2;
			magazines[]={};
			magazineWell[]={};
		};
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
	};
	class VTN_RPKN: VTN_RPK
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_RPKN";
		scopeArsenal=2;
		model="\vtn_wpne_rpk_md\vtn_rpkn";
		displayname="$STR_DN_VTN_RPKN";
		descriptionShort="$STR_DS_VTN_RPKN";
		picture="\vtn_wpne_rpk_cf\ico\vtn_rpkn_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"vtn_wpne_akms_cf\anim\akms.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77.162003;
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"rhs_acc_dtk",
					"rhs_acc_dtk1983",
					"rhs_acc_dtk1",
					"rhs_acc_dtk2",
					"rhs_acc_dtk3",
					"rhs_acc_dtk4short",
					"rhs_acc_ak5",
					"rhs_acc_uuk",
					"rhs_acc_tgpa"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"rhs_acc_1p29",
					"rhs_acc_1p63",
					"rhs_acc_1p78",
					"rhs_acc_1pn34",
					"rhs_acc_1pn93_1",
					"rhs_acc_1pn93_2",
					"rhs_acc_ekp1",
					"rhs_acc_ekp8_02",
					"rhs_acc_nita",
					"rhs_acc_pgo7v",
					"rhs_acc_pgo7v2",
					"rhs_acc_pgo7v3",
					"rhs_acc_pkas",
					"rhs_acc_pso1m2",
					"rhs_acc_pso1m21"
				};
			};
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class PointerSlot2: SlotInfo
			{
				linkProxy="\vtn_weaponproxies\side2";
				compatibleItems[]=
				{
					"rhs_acc_perst3",
					"rhs_acc_perst1ik_ris",
					"rhs_acc_2dpzenit_ris"
				};
			};
		};
		class Library
		{
			libTextDesc="";
		};
		class SAFE: VTN_SAFE
		{
			displayName="$STR_DN_VTN_SAFE";
			displaynameShort="$STR_DN_VTN_SAFE";
			cameraDir="op_look2";
			opticsPPEffects[]={};
/* 			opticsZoomMin="0.46 / 1.0";
			opticsZoomMax="0.46 / 1.0";
			opticsZoomInit="0.46 / 1.0"; */
			opticsZoomMin=0.25;
		    opticsZoomMax=1.1;
		    opticsZoomInit=0.75;
		    distanceZoomMin=300;
		    distanceZoomMax=300;
			discreteDistanceCameraPoint[]=
			{
				"eye",
				"eye2",
				"eye3",
				"eye4",
				"eye5",
				"eye6",
				"eye7",
				"eye8",
				"eye9",
				"eye10"
			};
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=2;
			magazines[]={};
			magazineWell[]={};
		};
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
		magazines[]=
		{
			"VTN_RPK_40s_SC",
			"VTN_RPK_40s_TRC",
			"VTN_RPK_40s_AP",
			"VTN_RPK_40s_INC",
			"VTN_RPK_40s_API",
			"VTN_RPK_40b_SC",
			"VTN_RPK_40b_TRC",
			"VTN_RPK_40b_AP",
			"VTN_RPK_40b_INC",
			"VTN_RPK_40b_API",
			"VTN_RPK_75s_SC",
			"VTN_RPK_75s_TRC",
			"VTN_RPK_75s_AP",
			"VTN_RPK_75s_INC"
		};
	};
/* 	class VTN_RPKN_TUNED_TACTICAL: VTN_RPK
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_RPKN_TUNED_TACTICAL";
		scopeArsenal=2;
		swayDecaySpeed=1;
		inertia=1;
		model="\vtn_wpne_rpk_md\vtn_rpk_pmc";
		displayname="$STR_DN_VTN_RPKN_TUNED_TACTICAL";
		descriptionShort="$STR_DS_VTN_RPKN_TUNED_TACTICAL";
		picture="\vtn_wpne_rpk_cf\ico\vtn_rpkn_tuned_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\vtn_wpne_ak105_cf\anim\akm_zenit.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=71.762001;
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"rhs_acc_dtk",
					"rhs_acc_dtk1983",
					"rhs_acc_dtk1",
					"rhs_acc_dtk2",
					"rhs_acc_dtk3",
					"rhs_acc_dtk4short",
					"rhs_acc_ak5",
					"rhs_acc_uuk",
					"rhs_acc_tgpa"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"rhs_acc_rakursPM",
					"rhs_acc_dh520x56",
					"rhs_acc_ekp8_18",
					"rhs_acc_ekp8_18b",
					"rhs_acc_ekp8_18c",
					"rhs_acc_ekp8_18d",
					"rhs_acc_1p87",
					"rhs_acc_okp7_picatinny",
					"rhsusf_acc_LEUPOLDMK4",
					"rhsusf_acc_LEUPOLDMK4_d",
					"rhsusf_acc_LEUPOLDMK4_wd",
					"rhsusf_acc_LEUPOLDMK4_2",
					"rhsusf_acc_LEUPOLDMK4_2_MRDS",
					"rhsusf_acc_LEUPOLDMK4_2_d",
					"rhsusf_acc_premier",
					"rhsusf_acc_premier_mrds",
					"rhsusf_acc_premier_low", 
					"rhsusf_acc_M8541",
					"rhsusf_acc_M8541_mrds",
					"rhsusf_acc_M8541_low",
					"rhsusf_acc_M8541_low_d",
					"rhsusf_acc_M8541_low_wd",
					"rhsusf_acc_EOTECH",
					"rhsusf_acc_eotech_552",
					"rhsusf_acc_eotech_552_d", 
					"rhsusf_acc_eotech_552_wd",
					"rhsusf_acc_eotech_xps3",
					"rhsusf_acc_g33_xps3",
					"rhsusf_acc_g33_xps3_flip",
					"rhsusf_acc_g33_xps3_tan", 
					"rhsusf_acc_g33_xps3_tan_flip",
					"rhsusf_acc_g33_t1", 
					"rhsusf_acc_g33_t1_flip", 
					"rhsusf_acc_compm4", 
					"rhsusf_acc_T1_high", 
					"rhsusf_acc_T1_low", 
					"rhsusf_acc_RX01", 
					"rhsusf_acc_RX01_NoFilter",
					"rhsusf_acc_RX01_tan",
					"rhsusf_acc_RX01_NoFilter_tan",
					"rhsusf_acc_RM05", 
					"rhsusf_acc_mrds", 
					"rhsusf_acc_mrds_c",
					"rhsusf_acc_ACOG", 
					"rhsusf_acc_ACOG2",
					"rhsusf_acc_ACOG3", 
					"rhsusf_acc_ACOG_wd",
					"rhsusf_acc_ACOG_d", 
					"rhsusf_acc_ACOG_sa",
					"rhsusf_acc_ACOG_USMC", 
					"rhsusf_acc_ACOG2_USMC",
					"rhsusf_acc_ACOG3_USMC",
					"rhsusf_acc_ACOG_RMR", 
					"rhsusf_acc_ACOG_PIP", 
					"rhsusf_acc_ACOG2_pip", 
					"rhsusf_acc_ACOG3_pip", 
					"rhsusf_acc_ACOG_wd_pip",
					"rhsusf_acc_ACOG_d_pip", 
					"rhsusf_acc_ACOG_sa_pip", 
					"rhsusf_acc_ACOG_USMC_pip", 
					"rhsusf_acc_ACOG2_USMC_pip", 
					"rhsusf_acc_ACOG3_USMC_pip", 
					"rhsusf_acc_ACOG_RMR_PIP", 
					"rhsusf_acc_ACOG_3d", 
					"rhsusf_acc_ACOG2_3d", 
					"rhsusf_acc_ACOG3_3d", 
					"rhsusf_acc_ACOG_wd_3d", 
					"rhsusf_acc_ACOG_d_3d", 
					"rhsusf_acc_ACOG_sa_3d", 
					"rhsusf_acc_ACOG_USMC_3d", 
					"rhsusf_acc_ACOG2_USMC_3d", 
					"rhsusf_acc_ACOG3_USMC_3d", 
					"rhsusf_acc_ACOG_RMR_3d", 
					"rhsusf_acc_ELCAN", 
					"rhsusf_acc_ELCAN_ard",
					"rhsusf_acc_ELCAN_3d", 
					"rhsusf_acc_ELCAN_ard_3d",
					"rhsusf_acc_ELCAN_PIP", 
					"rhsusf_acc_ELCAN_ard_PIP", 
					"rhsusf_acc_su230", 
					"rhsusf_acc_su230_mrds", 
					"rhsusf_acc_su230a",
					"rhsusf_acc_su230a_mrds", 
					"rhsusf_acc_su230_c", 
					"rhsusf_acc_su230_mrds_c", 
					"rhsusf_acc_su230a_c", 
					"rhsusf_acc_su230a_mrds_c", 
					"rhsusf_acc_su230_3d",
					"rhsusf_acc_su230_mrds_3d", 
					"rhsusf_acc_su230a_3d", 
					"rhsusf_acc_su230a_mrds_3d", 
					"rhsusf_acc_su230_c_3d",
					"rhsusf_acc_su230_mrds_c_3d",
					"rhsusf_acc_su230a_c_3d", 
					"rhsusf_acc_su230a_mrds_c_3d", 
					"rhsusf_acc_SpecterDR", 
					"rhsusf_acc_SpecterDR_3d", 
					"rhsusf_acc_SpecterDR_A", 
					"rhsusf_acc_SpecterDR_A_3d",
					"rhsusf_acc_SpecterDR_CX", 
					"rhsusf_acc_SpecterDR_CX_3D", 
					"rhsusf_acc_SpecterDR_pvs27",
					"rhsusf_acc_SpecterDR_D", 
					"rhsusf_acc_SpecterDR_OD", 
					"rhsusf_acc_SpecterDR_D_3D", 
					"rhsusf_acc_SpecterDR_OD_3D", 
					"rhsusf_acc_anpvs27", 
					"rhsusf_acc_anpas13gv1", 
					"rhsusf_acc_M2A1", 
					"rhsusf_acc_ACOG_MDO", 
					"optic_Nightstalker", 
					"optic_tws", 
					"optic_tws_mg",
					"optic_NVS", 
					"optic_SOS", 
					"optic_SOS_khk_F",
					"optic_MRCO",
					"optic_MRCO_broken",
					"optic_Arco",
					"optic_Arco_ghex_F", 
					"optic_Arco_blk_F",
					"optic_Arco_AK_arid_F",
					"optic_Arco_AK_blk_F",
					"optic_Arco_AK_lush_F",
					"optic_Arco_arid_F",
					"optic_Arco_lush_F", 
					"optic_aco", 
					"optic_ACO_grn",
					"optic_Aco_broken",
					"optic_aco_smg", 
					"optic_ACO_grn_smg",
					"optic_hamr", 
					"optic_Hamr_khk_F", 
					"optic_Hamr_broken",
					"optic_Holosight",
					"optic_Holosight_blk_F", 
					"optic_Holosight_khk_F",
					"optic_Holosight_arid_F",
					"optic_Holosight_lush_F",
					"optic_Holosight_smg",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
					"optic_DMS", 
					"optic_DMS_ghex_F",
					"optic_DMS_weathered_F",
					"optic_DMS_weathered_Kir_F",
					"optic_LRPS", 
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_AMS",
					"optic_AMS_khk", 
					"optic_AMS_snd", 
					"optic_KHS_blk",
					"optic_KHS_hex", 
					"optic_KHS_old",
					"optic_KHS_tan", 
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F", 
					"optic_ERCO_snd_F",
					"optic_Yorris",
					"RKSL_optic_LDS_PiP",
					"RKSL_optic_LDS_C_PiP",
					"RKSL_optic_PMII_525_PiP",
					"RKSL_optic_PMII_525_des_PiP", 
					"RKSL_optic_PMII_525_wdl_PiP", 
					"RKSL_optic_PMII_312_PiP",
					"RKSL_optic_PMII_312_sunshade_PiP",
					"RKSL_optic_PMII_312_wdl_PiP",
					"RKSL_optic_PMII_312_sunshade_wdl_PiP",
					"RKSL_optic_PMII_312_des_PiP", 
					"RKSL_optic_PMII_312_sunshade_des_PiP",
					"RKSL_optic_RMR_RM33", 
					"RKSL_optic_RMR_RM33_FDE", 
					"ACE_optic_Hamr_2D", 
					"ACE_optic_Hamr_PIP", 
					"ACE_optic_Arco_2D",
					"ACE_optic_Arco_PIP", 
					"ACE_optic_MRCO_2D", 
					"ACE_optic_MRCO_PIP",
					"ACE_optic_SOS_2D", 
					"ACE_optic_SOS_PIP",
					"ACE_optic_LRPS_2D",
					"ACE_optic_LRPS_PIP", 
					"fin_ta11_3d", 
					"fin_ta11_2d",
					"fin_pp09", 
					"fin_pp04", 
					"UK3CB_BAF_SUIT", 
					"UK3CB_BAF_SUSAT",
					"UK3CB_BAF_SUSAT_3D",
					"UK3CB_BAF_TA648", 
					"UK3CB_BAF_TA648_308",
					"UK3CB_BAF_TA31F",
					"UK3CB_BAF_TA31F_3D",
					"UK3CB_BAF_TA31F_hornbill", 
					"UK3CB_BAF_TA31F_hornbill_3D", 
					"UK3CB_BAF_Eotech", 
					"UK3CB_BAF_SB31250", 
					"UK3CB_BAF_SB31250_ghillie",
					"UK3CB_BAF_SB31250_Desert",
					"UK3CB_BAF_SB31250_Desert_Ghillie",
					"UK3CB_BAF_SpecterLDS", 
					"UK3CB_BAF_SpecterLDS_Dot",
					"UK3CB_BAF_SpecterLDS_3D",
					"UK3CB_BAF_SpecterLDS_Dot_3D", 
					"UK3CB_BAF_Kite", 
					"UK3CB_BAF_MaxiKite",
					"RKSL_optic_PMII_525",
					"RKSL_optic_PMII_525_des", 
					"RKSL_optic_PMII_525_wdl",
					"RKSL_optic_PMII_312",
					"RKSL_optic_PMII_312_sunshade",
					"RKSL_optic_PMII_312_des", 
					"RKSL_optic_PMII_312_sunshade_des",
					"RKSL_optic_PMII_312_wdl",
					"RKSL_optic_PMII_312_sunshade_wdl",
					"RKSL_optic_LDS", 
					"RKSL_optic_LDS_C", 
					"RKSL_optic_RMR_MS19", 
					"RKSL_optic_RMR_MS19_FDE", 
					"RKSL_optic_EOT552", 
					"RKSL_optic_EOT552_C",
					"RKSL_optic_EOT552X", 
					"RKSL_optic_EOT552X_C", 
					"rhsgref_acc_RX01_camo",
					"rhsgref_acc_RX01_NoFilter_camo", 
					"rhs_acc_2dpZenit", 
					"rhs_acc_perst1ik"
				};
			};
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
//8888888
				};
			};
			class PointerSlot2: SlotInfo
			{
				linkProxy="\vtn_weaponproxies\side2";
				compatibleItems[]=
				{
//8888888
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
//8888888
				};
			};
		};
		class Library
		{
			libTextDesc="";
		};
		class SAFE: VTN_SAFE
		{
			displayName="$STR_DN_VTN_SAFE";
			displaynameShort="$STR_DN_VTN_SAFE";
			cameraDir="op_look2";
			opticsPPEffects[]={};
			opticsZoomMin="0.46 / 1.0";
			opticsZoomMax="0.46 / 1.0";
			opticsZoomInit="0.46 / 1.0";
			discreteDistanceCameraPoint[]=
			{
				"eye",
				"eye2",
				"eye3",
				"eye4",
				"eye5",
				"eye6",
				"eye7",
				"eye8",
				"eye9",
				"eye10"
			};
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=2;
			magazines[]={};
			magazineWell[]={};
		};
		muzzles[]=
		{
			"THIS",
			"SAFE"
		};
		magazines[]=
		{
			"VTN_RPK_40s_SC",
			"VTN_RPK_40s_TRC",
			"VTN_RPK_40s_AP",
			"VTN_RPK_40s_INC",
			"VTN_RPK_40s_API",
			"VTN_RPK_40b_SC",
			"VTN_RPK_40b_TRC",
			"VTN_RPK_40b_AP",
			"VTN_RPK_40b_INC",
			"VTN_RPK_40b_API",
			"VTN_RPK_75s_SC",
			"VTN_RPK_75s_TRC",
			"VTN_RPK_75s_AP",
			"VTN_RPK_75s_INC",
			"VTN_RPK_75s_API"
		};
	};
 */
/*---------------------end RPK------------------------------*/

/*----------------------------AGS------------------------------*/	
    class VTN_AGS30: GMG_F
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_AGS30";
		canlock=0;
		cursor="EmptyCursor";
		cursoraim="mg";
		displayName="$STR_DN_VTN_AGS30";
		displayNameShort="$STR_DN_VTN_AGS30";
		nameSound="cannon";
		magazines[]=
		{
			"VTN_AGS30_VOG30_30s",
			"VTN_AGS30_VOG17M_29s",
			"VTN_AGS30_VOG17A_29s"
		};
		magazineReloadTime=8;
		reloadtime=0.15000001;
		ballisticscomputer=2;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="GrenadeLauncherCloud";
			};
			class Effect2
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="MachineGun1";
			};
			class Effect3
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="MachineGun1";
			};
			class Effect4
			{
				positionName="nabojnicestart";
				directionName="nabojniceend";
				effectName="MachineGun1";
			};
/* 			class Shell
			{
				positionName="nabojnicestart";
				directionName="nabojniceend";
				effectName="CartridgeAGS";
			}; */
/* 			class Shell1
			{
				positionName="nabojnicestart1";
				directionName="nabojniceend1";
				effectName="LinksAGS";
			}; */
		};
		class manual: CannonCore
		{
			airateoffire=0.5;
			airateoffiredistance=50;
			autofire=1;
			burst=1;
			dispersion=0.025;
			displayname="";
			maxrange=3;
			maxrangeprobab=0.0099999998;
			midrange=2;
			midrangeprobab=0.0099999998;
			minrange=1;
			minrangeprobab=0.0099999998;
			reloadtime=0.14723927;
			showtoplayer=1;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"vtn_sound_bank\x_bis_30mm_022.wav",
					1.4125376,
					1.11,
					50
				};
				closure2[]=
				{
					"vtn_sound_bank\x_bis_30mm_022.wav",
					1.4125376,
					1.09,
					50
				};
				soundclosure[]=
				{
					"closure1",
					1
				};
				soundburst=1;
				soundcontinuous=0;
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",
					2.2,
					0.95225,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",
					2.2,
					0.94225001,
					250
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",
					2.2,
					0.93225002,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				soundSetShot[]=
				{
					"GMG40mm_Shot_SoundSet",
					"GMG40mm_Tail_SoundSet"
				};
			};
			texturetype="fullAuto";
		};
		class close: manual
		{
			airateoffire=3;
			airateoffiredistance=400;
			burst=3;
			maxrange=400;
			maxrangeprobab=0.2;
			midrange=200;
			midrangeprobab=0.57999998;
			minrange=0;
			minrangeprobab=0.050000001;
			showtoplayer=0;
		};
		class short: close
		{
			airateoffire=5;
			airateoffiredistance=500;
			burst=5;
			maxrange=500;
			maxrangeprobab=0.2;
			midrange=400;
			midrangeprobab=0.57999998;
			minrange=300;
			minrangeprobab=0.2;
			reloadtime=0.11;
			soundburst=0;
		};
		class medium: short
		{
			airateoffire=7;
			airateoffiredistance=900;
			burst=7;
			maxrange=900;
			maxrangeprobab=0.2;
			midrange=700;
			midrangeprobab=0.57999998;
			minrange=400;
			minrangeprobab=0.2;
		};
		class far: short
		{
			airateoffire=10;
			airateoffiredistance=1500;
			burst=10;
			maxrange=1500;
			maxrangeprobab=0.0099999998;
			midrange=1000;
			midrangeprobab=0.40000001;
			minrange=800;
			minrangeprobab=0.2;
		};
	};
	
	class VTN_MK19MOD3: GMG_F
	{
		scope=2;
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_MK19MOD3";
		canlock=0;
		cursor="EmptyCursor";
		cursoraim="mg";
		displayName="$STR_DN_VTN_MK19MOD3";
		displayNameShort="$STR_DN_VTN_MK19MOD3";
		nameSound="cannon";
		magazines[]=
		{
			"VTN_MK19_M384_48b",
			"VTN_MK19_M430A1_48b",
			"VTN_MK19_M1001_48b"
		};
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="MachineGunCloud";
			};
/* 			class Shell
			{
				positionName="nabojnicestart";
				directionName="nabojniceend";
				effectName="CartridgeAGS";
			}; */
		};
		muzzles[]=
		{
			"VTN_MK19MOD3"
		};
		class VTN_MK19MOD3: autocannon_Base_F
		{
			displayName="$STR_DN_VTN_MK19MOD3";
			displayNameShort="$STR_DN_VTN_MK19MOD3";
			nameSound="cannon";
			magazines[]=
			{
				"VTN_MK19_M384_48b",
				"VTN_MK19_M430A1_48b",
				"VTN_MK19_M1001_48b"
			};
			modes[]=
			{
				"LowROF",
				"HighROF",
				"manual",
				"close",
				"short",
				"medium",
				"far"
			};
			magazineReloadTime=8;
			reloadtime=0.2;
			ballisticscomputer=0;
			scope=1;
			class GunParticles
			{
				class effect1
				{
					positionName="usti hlavne";
					directionName="konec hlavne";
					effectName="GrenadeLauncherCloud";
				};
				class Effect2
				{
					positionName="usti hlavne";
					directionName="konec hlavne";
					effectName="MachineGun1";
				};
				class Effect3
				{
					positionName="usti hlavne";
					directionName="konec hlavne";
					effectName="MachineGun1";
				};
				class Effect4
				{
					positionName="nabojnicestart";
					directionName="nabojniceend";
					effectName="MachineGun1";
				};
			};
			shotfromturret=1;
			class LowROF: Mode_FullAuto
			{
				aiDispersionCoefX=1;
				aiDispersionCoefY=1;
				textureType="fullAuto";
				dispersion=0.0065000001;
				displayname="$STR_DN_VTN_2A42_TEMPM1";
				displaynameShort="$STR_DN_VTN_2A42_TEMPM1";
				ffcount=6;
				fffrequency=11;
				ffmagnitude=0.5;
				flash="gunfire";
				flashsize=0.1;
				maxrange=3;
				maxrangeprobab=0.0040000002;
				midrange=2;
				midrangeprobab=0.059999999;
				minrange=1;
				minrangeprobab=0.059999999;
				recoil="Empty";
				reloadtime=0.2;
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					weaponSoundEffect="DefaultRifle";
					closure1[]=
					{
						"vtn_sound_bank\x_bis_30mm_022.wav",
						5.3220201,
						0.89999998,
						220
					};
					closure2[]=
					{
						"vtn_sound_bank\x_bis_30mm_022.wav",
						5.3220201,
						0.94999999,
						220
					};
					soundclosure[]=
					{
						"closure1",
						1
					};
					soundburst=1;
					soundcontinuous=0;
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",
						1.12202,
						1,
						1200
					};
					begin2[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",
						1.12202,
						1,
						1200
					};
					begin3[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",
						1.12202,
						1,
						1200
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.34
					};
					soundSetShot[]=
					{
						"GMG40mm_Shot_SoundSet",
						"GMG40mm_Tail_SoundSet"
					};
				};
			};
			class HighROF: Mode_FullAuto
			{
				textureType="fastAuto";
				displayname="$STR_DN_VTN_2A42_TEMPB";
				displaynameShort="$STR_DN_VTN_2A42_TEMPB";
				dispersion=0.0082;
				maxrange=3;
				maxrangeprobab=0.0040000002;
				midrange=2;
				midrangeprobab=0.057999998;
				minrange=1;
				minrangeprobab=0.079999998;
				reloadtime=0.15000001;
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					weaponSoundEffect="DefaultRifle";
					closure1[]=
					{
						"vtn_sound_bank\x_bis_30mm_022.wav",
						5.3220201,
						0.89999998,
						220
					};
					closure2[]=
					{
						"vtn_sound_bank\x_bis_30mm_022.wav",
						5.3220201,
						0.94999999,
						220
					};
					soundclosure[]=
					{
						"closure1",
						1
					};
					soundburst=1;
					soundcontinuous=0;
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",
						1.12202,
						1,
						1200
					};
					begin2[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",
						1.12202,
						1,
						1200
					};
					begin3[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",
						1.12202,
						1,
						1200
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.34
					};
					soundSetShot[]=
					{
						"GMG40mm_Shot_SoundSet",
						"GMG40mm_Tail_SoundSet"
					};
				};
			};
			class manual: CannonCore
			{
				airateoffire=0.5;
				airateoffiredistance=50;
				autofire=1;
				burst=1;
				dispersion=0.025;
				displayname="";
				maxrange=3;
				maxrangeprobab=0.0099999998;
				midrange=2;
				midrangeprobab=0.0099999998;
				minrange=1;
				minrangeprobab=0.0099999998;
				reloadtime=0.15000001;
				showtoplayer=1;
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					weaponSoundEffect="DefaultRifle";
					closure1[]=
					{
						"vtn_sound_bank\x_bis_30mm_022.wav",
						5.3220201,
						0.89999998,
						220
					};
					closure2[]=
					{
						"vtn_sound_bank\x_bis_30mm_022.wav",
						5.3220201,
						0.94999999,
						220
					};
					soundclosure[]=
					{
						"closure1",
						1
					};
					soundburst=1;
					soundcontinuous=0;
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",
						1.12202,
						1,
						1200
					};
					begin2[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",
						1.12202,
						1,
						1200
					};
					begin3[]=
					{
						"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",
						1.12202,
						1,
						1200
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.34
					};
					soundSetShot[]=
					{
						"GMG40mm_Shot_SoundSet",
						"GMG40mm_Tail_SoundSet"
					};
				};
				texturetype="fullAuto";
			};
			class close: manual
			{
				airateoffire=3;
				airateoffiredistance=400;
				burst=3;
				maxrange=400;
				maxrangeprobab=0.2;
				midrange=200;
				midrangeprobab=0.57999998;
				minrange=0;
				minrangeprobab=0.050000001;
				showtoplayer=0;
			};
			class short: close
			{
				airateoffire=5;
				airateoffiredistance=500;
				burst=5;
				maxrange=500;
				maxrangeprobab=0.2;
				midrange=400;
				midrangeprobab=0.57999998;
				minrange=300;
				minrangeprobab=0.2;
				reloadtime=0.11;
				soundburst=0;
			};
			class medium: short
			{
				airateoffire=7;
				airateoffiredistance=900;
				burst=7;
				maxrange=900;
				maxrangeprobab=0.2;
				midrange=700;
				midrangeprobab=0.57999998;
				minrange=400;
				minrangeprobab=0.2;
			};
			class far: short
			{
				airateoffire=10;
				airateoffiredistance=1500;
				burst=10;
				maxrange=1500;
				maxrangeprobab=0.0099999998;
				midrange=1000;
				midrangeprobab=0.40000001;
				minrange=800;
				minrangeprobab=0.2;
			};
		};
	};
	class VTN_MK19MOD3_MOUNTED: VTN_MK19MOD3
	{
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="MachineGunCloud";
			};
		};
	};
/*---------------------------end AGS------------------------------*/
	
};
class CfgNonAIVehicles
{
	class ProxyLeftHand;
	class ProxyDalekohled_Proxy;
	class ProxyBinoculars;
	class ProxyDriver;
	class ProxyParasutista;
	class ProxyFlag;
	class ProxyPlane_Flag_F;
	class ProxyPlane_Flag_big_F;
	class ProxyGoggles;
	class ProxyNVG_Proxy;
	class ProxyNVG;
	class ProxyNVG_Head;
	class ProxyNVG_Head_Big;
	class ProxyNVG_Head_R;
	class ProxyNVG_Head_C;
	class ProxyNVG_Head_S;
	class ProxyWeapon;
	class ProxyRadio_proxy;
	class ProxyHeadGear_proxy;
	class ProxyMissile_AT_03_F;
	class ProxyBomb_01_F;
	class ProxyBomb_02_F;
	class ProxyMissile_AA_02_F;
	class ProxyMissile_AT_02_F;
};
