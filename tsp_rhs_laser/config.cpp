class CfgPatches {class tsp_rhs_laser {requiredAddons[] = {"cba_common", "rhsusf_c_weapons", "ace_compat_rhs_usf3_nightvision"}; units[] = {}; skipWhenMissingDependencies = 1;};}; 
//(("true" configClasses (configFile >> "CfgWeapons")) select {"rhsusf_acc_anpeq15" in configName _x}) apply {'class '+configName _x+': '+configName inheritsFrom _x+' {};'}

#define mode_lase class Pointer {irLaserPos = "laser pos"; irLaserEnd = "laser dir"; irDistance = 5;};
#define mode_ir\
    class FlashLight {\
        ambient[] = {0.58431,0.72940999,0.81568998}; color[] = {149,186,208};\
        irlight = 1; dayLight = 1; intensity = 50; scale[] = {0}; size = 1;\
        useFlare = 1; flareMaxDistance = 554; flareSize = 4;\
        innerAngle = 8; outerAngle = 14; coneFadeCoef = 4;\
        class Attenuation {start = 100; constant = 100; linear = 60; quadratic = 20; hardLimitStart = 50; hardLimitEnd = 300;};\
        direction = "laser dir"; position = "laser pos";\
    };\
   
class CfgWeapons {
	class InventoryFlashLightItem_Base_F;
	class ItemCore;
    class acc_pointer_IR;

    class rhsusf_acc_anpeq15A: acc_pointer_IR {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15A_ir"; MRT_switchItemHintText = "IR Laser";}; 
	class rhsusf_acc_anpeq15A_ir: rhsusf_acc_anpeq15A {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15A_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15A_irlase: rhsusf_acc_anpeq15A {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15A"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};

    class rhsusf_acc_anpeq15side: acc_pointer_IR {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15side_ir"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15side_ir: rhsusf_acc_anpeq15side {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15side_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15side_irlase: rhsusf_acc_anpeq15side {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15side"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};

    class rhsusf_acc_anpeq15_top: rhsusf_acc_anpeq15A {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top_ir"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_top_ir: rhsusf_acc_anpeq15_top {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_top_irlase: rhsusf_acc_anpeq15_top {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};

    class rhsusf_acc_anpeq15side_bk: rhsusf_acc_anpeq15side {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15side_bk_ir"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15side_bk_ir: rhsusf_acc_anpeq15side_bk {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15side_bk_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15side_bk_irlase: rhsusf_acc_anpeq15side_bk {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15side_bk"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_bk_top: rhsusf_acc_anpeq15_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_ir"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_bk_top_ir: rhsusf_acc_anpeq15_bk_top {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_bk_top_irlase: rhsusf_acc_anpeq15_bk_top {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};

    class rhsusf_acc_anpeq15_top_h: rhsusf_acc_anpeq15_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top_h_ir"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_top_h_ir: rhsusf_acc_anpeq15_top_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top_h_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_top_h_irlase: rhsusf_acc_anpeq15_top_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top_h"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_top_sc: rhsusf_acc_anpeq15_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_irlase"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_top_sc_ir: rhsusf_acc_anpeq15_top_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top_sc_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_top_sc_irlase: rhsusf_acc_anpeq15_top_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top_sc"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15: acc_pointer_IR {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_light"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15 {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_ir"; MRT_switchItemHintText = "White Light";}; 
    class rhsusf_acc_anpeq15_ir: rhsusf_acc_anpeq15 {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_irlase: rhsusf_acc_anpeq15 {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_bk: rhsusf_acc_anpeq15 {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_light"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_bk_light: rhsusf_acc_anpeq15_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_ir"; MRT_switchItemHintText = "White Light";}; 
    class rhsusf_acc_anpeq15_bk_ir: rhsusf_acc_anpeq15_bk {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_bk_irlase: rhsusf_acc_anpeq15_bk {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_bk_h: rhsusf_acc_anpeq15_bk {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_light_h"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_bk_light_h: rhsusf_acc_anpeq15_bk_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_h_ir"; MRT_switchItemHintText = "White Light";}; 
    class rhsusf_acc_anpeq15_bk_h_ir: rhsusf_acc_anpeq15_bk_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_h_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_bk_h_irlase: rhsusf_acc_anpeq15_bk_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_h"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_bk_sc: rhsusf_acc_anpeq15_bk {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_light_sc"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_bk_light_sc: rhsusf_acc_anpeq15_bk_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_sc_ir"; MRT_switchItemHintText = "White Light";}; 
    class rhsusf_acc_anpeq15_bk_sc_ir: rhsusf_acc_anpeq15_bk_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_sc_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_bk_sc_irlase: rhsusf_acc_anpeq15_bk_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_sc"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_h: rhsusf_acc_anpeq15 {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_light_h"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_light_h: rhsusf_acc_anpeq15_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_h_ir"; MRT_switchItemHintText = "White Light";}; 
    class rhsusf_acc_anpeq15_h_ir: rhsusf_acc_anpeq15_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_h_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_h_irlase: rhsusf_acc_anpeq15_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_h"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_sc: rhsusf_acc_anpeq15 {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_light_sc"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_light_sc: rhsusf_acc_anpeq15_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_sc_ir"; MRT_switchItemHintText = "White Light";};     
    class rhsusf_acc_anpeq15_sc_ir: rhsusf_acc_anpeq15_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_sc_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_sc_irlase: rhsusf_acc_anpeq15_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_sc"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_bk_top_h: rhsusf_acc_anpeq15_bk_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_h_ir"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_bk_top_h_ir: rhsusf_acc_anpeq15_bk_top_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_h_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_bk_top_h_irlase: rhsusf_acc_anpeq15_bk_top_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_h"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_bk_top_sc: rhsusf_acc_anpeq15_bk_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_sc_ir"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_bk_top_sc_ir: rhsusf_acc_anpeq15_bk_top_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_sc_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_bk_top_sc_irlase: rhsusf_acc_anpeq15_bk_top_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_sc"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_wmx: rhsusf_acc_anpeq15 {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_light"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_wmx_light: rhsusf_acc_anpeq15_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_ir"; MRT_switchItemHintText = "White Light";}; 
    class rhsusf_acc_anpeq15_wmx_ir: rhsusf_acc_anpeq15_wmx {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_wmx_irlase: rhsusf_acc_anpeq15_wmx {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_wmx_h: rhsusf_acc_anpeq15_wmx {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_light_h"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_wmx_light_h: rhsusf_acc_anpeq15_wmx_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_h_ir"; MRT_switchItemHintText = "White Light";}; 
    class rhsusf_acc_anpeq15_wmx_h_ir: rhsusf_acc_anpeq15_wmx_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_h_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_wmx_h_irlase: rhsusf_acc_anpeq15_wmx_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_h"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
    class rhsusf_acc_anpeq15_wmx_sc: rhsusf_acc_anpeq15_wmx {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_light_sc"; MRT_switchItemHintText = "IR Laser";}; 
    class rhsusf_acc_anpeq15_wmx_light_sc: rhsusf_acc_anpeq15_wmx_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_sc_ir"; MRT_switchItemHintText = "White Light";}; 
    class rhsusf_acc_anpeq15_wmx_sc_ir: rhsusf_acc_anpeq15_wmx_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_sc_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq15_wmx_sc_irlase: rhsusf_acc_anpeq15_wmx_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_sc"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};};
    
	class rhsusf_acc_anpeq16a: rhsusf_acc_anpeq15 {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_light"; MRT_switchItemHintText = "IR Laser";}; 
	class rhsusf_acc_anpeq16a_light: rhsusf_acc_anpeq15_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_ir"; MRT_switchItemHintText = "White Light";}; 
	class rhsusf_acc_anpeq16a_ir: rhsusf_acc_anpeq16a {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq16a_irlase: rhsusf_acc_anpeq16a {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};}; 
    
	class rhsusf_acc_anpeq16a_top: rhsusf_acc_anpeq16a {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_light_top"; MRT_switchItemHintText = "IR Laser";}; 
	class rhsusf_acc_anpeq16a_light_top: rhsusf_acc_anpeq16a_light {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top_ir"; MRT_switchItemHintText = "White Light";}; 
	class rhsusf_acc_anpeq16a_top_ir: rhsusf_acc_anpeq16a_top {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq16a_top_irlase: rhsusf_acc_anpeq16a_top {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};}; 

	class rhsusf_acc_anpeq16a_top_h: rhsusf_acc_anpeq16a_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_light_top_h"; MRT_switchItemHintText = "IR Laser";}; 
	class rhsusf_acc_anpeq16a_light_top_h: rhsusf_acc_anpeq16a_light_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top_h_ir"; MRT_switchItemHintText = "White Light";}; 
	class rhsusf_acc_anpeq16a_top_h_ir: rhsusf_acc_anpeq16a_top_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top_h_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq16a_top_h_irlase: rhsusf_acc_anpeq16a_top_h {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top_h"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};}; 

	class rhsusf_acc_anpeq16a_top_sc: rhsusf_acc_anpeq16a_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_light_top_sc"; MRT_switchItemHintText = "IR Laser";}; 
	class rhsusf_acc_anpeq16a_light_top_sc: rhsusf_acc_anpeq16a_light_top {rhs_acc_combo = ""; MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top_sc_ir"; MRT_switchItemHintText = "White Light";}; 
	class rhsusf_acc_anpeq16a_top_sc_ir: rhsusf_acc_anpeq16a_top_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top_sc_irlase"; MRT_switchItemHintText = "IR Illuminator"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir};}; 
	class rhsusf_acc_anpeq16a_top_sc_irlase: rhsusf_acc_anpeq16a_top_sc {MRT_SwitchItemNextClass = "rhsusf_acc_anpeq16a_top_sc"; MRT_switchItemHintText = "IR Illuminator and IR Laser"; class ItemInfo: InventoryFlashLightItem_Base_F {mode_ir mode_lase};}; 

}; 
    
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
	class compatibleItems {
        rhsusf_acc_anpeq15A_ir = 1; rhsusf_acc_anpeq15A_irlase = 1;
        rhsusf_acc_anpeq15side_ir = 1; rhsusf_acc_anpeq15side_irlase = 1;
        rhsusf_acc_anpeq15_top_ir = 1; rhsusf_acc_anpeq15_top_irlase = 1;
        rhsusf_acc_anpeq15side_bk_ir = 1; rhsusf_acc_anpeq15side_bk_irlase = 1;
        rhsusf_acc_anpeq15_bk_top_ir = 1; rhsusf_acc_anpeq15_bk_top_irlase = 1;
        rhsusf_acc_anpeq15_top_h_ir = 1; rhsusf_acc_anpeq15_top_h_irlase = 1;
        rhsusf_acc_anpeq15_top_sc_ir = 1; rhsusf_acc_anpeq15_top_sc_irlase = 1;
        rhsusf_acc_anpeq15_ir = 1; rhsusf_acc_anpeq15_irlase = 1;
        rhsusf_acc_anpeq15_bk_ir = 1; rhsusf_acc_anpeq15_bk_irlase = 1;
        rhsusf_acc_anpeq15_bk_h_ir = 1; rhsusf_acc_anpeq15_bk_h_irlase = 1;
        rhsusf_acc_anpeq15_bk_sc_ir = 1; rhsusf_acc_anpeq15_bk_sc_irlase = 1;
        rhsusf_acc_anpeq15_h_ir = 1; rhsusf_acc_anpeq15_h_irlase = 1;
        rhsusf_acc_anpeq15_sc_ir = 1; rhsusf_acc_anpeq15_sc_irlase = 1;
        rhsusf_acc_anpeq15_bk_top_h_ir = 1; rhsusf_acc_anpeq15_bk_top_h_irlase = 1;
        rhsusf_acc_anpeq15_bk_top_sc_ir = 1; rhsusf_acc_anpeq15_bk_top_sc_irlase = 1;
        rhsusf_acc_anpeq15_wmx_ir = 1; rhsusf_acc_anpeq15_wmx_irlase = 1;
        rhsusf_acc_anpeq15_wmx_h_ir = 1; rhsusf_acc_anpeq15_wmx_h_irlase = 1;
        rhsusf_acc_anpeq15_wmx_sc_ir = 1; rhsusf_acc_anpeq15_wmx_sc_irlase = 1;
		rhsusf_acc_anpeq16a_ir = 1; rhsusf_acc_anpeq16a_irlase = 1;
		rhsusf_acc_anpeq16a_top_ir = 1; rhsusf_acc_anpeq16a_top_irlase = 1;
		rhsusf_acc_anpeq16a_top_h_ir = 1; rhsusf_acc_anpeq16a_top_h_irlase = 1;
		rhsusf_acc_anpeq16a_top_sc_ir = 1; rhsusf_acc_anpeq16a_top_sc_irlase = 1;
	};
};
class PointerSlot;
class PointerSlot_Rail: PointerSlot {
	class compatibleItems {
        rhsusf_acc_anpeq15A_ir = 1; rhsusf_acc_anpeq15A_irlase = 1;
        rhsusf_acc_anpeq15side_ir = 1; rhsusf_acc_anpeq15side_irlase = 1;
        rhsusf_acc_anpeq15_top_ir = 1; rhsusf_acc_anpeq15_top_irlase = 1;
        rhsusf_acc_anpeq15side_bk_ir = 1; rhsusf_acc_anpeq15side_bk_irlase = 1;
        rhsusf_acc_anpeq15_bk_top_ir = 1; rhsusf_acc_anpeq15_bk_top_irlase = 1;
        rhsusf_acc_anpeq15_top_h_ir = 1; rhsusf_acc_anpeq15_top_h_irlase = 1;
        rhsusf_acc_anpeq15_top_sc_ir = 1; rhsusf_acc_anpeq15_top_sc_irlase = 1;
        rhsusf_acc_anpeq15_ir = 1; rhsusf_acc_anpeq15_irlase = 1;
        rhsusf_acc_anpeq15_bk_ir = 1; rhsusf_acc_anpeq15_bk_irlase = 1;
        rhsusf_acc_anpeq15_bk_h_ir = 1; rhsusf_acc_anpeq15_bk_h_irlase = 1;
        rhsusf_acc_anpeq15_bk_sc_ir = 1; rhsusf_acc_anpeq15_bk_sc_irlase = 1;
        rhsusf_acc_anpeq15_h_ir = 1; rhsusf_acc_anpeq15_h_irlase = 1;
        rhsusf_acc_anpeq15_sc_ir = 1; rhsusf_acc_anpeq15_sc_irlase = 1;
        rhsusf_acc_anpeq15_bk_top_h_ir = 1; rhsusf_acc_anpeq15_bk_top_h_irlase = 1;
        rhsusf_acc_anpeq15_bk_top_sc_ir = 1; rhsusf_acc_anpeq15_bk_top_sc_irlase = 1;
        rhsusf_acc_anpeq15_wmx_ir = 1; rhsusf_acc_anpeq15_wmx_irlase = 1;
        rhsusf_acc_anpeq15_wmx_h_ir = 1; rhsusf_acc_anpeq15_wmx_h_irlase = 1;
        rhsusf_acc_anpeq15_wmx_sc_ir = 1; rhsusf_acc_anpeq15_wmx_sc_irlase = 1;
		rhsusf_acc_anpeq16a_ir = 1; rhsusf_acc_anpeq16a_irlase = 1;
		rhsusf_acc_anpeq16a_top_ir = 1; rhsusf_acc_anpeq16a_top_irlase = 1;
		rhsusf_acc_anpeq16a_top_h_ir = 1; rhsusf_acc_anpeq16a_top_h_irlase = 1;
		rhsusf_acc_anpeq16a_top_sc_ir = 1; rhsusf_acc_anpeq16a_top_sc_irlase = 1;
	};
};