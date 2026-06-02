class CfgPatches {class tsp_rhs_light {requiredAddons[] = {"cba_common", "A3_Weapons_F_Acc"}; units[] = {}; skipWhenMissingDependencies = 1;};};

#define mode_light\
	class FlashLight {\
		ambient[] = {9, 7.5, 6}; color[] = {1300,1100,1000};\
		daylight = 1; intensity = 5; scale[] = {0}; size = 1;\
		useflare = 1; flaremaxdistance = 150; flaresize = 0.8;\
		innerangle = 20; outerangle = 120; conefadecoef = 100;\
		class Attenuation {start = 0; constant = 2; linear = 0.1; quadratic = 0.1; hardlimitstart = 100; hardlimitend = 200;};\
		direction = "flash"; position = "flash dir";\
	};\

#define mode_light_2dp\
	class FlashLight {\
		ambient[] = {9, 7.5, 6}; color[] = {1300,1100,1000};\
		daylight = 1; intensity = 5; scale[] = {0}; size = 1;\
		useflare = 1; flaremaxdistance = 150; flaresize = 0.8;\
		innerangle = 20; outerangle = 120; conefadecoef = 100;\
		class Attenuation {start = 0; constant = 2; linear = 0.1; quadratic = 0.1; hardlimitstart = 100; hardlimitend = 200;};\
		direction = "flash"; position = "flashdir";\
	};\

class CfgWeapons {
	class ItemCore;
	class InventoryFlashlightItem_Base_F;
	class acc_flashlight: ItemCore {class ItemInfo: InventoryFlashlightItem_Base_F {mode_light};};
	class acc_flashlight_pistol: ItemCore {class ItemInfo: InventoryFlashlightItem_Base_F {mode_light};};

	class rhsusf_acc_anpeq15;
	class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15 {class ItemInfo: InventoryFlashlightItem_Base_F {mode_light};};		
	class rhs_acc_2dpZenit: acc_flashlight {class ItemInfo: ItemInfo {mode_light_2dp};};
	class rhs_acc_perst3;
	class rhs_acc_perst3_2dp: rhs_acc_perst3 {class ItemInfo;};
	class rhs_acc_perst3_2dp_light: rhs_acc_perst3_2dp {class ItemInfo: ItemInfo {mode_light_2dp};};
};