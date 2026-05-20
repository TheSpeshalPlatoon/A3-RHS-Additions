class CfgPatches {class tsp_tier1_light {requiredAddons[] = {"cba_common", "Tier1_Weapons_cfg"}; units[] = {}; skipWhenMissingDependencies = 1;};};

#define mode_light_t1\
	class FlashLight {\
		ambient[] = {9, 7.5, 6}; color[] = {1300,1100,1000};\
		daylight = 1; intensity = 5; scale[] = {0}; size = 1;\
		useflare = 1; flaremaxdistance = 150; flaresize = 0.8;\
		innerangle = 20; outerangle = 120; conefadecoef = 100;\
		class Attenuation {start = 0; constant = 2; linear = 0.1; quadratic = 0.1; hardlimitstart = 100; hardlimitend = 200;};\
		direction = "flash_dir"; position = "flash_pos";\
	};\

#define mode_light_t1p\
	class FlashLight {\
		ambient[] = {9, 7.5, 6}; color[] = {1300,1100,1000};\
		daylight = 1; intensity = 5; scale[] = {0}; size = 1;\
		useflare = 1; flaremaxdistance = 150; flaresize = 0.8;\
		innerangle = 20; outerangle = 120; conefadecoef = 100;\
		class Attenuation {start = 0; constant = 2; linear = 0.1; quadratic = 0.1; hardlimitstart = 100; hardlimitend = 200;};\
		direction = "flash dir"; position = "flash";\
	};\

class CfgWeapons {
	class ItemCore;
	class acc_pointer_IR;
	class InventoryFlashlightItem_Base_F;
	class Tier1_URX4_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_416_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_416_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_145_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_10_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_416_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk48Mod0_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk46Mod1_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk48Mod1_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk46Mod0_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_LA5_M600V_alt_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_416_LA5_M600V_alt_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_LA5_M600V_alt_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_LA5_M600V_alt_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk46Mod1_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk46Mod0_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_10_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk48Mod0_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_145_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_416_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk48Mod1_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_10_LA5_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_LA5_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_145_LA5_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_416_LA5_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_LA5_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_LA5_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk46Mod0_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_10_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk46Mod1_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_145_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk48Mod1_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_416_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk48Mod0_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M249_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M249_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M249_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_NGAL_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_NGAL_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_M4BII_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_NGAL_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_NGAL_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_Mk18_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MP7_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MP7_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MP7_NGAL_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MP7_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_NGAL_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_NGAL_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_NGAL_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_NGAL_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_10_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_145_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_NGAL_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_NGAL_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_NGAL_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_NGAL_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_NGAL_M600V_alt_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_NGAL_M600V_alt_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_NGAL_M600V_alt_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_10_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_145_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_NGAL_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_10_NGAL_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_145_NGAL_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_NGAL_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_NGAL_M600V_alt_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MCX_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_MW_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_10_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_RAHG_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_145_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_URX4_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_LA5_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_LA5_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_LA5_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_LA5_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_LA5_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_NGAL_M300C_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_NGAL_M300C_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_NGAL_M600V_Black_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_NGAL_M600V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};
	class Tier1_SCAR_NGAL_M603V_FL: acc_pointer_IR {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1};};

	class Tier1_DBALPL: ItemCore {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1p};};
	class Tier1_DBALPL_FL: ItemCore {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1p};};
	class Tier1_TLR1: ItemCore {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1p};};
	class Tier1_X300U: ItemCore {class ItemInfo: InventoryFlashLightItem_Base_F {mode_light_t1p};};
};