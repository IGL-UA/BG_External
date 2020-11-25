class CfgPatches
{
	class vtn_tripode_ags30_cf
	{
		units[]=
		{
			"b_afougf_rifleman_ak74",
			"b_afougf_rifleman_ak74",
			"b_afougf_rifleman_ak74",
			"b_afougf_rifleman_ak74",
			"b_afougf_rifleman_ak74"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Characters_F",
			"A3_Weapons_F",
			"A3_Static_F",
			"vtn_core_wpn_config",
			"bg_retex"
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AGS30_Gunner_S="AGS30_Gunner_S";
		AGS30_Gunner_S_u="AGS30_Gunner_S_u";
		AGS30_Gunner_L="AGS30_Gunner_L";
		AGS30_Gunner_L_U="AGS30_Gunner_L_U";
	};
};
class CfgFunctions
{
	class bg_ags {
		class myCategory {
            class reload_ags {file = "\vtn_tripode_ags30_cf\functions\reload_gun.sqf";}; //перезарядка AGS			
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PreciseCrew: Crew
		{
			head="headNo";
		};
		class AGS30_Gunner_S: Crew
		{
			file="vtn_tripode_AGS30_cf\Anim\AGS30_gunner_S.rtm";
			interpolateTo[]={};
			disableWeapons=0;
			disableWeaponsLong=0;
			leftHandIKCurve[]={0.5};
			rightHandIKCurve[]={0.5};
		};
		class AGS30_Gunner_S_u: Crew
		{
			file="vtn_tripode_AGS30_cf\Anim\AGS30_gunner_S_u.rtm";
			interpolateTo[]={};
			disableWeapons=0;
			disableWeaponsLong=0;
			leftHandIKCurve[]={0.5};
			rightHandIKCurve[]={0.5};
		};
		class AGS30_Gunner_L: Crew
		{
			file="vtn_tripode_AGS30_cf\Anim\AGS30_gunner_L.rtm";
			interpolateTo[]={};
			disableWeapons=0;
			disableWeaponsLong=0;
			leftHandIKCurve[]={0.5};
			rightHandIKCurve[]={0.5};
		};
		class AGS30_Gunner_L_U: Crew
		{
			file="vtn_tripode_AGS30_cf\Anim\AGS30_gunner_L_u.rtm";
			interpolateTo[]={};
			disableWeapons=0;
			disableWeaponsLong=0;
			leftHandIKCurve[]={0.5};
			rightHandIKCurve[]={0.5};
		};
	};
};
class WeaponCloudsMGun;
class Turrets;
class NewTurret;
class MainTurret;
class ViewPilot;
class ViewOptics;
class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class StaticWeapon: LandVehicle
	{
		vehicleClass="Static";
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		selectionClan="clan";
		selectionDashboard="podsvit pristroju";
		selectionShowDamage="poskozeni";
		selectionBackLights="light_back";
		bounding="usti hlavne";
		alphaTracks=0.69999999;
		textureTrackWheel=0;
		selectionLeftOffset="";
		selectionRightOffset="";
		memoryPointTrack1L="";
		memoryPointTrack1R="";
		memoryPointTrack2L="";
		memoryPointTrack2R="";
		tracksSpeed=1;
		selectionFireAnim="zasleh";
		fireDustEffect="FDustEffects";
		class DestructionEffects
		{
		};
		memoryPointMissile[]=
		{
			"spice rakety",
			"usti hlavne"
		};
		memoryPointMissileDir[]=
		{
			"konec rakety",
			"konec hlavne"
		};
		memoryPointCargoLight="cargo light";
		gunnerCanSee="CanSeeEye+CanSeeEar+CanSeeOptics";
		gunnerHasFlares="false";
		damperSize=1.4;
		damperForce=0.80000001;
		gearBox[]={-1,0,"+1"};
		soundEnviron[]=
		{
			"",
			"db0",
			0.69999999
		};
		soundEngine[]=
		{
			"",
			"db20",
			1
		};
		soundCrash[]=
		{
			"",
			"db-5",
			1
		};
		soundGear[]=
		{
			"",
			"db-70",
			1
		};
		soundDammage[]=
		{
			"",
			"db-40",
			1
		};
		getInAction="";
		getOutAction="";
		cargoGetInAction[]={};
		cargoGetOutAction[]={};
		class Wounds
		{
			tex[]={};
			mat[]={};
		};
		mapSize=5;
		getInRadius=3.5;
		fuelCapacity=0;
		irScanRangeMin=500;
		irScanRangeMax=4000;
		irScanToEyeFactor=1;
		armor=20;
		armorStructural=2;
		class HitPoints
		{
			class HitEngine
			{
				armor=0.80000001;
				material=-1;
				name="motor";
				passThrough=1;
			};
			class HitHull
			{
				armor=1;
				material=-1;
				name="telo";
				passThrough=1;
			};
			class HitTurret
			{
				armor=0.80000001;
				material=-1;
				name="vez";
				passThrough=1;
			};
			class HitGun
			{
				armor=0.60000002;
				material=-1;
				name="zbran";
				passThrough=1;
			};
			class HitLTrack
			{
				armor=0.60000002;
				material=-1;
				name="pas_L";
				passThrough=1;
			};
			class HitRTrack
			{
				armor=0.60000002;
				material=-1;
				name="pas_P";
				passThrough=1;
			};
			class HitBody
			{
				armor=1;
				material=-1;
				name="NEzbytek";
				visual="zbytek";
				passThrough=1;
			};
		};
		extCameraPosition[]={0,1.5,-9};
		class ViewPilot: ViewPilot
		{
			initAngleX=7;
			minAngleX=-15;
			maxAngleX="+25";
			initAngleY=0;
			minAngleY=-90;
			maxAngleY="+90";
		};
		cost=10000;
		steerAheadSimul=0.40000001;
		steerAheadPlan=0.60000002;
		predictTurnSimul=1.2;
		predictTurnPlan=1.8;
		ejectDeadDriver=1;
		ejectDeadCargo=1;
		hasDriver=0;
		nightVision=0;
		driverAction="ManActCargo";
		driverInAction="ManActCargo";
		memoryPointsGetInCargo="pos_cargo";
		memoryPointsGetInCargoDir="pos_cargo_dir";
		simulation="tank";
		occludeSoundsWhenIn="db-0";
		obstructSoundsWhenIn="db-0";
		formationX=10;
		formationZ=10;
		precision=1;
		brakeDistance=0;
		maxSpeed=0;
		canFloat=0;
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=1;
		threat[]={0.69999999,1,0.30000001};
		camouflage=1;
		audible=1;
		hideProxyInCombat=0;
		driverOpticsColor[]={0,0,0,1};
		class CargoLight
		{
			color[]={0,0,0,0};
			ambient[]={0.60000002,0,0.15000001,1};
			brightness=0.0070000002;
		};
		transportMaxMagazines=0;
		transportMaxWeapons=0;
		class Reflectors
		{
		};
		secondaryExplosion=0;
		class ACE_Actions;
		class ACE_MainActions;
	};
	class StaticMGWeapon: StaticWeapon
	{
		accuracy=0.12;
		cost=10000;
		threat[]={0.69999999,0,0.30000001};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				optics="true";
			};
		};
	};
	class VTN_AGS30_BASE: StaticMGWeapon
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_AGS30_BASE";
		scope=0;
		side=1;
		displayName="VTN_AGS30";
		descriptionShort="";
		class Armory
		{
			description="";
		};
		faction="BG_ZSU";  
		editorSubcategory = "BG_ZSU_TURELI";
		vehicleClass="Static";
		crew="b_afougf_rifleman_ak74";
		model="\vtn_tripode_AGS30_md\AGS30.p3d";
		icon="\vtn_tripode_ags30_cf\ico\icon_ags30_ca.paa";
		Picture="\vtn_tripode_ags30_cf\ico\picture_ags30_ca.paa";
		threat[]={1,0.30000001,0.30000001};
		cost=150000;
		irScanRangeMin=5;
		irScanRangeMax=2500;
		irScanToEyeFactor=1;
		gunnerCanSee=31;
		getInAction="";
		getOutAction="";
		hiddenSelections[]=
		{
			"wog17"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initFov="0.75";
				minFov="0.75";
				maxFov="0.75";
				discreteDistance[]={};
				discreteDistanceInitIndex=0;
				turretInfoType="RscOptics_Offroad_01";
				gunnerForceOptics=0;
				minElev=-30;
				maxElev=84;
				minTurn=-25;
				maxTurn=25;
				weapons[]=
				{
					"VTN_AGS30"
				};
				magazines[]={};
				gunnerAction="AGS30_Gunner_L";
				gunnerinAction="AGS30_Gunner_L";
				forceHideGunner=0;
				canHideGunner=0;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh";
				castGunnerShadow=1;
				memoryPointGun="usti hlavne";
				gunnerRightHandAnimName="OtocHlaven_Shake";
				gunnerLeftHandAnimName="OtocHlaven_Shake";
				maxHorizontalRotSpeed=0.2;
				maxVerticalRotSpeed=0.2;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				isPersonTurret=0;
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				gunnerOpticsModel="\vtn_wpne_opt_1op78_tx\1op78_off";
				gunnerOutOpticsModel="\vtn_wpne_opt_1op78_tx\1op78_off";
				class Viewgunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-110;
					maxAngleX=40;
					initAngleY=0;
					minAngleY=-110;
					maxAngleY=110;
					initFov="0.75";
					minFov="0.75";
					maxFov="0.75";
					visionMode[]=
					{
						"Normal"
					};
				};
				class OpticsIn
				{
					class CROSSHAIR_PAG17_OFF
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov="tan(atan(0.546281) / 2.7)";
						minFov="tan(atan(0.546281) / 2.7)";
						maxFov="tan(atan(0.546281) / 2.7)";
						visionMode[]=
						{
							"Normal"
						};
						discreteDistance[]={};
						gunnerOpticsModel="\vtn_wpne_opt_1op78_tx\1op78_off";
						gunnerOpticsEffect[]={};
					};
				};
			};
		};
		class AnimationSources
		{
			class Magazine_hide
			{
				source="reloadmagazine";
				weapon="VTN_AGS30";
			};
			class cannon_muzzle_flash
			{
				source="recoil";
				weapon="VTN_AGS30";
			};
			class Magazine
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class Magazine_1
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class Turret1_shake
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class Turret1_shake_aside
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class trigger
			{
				source="trigger";
				weapon="VTN_AGS30";
			};
			class Charging_handle_shake
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="VTN_AGS30";
			};
			class breach
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class handle
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class breach_1
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class handle_1
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class hatch_gunnerHUD
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class hatch_gunner_Hide: hatch_gunnerHUD
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class hatch_gunner_Hide1: hatch_gunnerHUD
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class trigger2
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class trigger3
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class trigger4
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class trigger5
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Rotation_stan
			{
				source="user";
				animPeriod=0;
				initPhase=0.5;
				angle0="rad -360";
				angle1="rad +360";
			};
			class scope_rotation
			{
				source="user";
				animPeriod=2;
				initPhase=0;
				angle0=0;
				angle1="rad (0.06 * 1400)";
			};
			class scope_rotation_horizon
			{
				source="user";
				animPeriod=0;
				initPhase=0.5;
				angle0="rad -360";
				angle1="rad +360";
			};
			class scope_rotation1_1
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class scope_rotation1_2
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
		};

		class ACE_Actions: ACE_Actions {
			class bg_reload_ags {
				displayName = "Зарядити";
				distance = 2;
				condition = "((!(player in (crew _target))) and (alive _target) and ((currentmagazine _target)=='') and (({(((""VTN_AGS30_VOG30_30s"" in (magazineCargo _x)) or (""VTN_AGS30_VOG17M_29s"" in (magazineCargo _x)) or (""VTN_AGS30_VOG17A_29s"" in (magazineCargo _x))) and (!(_x iskindof ""Man"")))} count ((player nearSupplies 1.5) - [player])) > 0))";
				statement = ""; 
				insertChildren = "[_target] call bg_ags_fnc_reload_ags";
				showDisabled = 0;
				priority = 1.1;
				enableInside = 0;
				icon = "\bg_arty\data\ui\load.paa";
				selection = "otochlaven_shake";
			};
			class bg_un_reload_ags {
				displayName = "Розрядити";
				distance = 2;
				condition = "(!(player in (crew _target))) && (!((currentmagazine _target)=='')) && (alive _target)";
				statement = "[_target, player] spawn vtn_staticweapon_unload";
				insertChildren = "";
				showDisabled = 0;
				priority = 1.1;
				enableInside = 0;
				icon = "\bg_arty\data\ui\unload.paa";
				selection = "otochlaven_shake";				
			};
		};
		
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.001,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031599999,
			1,
			5
		};
		class VTN_EEH_INIT
		{
			ags_functions_init="_this spawn compile preprocessFile ""\vtn_tripode_ags30_cf\functions\ags_init.sqf"";";
		};
		class VTN_EEH_FIRED
		{
		};
	};
  	class VTN_AGS30: VTN_AGS30_BASE
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=1;
		forceInGarage=1;
		_generalMacro="VTN_AGS30";
		editorPreview="\vtn_tripode_ags30_cf\ico\vtn_ags30_emr_preview.paa";
		displayName="$STR_DN_VTN_AGS30";
		descriptionShort="$STR_DS_VTN_AGS30";
		vehicleClass="Static";
		faction="BG_ZSU";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="b_afougf_rifleman_ak74";
		model="\vtn_tripode_ags30_md\ags30.p3d";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"VTN_AGS30_SUPPORT"
			};
			displayName="";
		};
		class AnimationSources
		{
			class Magazine_hide
			{
				source="reloadmagazine";
				weapon="VTN_AGS30";
			};
			class cannon_muzzle_flash
			{
				source="recoil";
				weapon="VTN_AGS30";
			};
			class Magazine
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class Magazine_1
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class Turret1_shake
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class Turret1_shake_aside
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class trigger
			{
				source="trigger";
				weapon="VTN_AGS30";
			};
			class Charging_handle_shake
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="VTN_AGS30";
			};
			class breach
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class handle
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class breach_1
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class handle_1
			{
				source="reload";
				weapon="VTN_AGS30";
			};
			class hatch_gunnerHUD
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class hatch_gunner_Hide: hatch_gunnerHUD
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class hatch_gunner_Hide1: hatch_gunnerHUD
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class trigger2
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class trigger3
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class trigger4
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class trigger5
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Rotation_stan
			{
				source="user";
				animPeriod=0;
				initPhase=0.5;
				angle0="rad -360";
				angle1="rad +360";
			};
			class scope_rotation
			{
				source="user";
				animPeriod=2;
				initPhase=0;
				angle0=0;
				angle1="rad (0.06 * 1400)";
			};
			class scope_rotation_horizon
			{
				source="user";
				animPeriod=0;
				initPhase=0.5;
				angle0="rad -360";
				angle1="rad +360";
			};
			class scope_rotation1_1
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class scope_rotation1_2
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
		};
		
		vtn_additionalcontrol=1;
	};
	class BG_AGS30_ZSU: VTN_AGS30
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=1;
		forceInGarage=0;
		_generalMacro="BG_AGS30_ZSU";
		vehicleClass="Static";
		faction="BG_ZSU";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="b_afougf_rifleman_ak74";
		class HitPoints
		{
			class HitTurret
			{
				armor=0.80000001;
				material=-1;
				name="vez";
				passThrough=1;
			};
			class HitGun
			{
				armor=0.60000002;
				material=-1;
				name="zbran";
				passThrough=1;
			};
		};
	};
	class BG_AGS30_RES: VTN_AGS30
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=2;
		forceInGarage=0;
		_generalMacro="BG_AGS30_RES";
		vehicleClass="Static";
		faction="BG_ZSU";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="b_afougf_rifleman_ak74";
		class HitPoints
		{
			class HitTurret
			{
				armor=0.80000001;
				material=-1;
				name="vez";
				passThrough=1;
			};
			class HitGun
			{
				armor=0.60000002;
				material=-1;
				name="zbran";
				passThrough=1;
			};
		};
	};
	class BG_AGS30_CIV: VTN_AGS30
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=3;
		forceInGarage=0;
		_generalMacro="BG_AGS30_CIV";
		vehicleClass="Static";
		faction="BG_PARTIZANE";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="b_afougf_rifleman_ak74";
		class HitPoints
		{
			class HitTurret
			{
				armor=0.80000001;
				material=-1;
				name="vez";
				passThrough=1;
			};
			class HitGun
			{
				armor=0.60000002;
				material=-1;
				name="zbran";
				passThrough=1;
			};
		};
	};
	class BG_AGS30_KNR: VTN_AGS30
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=0;
		forceInGarage=0;
		_generalMacro="BG_AGS30_KNR";
		vehicleClass="Static";
		faction="BG_KNP";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="rhs_vmf_recon_rifleman";
		class HitPoints
		{
			class HitTurret
			{
				armor=0.80000001;
				material=-1;
				name="vez";
				passThrough=1;
			};
			class HitGun
			{
				armor=0.60000002;
				material=-1;
				name="zbran";
				passThrough=1;
			};
		};
	};
	class BG_AGS30_SR: VTN_AGS30
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=0;
		forceInGarage=0;
		_generalMacro="BG_AGS30_SR";
		vehicleClass="Static";
		faction="BG_SR";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="rhs_vmf_recon_rifleman";
		class HitPoints
		{
			class HitTurret
			{
				armor=0.80000001;
				material=-1;
				name="vez";
				passThrough=1;
			};
			class HitGun
			{
				armor=0.60000002;
				material=-1;
				name="zbran";
				passThrough=1;
			};
		};
	};
	class VTN_AGS30_SUPPORT: Weapon_Bag_Base
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_AGS30_SUPPORT";
		faction="OPF_F";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_DN_VTN_AGS30_RUCK";
		descriptionShort="$STR_DS_VTN_AGS30_RUCK";
		model="\vtn_tripode_ags30_md\AGS30_backpack.p3d";
		picture="\vtn_tripode_ags30_cf\ico\vtn_ags30_backpack_ca.paa";
		icon="iconBackpack";
		mass=262.35001;
		class assembleInfo: assembleInfo
		{
			assembleTo="VTN_AGS30";
			base="";
			displayName="$STR_DN_VTN_AGS30_RUCK";
			descriptionShort="$STR_DS_VTN_AGS30_RUCK";
		};
	};
	
	class NonStrategic;
	class BG_AGS30_EMPTYAMMOBOX: NonStrategic
	{
		scope=1;
		model="\vtn_tripode_ags30_md\ags_magaz_empty.p3d";
		icon="iconObject_2x3";
		displayName="AGS30 EMPTY BOX";
		accuracy=0.2;
		armor=50;
		destrtype="DestructNo";
		vehicleclass="Small_items";
	};
//====================================Ящики=====================================================//

	class Box_NATO_Support_F;
	class BG_VOG30_shells_box: Box_NATO_Support_F {
		displayName = "Ящик 3-x коробів ВОГ-30";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		/* hiddenSelectionsTextures[] = {"\bg_arty\data\ammo\d30_shell_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"}; */ 
		maximumload = 1281;
		class TransportWeapons {};
		class TransportMagazines {
			class 30mm_mag_vog30
			{
				magazine = "VTN_AGS30_VOG30_30s";
				count = 3;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BG_VOG17A_shells_box: BG_VOG30_shells_box {
		displayName = "Ящик 3-x коробів ВОГ-17A";
		/* hiddenSelectionsTextures[] = {"\bg_arty\data\ammo\d30_ap_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"}; */
		class TransportMagazines {
			class 30mm_mag_vog17a
			{
				magazine = "VTN_AGS30_VOG17A_29s";
				count = 3;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BG_VOG17M_shells_box: BG_VOG17A_shells_box {
		displayName = "Ящик 3-x коробів ВОГ-17M";
		 /* hiddenSelectionsTextures[] = {"\bg_arty\data\ammo\d30_ap_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"}; */ 
		class TransportMagazines {
			class 30mm_mag_vog17m
			{
				magazine = "VTN_AGS30_VOG17M_29s";
				count = 3;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
//====================================Ящики=====================================================//
};