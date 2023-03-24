class CfgWeapons
{
    class ItemCore; 
    class UniformItem; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    };

    class GVAR(UniformItemBase): UniformItem
    {
        containerClass = "Supply50";
        mass = 50;
    };
    
    class GVAR(Desert): Uniform_Base
    { 
        scope = 2; 
        displayName = "Uniforme Desértico"; // TODO: Localize
        picture = "\A3\Characters_F\data\ui\icon_U_B_CombatUniform_mcam_CA.paa"; 
        model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d"; 
        class ItemInfo : GVAR(UniformItemBase) { 
            uniformClass = QEGVAR(units,Desert); 
        }; 
    }; 
    
    class GVAR(Forest): GVAR(Desert)
    { 
        displayName = "Uniforme Boscoso"; // TODO: Localize
        class ItemInfo : GVAR(UniformItemBase) { 
            uniformClass = QEGVAR(units,Forest); 
        }; 
    }; 
    
    class GVAR(HelicopterPilot): Uniform_Base
    {  
        scope = 2;
        displayName = "Uniforme de piloto";  // TODO: Localize
        picture = "\A3\Characters_F\data\ui\icon_U_B_coveralls_ca.paa"; 
        model = "\A3\characters_f\Common\coveralls.p3d";
        class ItemInfo : GVAR(UniformItemBase) { 
            uniformClass = QEGVAR(units,HelicopterPilot); 
        }; 
    };
    
    class GVAR(Mechanized): GVAR(HelicopterPilot)
    { 
        displayName = "Uniforme (div. Blindada)"; // TODO: Localize
        class ItemInfo : GVAR(UniformItemBase) { 
            uniformClass = QEGVAR(units,Mechanized);
        }; 
    };
    
    class GVAR(Specops): GVAR(Desert)
    {
        displayName = "Uniforme Operaciones Especiales"; // TODO: Localize
        class ItemInfo : GVAR(UniformItemBase) { 
            uniformClass = QEGVAR(units,Specops);
        };
    };
    
    class GVAR(Marine): Uniform_Base
    {
        scope = 2;
        displayName = "Uniforme de marina"; // TODO: Localize
        picture =  "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla2_3_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : GVAR(UniformItemBase) { 
            uniformClass = QEGVAR(units,Marine);
        }; 
    };
    
    class GVAR(Urban): GVAR(Desert)
    {
        displayName = "Uniforme Urbano"; // TODO: Localize
        class ItemInfo : GVAR(UniformItemBase) { 
            uniformClass = QEGVAR(units,Urban);
        }; 
    };
};