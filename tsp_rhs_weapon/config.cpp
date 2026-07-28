class CfgPatches {
	class tsp_rhs_weapon {
		requiredAddons[] = {
			"rhs_c_weapons", "rhsusf_weapons", "rhsusf_weapons2", "rhsusf_weapons3", 
			"rhsusf_c_weapons", "rhs_weapons", "rhs_weapons2", "rhs_weapons3",
			"asdg_jointmuzzles", "asdg_jointrails",
			"cba_main", "cba_main_a3",
			"rhsusf_muzzleflash"
		};
		units[] = {};
		skipWhenMissingDependencies = 1;
	};
};

//-- FUNCTIONS
class CfgFunctions {class tsp_rhs_weapon {class functions {class init {file = "\tsp_rhs_weapon\init.sqf"; postInit = true;};};};};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {class compatibleItems {rhsgref_sdn6_suppressor = 1;};}; 
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556 {class compatibleItems {rhsgref_sdn6_suppressor = 1;};};

class asdg_MuzzleSlot_762R: asdg_MuzzleSlot {class compatibleItems {rhs_acc_uuk = 1; rhs_acc_ak5 = 1; rhs_acc_dtk1 = 1; rhs_acc_dtk2 = 1; rhs_acc_dtk3 = 1;};}; 
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot {class compatibleItems {rhs_acc_uuk = 1; rhs_acc_ak5 = 1; rhs_acc_dtk1 = 1; rhs_acc_dtk2 = 1; rhs_acc_dtk3 = 1;};}; 

class CfgWeapons {
	class acc_flashlight;
	class bipod_01_F_snd;
	class inventoryFlashLightItem_Base_F;

	class rhs_acc_bipod: bipod_01_F_snd {permenant = true; displayName = "Base"; descriptionShort = ""; picture = "\tsp_rhs_weapon\tex\icon.paa"; class itemInfo {hasBipod = false; type = 302; mass = 10;};};		
	class rhs_acc_pointer: acc_flashlight {permenant = true; displayName = "Base"; descriptionShort = ""; picture = "\tsp_rhs_weapon\tex\icon.paa"; class itemInfo: inventoryFlashLightItem_Base_F {class Pointer {}; class FlashLight {};};};
	
	class rhs_weap_XM2010_Base_F; 
	class rhs_weap_dsr1: rhs_weap_XM2010_Base_F {baseWeapon = "rhs_weap_dsr1"; scope = 2;};
	
	class Rifle_Base_F; 
	class rhs_weap_M590_5RD: Rifle_Base_F {cursor = "sgun";};
	class rhs_weap_M590_8RD: rhs_weap_M590_5RD {cursor = "sgun";};
};