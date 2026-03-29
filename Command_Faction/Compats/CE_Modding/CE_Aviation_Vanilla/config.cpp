class CfgPatches
{
	class Command_Faction_Compats_CEModding_CE_Aviation_Vanilla
	{
		units[]=
		{
			"CE_Y32_Xian_CMD",
			"CE_HY32_Xian_CMD",
			"CE_ZY32_Xian_Kwai_CMD"
		};
		weapons[]={};
		requiredAddons[]=
		{
            "CBA_Main",
            "Command_Master",
			"Command_Faction",
			"Command_Faction_Compats",
			"Command_Faction_Compats_CEModding",
			"CE_Aviation_Vanilla_Xian"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_Faction_Compats_CEModding;
	};
};

class CfgVehicles
{
	class CE_Y32_Xian_base;
	class CE_Y32_Xian_CMD: CE_Y32_Xian_base
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		side=2;
		faction="Command_Faction";
		crew="Command_Officer";
		editorCategory="Command_Faction_EdCat";
		editorSubcategory="Command_Haven";
		typicalCargo[]=
		{
			"Command_Officer"
		};
		hiddenSelectionsTextures[]=
		{
			"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT01_CO.paa",
			"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT02_CO.paa",
			"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_L_CO.paa",
			"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_R_CO.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_black_CO.paa"
				};
			};
			class Blue
			{
				displayName="Blue";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_blue_CO.paa"
				};
			};
			class Olive
			{
				displayName="Olive";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_Olive_CO.paa"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_sand_CO.paa"
				};
			};
			class White
			{
				displayName="White";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_White_CO.paa"
				};
			};
			class Command_Xian
			{
				displayName="[Kavik] Cherry Blossom";
				author="Kavik";
				textures[] =
				{
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT01_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT02_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_L_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_R_CO.paa"
				};
			};
		};
	};
	class CE_HY32_Xian_base;
	class CE_HY32_Xian_CMD: CE_HY32_Xian_base
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		side=2;
		faction="Command_Faction";
		crew="Command_Officer";
		editorCategory="Command_Faction_EdCat";
		editorSubcategory="Command_Haven";
		typicalCargo[]=
		{
			"Command_Officer"
		};
		hiddenSelectionsTextures[]=
		{
			"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT01_CO.paa",
			"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT02_CO.paa",
			"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_L_CO.paa",
			"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_R_CO.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_black_CO.paa"
				};
			};
			class Blue
			{
				displayName="Blue";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_blue_CO.paa"
				};
			};
			class Olive
			{
				displayName="Olive";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_Olive_CO.paa"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_sand_CO.paa"
				};
			};
			class White
			{
				displayName="White";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_White_CO.paa"
				};
			};
			class Command_Xian
			{
				displayName="[Kavik] Cherry Blossom";
				author="Kavik";
				textures[] =
				{
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT01_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT02_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_L_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_R_CO.paa"
				};
			};
		};
	};
	class CE_ZY32_Xian_Kwai_base;
	class CE_ZY32_Xian_Kwai_CMD: CE_ZY32_Xian_Kwai_base
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		side=1;
		faction="Command_Faction";
		crew="Command_Officer";
		editorCategory="Command_Faction_EdCat";
		editorSubcategory="Command_Haven";
		typicalCargo[]=
		{
			"Command_Officer"
		};
		hiddenSelectionsTextures[]=
		{
			"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_blue_CO.paa",
			"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_blue_CO.paa",
			"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_blue_CO.paa",
			"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_blue_CO.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_black_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_black_CO.paa"
				};
			};
			class Blue
			{
				displayName="Blue";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_blue_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_blue_CO.paa"
				};
			};
			class Olive
			{
				displayName="Olive";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_Olive_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_Olive_CO.paa"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_sand_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_sand_CO.paa"
				};
			};
			class White
			{
				displayName="White";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT01_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT02_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_L_White_CO.paa",
					"\CE_Aviation_2035\CE_Aviation_Vanilla\Xian\Data\VTOL_02_EXT03_R_White_CO.paa"
				};
			};
			class Command_Xian
			{
				displayName="[Kavik] Cherry Blossom";
				author="Kavik";
				textures[] =
				{
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT01_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT02_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_L_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_R_CO.paa"
				};
			};
		};
	};
};