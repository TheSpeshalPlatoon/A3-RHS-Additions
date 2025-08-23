class CfgPatches {class tsp_rhs_tweak {units[] = {}; weapons[] = {}; requiredVersion = 0.1; requiredAddons[] = {"rhs_c_troops"}; skipWhenMissingDependencies = 1;};};

/*
vestssss = [];
{
    [configName _x, configName inheritsFrom _x] params ["_name", "_parent"];
    vestssss pushBack ["class "+_name+": "+_parent+" {};"];
} forEach (("true" configClasses (configFile >> "CfgWeapons")) select {"rhs_" in configName _x && ((configName _x call BIS_fnc_itemType)#1 == "headgear")});
vestssss
*/

class CfgWeapons {
	class ItemCore; class Vest_Camo_Base: ItemCore {class ItemInfo;};
    class rhs_6b23: Vest_Camo_Base {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_crew: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_engineer: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_medic: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_rifleman: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_crewofficer: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_sniper: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh92: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh92_vog: rhs_6b23_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh92_vog_headset: rhs_6b23_6sh92_vog {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh92_headset: rhs_6b23_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh92_headset_mapcase: rhs_6b23_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh92_radio: rhs_6b23_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_crew: rhs_6b23_crew {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_engineer: rhs_6b23_engineer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_medic: rhs_6b23_medic {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_rifleman: rhs_6b23_rifleman {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_crewofficer: rhs_6b23_crewofficer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_sniper: rhs_6b23_sniper {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92: rhs_6b23_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_vog: rhs_6b23_6sh92_vog {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_headset: rhs_6b23_6sh92_headset {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_radio: rhs_6b23_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_Spetsnaz: rhs_6b23_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz: rhs_6b23_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_headset_spetsnaz: rhs_6b23_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_spetsnaz2: rhs_6b23_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_6sh92_Vog_Spetsnaz: rhs_6b23_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_crew: rhs_6b23_crew {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_engineer: rhs_6b23_engineer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_medic: rhs_6b23_medic {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_rifleman: rhs_6b23_rifleman {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_crewofficer: rhs_6b23_crewofficer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_sniper: rhs_6b23_sniper {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_6sh92: rhs_6b23_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_6sh92_vog: rhs_6b23_6sh92_vog {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_6sh92_headset: rhs_6b23_6sh92_headset {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_6sh92_radio: rhs_6b23_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_vydra_3m: rhs_6b23_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_digi_vydra_3m: rhs_6b23_vydra_3m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_ML_vydra_3m: rhs_6b23_vydra_3m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh116: rhs_6b23_digi {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh116_flora: rhs_6b23_6sh116 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh116_od: rhs_6b23_6sh116 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh116_mixed: rhs_6b23_6sh116 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh116_vog: rhs_6b23_6sh116 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh116_vog_flora: rhs_6b23_6sh116_vog {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh116_vog_od: rhs_6b23_6sh116_vog {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b23_6sh116_vog_mixed: rhs_6b23_6sh116_vog {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_crewofficer: rhs_6b13 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_6sh92: rhs_6b13 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_6sh92_vog: rhs_6b13_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_6sh92_headset_mapcase: rhs_6b13_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_6sh92_radio: rhs_6b13_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_EMR: rhs_6b13 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_EMR_6sh92: rhs_6b13_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_EMR_6sh92_vog: rhs_6b13_6sh92_vog {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_EMR_6sh92_headset_mapcase: rhs_6b13_6sh92_headset_mapcase {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_EMR_6sh92_radio: rhs_6b13_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_Flora: rhs_6b13 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_Flora_crewofficer: rhs_6b13_crewofficer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_Flora_6sh92: rhs_6b13_6sh92 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_Flora_6sh92_vog: rhs_6b13_6sh92_vog {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_Flora_6sh92_headset_mapcase: rhs_6b13_6sh92_headset_mapcase {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b13_Flora_6sh92_radio: rhs_6b13_6sh92_radio {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b43: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b2: Vest_Camo_Base {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b2_AK: rhs_6b2 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b2_chicom: rhs_6b2_AK {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b2_lifchik: rhs_6b2_AK {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b2_holster: rhs_6b2_AK {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b2_RPK: rhs_6b2_AK {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b2_SVD: rhs_6b2_AK {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3: rhs_6b2 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_AK: rhs_6b3 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_AK_2: rhs_6b3_AK {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_AK_3: rhs_6b3_AK {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_holster: rhs_6b3 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_off: rhs_6b3 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_R148: rhs_6b3_AK {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_RPK: rhs_6b3 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_VOG: rhs_6b3 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b3_VOG_2: rhs_6b3_VOG {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5: rhs_6b23 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_officer: rhs_6b5 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_medic: rhs_6b5 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_sniper: rhs_6b5 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_rifleman: rhs_6b5 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_khaki: rhs_6b5 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_officer_khaki: rhs_6b5_officer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_medic_khaki: rhs_6b5_medic {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_sniper_khaki: rhs_6b5_sniper {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_rifleman_khaki: rhs_6b5_rifleman {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_vsr: rhs_6b5 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_officer_vsr: rhs_6b5_officer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_medic_vsr: rhs_6b5_medic {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_sniper_vsr: rhs_6b5_sniper {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_rifleman_vsr: rhs_6b5_rifleman {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_ttsko: rhs_6b5 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_officer_ttsko: rhs_6b5_officer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_medic_ttsko: rhs_6b5_medic {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_sniper_ttsko: rhs_6b5_sniper {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_rifleman_ttsko: rhs_6b5_rifleman {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_spetsodezhda: rhs_6b5 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_officer_spetsodezhda: rhs_6b5_officer {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_medic_spetsodezhda: rhs_6b5_medic {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_sniper_spetsodezhda: rhs_6b5_sniper {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b5_rifleman_spetsodezhda: rhs_6b5_rifleman {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b45: rhs_6b43 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_weak.hpp"
    };};
    class rhs_6b45_desert: rhs_6b45 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_strong.hpp"
    };};
    class rhs_6b45_grn: rhs_6b45 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_strong.hpp"
    };};
    class rhs_6b45_holster: rhs_6b45 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_strong.hpp"
    };};
    class rhs_6b45_light: rhs_6b45 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_strong.hpp"
    };};
    class rhs_6b45_mg: rhs_6b45 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_strong.hpp"
    };};
    class rhs_6b45_off: rhs_6b45 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_strong.hpp"
    };};
    class rhs_6b45_rifleman: rhs_6b45 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_strong.hpp"
    };};
    class rhs_6b45_rifleman_2: rhs_6b45 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\vest_strong.hpp"
    };};
	
    class ItemCore; class H_HelmetB: ItemCore {class ItemInfo;};
    class rhs_6b26: H_HelmetB {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_bala: rhs_6b26 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_ess: rhs_6b26 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_ess_bala: rhs_6b26 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_green: rhs_6b26 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_bala_green: rhs_6b26_green {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_ess_green: rhs_6b26_green {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_ess_bala_green: rhs_6b26_green {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_digi: rhs_6b26 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_digi_bala: rhs_6b26_digi {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_digi_ess: rhs_6b26_digi {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b26_digi_ess_bala: rhs_6b26_digi {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m: H_HelmetB {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_digi: rhs_6b27m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_ml: rhs_6b27m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_ess_bala: rhs_6b27m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_digi_ess_bala: rhs_6b27m_ess_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_ML_ess_bala: rhs_6b27m_ess_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_bala: rhs_6b27m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_digi_bala: rhs_6b27m_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_ml_bala: rhs_6b27m_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_ess: rhs_6b27m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_digi_ess: rhs_6b27m_ess {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_ml_ess: rhs_6b27m_ess {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_green: rhs_6b27m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_green_ess: rhs_6b27m_ess {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_green_bala: rhs_6b27m_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b27m_green_ess_bala: rhs_6b27m_ess_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28: rhs_6b27m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_flora: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_ess: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_flora_ess: rhs_6b28_ess {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_bala: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_flora_bala: rhs_6b28_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_ess_bala: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_flora_ess_bala: rhs_6b28_ess_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_green: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_green_ess: rhs_6b28_ess {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_green_bala: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b28_green_ess_bala: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_ssh68: rhs_6b27m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_zsh7a: H_HelmetB {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_zsh7a_alt: rhs_zsh7a {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_zsh7a_mike: rhs_zsh7a {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_zsh7a_mike_green: rhs_zsh7a_mike {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_zsh7a_mike_alt: rhs_zsh7a_mike {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_zsh7a_mike_green_alt: rhs_zsh7a_mike_green {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b47: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_bala: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_ess: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_ess_bala: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_6m2: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_6m2_1: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b7_1m: rhs_6b28 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_ess: rhs_6b7_1m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_ess_bala: rhs_6b7_1m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_bala1: rhs_6b7_1m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_bala1_emr: rhs_6b7_1m_bala1 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_emr_ess: rhs_6b7_1m_bala1 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_emr_ess_bala: rhs_6b7_1m_bala1 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_bala1_flora: rhs_6b7_1m_bala1_emr {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_bala1_olive: rhs_6b7_1m_bala1_emr {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_bala2: rhs_6b7_1m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_bala2_emr: rhs_6b7_1m_bala2 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_bala2_flora: rhs_6b7_1m_bala2_emr {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_bala2_olive: rhs_6b7_1m_bala2_emr {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_emr: rhs_6b7_1m {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_flora: rhs_6b7_1m_emr {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_flora_ns3: rhs_6b7_1m_flora {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b7_1m_olive: rhs_6b7_1m_emr {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_altyn: rhs_6b7_1m_emr {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_altyn_bala: rhs_altyn {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_altyn_visordown: rhs_altyn {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_altyn_novisor: rhs_altyn {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_altyn_novisor_bala: rhs_altyn_novisor {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_altyn_novisor_ess: rhs_altyn {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_altyn_novisor_ess_bala: rhs_altyn_novisor_ess {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_zsh12: rhs_altyn_novisor {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_zsh12_black: rhs_zsh12 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_zsh12_bala: rhs_altyn_novisor_bala {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_ssh60: rhs_ssh68 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_ssh68_2: rhs_ssh68 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_stsh81: rhs_ssh68 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_stsh81_butan: rhs_stsh81 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_weak.hpp"
    };};
    class rhs_6b47_bare: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_bare_d: rhs_6b47_bare {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_emr: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_emr_1: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_emr_2: rhs_6b47 {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b47_6B50: rhs_6b47_emr {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
    class rhs_6b48: rhs_6b47_bare {class ItemInfo: ItemInfo {
        #include "\tsp_rhs_tweak\helmet_strong.hpp"
    };};
};

class CfgAmmo {
    class BulletBase; 
    class rhs_ammo_762x51_M80_Ball: BulletBase {hit = 12;};
    class rhs_ammo_762x51_M118_Special_Ball:  rhs_ammo_762x51_M80_Ball {hit = 12;};
    class rhs_ammo_762x51_M61_AP: rhs_ammo_762x51_M80_Ball {hit = 12;};
    class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball {hit = 12;};
    class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball {hit = 12;};
    class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball {hit = 40;};
    class rhs_ammo_762x51_Mk316_Special_Ball: rhs_ammo_762x51_M118_Special_Ball {hit = 12;};
};
class CfgMagazineWells {  //-- 3Rnd HE for WhiskyNova
	class CBA_40mm_M203 {
		BI_grenades_all[] = {"1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","3Rnd_HE_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F"};
	};
};