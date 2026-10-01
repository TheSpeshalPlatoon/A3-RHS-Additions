class CfgPatches {class a2_soflam {requiredAddons[] = {"A3_Characters_F"}; units[] = {};};};

class CfgWeapons {
	class Laserdesignator;
	class a2_soflam: Laserdesignator {
		displayName = "AN/PEQ-1 SOF Laser Marker";        
		picture = "\a2_soflam\soflam.paa";
		model = "\a2_soflam\soflam.p3d";
	};
};