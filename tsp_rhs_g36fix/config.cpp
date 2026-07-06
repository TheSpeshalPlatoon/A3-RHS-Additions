class CfgPatches {class tsp_rhs_g36kvfix {requiredAddons[] = {"rhssaf_c_weapons"}; units[] = {}; skipWhenMissingDependencies = 1;};};

class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_weap_g36_base;
	class rhs_weap_g36kv: rhs_weap_g36_base
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36.rtm"};
	};
	class rhs_weap_g36kv_grip2: rhs_weap_g36kv
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36kv_afg.rtm"};
	};
	class rhs_weap_g36kv_Folded: rhs_weap_g36kv
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36.rtm"};
	};
	class rhs_weap_g36kv_Folded_grip2: rhs_weap_g36kv_Folded
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36kv_afg.rtm"};
	};
	class rhs_weap_g36c: rhs_weap_g36_base
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36.rtm"};
	};
	class rhs_weap_g36c_grip1: rhs_weap_g36c
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36c_vfg.rtm"};
	};
	class rhs_weap_g36c_grip2: rhs_weap_g36c
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36c_afg.rtm"};
	};
	class rhs_weap_g36c_grip3: rhs_weap_g36c
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36c_vfg.rtm"};
	};
	class rhs_weap_g36c_Folded: rhs_weap_g36c
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36.rtm"};
	};
	class rhs_weap_g36c_Folded_grip1: rhs_weap_g36c_Folded
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36c_vfg.rtm"};
	};
	class rhs_weap_g36c_Folded_grip2: rhs_weap_g36c_Folded
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36c_afg.rtm"};
	};
	class rhs_weap_g36c_Folded_grip3: rhs_weap_g36c_Folded
	{
		handAnim[] = {"OFP2_ManSkeleton","tsp_rhs_g36fix\anims\hand_g36c_vfg.rtm"};
	};
};