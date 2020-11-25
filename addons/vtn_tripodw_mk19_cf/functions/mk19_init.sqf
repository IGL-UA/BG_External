_weapon = _this select 0;
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
		
		_weapon addMagazine ["VTN_MK19_M384_48b",48];
		
		uisleep 1;
						
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
				
		_magazinevisualdata = [configFile >> "CfgMagazines" >> "VTN_MK19_M384_48b" >> "vtn_magazinevisualdata"] call BIS_fnc_getCfgData;
		
		if (!(isnil "_magazinevisualdata")) then 
		{
			{_weapon setObjectTextureGlobal [_forEachIndex,_x];}ForEach _magazinevisualdata;		
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