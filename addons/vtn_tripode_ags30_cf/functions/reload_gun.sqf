private _ags_magazine_info = [];  //[[magazine, description, icon, число зарядів в магазині] ...] ========| _player playActionNow 'PutDown'; 
private _pidgotovleni_snaradu = [];

{private _obj = _x; private _var = magazinesAmmoCargo (_obj); { _x pushBack _obj; } foreach _var; _pidgotovleni_snaradu append _var;} foreach ((player nearSupplies 2) - [player]); //2м навколо AGS приклад [["VTN_AGS30_VOG17A_29s", 1, 131b41600# 17: dummyweapon.p3d], ...]
{
_currMarker = toArray (_x #0);
if (count _currMarker >= 8) then {_currMarker resize 8; _currMarker = toString _currMarker;};	
	if (_currMarker == 'VTN_AGS3') then {
		_ags_magazine_info pushBack [
			_x #0,
			getText (configFile >> "CfgMagazines" >> _x #0 >> "displayName"),
			"\vtn_tripode_ags30_cf\ico\vtn_ags30_30mag_ca.paa",    //getText (configFile >> "CfgMagazines" >> _x #0 >> "picture"),
			_x #1,
            _x #2			
		];
	};
} forEach _pidgotovleni_snaradu;
/*[["VTN_AGS30_VOG17A_29s","name1","\bg_arty\data\equip\vtn_ags30_30mag_ca.paa",30,16fb8f580# 23: dummyweapon.p3d],["VTN_AGS30_VOG17M_29s","name2","\bg_arty\data\equip\vtn_ags30_30mag_ca.paa",30,16fb8f580# 23: dummyweapon.p3d]]*/
private _actions = [];
if (count _ags_magazine_info > 0) then {
{
	private _target = _this select 0;
	private _selected_magazine = _x select 0;
    private _action = [
		format["bg_reload_ags:%1",_x], 
		format["%1 (%2)", (_x select 1), (_x select 3)],
		_x select 2, 
        compile format ["
		if (({(_x select 1) > 0} count magazinesAmmoFull _target) > 0) exitWith {hint 'Вже заряжено!';};
		if !(isNull (gunner _target)) exitWith {hint 'АГС зайнятий!'}; 
		player playAction 'Gear'; 
		
		if ((_target getVariable ['bg_zaryadjannya_ags',false] isEqualTo true)) exitWith {hint 'Вже заряджається!'};
		_target setVariable ['bg_zaryadjannya_ags',true,true];
		[4, [_target, '%1'], { 
			 
             ((_this #0)#0) spawn {{if ('%1' in (magazineCargo _x)) exitwith {[_this,_x,'%1'] spawn vtn_staticweapon_reload;};} foreach ((player nearSupplies 2) - [player]);};
			
			((_this #0)#0) setVariable ['bg_zaryadjannya_ags',false,true];
		    hint parsetext format ['АГС заряджено <br/> %2'];
		}, {((_this #0)#0) setVariable ['bg_zaryadjannya_ags',false,true]; hint 'Заряджання перерване'}, 'Заряджаю %2'] call ace_common_fnc_progressBar
		", (_x select 0), (_x select 1), (_x select 4)]
		, 
		{true}, 
		{}, 
		[_selected_magazine, _target], 
		{[0, 0, 0]}, 
		3,
		[false,true,false,false,false],
		{}
		] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach _ags_magazine_info; 

};
_actions