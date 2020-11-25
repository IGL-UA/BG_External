class CfgPatches
{
	class vtn_tripodw_mk19_cf
	{
		units[]=
		{
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
		MK19_Gunner_S="MK19_Gunner_S";
	};
};
class CfgFunctions
{
	class bg_mk19 {
		class myCategory {
            class reload_mk19 {file = "\vtn_tripodw_mk19_cf\functions\reload_gun.sqf";}; //перезарядка MK19			
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
		class MK19_Gunner_S: Crew
		{
			file="vtn_tripodw_mk19_cf\Anim\Mk19_Gunner.rtm";
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
		class ACE_Actions;
		class ACE_MainActions;
	};
	class VTN_MK19_BASE: StaticMGWeapon
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_MK19_BASE";
		scope=0;
		side=0;
		displayName="VTN_MK19";
		descriptionShort="";
		class Armory
		{
			description="";
		};
		faction="BG_ZSU";  
		editorSubcategory = "BG_ZSU_TURELI";
		vehicleClass="Static";
		crew="b_afougf_rifleman_ak74";
		model="\vtn_tripodw_MK19_md\MK19.p3d";
		icon="\vtn_tripodw_mk19_cf\ico\icon_mk19_ca.paa";
		Picture="\vtn_tripodw_mk19_cf\ico\picture_mk19_ca.paa";
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
			"M430A1"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=0;
				useModelOptics="false";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				opticsFlare="false";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				opticsDisablePeripherialVision="false";
				initFov="0.75";
				minFov="0.75";
				maxFov="0.75";
				discreteDistance[]={};
				discreteDistanceInitIndex=0;
				turretInfoType="RscOptics_Offroad_01";
				gunnerForceOptics=0;
				minElev=-10;
				maxElev=20;
				initElev=0;
				minTurn=-25;
				maxTurn=25;
				initTurn=0;
				weapons[]=
				{
					"VTN_MK19MOD3"
				};
				magazines[]={};
				gunnerAction="MK19_Gunner_S";
				gunnerinAction="MK19_Gunner_S";
				forceHideGunner=0;
				canHideGunner=0;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh";
				castGunnerShadow=1;
				memoryPointGun="usti hlavne";
				gunnerRightHandAnimName="ruchka";
				gunnerLeftHandAnimName="ruchka";
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
			};
		};
		class AnimationSources
		{
			class Magazine
			{
				source="reload";
				weapon="VTN_MK19MOD3";
			};
			class Magazine_1
			{
				source="reload";
				weapon="VTN_MK19MOD3";
			};
			class Turret1_shake
			{
				source="reload";
				weapon="VTN_MK19MOD3";
			};
			class Turret1_shake_aside
			{
				source="reload";
				weapon="VTN_MK19MOD3";
			};
			class trigger
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class ReloadAnim
			{
				source="reload";
				weapon="VTN_MK19MOD3";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="VTN_MK19MOD3";
			};
			class Revolving
			{
				source="revolving";
				weapon="VTN_MK19MOD3";
			};
			class Charging_handle_shake
			{
				source="reload";
				weapon="VTN_MK19MOD3";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="VTN_MK19MOD3";
			};
			class Magazine_hide
			{
				source="reload";
				weapon="VTN_MK19MOD3";
			};
			class HUDaction_Hide
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class HUDaction: HUDaction_Hide
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class HUDaction_Hide1
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class HUDaction1: HUDaction_Hide1
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
				angle1="rad (0.0013 * 1500)";
			};
			class gunnerview
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class scope_rotation2
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class scope_rotation1
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class planka
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
		};
/* 		class UserActions
		{
			class LOAD_VTN_MK19_M384_48b
			{
				displayname="$STR_DN_LOAD_VTN_M384";
				displayNameDefault="";
				shortcut="";
				onlyForPlayer=1;
				showWindow=0;
				priority=1;
				radius=2;
				position="reloadMagazine";
				condition="((!(player in (crew this)))and(alive this)and((currentmagazine this)=='')and(({((""VTN_MK19_M384_48b"" in (magazineCargo _x))and(!(_x iskindof ""Man"")))}count((player nearSupplies 1.5) - [player])) > 0))";
				statement="this spawn {{if (""VTN_MK19_M384_48b"" in (magazineCargo _x)) exitwith {[_this,_x,""VTN_MK19_M384_48b""] spawn vtn_staticweapon_reload;};}foreach ((player nearSupplies 1.5) - [player]); player playActionNow ""PutDown"";};";
			};
			class LOAD_VTN_MK19_M430A1_48b
			{
				displayname="$STR_DN_LOAD_VTN_M430A1";
				displayNameDefault="";
				shortcut="";
				onlyForPlayer=1;
				showWindow=0;
				priority=1;
				radius=2;
				position="reloadMagazine";
				condition="((!(player in (crew this)))and(alive this)and((currentmagazine this)=='')and(({((""VTN_MK19_M430A1_48b"" in (magazineCargo _x))and(!(_x iskindof ""Man"")))}count((player nearSupplies 1.5) - [player])) > 0))";
				statement="this spawn {{if (""VTN_MK19_M430A1_48b"" in (magazineCargo _x)) exitwith {[_this,_x,""VTN_MK19_M430A1_48b""] spawn vtn_staticweapon_reload;};}foreach ((player nearSupplies 1.5) - [player]); player playActionNow ""PutDown"";};";
			};
			class LOAD_VTN_MK19_M1001_48b
			{
				displayname="$STR_DN_LOAD_VTN_M1001";
				displayNameDefault="";
				shortcut="";
				onlyForPlayer=1;
				showWindow=0;
				priority=1;
				radius=2;
				position="reloadMagazine";
				condition="((!(player in (crew this)))and(alive this)and((currentmagazine this)=='')and(({((""VTN_MK19_M1001_48b"" in (magazineCargo _x))and(!(_x iskindof ""Man"")))}count((player nearSupplies 1.5) - [player])) > 0))";
				statement="this spawn {{if (""VTN_MK19_M1001_48b"" in (magazineCargo _x)) exitwith {[_this,_x,""VTN_MK19_M1001_48b""] spawn vtn_staticweapon_reload;};}foreach ((player nearSupplies 1.5) - [player]); player playActionNow ""PutDown"";};";
			};
			class UNLOAD_STATICWEAPON
			{
				displayname="$STR_DN_UNLOAD_STATICWEAPON";
				displayNameDefault="";
				shortcut="";
				onlyForPlayer=1;
				showWindow=0;
				priority=1;
				radius=2;
				position="reloadMagazine";
				condition="((!(player in (crew this)))and(alive this)and(!((currentmagazine this)=='')))";
				statement="[this,player] spawn vtn_staticweapon_unload";
			};
		}; */
/*
// Непрацює коректно а саме не показується меню Зарядити з випливаючим меню коробів. Чому? - незрозуміло.
 		class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
				selection = "";
				distance = 5;
				condition = 1;
				position = [-0.5,-0.5,0.5];
			    class bg_reload_mk19 {
					displayName = "Зарядити";
					distance = 5;
					condition = "((!(player in (crew _target))) and (alive _target) and ((currentmagazine _target)=='') and (({(((""VTN_MK19_M384_48b"" in (magazineCargo _x)) or (""VTN_MK19_M430A1_48b"" in (magazineCargo _x)) or (""VTN_MK19_M1001_48b"" in (magazineCargo _x))) and (!(_x iskindof ""Man"")))} count ((player nearSupplies 5) - [player])) > 0))";
					statement = ""; 
					insertChildren = "[_target] call bg_ags_fnc_reload_mk19;";  //"[_target] call bg_ags_fnc_reload_mk19";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
					icon = "\bg_arty\data\ui\load.paa";
				};
				class bg_un_reload_mk19 {
					displayName = "Розрядити";
					distance = 5;
					condition = "(!(player in (crew _target))) && (!((currentmagazine _target)=='')) && (alive _target)";
					statement = "[_target, player] spawn vtn_staticweapon_unload";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
					icon = "\bg_arty\data\ui\unload.paa";
				};
            };
		}; */
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
			vtn_mk19_functions_init="_this spawn compile preprocessFile ""\vtn_tripodw_mk19_cf\functions\mk19_init.sqf"";";
		};
		class VTN_EEH_FIRED
		{
		};
	};
	class VTN_MK19MOD3: VTN_MK19_BASE
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		_generalMacro="VTN_MK19MOD3";
		editorPreview="\vtn_tripodw_mk19_cf\ico\vtn_mk19mod3_preview.paa";
		displayName="$STR_DN_VTN_MK19MOD3_M3";
		descriptionShort="$STR_DS_VTN_MK19MOD3_M3";
		side=1;
		faction="BG_ZSU";  
		editorSubcategory = "BG_ZSU_TURELI";
		vehicleClass="Static";
		crew="b_afougf_rifleman_ak74";
		model="\vtn_tripodw_MK19_md\MK19.p3d";
		mass=410;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"VTN_MK19MOD3_WEAPON_F",
				"VTN_MK19MOD3_SUPPORT_F"
			};
			displayName="$STR_DN_VTN_MK19MOD3_M3";
		};
		vtn_additionalcontrol=1;
	};
	class BG_MK19MOD3_RES: VTN_MK19MOD3
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=2;
		forceInGarage=0;
		_generalMacro="BG_MK19MOD3_RES";
		faction="BG_ZSU";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="b_afougf_rifleman_ak74";
	};
	class BG_MK19MOD3_CIV: VTN_MK19MOD3
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=3;
		forceInGarage=0;
		_generalMacro="BG_MK19MOD3_CIV";
		faction="BG_PARTIZANE";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="b_afougf_rifleman_ak74";
	};
	class BG_MK19MOD3_SR: VTN_MK19MOD3
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=0;
		forceInGarage=0;
		_generalMacro="BG_MK19MOD3_SR";
		faction="BG_SR";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="rhs_vmf_recon_rifleman";
	};
	class BG_MK19MOD3_KNR: VTN_MK19MOD3
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		scope=2;
		side=0;
		forceInGarage=0;
		_generalMacro="BG_MK19MOD3_KNR";
		faction="BG_KNP";  
		editorSubcategory = "BG_ZSU_TURELI";
		crew="rhs_vmf_recon_rifleman";
	};
	class VTN_MK19MOD3_SUPPORT_F: Weapon_Bag_Base
	{
		author="$STR_DN_VTN";
		DLC="VTN";
		_generalMacro="VTN_MK19MOD3_SUPPORT_F";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_DN_VTN_M3_MK19_BACKPACK";
		descriptionShort="$STR_DS_VTN_M3_MK19_BACKPACK";
		model="\vtn_tripodw_mk19_md\m3_backpack";
		picture="\vtn_tripodw_mk19_cf\ico\vtn_m3tripod_backpack_ca.paa";
		icon="iconBackpack";
		mass=308.33899;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="$STR_DN_VTN_M3_MK19_BACKPACK";
		};
	};
	class VTN_MK19MOD3_WEAPON_F: Weapon_Bag_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="VTN_MK19MOD3_WEAPON_F";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_DN_VTN_MK19MOD3_BACKPACK";
		descriptionShort="$STR_DS_VTN_MK19MOD3_BACKPACK";
		model="\vtn_tripodw_mk19_md\mk19_backpack";
		picture="\vtn_tripodw_mk19_cf\ico\vtn_mk19_backpack_ca.paa";
		mass=508.03299;
		class assembleInfo: assembleInfo
		{
			displayName="$STR_DN_VTN_MK19MOD3_BACKPACK";
			assembleTo="VTN_MK19MOD3";
			base[]=
			{
				"VTN_MK19MOD3_SUPPORT_F"
			};
		};
	};
	class NonStrategic;
	class BG_MK19_EMPTYAMMOBOX: NonStrategic
	{
		scope=1;
		model="\vtn_tripodw_mk19_md\mk19_magaz_empty.p3d";
		icon="iconObject_2x3";
		displayName="MK19 EMPTY BOX";
		accuracy=0.2;
		armor=50;
		destrtype="DestructNo";
		vehicleclass="Small_items";
	};
//====================================Ящики=====================================================//

	class Box_NATO_Support_F;
	class BG_M384_shells_box: Box_NATO_Support_F {
		displayName = "Ящик 3-x коробів M384";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		/* hiddenSelectionsTextures[] = {"\bg_arty\data\ammo\d30_shell_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"}; */ 
		maximumload = 1281;
		class TransportWeapons {};
		class TransportMagazines {
			class 30mm_mag_M384
			{
				magazine = "VTN_MK19_M384_48b";
				count = 3;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BG_M430A1_shells_box: BG_M384_shells_box {
		displayName = "Ящик 3-x коробів M430A1";
		/* hiddenSelectionsTextures[] = {"\bg_arty\data\ammo\d30_ap_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"}; */
		class TransportMagazines {
			class 30mm_mag_M430A1
			{
				magazine = "VTN_MK19_M430A1_48b";
				count = 3;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BG_M1001_shells_box: BG_M430A1_shells_box {
		displayName = "Ящик 3-x коробів M1001";
		 /* hiddenSelectionsTextures[] = {"\bg_arty\data\ammo\d30_ap_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"}; */ 
		class TransportMagazines {
			class 30mm_mag_M1001
			{
				magazine = "VTN_MK19_M1001_48b";
				count = 3;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
//====================================Ящики=====================================================//
};
