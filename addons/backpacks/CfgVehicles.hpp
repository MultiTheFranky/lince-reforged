class CfgVehicles 
{
    class B_AssaultPack_Base;
	class B_Kitbag_Base;
    
    class GVAR(DesertLight): B_AssaultPack_Base {
        scope = 2;
        displayName = "Mochila Ligera (Desierto)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\desert_light.paa)};
    };

    class GVAR(ForestLight): GVAR(DesertLight) {
        displayName = "Mochila Ligera (Bosque)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\forest_light.paa)};
    };
	
	class GVAR(DesertMedic): B_Kitbag_Base {
        scope = 2;
        displayName = "Mochila Médica (Desierto)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\desert_medic.paa)};
		maximumLoad = 500;
    };
	
	class GVAR(Desert): GVAR(DesertMedic) {
        displayName = "Mochila (Desierto)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\desert.paa)};
		maximumLoad = 400;
    };
	
	class GVAR(Urban): GVAR(Desert) {
        displayName = "Mochila (Urbano)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\urban.paa)};
    };
	
	class GVAR(ForestMedic): GVAR(DesertMedic) {
        displayName = "Mochila Médica (Bosque)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\forest.paa)};
    };
	
	class GVAR(DesertExplosives): GVAR(DesertMedic) {
        displayName = "Mochila Explosivos (Desierto)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\desert_explosives.paa)};
    };
	
	class GVAR(ForestExplosives): GVAR(DesertMedic) {
        displayName = "Mochila Explosivos (Boscoso)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\forest_explosives.paa)};
    };
	
	class GVAR(SpecopsExplosives): GVAR(DesertMedic) {
        displayName = "Mochila Explosivos (Specops)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\specops_explosives.paa)};
    };
	
	class GVAR(Forest): GVAR(Desert) {
        displayName = "Mochila (Bosque)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\forest.paa)};
    };
	
	class GVAR(Specops): GVAR(DesertMedic) {
        displayName = "Mochila (specops)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\specops.paa)};
    };
	
	class GVAR(SpecopsMedic): GVAR(DesertMedic) {
        displayName = "Mochila médica (specops)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\specops_medic.paa)};
    };

};