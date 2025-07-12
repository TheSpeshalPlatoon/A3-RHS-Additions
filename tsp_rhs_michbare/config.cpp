class CfgPatches
{
	class tsp_rhs_michbare
	{
		requiredAddons[] = {"rhs_infantry"};
		units[] = {};
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
	class rhsusf_mich_bare_norotos_coyote: rhsusf_mich_bare_norotos
	{
		displayName = "MICH 2000 (Coyote, Norotos)";
		hiddenSelectionsTextures[] = {"\tsp_rhs_michbare\mich.paa","\tsp_rhs_mich\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_mich_bare_norotos_alt_coyote: rhsusf_mich_bare_norotos_alt
	{
		displayName = "MICH 2000 (Coyote, Norotos/Alt)";
		hiddenSelectionsTextures[] = {"\tsp_rhs_michbare\mich.paa","\tsp_rhs_mich\tex\rail_coyote_ca.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
};
