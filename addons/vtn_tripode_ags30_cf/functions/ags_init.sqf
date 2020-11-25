VTN_AGS_EHGETIN = 
{
	if (local (_this select 0)) then 
	{
		if ((vehicle (_this select 0)) isKindOf "VTN_AGS30") then
		{
			if ((((_this select 0) animationPhase "hatch_gunnerHUD") == 1)and((animationState (_this select 2)) == "AGS30_Gunner_l")) then 
			{
				[(_this select 2),"AGS30_Gunner_s"] remoteExec ["switchMove"];
			};
			if ((((_this select 0) animationPhase "hatch_gunnerHUD") == 0)and((animationState (_this select 2)) == "AGS30_Gunner_s")) then 
			{
				[(_this select 2),"AGS30_Gunner_l"] remoteExec ["switchMove"];
			};
		};
	};
};

_weapon = _this select 0;
_weapon addEventHandler ["GetIn", VTN_AGS_EHGETIN];

if (local _weapon) then 
{
	if (((count (crew _weapon)) > 0) or (((toLower(missionname+"."+worldname))=="arsenal.vr")and(!(isnull (uinamespace getvariable ["BIS_fnc_arsenal_cam",objnull]))))) then 
	{
		_weapon enableWeaponDisassembly false;
		
		_unit = (gunner _weapon);
		_wpn = ((weapons _weapon) select 0);
		
		if (isServer) then 
		{
			_weapon removeWeapon _wpn;
			{_weapon removeMagazine _x;}ForEach (magazines _weapon);
		}
		else
		{
			_weapon removeWeaponGlobal _wpn;
			{_weapon removeMagazine _x;}ForEach (magazines _weapon);
		};
		
		_weapon addMagazine ["VTN_AGS30_VOG30_30s",30];
					
		if (isServer) then 
		{
			_weapon addWeapon _wpn;
			_weapon selectWeapon _wpn;
		}
		else
		{
			_weapon addWeaponGlobal _wpn;
			_weapon selectWeapon _wpn;
		};
			
		_magazinevisualdata = [configFile >> "CfgMagazines" >> "VTN_AGS30_VOG30_30s" >> "vtn_magazinevisualdata"] call BIS_fnc_getCfgData;
	
		if (!(isnil "_magazinevisualdata")) then 
		{
			{				
				if (_weapon isKindOf "VTN_KORD_6T20_BASE") then 
				{
					if (_forEachIndex == 0) then 
					{
						if (!(is3DEN)) then 
						{
							[_weapon,_x] spawn {uisleep 1; (_this select 0) setObjectTextureGlobal [0,(_this select 1)];};
						};
					}
					else
					{
						_weapon setObjectTextureGlobal [_forEachIndex,_x];
					};
				}
				else
				{
					_weapon setObjectTextureGlobal [_forEachIndex,_x];
				};
		
			}ForEach _magazinevisualdata;		
		};
		
		if (!(is3DEN)) then 
		{
			if (isnull (uinamespace getvariable ["BIS_fnc_arsenal_cam",objnull])) then 
			{
				if (!(isnull (unitbackpack _unit))) then 
				{
					_unit remoteExec ["removebackpack",_unit];
				};
			};
		};
	};
};