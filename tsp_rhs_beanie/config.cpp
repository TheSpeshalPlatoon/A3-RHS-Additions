class CfgPatches {class tsp_rhs_beanie {units[] = {}; weapons[] = {"rhs_beanie_coyote","rhs_beanie_black"}; requiredAddons[] = {"rhs_c_troops"}; skipWhenMissingDependencies = 1;};};

class CfgWeapons {
	class rhs_beanie;
	class rhs_beanie_coyote: rhs_beanie	{
		picture = "\tsp_rhs_beanie\rhs_beanie_coyote_ca.paa";
		displayName = "Fleece Watch Cap (Coyote)";
		hiddenSelectionsTextures[] = {"tsp_rhs_beanie\beanie_coyote_co.paa"};
	};
	class rhs_beanie_black: rhs_beanie	{
		picture = "\tsp_rhs_beanie\rhs_beanie_black_ca.paa";
		displayName = "Fleece Watch Cap (Black)";
		hiddenSelectionsTextures[] = {"tsp_rhs_beanie\beanie_black_co.paa"};
	};
};
class CfgGlasses
{
	class G_Balaclava_blk;
	class rhs_balaclava_black: G_Balaclava_blk
	{
		dlc = "RHS_AFRF";
		author = "$STR_RHS_AUTHOR_FULL";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala2";
		displayname = "Balaclava (Black)";
		picture = "\tsp_rhs_beanie\gear_icon_balaclava_black_ca.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\tsp_rhs_beanie\rhs_bala2_black_co.paa"};
		hiddenSelectionsMaterials[] = {"\tsp_rhs_beanie\rhs_bala2_black.rvmat"};
	};
};
