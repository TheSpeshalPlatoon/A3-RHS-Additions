class CfgPatches {class tsp_rhs_ak {requiredAddons[] = {"rhs_c_weapons"}; units[] = {}; skipWhenMissingDependencies = 1;};};

class rhs_russian_rifle_scopes_slot_npz;
class rhs_picattinny_russian_handguard_scopes_slot;
class rhs_picattinny_russian_rifle_scopes_slot;
class rhs_russian_ak74_muzzle_slot;
class rhs_picattinny_russian_rifle_scopes_slot_long;
class rhs_russian_rifle_gripod_slot;
class rhs_russian_ris_handguard_slot;
class rhs_russian_aux_barrel_slot;
class rhs_russian_ak_barrel_slot;
class MuzzleSlot;
class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_weap_akms;
	class rhs_weap_akms_folded;
	class rhs_weap_akms_gold: rhs_weap_akms {
		displayName = "AKMS (Gold)"; picture = "\tsp_rhs_ak\gold.paa"; 
		hiddenSelectionsTextures[] = {"tsp_rhs_ak\rhs_akm_prm_co.paa","tsp_rhs_ak\rhs_akm_acc_co.paa"};
		hiddenSelectionsMaterials[] = {"tsp_rhs_ak\rhs_akm_prm.rvmat","tsp_rhs_ak\rhs_akm_acc.rvmat"};
		magazines[] = {"rhs_30Rnd_762x39mm"};
		scope = 1; scopeArsenal = 1; baseWeapon = "rhs_weap_akms_gold_folded"; rhs_fold = "rhs_weap_akms_gold_folded";
	};
	class rhs_weap_akms_gold_folded: rhs_weap_akms_folded {
		displayName = "AKMS (Gold)"; picture = "\tsp_rhs_ak\gold.paa"; 
		hiddenSelectionsTextures[] = {"tsp_rhs_ak\rhs_akm_prm_co.paa","tsp_rhs_ak\rhs_akm_acc_co.paa"};
		hiddenSelectionsMaterials[] = {"tsp_rhs_ak\rhs_akm_prm.rvmat","tsp_rhs_ak\rhs_akm_acc.rvmat"};
		magazines[] = {"rhs_30Rnd_762x39mm"};
		scope = 2; scopeArsenal = 2; baseWeapon = "rhs_weap_akms_gold_folded"; rhs_fold = "rhs_weap_akms_gold";
	};

	class rhs_weap_ak74m_zenitco01;
	class rhs_weap_ak74m_zenitco01_npz: rhs_weap_ak74m_zenitco01 {scope = 2; scopeArsenal = 2;};

	class rhs_weap_ak105;
	class rhs_weap_ak105_camo: rhs_weap_ak105
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Red Hammer Studios";
		displayName = "AK-105 (Camo)";
		model = "\rhsafrf\addons\rhs_weapons\rhs_ak105";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa","rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_01_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_02_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_b33_co.paa"};
		rhs_fold = "rhs_weap_ak105_camo_folded";
		rhs_npz = "rhs_weap_ak105_npz";
		baseWeapon = "rhs_weap_ak105_camo";
	};
	class rhs_weap_ak105_desert: rhs_weap_ak105
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Red Hammer Studios";
		displayName = "AK-105 (Desert)";
		model = "\rhsafrf\addons\rhs_weapons\rhs_ak105";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa","rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_01_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_02_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_b33_co.paa"};
		rhs_fold = "rhs_weap_ak105_desert_folded";
		rhs_npz = "rhs_weap_ak105_npz";
		baseWeapon = "rhs_weap_ak105_desert";
	};
	class rhs_weap_ak105_camo_folded: rhs_weap_ak105_camo
	{
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_folded_ca.paa";
		displayName = "AK-105 (Camo/Folded)";
		scopeArsenal = 0;
		scope = 1;
		model = "\rhsafrf\addons\rhs_weapons\rhs_ak105_folded";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
		recoil = "rhs_recoil_ak74m_folded";
		inertia = 0.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 42.9;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot: rhs_russian_ak_barrel_slot
			{
			};
			class rhs_npz_slot
			{
			};
		};
		rhs_fold = "rhs_weap_ak105_camo";
		baseWeapon = "rhs_weap_ak105_camo_folded";
	};
	class rhs_weap_ak105_desert_folded: rhs_weap_ak105_desert
	{
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_folded_ca.paa";
		displayName = "AK-105 (Desert/Folded)";
		scopeArsenal = 0;
		scope = 1;
		model = "\rhsafrf\addons\rhs_weapons\rhs_ak105_folded";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
		recoil = "rhs_recoil_ak74m_folded";
		inertia = 0.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 42.9;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot: rhs_russian_ak_barrel_slot
			{
			};
			class rhs_npz_slot
			{
			};
		};
		rhs_fold = "rhs_weap_ak105_desert";
		baseWeapon = "rhs_weap_ak105_desert_folded";
	};

	class rhs_weap_ak105_camo_npz: rhs_weap_ak105_camo
	{
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_npz_ca.paa";
		displayName = "AK-105 (Camo/B-13)";
		model = "\rhsafrf\addons\rhs_weapons\rhs_ak105_npz";
		muzzles[] = {"this","SAFE"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot
			{
			};
			class PointerSlot: rhs_russian_ak_barrel_slot
			{
			};
			class rhs_npz_slot
			{
			};
		};
		rhs_npz = "rhs_weap_ak105";
		weaponInfoType = "rhs_rscOptics_ak105_npz";
		baseWeapon = "rhs_weap_ak105_camo_npz";
		scope = 2;
	};
	class rhs_weap_ak105_desert_npz: rhs_weap_ak105_desert
	{
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_npz_ca.paa";
		displayName = "AK-105 (Desert/B-13)";
		model = "\rhsafrf\addons\rhs_weapons\rhs_ak105_npz";
		muzzles[] = {"this","SAFE"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot
			{
			};
			class PointerSlot: rhs_russian_ak_barrel_slot
			{
			};
			class rhs_npz_slot
			{
			};
		};
		rhs_npz = "rhs_weap_ak105";
		weaponInfoType = "rhs_rscOptics_ak105_npz";
		baseWeapon = "rhs_weap_ak105_desert_npz";
		scope = 2;
	};

	class rhs_weap_ak105_camo_zenitco01: rhs_weap_ak105_camo
	{
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_ca.paa";
		displayName = "AK-105 (Camo/Zenitco)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		weaponInfoType = "rhs_rscOptics_ak105_zenitco01";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 57.2;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: rhs_russian_rifle_scopes_slot_npz
			{
			};
			class GripodSlot: rhs_russian_rifle_gripod_slot
			{
			};
			class PointerSlot: rhs_russian_ris_handguard_slot
			{
			};
		};
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak105_camo_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak105_camo_zenitco01_grip1";
		rhs_grip2_change = "rhs_weap_ak105_camo_zenitco01_afg";
		rhs_grip3_change = "rhs_weap_ak105_camo_zenitco01_grip1";
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_t1 = 1;
		baseWeapon = "rhs_weap_ak105_camo_zenitco01";
		scope = 2;
	};
	
	class rhs_weap_ak105_desert_zenitco01: rhs_weap_ak105_desert
	{
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_ca.paa";
		displayName = "AK-105 (Desert/Zenitco)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		weaponInfoType = "rhs_rscOptics_ak105_zenitco01";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 57.2;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: rhs_russian_rifle_scopes_slot_npz
			{
			};
			class GripodSlot: rhs_russian_rifle_gripod_slot
			{
			};
			class PointerSlot: rhs_russian_ris_handguard_slot
			{
			};
		};
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak105_desert_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak105_desert_zenitco01_grip1";
		rhs_grip2_change = "rhs_weap_ak105_desert_zenitco01_afg";
		rhs_grip3_change = "rhs_weap_ak105_desert_zenitco01_grip1";
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_t1 = 1;
		baseWeapon = "rhs_weap_ak105_desert_zenitco01";
		scope = 2;
	};

	class rhs_weap_ak105_camo_zenitco01_grip1: rhs_weap_ak105_camo_zenitco01 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak105_camo_zenitco01_afg: rhs_weap_ak105_camo_zenitco01 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};
	class rhs_weap_ak105_desert_zenitco01_grip1: rhs_weap_ak105_desert_zenitco01 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak105_desert_zenitco01_afg: rhs_weap_ak105_desert_zenitco01 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak105_camo_zenitco01_npz: rhs_weap_ak105_camo_zenitco01
	{
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_npz_ca.paa";
		displayName = "AK-105 (Camo/Zenitco/B-13)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit_npz";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot
			{
			};
			class PointerSlot: rhs_russian_ris_handguard_slot
			{
			};
			class rhs_npz_slot
			{
			};
		};
		rhs_npz = "rhs_weap_ak105_camo_zenitco01";
		weaponInfoType = "rhs_rscOptics_ak105_zenitco01_npz";
		baseWeapon = "rhs_weap_ak105_camo_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak105_camo_zenitco01_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak105_camo_zenitco01_npz_afg";
		rhs_grip3_change = "rhs_weap_ak105_camo_zenitco01_npz_grip1";
		rhsusf_acc_anpeq15 = 1;
		scopeArsenal = 2;
		scope = 2;
	};
	class rhs_weap_ak105_desert_zenitco01_npz: rhs_weap_ak105_desert_zenitco01
	{
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak105_zenitco01_npz_ca.paa";
		displayName = "AK-105 (Desert/Zenitco/B-13)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit_npz";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot
			{
			};
			class PointerSlot: rhs_russian_ris_handguard_slot
			{
			};
			class rhs_npz_slot
			{
			};
		};
		rhs_npz = "rhs_weap_ak105_desert_zenitco01";
		weaponInfoType = "rhs_rscOptics_ak105_zenitco01_npz";
		baseWeapon = "rhs_weap_ak105_desert_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak105_desert_zenitco01_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak105_desert_zenitco01_npz_afg";
		rhs_grip3_change = "rhs_weap_ak105_desert_zenitco01_npz_grip1";
		rhsusf_acc_anpeq15 = 1;
		scopeArsenal = 2;
		scope = 2;
	};

	class rhs_weap_ak105_camo_zenitco01_npz_grip1: rhs_weap_ak105_camo_zenitco01_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak105_camo_zenitco01_npz_afg: rhs_weap_ak105_camo_zenitco01_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};
	class rhs_weap_ak105_desert_zenitco01_npz_grip1: rhs_weap_ak105_desert_zenitco01_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak105_desert_zenitco01_npz_afg: rhs_weap_ak105_desert_zenitco01_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak74m_camo_zenitco01: rhs_weap_ak74m_zenitco01
	{
		hiddenSelections[] = {"body","newfront","zenit1","zenit2","zenit3"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa","rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_01_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_02_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_b33_co.paa"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK"};
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_camo_ca.paa";
		weaponInfoType = "rhs_rscOptics_ak74m_camo";
		displayName = "AK-74M (Camo/Zenitco)";
		rhs_npz = "rhs_weap_ak74m_camo_zenitco01_npz";
		weaponInfoType = "rhs_rscOptics_ak74m_zenitco01_npz";
		baseWeapon = "rhs_weap_ak74m_camo_zenitco01";
		rhs_grip1_change = "rhs_weap_ak74m_camo_zenitco01_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_camo_zenitco01_afg";
		rhs_grip3_change = "rhs_weap_ak74m_camo_zenitco01_grip1";
		rhsusf_acc_anpeq15 = 1;
		scopeArsenal = 2;
		scope = 2;
	};
	class rhs_weap_ak74m_desert_zenitco01: rhs_weap_ak74m_zenitco01
	{
		hiddenSelections[] = {"body","newfront","zenit1","zenit2","zenit3"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa","rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_01_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_02_co.paa","rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_b33_co.paa"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_camo_AK"};
		author = "Red Hammer Studios";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_desert_ca.paa";
		weaponInfoType = "rhs_rscOptics_ak74m_desert";
		displayName = "AK-74M (Desert/Zenitco)";
		rhs_npz = "rhs_weap_ak74m_desert_zenitco01_npz";
		weaponInfoType = "rhs_rscOptics_ak74m_zenitco01_npz";
		baseWeapon = "rhs_weap_ak74m_desert_zenitco01";
		rhs_grip1_change = "rhs_weap_ak74m_desert_zenitco01_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_desert_zenitco01_afg";
		rhs_grip3_change = "rhs_weap_ak74m_desert_zenitco01_grip1";
		rhsusf_acc_anpeq15 = 1;
		scopeArsenal = 2;
		scope = 2;
	};

	class rhs_weap_ak74m_camo_zenitco01_grip1: rhs_weap_ak74m_camo_zenitco01 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_camo_zenitco01_afg: rhs_weap_ak74m_camo_zenitco01 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_grip1: rhs_weap_ak74m_desert_zenitco01 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_afg: rhs_weap_ak74m_desert_zenitco01 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak74m_camo_zenitco01_npz: rhs_weap_ak74m_camo_zenitco01
	{
		author = "Red Hammer Studios";
		displayName = "AK-74M (Camo/Zenitco/B-13)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit_npz";
		class WeaponSlotsInfo
		{
			mass = 83.3;
			allowedSlots[] = {901};
			class MuzzleSlot: rhs_russian_ak74_muzzle_slot
			{
			};
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long
			{
			};
			class GripodSlot: rhs_russian_rifle_gripod_slot
			{
			};
			class PointerSlot: rhs_russian_ris_handguard_slot
			{
			};
			class AuxPointerSlot: rhs_russian_aux_barrel_slot
			{
			};
		};
		rhs_npz = "rhs_weap_ak74m_camo_zenitco01";
		weaponInfoType = "rhs_rscOptics_ak74m_zenitco01_npz";
		baseWeapon = "rhs_weap_ak74m_camo_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak74m_camo_zenitco01_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_camo_zenitco01_npz_afg";
		rhs_grip3_change = "rhs_weap_ak74m_camo_zenitco01_npz_grip1";
		rhsusf_acc_anpeq15 = 1;
		scopeArsenal = 2;
		scope = 2;
	};
	class rhs_weap_ak74m_desert_zenitco01_npz: rhs_weap_ak74m_desert_zenitco01
	{
		author = "Red Hammer Studios";
		displayName = "AK-74M (Desert/Zenitco/B-13)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit_npz";
		class WeaponSlotsInfo
		{
			mass = 83.3;
			allowedSlots[] = {901};
			class MuzzleSlot: rhs_russian_ak74_muzzle_slot
			{
			};
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long
			{
			};
			class GripodSlot: rhs_russian_rifle_gripod_slot
			{
			};
			class PointerSlot: rhs_russian_ris_handguard_slot
			{
			};
			class AuxPointerSlot: rhs_russian_aux_barrel_slot
			{
			};
		};
		rhs_npz = "rhs_weap_ak74m_desert_zenitco01";
		weaponInfoType = "rhs_rscOptics_ak74m_zenitco01_npz";
		baseWeapon = "rhs_weap_ak74m_desert_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak74m_desert_zenitco01_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_desert_zenitco01_npz_afg";
		rhs_grip3_change = "rhs_weap_ak74m_desert_zenitco01_npz_grip1";
		rhsusf_acc_anpeq15 = 1;
		scopeArsenal = 2;
		scope = 2;
	};

	class rhs_weap_ak74m_camo_zenitco01_npz_grip1: rhs_weap_ak74m_camo_zenitco01_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_camo_zenitco01_npz_afg: rhs_weap_ak74m_camo_zenitco01_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_npz_grip1: rhs_weap_ak74m_desert_zenitco01_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_npz_afg: rhs_weap_ak74m_desert_zenitco01_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak74m_camo_zenitco01_ak100: rhs_weap_ak74m_camo_zenitco01
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "AK-74M (Camo/Zenitco/AK100)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		reloadAction = "RHS_GestureReloadAK762_1hand";
		baseWeapon = "rhs_weap_ak74m_camo_zenitco01_ak100";
		rhs_fold = "rhs_weap_ak74m_camo_zenitco01_ak100_folded";
		rhs_npz = "rhs_weap_ak74m_camo_zenitco01_ak100_npz";
		rhs_grip1_change = "rhs_weap_ak74m_camo_zenitco01_ak100_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_camo_zenitco01_ak100_afg";
		rhs_grip3_change = "rhs_weap_ak74m_camo_zenitco01_ak100_grip1";
	};
	class rhs_weap_ak74m_desert_zenitco01_ak100: rhs_weap_ak74m_desert_zenitco01
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "AK-74M (Desert/Zenitco/AK100)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		reloadAction = "RHS_GestureReloadAK762_1hand";
		baseWeapon = "rhs_weap_ak74m_desert_zenitco01_ak100";
		rhs_fold = "rhs_weap_ak74m_desert_zenitco01_ak100_folded";
		rhs_npz = "rhs_weap_ak74m_desert_zenitco01_ak100_npz";
		rhs_grip1_change = "rhs_weap_ak74m_desert_zenitco01_ak100_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_desert_zenitco01_ak100_afg";
		rhs_grip3_change = "rhs_weap_ak74m_desert_zenitco01_ak100_grip1";
	};

	class rhs_weap_ak74m_camo_zenitco01_ak100_grip1: rhs_weap_ak74m_camo_zenitco01_ak100 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_camo_zenitco01_ak100_afg: rhs_weap_ak74m_camo_zenitco01_ak100 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_ak100_grip1: rhs_weap_ak74m_desert_zenitco01_ak100 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_ak100_afg: rhs_weap_ak74m_desert_zenitco01_ak100 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak74m_camo_zenitco01_ak100_folded: rhs_weap_ak74m_camo_zenitco01_ak100 {
		scopeArsenal = 0;
		displayName = "AK-74M (Camo/Zenitco/AK100/Folded)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_folded_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_folded";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
		recoil = "rhs_recoil_ak74m_folded"; inertia = 0.7;
		baseWeapon = "rhs_weap_ak74m_camo_zenitco01_ak100_folded";
		rhs_fold = "rhs_weap_ak74m_camo_zenitco01_ak100";
		rhs_grip1_change = "rhs_weap_ak74m_camo_zenitco01_ak100_folded_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_camo_zenitco01_ak100_folded_afg";
		rhs_grip3_change = "rhs_weap_ak74m_camo_zenitco01_ak100_folded_grip1";
		rhsusf_acc_anpeq15 = 1; rhsusf_acc_t1 = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo {mass = 55.875; class CowsSlot: rhs_picattinny_russian_handguard_scopes_slot {};};
	};
	class rhs_weap_ak74m_desert_zenitco01_ak100_folded: rhs_weap_ak74m_desert_zenitco01_ak100 {
		scopeArsenal = 0;
		displayName = "AK-74M (Desert/Zenitco/AK100Folded)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_folded_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_folded";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
		recoil = "rhs_recoil_ak74m_folded"; inertia = 0.7;
		baseWeapon = "rhs_weap_ak74m_desert_zenitco01_ak100_folded";
		rhs_fold = "rhs_weap_ak74m_desert_zenitco01_ak100";
		rhs_grip1_change = "rhs_weap_ak74m_desert_zenitco01_ak100_folded_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_desert_zenitco01_ak100_folded_afg";
		rhs_grip3_change = "rhs_weap_ak74m_desert_zenitco01_ak100_folded_grip1";
		rhsusf_acc_anpeq15 = 1; rhsusf_acc_t1 = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo {mass = 55.875; class CowsSlot: rhs_picattinny_russian_handguard_scopes_slot {};};
	};
	class rhs_weap_ak74m_camo_zenitco01_ak100_folded_grip1:  rhs_weap_ak74m_camo_zenitco01_ak100_folded {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"};};
	class rhs_weap_ak74m_camo_zenitco01_ak100_folded_afg:  rhs_weap_ak74m_camo_zenitco01_ak100_folded {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_ak100_folded_grip1:  rhs_weap_ak74m_desert_zenitco01_ak100_folded {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_ak100_folded_grip1:  rhs_weap_ak74m_desert_zenitco01_ak100_folded {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"};};

	class rhs_weap_ak74m_camo_zenitco01_ak100_npz: rhs_weap_ak74m_camo_zenitco01
	{
		displayName = "AK-74M (Camo/Zenitco/AK100/B-13)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_npz";
		class WeaponSlotsInfo
		{
			mass = 78.5;
			allowedSlots[] = {901};
			class MuzzleSlot: rhs_russian_ak74_muzzle_slot
			{
			};
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long
			{
			};
			class GripodSlot: rhs_russian_rifle_gripod_slot
			{
			};
			class PointerSlot: rhs_russian_ris_handguard_slot
			{
			};
			class AuxPointerSlot: rhs_russian_aux_barrel_slot
			{
			};
		};
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		reloadAction = "RHS_GestureReloadAK762_1hand";
		baseWeapon = "rhs_weap_ak74m_camo_zenitco01_ak100_npz";
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak74m_camo_zenitco01_ak100_npz";
		rhs_grip1_change = "rhs_weap_ak74m_camo_zenitco01_ak100_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_camo_zenitco01_ak100_npz_afg";
		rhs_grip3_change = "rhs_weap_ak74m_camo_zenitco01_ak100_npz_grip1";
	};
	class rhs_weap_ak74m_desert_zenitco01_ak100_npz: rhs_weap_ak74m_desert_zenitco01
	{
		displayName = "AK-74M (Desert/Zenitco/AK100/B-13)";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_npz";
		class WeaponSlotsInfo
		{
			mass = 78.5;
			allowedSlots[] = {901};
			class MuzzleSlot: rhs_russian_ak74_muzzle_slot
			{
			};
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long
			{
			};
			class GripodSlot: rhs_russian_rifle_gripod_slot
			{
			};
			class PointerSlot: rhs_russian_ris_handguard_slot
			{
			};
			class AuxPointerSlot: rhs_russian_aux_barrel_slot
			{
			};
		};
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		reloadAction = "RHS_GestureReloadAK762_1hand";
		baseWeapon = "rhs_weap_ak74m_desert_zenitco01_ak100_npz";
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak74m_desert_zenitco01_ak100_npz";
		rhs_grip1_change = "rhs_weap_ak74m_desert_zenitco01_ak100_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_desert_zenitco01_ak100_npz_afg";
		rhs_grip3_change = "rhs_weap_ak74m_desert_zenitco01_ak100_npz_grip1";
	};

	class rhs_weap_ak74m_camo_zenitco01_ak100_npz_grip1: rhs_weap_ak74m_camo_zenitco01_ak100_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_camo_zenitco01_ak100_npz_afg: rhs_weap_ak74m_camo_zenitco01_ak100_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_ak100_npz_grip1: rhs_weap_ak74m_desert_zenitco01_ak100_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_desert_zenitco01_ak100_npz_afg: rhs_weap_ak74m_desert_zenitco01_ak100_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak105_zenitco01;
	class rhs_weap_ak105_zenitco01_npz: rhs_weap_ak105_zenitco01 {scope = 2; scopeArsenal = 2;};
	class rhs_weap_ak103_zenitco01;
	class rhs_weap_ak103_zenitco01_npz: rhs_weap_ak103_zenitco01 {scope = 2; scopeArsenal = 2;};
	
	class rhs_weap_ak104_zenitco01;
	class rhs_weap_ak104_zenitco01_npz: rhs_weap_ak104_zenitco01 {
		scope = 2; scopeArsenal = 2;
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit_npz";
		reloadAction = "RHS_GestureReloadAK_1hand";
	};

	class rhs_weap_ak74m_zenitco01_ak100: rhs_weap_ak74m_zenitco01 {
		scope = 2; scopeArsenal = 2;
		displayName = "AK-74M (Zenitco/AK100)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		reloadAction = "RHS_GestureReloadAK762_1hand";
		baseWeapon = "rhs_weap_ak74m_zenitco01_ak100";
		rhs_fold = "rhs_weap_ak74m_zenitco01_ak100_folded";
		rhs_npz = "rhs_weap_ak74m_zenitco01_ak100_npz";
		rhs_grip1_change = "rhs_weap_ak74m_zenitco01_ak100_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_zenitco01_ak100_afg";
		rhs_grip3_change = "rhs_weap_ak74m_zenitco01_ak100_grip1";
		rhsusf_acc_anpeq15 = 1; rhsusf_acc_t1 = 1;
	};
	class rhs_weap_ak74m_zenitco01_ak100_grip1: rhs_weap_ak74m_zenitco01_ak100 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_zenitco01_ak100_afg: rhs_weap_ak74m_zenitco01_ak100 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak74m_zenitco01_ak100_folded: rhs_weap_ak74m_zenitco01_ak100 {
		scopeArsenal = 0;
		displayName = "AK-74M (Zenitco/AK100/Folded)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_folded_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_folded";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
		recoil = "rhs_recoil_ak74m_folded"; inertia = 0.7;
		baseWeapon = "rhs_weap_ak74m_zenitco01_ak100_folded";
		rhs_fold = "rhs_weap_ak74m_zenitco01_ak100";
		rhs_grip1_change = "rhs_weap_ak74m_zenitco01_ak100_folded_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_zenitco01_ak100_folded_afg";
		rhs_grip3_change = "rhs_weap_ak74m_zenitco01_ak100_folded_grip1";
		rhsusf_acc_anpeq15 = 1; rhsusf_acc_t1 = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo {mass = 55.875; class CowsSlot: rhs_picattinny_russian_handguard_scopes_slot {};};
	};
	class rhs_weap_ak74m_zenitco01_ak100_folded_grip1:  rhs_weap_ak74m_zenitco01_ak100_folded {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"};};
	class rhs_weap_ak74m_zenitco01_ak100_folded_afg:  rhs_weap_ak74m_zenitco01_ak100_folded {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"};};

	class rhs_weap_ak103_zenitco01_pt1: rhs_weap_ak103_zenitco01 {
		scope = 2; scopeArsenal = 2;
		displayName = "AK-103 (Zenitco/PT-1)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		reloadAction = "RHS_GestureReloadAK_1hand";
		baseWeapon = "rhs_weap_ak103_zenitco01_pt1";
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak103_zenitco01_npz";
		rhs_grip1_change = "rhs_weap_ak103_zenitco01_pt1_grip1";
		rhs_grip2_change = "rhs_weap_ak103_zenitco01_pt1_afg";
		rhs_grip3_change = "rhs_weap_ak103_zenitco01_pt1_grip1";
		rhsusf_acc_anpeq15 = 1; rhsusf_acc_t1 = 1;
	};
	class rhs_weap_ak103_zenitco01_pt1_grip1: rhs_weap_ak103_zenitco01_pt1 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak103_zenitco01_pt1_afg: rhs_weap_ak103_zenitco01_pt1 {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak74m_zenitco01_ak100_npz: rhs_weap_ak74m_zenitco01_npz {
		displayName = "AK-74M (Zenitco/AK100/B-13)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak103_zenitco01_npz_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_npz";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};
		reloadAction = "RHS_GestureReloadAK762_1hand";
		baseWeapon = "rhs_weap_ak74m_zenitco01_ak100_npz";
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak74m_zenitco01_ak100_npz";
		rhs_grip1_change = "rhs_weap_ak74m_zenitco01_ak100_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak74m_zenitco01_ak100_npz_afg";
		rhs_grip3_change = "rhs_weap_ak74m_zenitco01_ak100_npz_grip1";
		rhsusf_acc_anpeq15 = 1; rhsusf_acc_t1 = 1;
	};
	class rhs_weap_ak74m_zenitco01_ak100_npz_grip1: rhs_weap_ak74m_zenitco01_ak100_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak74m_zenitco01_ak100_npz_afg: rhs_weap_ak74m_zenitco01_ak100_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};

	class rhs_weap_ak103_zenitco01_pt1_npz: rhs_weap_ak103_zenitco01_npz {
		displayName = "AK-103 (Zenitco/PT-1/B-13)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_zenitco01_npz_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit_npz";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		reloadAction = "RHS_GestureReloadAK_1hand";
		baseWeapon = "rhs_weap_ak103_zenitco01_pt1_npz";
		rhs_fold = "";
		rhs_npz = "rhs_weap_ak103_zenitco01_pt1_npz";
		rhs_grip1_change = "rhs_weap_ak103_zenitco01_pt1_npz_grip1";
		rhs_grip2_change = "rhs_weap_ak103_zenitco01_pt1_npz_afg";
		rhs_grip3_change = "rhs_weap_ak103_zenitco01_pt1_npz_grip1";
		rhsusf_acc_anpeq15 = 1; rhsusf_acc_t1 = 1;
	};
	class rhs_weap_ak103_zenitco01_pt1_npz_grip1: rhs_weap_ak103_zenitco01_pt1_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};};
	class rhs_weap_ak103_zenitco01_pt1_npz_afg: rhs_weap_ak103_zenitco01_pt1_npz {scope = 1; handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};};
};