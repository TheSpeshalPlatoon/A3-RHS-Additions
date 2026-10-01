class CfgPatches {class a2_m1014 {requiredAddons[] = {"A3_Weapons_F", "rhsusf_weapons", "rhsusf_weapons2", "rhsusf_weapons3", "rhsusf_c_weapons"}; units[] = {};};};

class rhs_western_rifle_scopes_slot_short;
class CfgWeapons {
	class RHS_SAFE_BASE; 
	class rhs_weap_M590_5RD;
	class rhs_weap_M590_8RD: rhs_weap_M590_5RD {class Eventhandlers; class Single; class WeaponSlotsInfo;};
	class a2_m1014: rhs_weap_M590_8RD {
		displayName = "M1014"; picture = "\a2_m1014\m1014.paa";    
		descriptionShort = "The Saiga-12K is a Russian semi-automatic combat shotgun with a folding stock and a shortened barrel, built on the reliable AK rifle design.";   
		model = "\a2_m1014\m1014.p3d"; handAnim[]={"OFP2_ManSkeleton","\a2_m1014\anim\hand.rtm"}; cursor = "sgun"; recoil = "recoil_huntershotgun_01";
		rhs_boltActionAnim = "GestureReloadM1014"; rhs_boltActionCaseSelection = "rightHand"; rhs_boltActionCaseDelay = 0.01; 
		rhs_boltActionCaseDir[] = {0.3,0.05,0.25}; rhs_boltActionCasePos[] = {0,0.05,0.05}; rhs_boltActionSound[] = {"rhsusf\addons\rhsusf_c_weapons\sounds\m590_pump.ogg",0.9,1,20};
		muzzles[] = {"this", "SAFE"}; weaponInfoType = "rhs_rscOptics_m4";
		class SAFE: RHS_SAFE_BASE {};
		class Single: Single {reloadTime = 0.1;};
		class Eventhandlers {
			class RHS_BoltAction {
				fired = "[_this#0, _this#1, _this#4] spawn tsp_fnc_case";  //[_this select 0,_this # 1,_this # 1,_this # 4] call rhs_fnc_boltAction;
				reload = "_this spawn rhs_fnc_reloadShotgun";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {class CowsSlot: rhs_western_rifle_scopes_slot_short {};};
	};
};

class CfgMovesBasic {
    class default;
    class DefaultDie;
    class ManActions {GestureReloadM1014 = "GestureReloadM1014";};
	class Actions {
		class NoActions: ManActions {GestureReloadM1014[] = {"GestureReloadM1014", "Gesture"};};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions {GestureReloadM1014[] = {"GestureReloadM1014Prone", "Gesture"};};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions {GestureReloadM1014[] = {"GestureReloadM1014Prone", "Gesture"};};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions {GestureReloadM1014[] = {"GestureReloadM1014Prone", "Gesture"};};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions {GestureReloadM1014[] = {"GestureReloadM1014Prone", "Gesture"};};
	};
};
class CfgGesturesMale {
	class States {
		class RHS_GestureRechamberM590;
		class RHS_GestureRechamberM590_Prone;
		class GestureReloadM1014: RHS_GestureRechamberM590 {speed = 1.5; leftHandIKCurve[] = {1}; file = "a2_m1014\anim\reload.rtm";};
		class GestureReloadM1014Prone: RHS_GestureRechamberM590_Prone {speed = 1.5; leftHandIKCurve[] = {1}; file = "a2_m1014\anim\reloadProne.rtm";};
	};
};