class CfgPatches {class tsp_rhs_m27 {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {}; skipWhenMissingDependencies = 1;};};

class WeaponSlotsInfo;
class rhs_western_rifle_afg_slot;
class CfgWeapons {
	class rhs_weap_hk416d10;
	class rhs_weap_m27rwk: rhs_weap_hk416d10 {
		displayName = "M27 RWK";
		baseWeapon = "rhs_weap_m27rwk";
		hiddenSelectionsTextures[] = {"\tsp_rhs_m27\rhs_m27rwk_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa","\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"};
		rhs_grip1_change = "rhs_weap_m27rwk_grip"; rhs_grip2_change = "rhs_weap_m27rwk_grip2"; rhs_grip3_change = "rhs_weap_m27rwk_grip3";
		class WeaponSlotsInfo;
	};
	class rhs_weap_m27rwk_grip: rhs_weap_m27rwk {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};};
	class rhs_weap_m27rwk_grip2: rhs_weap_m27rwk {
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_hk416_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {class GripodSlot: rhs_western_rifle_afg_slot {linkProxy = "rhsusf\addons\rhsusf_weapons\rhs_afg_proxy";};};
	};
	class rhs_weap_m27rwk_grip3: rhs_weap_m27rwk {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};};

	class rhs_weap_hk416d10_LMT;
	class rhs_weap_m27rwk_lmt: rhs_weap_hk416d10_LMT {
		displayName = "M27 RWK (SOPMOD Stock)";
		baseWeapon = "rhs_weap_m27rwk_lmt";
		hiddenSelectionsTextures[] = {"\tsp_rhs_m27\rhs_m27rwk_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa","\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"};
		rhs_grip1_change = "rhs_weap_m27rwk_lmt_grip"; rhs_grip2_change = "rhs_weap_m27rwk_lmt_grip2"; rhs_grip3_change = "rhs_weap_m27rwk_lmt_grip3";
	};
	class rhs_weap_m27rwk_lmt_grip: rhs_weap_m27rwk_lmt {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};};
	class rhs_weap_m27rwk_lmt_grip2: rhs_weap_m27rwk_lmt {
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_hk416_afg.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo {class GripodSlot: rhs_western_rifle_afg_slot {linkProxy = "rhsusf\addons\rhsusf_weapons\rhs_afg_proxy";};};
	};
	class rhs_weap_m27rwk_lmt_grip3: rhs_weap_m27rwk_lmt {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};};
};