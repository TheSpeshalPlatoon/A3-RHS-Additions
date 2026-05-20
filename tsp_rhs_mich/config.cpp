class CfgPatches
{
	class tsp_rhs_mich
	{
		requiredAddons[] = {"rhs_infantry"};
		units[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class CfgWeapons
{
	class rhsusf_mich_bare_norotos;
	class rhsusf_mich_bare_norotos_headset;
	class rhsusf_mich_bare_norotos_alt;
	class rhsusf_mich_bare_norotos_alt_headset;
	class rhsusf_mich_bare_norotos_arc;
	class rhsusf_mich_bare_norotos_arc_headset;
	class rhsusf_mich_bare_norotos_arc_alt;
	class rhsusf_mich_bare_norotos_arc_alt_headset;
	class rhsusf_mich_bare_norotos_arc_light: rhsusf_mich_bare_norotos_arc
	{
		displayName = "MICH 2000 (Light/Norotos/ARC)";
		picture = "\tsp_rhs_mich\ui\mich_light.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_light.paa","\tsp_rhs_mich\tex\rail_light_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_alt_light: rhsusf_mich_bare_norotos_arc_alt
	{
		displayName = "MICH 2000 (Light/Norotos/ARC/Alt)";
		picture = "\tsp_rhs_mich\ui\mich_light_alt.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_light.paa","\tsp_rhs_mich\tex\rail_light_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_coyote: rhsusf_mich_bare_norotos_arc
	{
		displayName = "MICH 2000 (Coyote/Norotos/ARC)";
		picture = "\tsp_rhs_mich\ui\mich_coyote.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_coyote.paa","\tsp_rhs_mich\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_alt_coyote: rhsusf_mich_bare_norotos_arc_alt
	{
		displayName = "MICH 2000 (Coyote/Norotos/ARC/Alt)";
		picture = "\tsp_rhs_mich\ui\mich_coyote_alt.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_coyote.paa","\tsp_rhs_mich\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_coyote: rhsusf_mich_bare_norotos
	{
		displayName = "MICH 2000 (Coyote/Norotos)";
		picture = "\tsp_rhs_mich\ui\mich_coyote.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_bare.paa","\tsp_rhs_mich\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_alt_coyote: rhsusf_mich_bare_norotos_alt
	{
		displayName = "MICH 2000 (Coyote/Norotos/Alt)";
		picture = "\tsp_rhs_mich\ui\mich_coyote_alt.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_bare.paa","\tsp_rhs_mich\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_coyote_headset: rhsusf_mich_bare_norotos_headset
	{
		displayName = "MICH 2000 (Coyote/Norotos/Headset)";
		picture = "\tsp_rhs_mich\ui\mich_coyote_alt.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_bare.paa","\tsp_rhs_mich\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class rhsusf_mich_bare_norotos_green: rhsusf_mich_bare_norotos
	{
		displayName = "MICH 2000 (Green/Norotos)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_od_co.paa","\tsp_rhs_mich\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_alt_green: rhsusf_mich_bare_norotos_alt
	{
		displayName = "MICH 2000 (Green/Norotos/Alt)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_od_co.paa","\tsp_rhs_mich\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_green_headset: rhsusf_mich_bare_norotos_headset
	{
		displayName = "MICH 2000 (Green/Norotos/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_od_co.paa","\tsp_rhs_mich\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_green: rhsusf_mich_bare_norotos_arc
	{
		displayName = "MICH 2000 (Green/Norotos/ARC)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa","\tsp_rhs_mich\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_alt_green: rhsusf_mich_bare_norotos_arc_alt
	{
		displayName = "MICH 2000 (Green/Norotos/ARC/Alt)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa","\tsp_rhs_mich\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_green_headset: rhsusf_mich_bare_norotos_arc_headset
	{
		displayName = "MICH 2000 (Green/Norotos/ARC/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa","\tsp_rhs_mich\tex\rail_green_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class rhsusf_mich_bare_norotos_black: rhsusf_mich_bare_norotos
	{
		displayName = "MICH 2000 (Black/Norotos)";
		picture = "\tsp_rhs_mich\ui\mich_black.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_black.paa","\tsp_rhs_mich\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_alt_black: rhsusf_mich_bare_norotos_alt
	{
		displayName = "MICH 2000 (Black/Norotos/Alt)";
		picture = "\tsp_rhs_mich\ui\mich_black_alt.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_black.paa","\tsp_rhs_mich\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_black_headset: rhsusf_mich_bare_norotos_headset
	{
		displayName = "MICH 2000 (Black/Norotos/Headset)";
		picture = "\tsp_rhs_mich\ui\mich_black_alt.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_black.paa","\tsp_rhs_mich\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_black: rhsusf_mich_bare_norotos_arc
	{
		displayName = "MICH 2000 (Black/Norotos/ARC)";
		picture = "\tsp_rhs_mich\ui\mich_black.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_black_arc.paa","\tsp_rhs_mich\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_alt_black: rhsusf_mich_bare_norotos_arc_alt
	{
		displayName = "MICH 2000 (Black/Norotos/ARC/Alt)";
		picture = "\tsp_rhs_mich\ui\mich_black_alt.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_black_arc.paa","\tsp_rhs_mich\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_arc_black_headset: rhsusf_mich_bare_norotos_arc_headset
	{
		displayName = "MICH 2000 (Black/Norotos/ARC/Headset)";
		picture = "\tsp_rhs_mich\ui\mich_black_alt.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_mich\tex\mich_black_arc.paa","\tsp_rhs_mich\tex\rail_black_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
};
class cfgMods
{
	author = "AHHHHHHHHHHHHHHH";
	timepacked = "1755462899";
};
