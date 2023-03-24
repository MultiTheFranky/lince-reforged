class CfgVehicles 
{     
    class B_Soldier_F; 
    class B_Helipilot_F;

    class GVAR(ReconBase): B_Soldier_F {
        scope = 0;
        scopeCurator = 0;
        author = "Compania Lince"; //TODO: Localize
        faction = "LINCE";
    };
        
    class GVAR(Desert): GVAR(ReconBase) {
        scope = 2;
        scopeCurator = 2;
        displayName = "Lince (Desierto)"; //TODO: Localize
        uniformClass = QEGVAR(uniforms,Desert);
        backpack = QEGVAR(backpacks,Desert);
        hiddenSelectionsTextures[] = {QPATHTOF(data\desert.paa)}; 
        linkedItems[] = {QEGVAR(helmets,Desert),QEGVAR(vests,Desert),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {QEGVAR(helmets,Desert),QEGVAR(vests,Desert),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };

    class GVAR(Forest): GVAR(Desert) {
        displayName = "Lince (Bosque)"; //TODO: Localize
        uniformClass = QEGVAR(uniforms,Forest);
        backpack = QEGVAR(backpacks,Forest);
        hiddenSelectionsTextures[] = {QPATHTOF(data\forest.paa)};
        linkedItems[] = {QEGVAR(helmets,Forest),QEGVAR(vests,Forest),"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {QEGVAR(helmets,Forest),QEGVAR(vests,Forest),"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class GVAR(ForestIndependent): GVAR(Forest) {
        side = 2; 
    };

    class GVAR(HeliBase): B_helipilot_F {
        scope = 0;
        scopeCurator = 0;
        author = "Compania Lince"; //TODO: Localize
        faction = "LINCE";
    };

    class GVAR(HelicopterPilot): GVAR(HeliBase) {
        scope = 2;
        scopeCurator = 2;
        displayName = "Lince Heli"; //TODO: Localize
        uniformClass = QEGVAR(uniforms,HelicopterPilot);
        backpack = QEGVAR(backpacks,Desert);
        hiddenSelectionsTextures[] = {QPATHTOF(data\helicopter_pilot.paa)};
        linkedItems[] = {QEGVAR(helmets,HelicopterPilot),QEGVAR(vests,HelicopterPilot),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {QEGVAR(helmets,HelicopterPilot),QEGVAR(vests,HelicopterPilot),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };

    class GVAR(Mechanized): GVAR(HeliBase) {
        scope = 2;
        scopeCurator = 2;
        displayName = "Lince Mech"; //TODO: Localize
        uniformClass = QEGVAR(uniforms,Mechanized);
        hiddenSelectionsTextures[] = {QPATHTOF(data\mechanized.paa)};
        linkedItems[] = {QEGVAR(helmets,Mechanized),QEGVAR(vests,Mechanized),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {QEGVAR(helmets,Mechanized),QEGVAR(vests,Mechanized),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };
        
    class GVAR(Specops): GVAR(ReconBase) {
        scope = 2;
        scopeCurator = 2;
        displayName = "Lince Specops"; // TODO: Localize
        uniformClass = QEGVAR(uniforms,Specops); 
        backpack = QEGVAR(backpacks,Specops);
        hiddenSelectionsTextures[] = {QPATHTOF(data\specops.paa)};
        linkedItems[] = {QEGVAR(helmets,Specops),QEGVAR(vests,Specops),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {QEGVAR(helmets,Specops),QEGVAR(vests,Specops),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };
    
    class GVAR(Marine): GVAR(Specops) {
        displayName = "Lince (Marina)"; // TODO: Localize
        uniformClass = QEGVAR(uniforms,Marine); 
        backpack = QEGVAR(backpacks,Urban); 
        hiddenSelectionsTextures[] = {QPATHTOF(data\marine.paa)};
        linkedItems[] = {QEGVAR(helmets,Urban),QEGVAR(vests,Urban),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {QEGVAR(helmets,Urban),QEGVAR(vests,Urban),"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };

    class GVAR(Urban): GVAR(Marine) {
        displayName = "Lince (Urbano)"; // TODO: Localize
        uniformClass = QEGVAR(uniforms,Urban);
        hiddenSelectionsTextures[] = {QPATHTOF(data\urban.paa)};
    };

    class Betis_Supercup:  GVAR(Desert) { 
        displayName = "Betis"; // TODO: Localize
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = QEGVAR(uniforms,Betis);
        backpack = ""; 
        hiddenSelections[] = {"Camo1","Camo2"}; 
        hiddenSelectionsTextures[] = {QPATHTOF(data\betis_1.paa),QPATHTOF(data\betis_2.paa)}; 
    };

    class C_man_p_beggar_F;
    class sporting_unit: C_man_p_beggar_F {
        author = "Compania Lince"; // TODO: Localize
        _generalMacro = "C_man_p_beggar_F"; 
        scope = 2; 
        displayName = "Sporting"; // TODO: Localize
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Compania Lince";
        model = "\A3\characters_F\civil\c_poor.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = QEGVAR(uniforms,Sporting);
        backpack = ""; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {QPATHTOF(data\sporting.paa)}; 
    };
};