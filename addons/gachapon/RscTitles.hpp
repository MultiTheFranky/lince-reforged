#define ST_LEFT 0
#define ST_RIGHT 1
#define ST_CENTER 2


class RscLine;
class RscText;
class RscPicture;
class RscTitles {
    class RscGachapon {
        idd=-1;
        duration=10e10;
        movingEnable=0;
        fadeIn="false";
        fadeOut="false";
        onLoad="uiNamespace setVariable ['RscGachapon', _this select 0]";
        class ControlsBackground
        {
            class Background: RscText
            {
                idc = -1;
                x="safeZoneX + safeZoneW * -0.00625";
                y="safeZoneY + safeZoneH * 0.44074075";
                w="safeZoneW * 1.0625";
                h="safeZoneH * 0.11666667";
                colorBackground[] = {0,0,0,0.8};
            };

            class CenterLine: RscLine
            {
                idc = -1;
                text = "";
                x="safeZoneX + safeZoneW * 0.49375";
                y="safeZoneY + safeZoneH * 0.44074075";
                w="0.0001";
                h="safeZoneH * 0.11666667";
                colorText[] = {1,1,1,1};
            };
        };
        class Controls
        {
            class ItemImage1: RscPicture
            {
                idc = 8001;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };

            class ItemImage2: RscPicture
            {
                idc = 8002;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
            class ItemImage3: RscPicture
            {
                idc = 8003;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
            class ItemImage4: RscPicture
            {
                idc = 8004;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
            class ItemImage5: RscPicture
            {
                idc = 8005;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
            class ItemImage6: RscPicture
            {
                idc = 8006;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
            class ItemImage7: RscPicture
            {
                idc = 8007;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
            class ItemImage8: RscPicture
            {
                idc = 8008;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
            class ItemImage9: RscPicture
            {
                idc = 8009;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
            class ItemImage10: RscPicture
            {
                idc = 8010;
                text = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
                x="safeZoneX + safeZoneW + 0.1";
                y="safeZoneY + safeZoneH * 0.44481482";
                w="safeZoneW * 0.0775";
                h="safeZoneH * 0.10666667";
                colorText[] = {1,1,1,1};
            };
        };
    };
};