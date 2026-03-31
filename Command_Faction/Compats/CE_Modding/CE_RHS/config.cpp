class CfgPatches
{
	class Command_Faction_Compats_CEModding_RHS
	{
		units[]=
		{
			"Command_AH6M",
			"Command_MH6M"
		};
		weapons[]={};
		requiredAddons[]=
		{
            "CBA_Main",
            "Command_Master",
			"Command_Faction",
			"Command_Faction_Compats",
			"Command_Faction_Compats_CEModding",
			"CE_RHSUSAF_AH6M"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_Faction_Compats_CEModding;
	};
};

class CfgVehicles
{
	class RHS_MELB_base;
	class CE_MELB_base: RHS_MELB_base
	{
		class AnimationSources;
	};
	class RHS_MELB_AH6M: CE_MELB_base
	{
		class AnimationSources: AnimationSources
		{
			class Addcrosshair
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class Command_AH6M: RHS_MELB_AH6M
	{
		displayName="AH-6M Little Bird - Empty (Hammerhead)";
		faction="Command_Faction";
		crew="Command_Officer";
		scope=2;
		scopeCurator=2;
		editorCategory="Command_Faction_EdCat";
		editorSubcategory="Command_Haven";
		hiddenSelectionsTextures[]=
		{
			"CE_RHS\CE_RHSUSAF_Vehicles\Bro_MELB_Skins\hammerhead\HammerHeadPrime.paa",
			"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Addcrosshair
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};

	class RHS_MELB_MH6M: CE_MELB_base
	{};
	class Command_MH6M: RHS_MELB_MH6M
	{
		displayName="MH-6M Little Bird (Hammerhead)";
		faction="Command_Faction";
		crew="Command_Officer";
		scope=2;
		scopeCurator=2;
		editorCategory="Command_Faction_EdCat";
		editorSubcategory="Command_Haven";
		hiddenSelectionsTextures[]=
		{
			"CE_RHS\CE_RHSUSAF_Vehicles\Bro_MELB_Skins\hammerhead\HammerHeadPrime.paa",
			"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Addcrosshair
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
};