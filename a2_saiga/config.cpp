class CfgPatches {class a2_saiga {requiredAddons[] = {"A3_Weapons_F", "rhs_weapons", "rhs_weapons2", "rhs_weapons3", "rhs_c_weapons"}; units[] = {};};};

class rhs_russian_rifle_scopes_slot;
class CfgWeapons {
	class RHS_SAFE_BASE; 
	class rhs_weap_M590_5RD;
	class rhs_weap_M590_8RD: rhs_weap_M590_5RD {class Eventhandlers; class Single; class WeaponSlotsInfo;};
	class a2_saiga: rhs_weap_M590_8RD {
		scope = 2; displayName = "Saiga 12K"; picture = "\a2_saiga\saiga.paa";
		descriptionShort = "The Saiga-12K is a Russian semi-automatic combat shotgun with a folding stock and a shortened barrel, built on the reliable AK rifle design.";
		model = "\a2_saiga\saiga.p3d"; handAnim[] = {"OFP2_ManSkeleton","\a2_saiga\anim\hand.rtm"}; cursor = "sgun"; recoil = "recoil_huntershotgun_01";
		reloadAction = "rhs_gesturereloadak762_1hand"; reloadSound[] = {"",1,1}; reloadTime = 0.1; reloadMagazineSound[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Reload_01",1.7,1,10};
		magazines[] = {"a2_saiga_mag_00buck", "a2_saiga_mag_slug", "a2_saiga_mag_frag", "a2_saiga_mag_he"}; magazineWell[] = {};
		muzzles[] = {"this", "SAFE"}; weaponInfoType = "rhs_rscOptics_m4";
		class SAFE: RHS_SAFE_BASE {};
		class Single: Single {reloadTime = 0.1;};
		class Eventhandlers {class RHS_BoltAction {fired = "[_this#0, _this#1, _this#4] spawn tsp_fnc_case";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {class CowsSlot: rhs_russian_rifle_scopes_slot {};};
	};
};
class CfgMagazines {
	class 30Rnd_556x45_Stanag;
	class a2_saiga_mag_00buck: 30Rnd_556x45_Stanag {
		displayName = "8rnd Saiga 12 Magazine .00 Buckshot"; displayNameShort = "Saiga 12 Magazine"; descriptionShort = "Ammunition for Saiga 12K shotgun."; picture = "\a2_saiga\saiga_mag.paa"; 
		model = "\a2_saiga\saiga_mag.p3d"; modelSpecial = "\a2_saiga\saiga_mag.p3d"; modelSpecialIsProxy = 1; ammo = "rhs_ammo_12g_00buckshot"; count = 8;
	};
	class a2_saiga_mag_slug: a2_saiga_mag_00buck {displayName = "8rnd Saiga 12 Magazine .00 Slug"; ammo = "rhs_ammo_12g_slug";};
	class a2_saiga_mag_frag: a2_saiga_mag_00buck {displayName = "8rnd Saiga 12 Magazine .00 FRAG"; ammo = "rhs_ammo_12g_FRAG";};
	class a2_saiga_mag_he: a2_saiga_mag_00buck {displayName = "8rnd Saiga 12 Magazine .00 HE"; ammo = "rhs_ammo_12g_HE";};
};