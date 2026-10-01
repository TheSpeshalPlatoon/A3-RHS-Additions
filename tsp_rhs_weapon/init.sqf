tsp_fnc_rhs_fix = {
	if (count (["fsp","smr","urgi","nsr","handguard","m16","rpk_wood","rpk74_wood","svdo","dino"] select {_x in primaryWeapon _this}) == 0) exitWith {};
	_defaultPointer = getText (configFile >> "CfgWeapons" >> (primaryWeapon _this) >> "linkedItems" >> "linkedItemsPointer" >> "item");
	_defaultBipod = getText (configFile >> "CfgWeapons" >> (primaryWeapon _this) >> "linkedItems" >> "linkedItemsUnder" >> "item");
	if (_defaultPointer != "" && (primaryWeaponItems _this)#1 == "") then {_this addPrimaryWeaponItem _defaultPointer};
	if (_defaultBipod != "" && (primaryWeaponItems _this)#3 == "") then {_this addPrimaryWeaponItem _defaultBipod};
	if (primaryWeapon _this == "rhs_weap_m16a4_handguard" && (primaryWeaponItems _this)#1 == "rhs_acc_m16_handguard2") then {};
	if (primaryWeapon _this == "rhs_weap_m16a4_handguard2" && (primaryWeaponItems _this)#1 == "rhs_acc_m16_handguard") then {};
};

tsp_fnc_undrop = {  //-- Remove item from container if dropped
	params ["_unit", "_container", "_item", "_blacklist", ["_condition", {false}], ["_replace", true]];
	if !(_item in _blacklist || _item call _condition) exitWith {};
	if (_replace) then {_unit addPrimaryWeaponItem _item}; 
	[_container, _item] call cba_fnc_removeItemCargo; _unit removeItems _item;
};

tsp_fnc_case = {
	params ["_unit", "_weapon", "_ammo"];
	_p3d            = getText (configFile >> "CfgAmmo" >> _ammo >> "rhs_cartridge"); if (_p3d isEqualTo "") exitWith{};
	_case_selection	= getText (configFile >> "cfgWeapons" >> _weapon >> "rhs_boltActionCaseSelection");
	_pos			= (_unit selectionPosition _case_selection);
	_case_pos		= _unit modelToWorldVisual (_pos vectorAdd (getArray (configFile >> "cfgWeapons" >> _weapon >> "rhs_boltActionCasePos")));
	_case_dir		= _unit modelToWorldVisual (_pos vectorAdd (getArray (configFile >> "cfgWeapons" >> _weapon >> "rhs_boltActionCaseDir")));
	_case_delay		= getNumber (configFile >> "cfgWeapons" >> _weapon >> "rhs_boltActionCaseDelay");
	_vector_case	= _unit weaponDirection _weapon;
	_vector_caseDir	= (_case_pos vectorFromTo _case_dir) vectorMultiply 2;
	sleep _case_delay;
	_case = "#particlesource" createVehicleLocal _case_pos;
	_case setParticleRandom [2, [0, 0, 0], [0.1, 0.1, 0.1], 1.6, 0, [0, 0, 0, 0.1], 0.6, 0.1];
	_case setParticleParams [[_p3d, 1, 0, 1], "", "SpaceObject", 1, 6, [0, 0, 0], _vector_caseDir, 0, 12, 1.7, 0, [1], [[1, 1, 1, 1]], [1], 1, 0, "", "", _case,0,true,0.3,[[0,0,0,0]],_vector_caseDir];
	_case setDropInterval 1;
	sleep 0.1;
	deleteVehicle _case;
};

player addEventHandler ['InventoryClosed', {player call tsp_fnc_rhs_fix}];
player addEventHandler ['Put', {[_this#0, _this#1, _this#2, [], {getNumber (configFile >> "CfgWeapons" >> _this >> "permenant") == 1}, true] call tsp_fnc_undrop}];
player addEventHandler ['Take', {player call tsp_fnc_rhs_fix; [_this#0, _this#1, _this#2, [], {getNumber (configFile >> "CfgWeapons" >> _this >> "permenant") == 1}, true] call tsp_fnc_undrop}];
[missionNamespace, "ArsenalClosed", {player call tsp_fnc_rhs_fix}] call BIS_fnc_addScriptedEventHandler;
if (isClass(configFile >> "CfgPatches" >> "ace_main")) then {["ace_arsenal_displayClosed", {ace_arsenal_center call tsp_fnc_rhs_fix}] call CBA_fnc_addEventHandler};
if (!isNil "CBA_fnc_addClassEventHandler") then {["CAManBase", "init", {(_this#0) call tsp_fnc_rhs_fix}] call CBA_fnc_addClassEventHandler};