class CfgPatches {class tsp_rhs_ak {requiredAddons[] = {"rhs_c_weapons"}; units[] = {}; skipWhenMissingDependencies = 1;};};

class rhs_picattinny_russian_handguard_scopes_slot;
class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_weap_ak74m_zenitco01;
	class rhs_weap_ak105_zenitco01;
	class rhs_weap_ak104_zenitco01;
	class rhs_weap_ak103_zenitco01;
	class rhs_weap_ak74m_zenitco01_ak100: rhs_weap_ak74m_zenitco01
	{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		displayName = "AK-74M (Zenitco/AK100)";
		scope = 2;
		scopeArsenal = 2;
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		reloadAction = "RHS_GestureReloadAK762_1hand";
		weaponInfoType = "rhs_rscOptics_ak74m_zenitco01";
		rhs_fold = "rhs_weap_ak74m_zenitco01_ak100_folded";
		rhs_npz = "rhs_weap_ak74m_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak74m_zenitco01_ak100_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_zenitco01_ak100_afg";
		rhs_grip3_change = "rrhs_weap_ak74m_zenitco01_ak100_grip1";
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_t1 = 1;
		baseWeapon = "rhs_weap_ak74m_zenitco01_ak100";
	};
	class rhs_weap_ak74m_zenitco01_ak100_grip1: rhs_weap_ak74m_zenitco01_ak100
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
	};
	class rhs_weap_ak74m_zenitco01_ak100_afg: rhs_weap_ak74m_zenitco01_ak100
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
	};
	class rhs_weap_ak74m_zenitco01_ak100_folded: rhs_weap_ak74m_zenitco01_ak100
	{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_folded_ca.paa";
		displayName = "AK-74M (Folded)";
		scopeArsenal = 0;
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_folded";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
		recoil = "rhs_recoil_ak74m_folded";
		inertia = 0.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 55.875;
			class CowsSlot: rhs_picattinny_russian_handguard_scopes_slot{};
		};
		rhs_fold = "rhs_weap_ak74m_zenitco01_ak100";
		baseWeapon = "rhs_weap_ak74m_zenitco01_ak100_folded";
		rhs_grip1_change = "rhs_weap_ak74m_zenitco01_ak100_folded_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_zenitco01_ak100_folded_afg";
		rhs_grip3_change = "rhs_weap_ak74m_zenitco01_ak100_folded_grip1";
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_t1 = 1;
	};
	class rhs_weap_ak74m_zenitco01_ak100_folded_grip1:  rhs_weap_ak74m_zenitco01_ak100_folded
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"};
		scope = 1;
	};
	class rhs_weap_ak74m_zenitco01_ak100_folded_afg:  rhs_weap_ak74m_zenitco01_ak100_folded
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"};
		scope = 1;
	};
	class rhs_weap_ak103_zenitco01_pt1: rhs_weap_ak103_zenitco01
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_ca.paa";
		displayName = "AK-103 (Zenitco/PT-1)";
		scope = 2;
		scopeArsenal = 2;
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		reloadAction = "RHS_GestureReloadAK_1hand";
		weaponInfoType = "rhs_rscOptics_ak103_zenitco01";
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak103_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak103_zenitco01_pt1_grip1";
		rhs_grip2_change = "rhs_weap_ak103_zenitco01_pt1_afg";
		rhs_grip3_change = "rhs_weap_ak103_zenitco01_pt1_grip1";
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_t1 = 1;
		baseWeapon = "rhs_weap_ak103_zenitco01_pt1";
	};
	class rhs_weap_ak103_zenitco01_pt1_grip1: rhs_weap_ak103_zenitco01_pt1
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
	};
	class rhs_weap_ak103_zenitco01_pt1_afg: rhs_weap_ak103_zenitco01_pt1
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
	};
	class rhs_weap_ak74m_zenitco01_npz: rhs_weap_ak74m_zenitco01
	{
		scope = 2;
		scopeArsenal = 2;
	};
	class rhs_weap_ak74m_zenitco01_ak100_npz: rhs_weap_ak74m_zenitco01_npz
	{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_npz_ca.paa";
		displayName = "AK-74M (Zenitco/AK100/B-13)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_npz";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		reloadAction = "RHS_GestureReloadAK762_1hand";
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak74m_zenitco01_ak100_npz";
		rhs_grip1_change = "rhs_weap_ak74m_zenitco01_ak100_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_zenitco01_ak100_npz_afg";
		rhs_grip3_change = "rhs_weap_ak74m_zenitco01_ak100_npz_grip1";
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_t1 = 1;
		baseWeapon = "rhs_weap_ak74m_zenitco01_ak100_npz";
	};
	class rhs_weap_ak74m_zenitco01_ak100_npz_grip1: rhs_weap_ak74m_zenitco01_ak100_npz
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
	};
	class rhs_weap_ak74m_zenitco01_ak100_npz_afg: rhs_weap_ak74m_zenitco01_ak100_npz
	{
		scope = 1;
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
	};

	class rhs_weap_ak105_zenitco01_npz: rhs_weap_ak105_zenitco01
	{
		scope = 2;
		scopeArsenal = 2;
	};
	class rhs_weap_ak103_zenitco01_npz: rhs_weap_ak103_zenitco01
	{
		scope = 2;
		scopeArsenal = 2;
	};
	class rhs_weap_ak103_zenitco01_pt1_npz: rhs_weap_ak103_zenitco01_npz
	{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_npz_ca.paa";
		displayName = "AK-103 (Zenitco/PT-1/B-13)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit_npz";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		reloadAction = "RHS_GestureReloadAK_1hand";
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak103_zenitco01_pt1_npz";
		rhs_grip1_change = "rhs_weap_ak103_zenitco01_pt1_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak103_zenitco01_pt1_npz_afg";
		rhs_grip3_change = "rhs_weap_ak103_zenitco01_pt1_npz_grip1";
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_t1 = 1;
		baseWeapon = "rhs_weap_ak103_zenitco01_pt1_npz";
	};
	class rhs_weap_ak103_zenitco01_pt1_npz_grip1: rhs_weap_ak103_zenitco01_pt1_npz
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
		scope = 1;
		scopeArsenal = 1;
	};
	class rhs_weap_ak103_zenitco01_pt1_npz_afg: rhs_weap_ak103_zenitco01_pt1_npz
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
		scope = 1;
		scopeArsenal = 1;
	};
	class rhs_weap_ak104_zenitco01_npz: rhs_weap_ak104_zenitco01
	{
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit_npz";
		reloadAction = "RHS_GestureReloadAK_1hand";
		scope = 2;
		scopeArsenal = 2;
	};
};