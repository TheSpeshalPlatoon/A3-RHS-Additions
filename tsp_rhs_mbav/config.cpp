class CfgPatches
{
	class tsp_rhs_mbav
	{
		requiredAddons[] = {"rhs_infantry"};
		units[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class CfgWeapons
{
	class rhsusf_mbav;
	class rhsusf_mbav_light;
	class rhsusf_mbav_rifleman;
	class rhsusf_mbav_mg;
	class rhsusf_mbav_grenadier;
	class rhsusf_mbav_medic;
	class mbavr: rhsusf_mbav
	{
		picture = "\tsp_rhs_mbav\ui\mbav_rgr.paa";
		displayName = "MBAV Ranger";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_rgr_co.paa","tsp_rhs_mbav\tex\gear_rgr_co.paa"};
	};
	class mbavr_l: rhsusf_mbav_light
	{
		picture = "\tsp_rhs_mbav\ui\mbav_rgr.paa";
		displayName = "MBAV Ranger (Light)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_rgr_co.paa","tsp_rhs_mbav\tex\gear_rgr_co.paa"};
	};
	class mbavr_r: rhsusf_mbav_rifleman
	{
		picture = "\tsp_rhs_mbav\ui\mbav_rgr.paa";
		displayName = "MBAV Ranger (Rifleman)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_rgr_co.paa","tsp_rhs_mbav\tex\gear_rgr_co.paa"};
	};
	class mbavr_mg: rhsusf_mbav_mg
	{
		picture = "\tsp_rhs_mbav\ui\mbav_rgr.paa";
		displayName = "MBAV Ranger (Machinegunner)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_rgr_co.paa","tsp_rhs_mbav\tex\gear_rgr_co.paa"};
	};
	class mbavr_gl: rhsusf_mbav_grenadier
	{
		picture = "\tsp_rhs_mbav\ui\mbav_rgr.paa";
		displayName = "MBAV Ranger (Grenadier)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_rgr_co.paa","tsp_rhs_mbav\tex\gear_rgr_co.paa"};
	};
	class mbavr_m: rhsusf_mbav_medic
	{
		picture = "\tsp_rhs_mbav\ui\mbav_rgr.paa";
		displayName = "MBAV Ranger (Medic)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_rgr_co.paa","tsp_rhs_mbav\tex\gear_rgr_co.paa"};
	};
	class mbavmc_l: rhsusf_mbav_light
	{
		picture = "\tsp_rhs_mbav\ui\mbav_mc.paa";
		displayName = "MBAV Multicam (Light)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_mc_co.paa","tsp_rhs_mbav\tex\gear_mc_co.paa"};
	};
	class mbavmc_r: rhsusf_mbav_rifleman
	{
		picture = "\tsp_rhs_mbav\ui\mbav_mc.paa";
		displayName = "MBAV Multicam (Rifleman)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_mc_co.paa","tsp_rhs_mbav\tex\gear_mc_co.paa"};
	};
	class mbavmc_mg: rhsusf_mbav_mg
	{
		picture = "\tsp_rhs_mbav\ui\mbav_mc.paa";
		displayName = "MBAV Multicam (Machinegunner)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_mc_co.paa","tsp_rhs_mbav\tex\gear_mc_co.paa"};
	};
	class mbavmc_gl: rhsusf_mbav_grenadier
	{
		picture = "\tsp_rhs_mbav\ui\mbav_mc.paa";
		displayName = "MBAV Multicam (Grenadier)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_mc_co.paa","tsp_rhs_mbav\tex\gear_mc_co.paa"};
	};
	class mbavmc_m: rhsusf_mbav_medic
	{
		picture = "\tsp_rhs_mbav\ui\mbav_mc.paa";
		displayName = "MBAV Multicam (Medic)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_mc_co.paa","tsp_rhs_mbav\tex\gear_mc_co.paa"};
	};
	class mbavb: rhsusf_mbav
	{
		picture = "\tsp_rhs_mbav\ui\mbav_blk.paa";
		displayName = "MBAV Black";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_blk_co.paa","tsp_rhs_mbav\tex\gear_blk_co.paa"};
	};
	class mbavb_l: rhsusf_mbav_light
	{
		picture = "\tsp_rhs_mbav\ui\mbav_blk.paa";
		displayName = "MBAV Black (Light)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_blk_co.paa","tsp_rhs_mbav\tex\gear_blk_co.paa"};
	};
	class mbavb_r: rhsusf_mbav_rifleman
	{
		picture = "\tsp_rhs_mbav\ui\mbav_blk.paa";
		displayName = "MBAV Black (Rifleman)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_blk_co.paa","tsp_rhs_mbav\tex\gear_blk_co.paa"};
	};
	class mbavb_mg: rhsusf_mbav_mg
	{
		picture = "\tsp_rhs_mbav\ui\mbav_blk.paa";
		displayName = "MBAV Black (Machinegunner)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_blk_co.paa","tsp_rhs_mbav\tex\gear_blk_co.paa"};
	};
	class mbavb_gl: rhsusf_mbav_grenadier
	{
		picture = "\tsp_rhs_mbav\ui\mbav_blk.paa";
		displayName = "MBAV Black (Grenadier)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_blk_co.paa","tsp_rhs_mbav\tex\gear_blk_co.paa"};
	};
	class mbavb_m: rhsusf_mbav_medic
	{
		picture = "\tsp_rhs_mbav\ui\mbav_blk.paa";
		displayName = "MBAV Black (Medic)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_blk_co.paa","tsp_rhs_mbav\tex\gear_blk_co.paa"};
	};
};
class cfgMods
{
	author = "AHHHHHHHHHHHHHHH";
	timepacked = "1756235702";
};
