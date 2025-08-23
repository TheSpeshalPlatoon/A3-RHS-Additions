class CfgPatches {
	class tsp_rhs_light {
		requiredAddons[] = {"cba_common", "A3_Weapons_F_Acc"};
		weapons[] = {"acc_flashlight", "rhsusf_acc_anpeq15_light", "rhs_acc_2dpZenit", "rhs_acc_perst3_2dp_light"};
		units[] = {};
        skipWhenMissingDependencies = 1;
	};
};

#define flashlight_default\
    class FlashLight {\
        ambient[] = {9, 7.5, 6}; color[] = {1300, 1100, 1000};\
        daylight = 1; intensity = 15; scale[] = {0}; size = 1;\
        useflare = 1; flaremaxdistance = 150; flaresize = 0.8;\
        innerangle = 20; outerangle = 120; conefadecoef = 100;\
        direction = "flash"; position = "flash dir";\
        class Attenuation {start = 0.25; constant = 0; linear = 0; quadratic = 1; hardlimitend = 150; hardlimitstart = 140;};\
    };\

#define flashlight_2dp\
    class FlashLight {\
        ambient[] = {9, 7.5, 6}; color[] = {1300, 1100, 1000};\
        daylight = 1; intensity = 15; scale[] = {0}; size = 1;\
        useflare = 1; flaremaxdistance = 150; flaresize = 0.8;\
        innerangle = 20; outerangle = 120; conefadecoef = 100;\
        direction = "flash"; position = "flashdir";\
        class Attenuation {start = 0.25; constant = 0; linear = 0; quadratic = 1; hardlimitend = 150; hardlimitstart = 140;};\
    };\

class CfgWeapons {
	class ItemCore;
	class InventoryFlashlightItem_Base_F;

	class acc_flashlight: ItemCore {class ItemInfo: InventoryFlashlightItem_Base_F {flashlight_default};};
	class acc_flashlight_pistol: ItemCore {class ItemInfo: InventoryFlashlightItem_Base_F {flashlight_default};};

	class rhsusf_acc_anpeq15;
	class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15 {class ItemInfo: InventoryFlashLightItem_Base_F {flashlight_default};};		
	class rhs_acc_2dpZenit: acc_flashlight {class ItemInfo: ItemInfo {flashlight_2dp};};
	class rhs_acc_perst3;
	class rhs_acc_perst3_2dp: rhs_acc_perst3 {class ItemInfo;};
	class rhs_acc_perst3_2dp_light: rhs_acc_perst3_2dp {class ItemInfo: ItemInfo {flashlight_2dp};};
};