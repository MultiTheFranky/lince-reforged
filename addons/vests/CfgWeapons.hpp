class CfgWeapons {
    class ItemCore;
	class VestItem; 
    class GVAR(Base): ItemCore 
    { 
		author="Compañia Lince"; // TODO: Localize 
        class ItemInfo; 
    };
     
    class GVAR(Desert): GVAR(Base) 
    { 
        scope = 2; 
        displayName = "Chaleco Desértico"; // TODO: Localize
        picture = "\A3\Characters_F\data\ui\icon_V_PlateCarrier1_blk_ca.paa"; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {QPATHTOF(data\desert.paa)}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
            containerClass = "Supply120"; 
            mass = 80;  
            hiddenSelections[] = {"camo"}; 
			
			 class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
        }; 
    };

	class GVAR(Forest): GVAR(Desert)
    {  
        displayName = "Chaleco Boscoso"; // TODO: Localize 
        hiddenSelectionsTextures[] = {QPATHTOF(data\forest.paa)};
    };
	
	class GVAR(HelicopterPilot): GVAR(Desert)
    { 
        displayName = "Chaleco De Piloto"; // TODO: Localize 
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa"; 
        model = "A3\Characters_F\Common\equip_tacticalvest"; 
        hiddenSelectionsTextures[] = {QPATHTOF(data\helicopter_pilot.paa)};
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "15"; 
            passThrough = 1.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };
	
	class GVAR(Mechanized): GVAR(HelicopterPilot) 
    { 
        displayName = "Chaleco (Mecanizada)"; // TODO: Localize 
        picture = "\A3\characters_F\data\ui\icon_V_FChestrig_blk_CA.paa"; 
        model = "\A3\Characters_F\Common\equip_chestrig"; 
        hiddenSelectionsTextures[] = {QPATHTOF(data\mechanized.paa),"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
        class ItemInfo: ItemInfo 
        { 
            uniformModel = "A3\Characters_F\Common\equip_chestrig"; 
        }; 
    };
	
	class GVAR(Command): GVAR(HelicopterPilot) 
    { 
        displayName = "Chaleco De Mando"; // TODO: Localize 
        hiddenSelectionsTextures[] = {QPATHTOF(data\command.paa)}; 
    };
	
	class GVAR(Specops): GVAR(Desert) 
    { 
        displayName = "Chaleco Operaciones Especiales"; // TODO: Localize 
        model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d"; 
        hiddenSelectionsTextures[] = {QPATHTOF(data\specops.paa)}; 
        
        class ItemInfo: ItemInfo 
        { 
            uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d"; 
        }; 
    };
	
	class GVAR(Urban): GVAR(Desert) 
    { 
        displayName = "Chaleco Urbano"; // TODO: Localize 
        hiddenSelectionsTextures[] = {QPATHTOF(data\urban.paa)}; 
    };
};