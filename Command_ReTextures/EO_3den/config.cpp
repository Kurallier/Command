class CfgPatches
{
	class Command_ReTextures_EO_3den
	{
		units[]=
		{
			"CMD_B_RadioBag_01_Medic_F",
			"CMD_TFAR_anprc155_Medic"
		};
		weapons[]=
		{};
		requiredAddons[]=
		{
			"A3_expEden",
			"A3_Data_F_Decade_Loadorder"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_ReTextures;
	};
};

class CfgVehicles
{
    class UserTexture_1x2_F;
    class N4_tomPoster: UserTexture_1x2_F
	{
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Posters";
		posterSize=0;
		displayName="$STR_expEden_N4_tomPoster";
		hiddenSelectionsTextures[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\N4\N4_tomPoster_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Missions_F_Orange\Data\Img\Orange_Compositions\shared\posters_super.rvmat"
		};
		icon="iconObject_1x2";
		class Attributes
		{};
	};
    class Command_TIMEmagazine_Kane: N4_tomPoster
	{
		author="CE_Modding";
		editorPreview="Command_ReTextures\EO_3den\Data\Kane_TimeMagazine_Preview.jpg";
		_generalMacro="Command_TIMEmagazine_Kane";
		displayName="TIME Magazine - Kane";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\EO_3den\Data\Kane_TimeMagazine_CA.paa"
		};
		icon="iconObject_1x2";
		class Attributes
		{};
	};
};