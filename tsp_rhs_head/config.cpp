class CfgPatches {class tsp_rhs_head {requiredAddons[] = {"rhs_infantry"}; units[] = {}; skipWhenMissingDependencies = 1;};};

class CfgWeapons {
	class rhsusf_ach_helmet_ocp; class rhsusf_ach_helmet_ocp_alt;
	class rhsusf_ach_helmet_ESS_ocp; class rhsusf_ach_helmet_ESS_ocp_alt;
	class rhsusf_ach_helmet_headset_ocp; class rhsusf_ach_helmet_headset_ocp_alt;
	class rhsusf_ach_helmet_headset_ess_ocp; class rhsusf_ach_helmet_headset_ess_ocp_alt;
	class rhsusf_ach_helmet_camo_ocp; class rhsusf_ach_helmet_ocp_norotos;	
	class rhsusf_ach_helmet_marpatd: rhsusf_ach_helmet_ocp {displayName = "ECH MARPAT-D"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_marpatd_alt: rhsusf_ach_helmet_ocp_alt {displayName = "ECH MARPAT-D (Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_ess_marpatd: rhsusf_ach_helmet_ESS_ocp {displayName = "ECH MARPAT-D (ESS)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_ess_marpatd_alt: rhsusf_ach_helmet_ESS_ocp_alt {displayName = "ECH MARPAT-D (ESS/Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_headset_marpatd: rhsusf_ach_helmet_headset_ocp {displayName = "ECH MARPAT-D (Headset)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_headset_marpatd_alt: rhsusf_ach_helmet_headset_ocp_alt {displayName = "ECH MARPAT-D (Headset/Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_headset_ess_marpatd: rhsusf_ach_helmet_headset_ess_ocp {displayName = "ECH MARPAT-D (Headset/ESS)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_headset_ess_marpatd_alt: rhsusf_ach_helmet_headset_ess_ocp_alt {displayName = "ECH MARPAT-D (Headset/ESS/Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_camo_marpatd: rhsusf_ach_helmet_camo_ocp {displayName = "ECH MARPAT-D (Netting)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\camo_net_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_marpatd_norotos: rhsusf_ach_helmet_ocp_norotos {displayName = "ECH MARPAT-D (Norotos)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatd_ca.paa";};
	class rhsusf_ach_helmet_marpatwd: rhsusf_ach_helmet_ocp {displayName = "ECH MARPAT-WD"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_marpatwd_alt: rhsusf_ach_helmet_ocp_alt {displayName = "ECH MARPAT-WD (Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_ess_marpatwd: rhsusf_ach_helmet_ESS_ocp {displayName = "ECH MARPAT-WD (ESS)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_ess_marpatwd_alt: rhsusf_ach_helmet_ESS_ocp_alt {displayName = "ECH MARPAT-WD (ESS/Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_headset_marpatwd: rhsusf_ach_helmet_headset_ocp {displayName = "ECH MARPAT-WD (Headset)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_headset_marpatwd_alt: rhsusf_ach_helmet_headset_ocp_alt {displayName = "ECH MARPAT-WD (Headset/Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_headset_ess_marpatwd: rhsusf_ach_helmet_headset_ess_ocp {displayName = "ECH MARPAT-WD (Headset/ESS)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_headset_ess_marpatwd_alt: rhsusf_ach_helmet_headset_ess_ocp_alt {displayName = "ECH MARPAT-WD (Headset/ESS/Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_camo_marpatwd: rhsusf_ach_helmet_camo_ocp {displayName = "ECH MARPAT-WD (Netting)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa", "\tsp_rhs_head\tex\camo_net_wd_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};
	class rhsusf_ach_helmet_marpatwd_norotos: rhsusf_ach_helmet_ocp_norotos {displayName = "ECH MARPAT-WD (Norotos)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"}; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_helmet_marpatwd_ca.paa";};

	class rhsusf_mich_bare_norotos;
	class rhsusf_mich_bare_norotos_headset;
	class rhsusf_mich_bare_norotos_alt;
	class rhsusf_mich_bare_norotos_alt_headset;
	class rhsusf_mich_bare_norotos_arc;
	class rhsusf_mich_bare_norotos_arc_headset;
	class rhsusf_mich_bare_norotos_arc_alt;
	class rhsusf_mich_bare_norotos_arc_alt_headset;
	class rhsusf_mich_bare_norotos_arc_light: rhsusf_mich_bare_norotos_arc {displayName = "MICH 2000 (Light/Norotos/ARC)"; picture = "\tsp_rhs_head\gui\mich_light.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_light.paa","\tsp_rhs_head\tex\rail_light_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_alt_light: rhsusf_mich_bare_norotos_arc_alt {displayName = "MICH 2000 (Light/Norotos/ARC/Alt)"; picture = "\tsp_rhs_head\gui\mich_light_alt.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_light.paa","\tsp_rhs_head\tex\rail_light_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_coyote: rhsusf_mich_bare_norotos_arc {displayName = "MICH 2000 (Coyote/Norotos/ARC)"; picture = "\tsp_rhs_head\gui\mich_coyote.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_coyote.paa","\tsp_rhs_head\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_alt_coyote: rhsusf_mich_bare_norotos_arc_alt {displayName = "MICH 2000 (Coyote/Norotos/ARC/Alt)"; picture = "\tsp_rhs_head\gui\mich_coyote_alt.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_coyote.paa","\tsp_rhs_head\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_coyote: rhsusf_mich_bare_norotos {displayName = "MICH 2000 (Coyote/Norotos)"; picture = "\tsp_rhs_head\gui\mich_coyote.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_bare.paa","\tsp_rhs_head\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_alt_coyote: rhsusf_mich_bare_norotos_alt {displayName = "MICH 2000 (Coyote/Norotos/Alt)"; picture = "\tsp_rhs_head\gui\mich_coyote_alt.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_bare.paa","\tsp_rhs_head\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_coyote_headset: rhsusf_mich_bare_norotos_headset {displayName = "MICH 2000 (Coyote/Norotos/Headset)"; picture = "\tsp_rhs_head\gui\mich_coyote_alt.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_bare.paa","\tsp_rhs_head\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};};
	class rhsusf_mich_bare_norotos_green: rhsusf_mich_bare_norotos {displayName = "MICH 2000 (Green/Norotos)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_od_co.paa","\tsp_rhs_head\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_alt_green: rhsusf_mich_bare_norotos_alt {displayName = "MICH 2000 (Green/Norotos/Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_od_co.paa","\tsp_rhs_head\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_green_headset: rhsusf_mich_bare_norotos_headset {displayName = "MICH 2000 (Green/Norotos/Headset)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_od_co.paa","\tsp_rhs_head\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_green: rhsusf_mich_bare_norotos_arc {displayName = "MICH 2000 (Green/Norotos/ARC)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa","\tsp_rhs_head\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_alt_green: rhsusf_mich_bare_norotos_arc_alt {displayName = "MICH 2000 (Green/Norotos/ARC/Alt)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa","\tsp_rhs_head\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_green_headset: rhsusf_mich_bare_norotos_arc_headset {displayName = "MICH 2000 (Green/Norotos/ARC/Headset)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa","\tsp_rhs_head\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};};
	class rhsusf_mich_bare_norotos_black: rhsusf_mich_bare_norotos {displayName = "MICH 2000 (Black/Norotos)"; picture = "\tsp_rhs_head\gui\mich_black.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_black.paa","\tsp_rhs_head\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_alt_black: rhsusf_mich_bare_norotos_alt {displayName = "MICH 2000 (Black/Norotos/Alt)"; picture = "\tsp_rhs_head\gui\mich_black_alt.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_black.paa","\tsp_rhs_head\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_black_headset: rhsusf_mich_bare_norotos_headset {displayName = "MICH 2000 (Black/Norotos/Headset)"; picture = "\tsp_rhs_head\gui\mich_black_alt.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_black.paa","\tsp_rhs_head\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_black: rhsusf_mich_bare_norotos_arc {displayName = "MICH 2000 (Black/Norotos/ARC)"; picture = "\tsp_rhs_head\gui\mich_black.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_black_arc.paa","\tsp_rhs_head\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_alt_black: rhsusf_mich_bare_norotos_arc_alt {displayName = "MICH 2000 (Black/Norotos/ARC/Alt)"; picture = "\tsp_rhs_head\gui\mich_black_alt.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_black_arc.paa","\tsp_rhs_head\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};};
	class rhsusf_mich_bare_norotos_arc_black_headset: rhsusf_mich_bare_norotos_arc_headset {displayName = "MICH 2000 (Black/Norotos/ARC/Headset)"; picture = "\tsp_rhs_head\gui\mich_black_alt.paa"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\mich_black_arc.paa","\tsp_rhs_head\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};};

	class rhsusf_opscore_mar_fg;
	class rhs_lshz: rhsusf_opscore_mar_fg {scope = 2; displayName = "LShZ"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\lshz.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa",""};};
	class rhs_lshz_camo: rhs_lshz {displayName = "LShZ (Painted)"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\lshz_camo.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa",""};};
	
	class rhsusf_opscore_mar_fg_pelt;
	class rhs_lshz_pelt: rhsusf_opscore_mar_fg_pelt {scope = 2; displayName = "LShZ (Headset)"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\lshz.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa","\tsp_rhs_head\tex\comtac_od_co.paa"};};
	class rhs_lshz_camo_pelt: rhs_lshz_pelt {displayName = "LShZ (Painted/Headset)"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\lshz_camo.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa","\tsp_rhs_head\tex\comtac_od_co.paa"};};
	
	class rhsusf_opscore_mc_cover;
	class rhs_lshz_mc_cover: rhsusf_opscore_mc_cover {scope = 2; displayName = "LShZ (Multicam Cover)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","","","","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",""};};
	class rhs_lshz_mc_cover_pelt: rhs_lshz_mc_cover {displayName = "LShZ (Multicam Cover/Headset)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\tsp_rhs_head\tex\comtac_od_co.paa","","","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",""};};
	class rhs_lshz_mc_cover_cam: rhs_lshz_mc_cover {displayName = "LShZ (Multicam Cover/Camera)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","","","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",""};};
	class rhs_lshz_mc_cover_pelt_cam: rhs_lshz_mc_cover {displayName = "LShZ (Multicam Cover/Headset/Camera)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\tsp_rhs_head\tex\comtac_od_co.paa","","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",""};};
	class rhs_lshz_bk_cover: rhs_lshz_mc_cover {displayName = "LShZ (Black Cover)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","","","","\tsp_rhs_head\tex\fs_cover_bk_co.paa",""};};
	class rhs_lshz_bk_cover_pelt: rhs_lshz_mc_cover {displayName = "LShZ (Black Cover/Headset)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\tsp_rhs_head\tex\comtac_od_co.paa","","","\tsp_rhs_head\tex\fs_cover_bk_co.paa",""};};
	class rhs_lshz_bk_cover_cam: rhs_lshz_mc_cover {displayName = "LShZ (Black Cover/Camera)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","","","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\tsp_rhs_head\tex\fs_cover_bk_co.paa",""};};
	class rhs_lshz_bk_cover_pelt_cam: rhs_lshz_mc_cover {displayName = "LShZ (Black Cover/Headset/Camera)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\tsp_rhs_head\tex\comtac_od_co.paa","","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\tsp_rhs_head\tex\fs_cover_bk_co.paa",""};};
	class rhs_lshz_bk_mc_cover: rhs_lshz_mc_cover {displayName = "LShZ (Black/Multicam Cover)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_blk_co.paa","","","","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",""};};
	class rhs_lshz_bk_mc_cover_pelt: rhs_lshz_mc_cover {displayName = "LShZ (Black/Multicam Cover/Headset)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_blk_co.paa","\tsp_rhs_head\tex\comtac_od_co.paa","","","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",""};};
	class rhs_lshz_bk_mc_cover_cam: rhs_lshz_mc_cover {displayName = "LShZ (Black/Multicam Cover/Camera)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_blk_co.paa","","","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",""};};
	class rhs_lshz_bk_mc_cover_pelt_cam: rhs_lshz_mc_cover {displayName = "LShZ (Black/Multicam Cover/Headset/Camera)"; hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_blk_co.paa","\tsp_rhs_head\tex\comtac_od_co.paa","","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",""};};
		
	class rhs_altyn; 
	class rhs_altyn_novisor: rhs_altyn {class itemInfo;};
	class rhs_zsh: rhs_altyn_novisor {
		displayName = "ZSh-12"; model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_zsh12.p3d"; 
		hiddenSelections[] = {"camo1"}; hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_zsh12_co.paa";};
		class itemInfo: itemInfo {uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_zsh12.p3d";};
	};
	class rhs_zsh_bala: rhs_zsh {displayName = "ZSh-12 (Balaclava)"; class itemInfo: itemInfo {uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_zsh12_bala.p3d";};};
	class rhs_zsh_blk: rhs_zsh {displayName = "ZSh-12 (Black)"; hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_zsh12_b_co.paa"};};
	class rhs_zsh_blk_bala: rhs_zsh_bala {displayName = "ZSh-12 (Black, Balaclava)"; hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_zsh12_b_co.paa"};};
	
	class rhs_stsh81;
	class rhs_stsh81_black: rhs_stsh81 {picture = "\tsp_rhs_head\gui\stsh81_black.paa"; displayName = "STSh-81 (Black)"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\stsh81_black.paa"};};

	class rhsgref_ssh68;
	class rhsgref_ssh68_lizzard: rhsgref_ssh68 {scope = 2; displayName = "SSh-68 Lizzard"; hiddenSelections[] = {"Camo2"}; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\ssh68_lizard.paa"};};

	class rhs_ssh60;
	class rhs_ssh60_sla: rhs_ssh60 {displayName = "SSh-68 SLA"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\ssh60_sla.paa"};};
	class rhs_ssh60_slan: rhs_ssh60 {displayName = "SSh-68 SLAN";  hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\ssh60_slan.paa"};};
	
	class rhs_beanie;
	class rhs_beanie_coyote: rhs_beanie	{displayName = "Beanie (Coyote)"; picture = "\tsp_rhs_head\gui\beanie_coyote.paa"; hiddenSelectionsTextures[] = {"tsp_rhs_head\tex\beanie_coyote_co.paa"};};
	class rhs_beanie_black: rhs_beanie {displayName = "Beanie (Black)";	picture = "\tsp_rhs_head\gui\beanie_black.paa"; hiddenSelectionsTextures[] = {"tsp_rhs_head\tex\beanie_black_co.paa"};};
	
	class HeadgearItem; 
	class rhs_fieldcap_m88: rhs_beanie {class itemInfo: HeadgearItem {allowedSlots[] = {801,901,701,605};};};
	
	class rhsgref_hat_M1951; 
	class rhsgref_hat_M1951_slan: rhsgref_hat_M1951 {displayName = "Patrol Cap (SLAN)"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\m1951fieldcap_slan.paa";};};

	class NVGoggles;
	class rhsusf_ANPVS_14: NVGoggles {class ItemInfo;};
    class rhsusf_ANPVS_14_hide: rhsusf_ANPVS_14 {displayName = "AN/PVS-14 (Hidden)"; class ItemInfo: ItemInfo {modelOff = "";};};
    class rhsusf_ANPVS_14_stow: rhsusf_ANPVS_14 {displayName = "AN/PVS-14 (Stowed)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_UP";};};
    //class rhsusf_ANPVS_14_stow2: rhsusf_ANPVS_14 {displayName = "AN/PVS-14 (Stowed, Down)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";};};

	class rhsusf_ANPVS_15: NVGoggles {class ItemInfo;};	
    class rhsusf_ANPVS_15_hide: rhsusf_ANPVS_15 {displayName = "AN/PVS-15 (Hidden)"; class ItemInfo: ItemInfo {modelOff = "";};};
    class rhsusf_ANPVS_15_stow: rhsusf_ANPVS_15 {displayName = "AN/PVS-15 (Stowed)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_UP";};};
    //class rhsusf_ANPVS_15_stow2: rhsusf_ANPVS_15 {displayName = "AN/PVS-15 (Alt 2)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";};};

	class rhsusf_ANVIS: NVGoggles {scope = 2;};
	class rhsusf_anvis_nvg_bc_caps: NVGoggles {scope = 2; class itemInfo;};
	class rhsusf_anvis_nvg_bc_caps_hide: rhsusf_anvis_nvg_bc_caps {displayName = "ANVIS 9 (Hidden)"; class ItemInfo: ItemInfo {modelOff = "";};};
	class rhsusf_anvis_nvg_bc_caps_stow: rhsusf_anvis_nvg_bc_caps {displayName = "ANVIS 9 (Stowed)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_UP";};};
    //class rhsusf_anvis_nvg_bc_caps_stow2: rhsusf_anvis_nvg_bc_caps {displayName = "ANVIS 9 (Alt 2)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";};};

	class rhs_1PN138: NVGoggles {class ItemInfo;};	
	class rhs_1PN138_hide: rhs_1PN138 {displayname = "1PN138 (Hidden)"; class ItemInfo: ItemInfo {modelOff = "";};};

	class rhsusf_Rhino: rhsusf_ANPVS_14 {class ItemInfo;};
    class rhsusf_Rhino_down: rhsusf_Rhino {displayName = "Rhino mount (Down)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";};};
};

class CfgGlasses {
	class rhs_balaclava;
	class rhs_balaclava_black: rhs_balaclava {
		displayname = "Balaclava (Black)";
		picture = "\tsp_rhs_head\gui\balaclava_black.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\balaclava_black_co.paa"};
		hiddenSelectionsMaterials[] = {"\tsp_rhs_head\tex\rhs_bala2_black.rvmat"};
	};
};