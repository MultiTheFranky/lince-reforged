class CfgWeapons {
	class ItemCore;
	class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    }; 
	class HeadgearItem;
	class H_Beret_blk;
	class H_MilCap_blue;

	class GVAR(HelmetBase): H_HelmetB
	{
		author="Compania_lince";
		class ItemInfo;
	};
	
	class H_PilotHelmetHeli_B: GVAR(HelmetBase)
	{};
	
	class H_CrewHelmetHeli_B: GVAR(HelmetBase)
	{};
	
	class H_HelmetCrew_B: GVAR(HelmetBase)
	{};
	
	class H_HelmetCrew_I: H_HelmetCrew_B
	{};
	
	class GVAR(Mechanized): H_HelmetCrew_I
	{
		scope=2;
		displayName="Casco de mecanizada"; // TODO: Localize 
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
		model="A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\mechanized.paa)
		};
	};
	
	class GVAR(HaloSpecops): H_CrewHelmetHeli_B
	{
		scope=2;
		displayName="Casco de Salto"; // TODO: Localize 
		picture="\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
		model="A3\Characters_F\Common\headgear_helmet_heli_shield";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\halo_specops.paa)
		};
	};
	
	class GVAR(HelicopterPilot): H_PilotHelmetHeli_B
	{
		scope=2;
		displayName="Casco de Piloto (Ala Rotatoria)"; // TODO: Localize 
		picture="\A3\characters_f\Data\UI\icon_H_Pilot_Helmet_Heli_B_CA.paa";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helicopter_pilot.paa)
		};
	};
	
	class GVAR(PlanePilot): GVAR(HelmetBase)
	{
		scope=2;
		displayName="Casco de Piloto (Ala fija)"; // TODO: Localize 
		picture="\A3\characters_f\Data\UI\icon_H_PilotHelmetFighter_B_CA.paa";
		model="A3\Characters_F\Common\headgear_helmet_pilot";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\plane_pilot.paa)
		};
		class ItemInfo: ItemInfo
		{
			mass=60;
			uniformModel="A3\Characters_F\Common\headgear_helmet_pilot";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};

	class GVAR(ItemCoreBase): ItemCore
	{
		author="Compania Lince"; // TODO: Localize 
	};
	
	class GVAR(RedCommand): GVAR(ItemCoreBase)
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="Boina de mando (rojo)"; // TODO: Localize 
		picture="\A3\Characters_F\data\ui\icon_H_Beret_blk_CA.paa";
		model="\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\red_command.paa)
		};
		class ItemInfo: HeadgearItem
		{
			mass=6;
			uniformModel="\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[]={3,1};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	
	class GVAR(DesertCap): GVAR(RedCommand)
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="Gorra (desierto)"; // TODO: Localize 
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_blue_ca.paa";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\desert_cap.paa)
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Common\cappatrol";
		};
	};
	
	class GVAR(ForestCap): GVAR(DesertCap)
	{
		displayName="Gorra (bosque)"; // TODO: Localize
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\forest_cap.paa)
		};
	};
	
	class GVAR(MarineCap): GVAR(DesertCap)
	{
		displayName="Gorra (Marina)"; // TODO: Localize
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\marine_cap.paa)
		};
	};
     
	  class GVAR(Desert): GVAR(HelmetBase)
    {
        displayName = "Casco (Desierto)"; // TODO: Localize
        picture = "\A3\Characters_F\data\ui\icon_H_HelmetSpecB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\desert.paa)};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.4";
            passThrough = 0.65;
        };
    };
	
	class GVAR(Forest): GVAR(Desert)
    {
        displayName = "Casco (Bosque)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\forest.paa)};
    };
	
	class GVAR(Urban): GVAR(Desert)
    {
        displayName = "Casco (Urbano)"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\urban.paa)};
    };
	
	class GVAR(Specops): GVAR(Desert)
    {
        displayName = "Casco Operaciones Especiales"; // TODO: Localize
        hiddenSelectionsTextures[] = {QPATHTOF(data\specops.paa)};
    };
	
	class GVAR(FastSpecops): GVAR(HelmetBase)
    {
        displayName = "Casco Fast Operaciones Especiales"; // TODO: Localize
        picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\specops.paa)};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.4";
            passThrough = 0.65;
        };
    };
};