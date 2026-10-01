class CfgPatches {class a2_aa12 {requiredAddons[] = {"A3_Weapons_F", "rhsusf_weapons", "rhsusf_weapons2", "rhsusf_weapons3", "rhsusf_c_weapons"}; units[] = {};};};

class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons {
	class RHS_SAFE_BASE; 
	class mk20_base_F;
	class a2_aa12: mk20_base_F {
		scope = 2; displayName = "AA-12"; picture = "\a2_aa12\aa12.paa";
		descriptionShort = "The AA-12 (Auto Assault-12), is an American 12-gauge automatic combat shotgun that can fire full-auto at 300 rounds per minute.";
		model = "\a2_aa12\aa12.p3d"; handAnim[] = {"OFP2_ManSkeleton","\a2_aa12\anim\hand.rtm"}; cursor = "sgun"; recoil = "recoil_huntershotgun_01";
		reloadAction = "GestureReloadAA12"; reloadSound[] = {"",1,1}; reloadTime = 0.2; reloadMagazineSound[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Reload_01",1.7,1,10}; 
		magazines[] = {"a2_aa12_mag_00buck", "a2_aa12_mag_slug", "a2_aa12_mag_frag", "a2_aa12_mag_he"}; magazineWell[] = {}; 
		modes[] = {"Single", "FullAuto", "SAFE"}; weaponInfoType = "rhs_rscOptics_m4";
		class SAFE: RHS_SAFE_BASE {};
		class Single: Mode_SemiAuto {
			reloadTime = 0.2;
			class StandardSound {soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};};
			class SilencedSound {soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};};
		};
		class FullAuto: Mode_FullAuto {
			reloadTime = 0.2;
			class StandardSound {soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};};
			class SilencedSound {soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};};
		};
		class Eventhandlers {class RHS_BoltAction {fired = "[_this#0, _this#1, _this#4] spawn tsp_fnc_case";};};
		class WeaponSlotsInfo {
			class CowsSlot: CowsSlot {compatibleItems[] = {};};
			class MuzzleSlot: MuzzleSlot {compatibleItems[] = {};};
			class PointerSlot: PointerSlot {compatibleItems[] = {};};
			class UnderBarrelSlot: UnderBarrelSlot {compatibleItems[] = {};};
		};
	};
};
class CfgMagazines {
	class 30Rnd_556x45_Stanag;
	class a2_aa12_mag_00buck: 30Rnd_556x45_Stanag {
		displayName = "20rnd AA-12 Drum .00 Buckshot"; displayNameShort = "AA-12 Drum"; descriptionShort = "Ammunition for AA2 shotgun."; picture = "\a2_aa12\aa12_mag.paa"; 
		model = "\a2_aa12\aa12_mag.p3d"; modelSpecial = "\a2_aa12\aa12_mag.p3d"; modelSpecialIsProxy = 1; ammo = "rhs_ammo_12g_00buckshot"; count = 20;
	};
	class a2_aa12_mag_slug: a2_aa12_mag_00buck {displayName = "20rnd AA-12 Drum .00 Slug"; ammo = "rhs_ammo_12g_slug";};
	class a2_aa12_mag_frag: a2_aa12_mag_00buck {displayName = "20rnd AA-12 Drum .00 FRAG"; ammo = "rhs_ammo_12g_FRAG";};
	class a2_aa12_mag_he: a2_aa12_mag_00buck {displayName = "20rnd AA-12 Drum .00 HE"; ammo = "rhs_ammo_12g_HE";};
};

class CfgMovesBasic {
    class default;
    class DefaultDie;
    class ManActions {GestureReloadAA12 = "GestureReloadAA12";};
	class Actions {
		class NoActions: ManActions {GestureReloadAA12[] = {"GestureReloadAA12", "Gesture"};};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions {GestureReloadAA12[] = {"GestureReloadAA12Prone", "Gesture"};};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions {GestureReloadAA12[] = {"GestureReloadAA12Prone", "Gesture"};};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions {GestureReloadAA12[] = {"GestureReloadAA12Prone", "Gesture"};};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions {GestureReloadAA12[] = {"GestureReloadAA12Prone", "Gesture"};};
	};
};
class CfgGesturesMale {
	class States {
		class RHS_GestureRechamberM590;
		class RHS_GestureRechamberM590_Prone;
		class GestureReloadAA12: RHS_GestureRechamberM590 {speed = 0.4; leftHandIKCurve[] = {0,1,0.1,0,0.9,0,1,1}; file = "a2_aa12\anim\reload.rtm";};
		class GestureReloadAA12Prone: RHS_GestureRechamberM590_Prone {speed = 0.4; leftHandIKCurve[] = {0,1,0.1,0,0.9,0,1,1}; file = "a2_aa12\anim\reloadProne.rtm";};
	};
};