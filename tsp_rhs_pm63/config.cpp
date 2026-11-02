class CfgPatches {class tsp_rhs_pm63 {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {}; skipWhenMissingDependencies = 1;};};

class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_acc_pointer;
	class rhs_weap_akm; class rhs_weap_pm63: rhs_weap_akm {class WeaponSlotsInfo;};
	class rhs_acc_underfold: rhs_acc_pointer {permenant = true; displayName = "Underfolding Stock"; model = "\tsp_rhs_rpk\rpk.p3d"; descriptionShort = "Underfolding Stock";};
	class rhs_weap_pm63_fold: rhs_weap_pm63 {
		baseWeapon = "rhs_weap_pm63_fold"; displayName = "PM-63 Underfolder"; hiddenSelections[] = {"body","acc"};
		hiddenSelectionsTextures[] = {"tsp_rhs_pm63\tex\rhs_akm_prm_co.paa","tsp_rhs_pm63\tex\rhs_akm_acc_co.paa"};
		//hiddenSelectionsMaterials[] = {"\tsp_rhs_weapon\tex\empty.rvmat","rhsafrf\addons\rhs_weapons\akm\data\rhs_akm_acc.rvmat"};
		//hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\akm\data\rhs_akm_prm_co.paa","rhsafrf\addons\rhs_weapons\akm\data\rhs_akm_acc_co.paa"};
		hiddenSelectionsMaterials[] = {"\tsp_rhs_m4\tex\car.rvmat","\tsp_rhs_m4\tex\car.rvmat"};
		class linkedItems {class linkedItemsPointer {slot = "pointerSlot"; item = "rhs_acc_underfold";}; class LinkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhs_acc_dtkrpk";};};	
		class WeaponSlotsInfo: WeaponSlotsInfo {class pointerSlot {linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE"; class compatibleItems {rhs_acc_underfold = 1;};};};
	};
};
