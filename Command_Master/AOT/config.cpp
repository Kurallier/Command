#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Command_Master_AOT
	{
		units[]={};
		weapons[]=
		{
			"AOT_Mask_black",
			"AOT_Mask_t_desert",
			"AOT_Mask_t_steel",
			"AOT_Mask_t_wood",
			"AOT_Mask_f_red",
			"AOT_Mask_f_blue",
			"AOT_Mask_f_green",
			"AOT_Mask_salem",
			"AOT_Mask_line",
			"AOT_Mask_mouth",
			"AOT_Mask_alien",
			"AOT_Mask_angrysm",
			"AOT_Mask_bionicle",
			"AOT_Mask_devilscartel",
			"AOT_Mask_grumpy",
			"AOT_Mask_japanese",
			"AOT_Mask_spawn",
			"AOT_Mask_bfs",
			"AOT_Mask_bfskarl",
			"AOT_Mask_gow",
			"AOT_Mask_gorilla",
			"AOT_Mask_jp93",
			"AOT_Mask_york",
			"AOT_Mask_arctic",
			"AOT_Mask_bobafett",
			"AOT_Mask_bowler",
			"AOT_Mask_deadshot",
			"AOT_Mask_multicam",
			"AOT_Mask_rio",
			"AOT_Mask_clemc",
			"Command_BallisticMask_Jewbussy",
			"Command_BallisticMask_Yoshi",
			"Command_BallisticMask_SMILE",
			"Command_BallisticMask_Fox",
			"Command_BallisticMask_Frog",
			"Command_BallisticMask_Spider",
			"Command_BallisticMask_Cods",
			"Command_BallisticMask_Chase",
			"Command_BallisticMask_Potato",
			"Command_BallisticMask_Jonesy",
			"Command_BallisticMask_Unknown",
			"Command_BallisticMask_Jules",
			"Command_BallisticMask_Outbreak",
			"Command_BallisticMask_Peasant",
			"Command_BallisticMask_Andre"
		};
		requiredAddons[]=
		{
			"A3_Characters_F", // HeadgearItem
			"A3_Weapons_F",	// ItemCore
			"Command_Master" // addonRootClass
		};
		addonRootClass=Command_Master;
	};
};

class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;

	class AOT_Mask_base: ItemCore
	{
		author="Facel";
		displayName="Ballistic Mask";
		scope=0;
		model="Command_Master\AOT\cmd_aot_mask.p3d";
		picture="Command_Master\AOT\UI\gear_aot_mask_01_x_ca";
		hiddenSelections[]=
		{
			"Camo1"
		};
		ace_hearing_protection=0.20;
		ace_hearing_lowerVolume=0.20;
		class ItemInfo: HeadgearItem
		{
			allowedSlots[]={UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			mass=10;
			uniformModel="Command_Master\AOT\cmd_aot_mask.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					passThrough=0.3;
					hitpointName="HitHead";
					armor=14; 
				};
			};
		};
	};
	class AOT_Mask_NoDamage_base: AOT_Mask_base
	{
		displayName="Ballistic Mask (0% Damaged)";
		hiddenSelectionsMaterials[]=
		{
			"Command_Master\AOT\data\aot_no_damage.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsMaterials[]=
			{
				"Command_Master\AOT\data\aot_no_damage.rvmat"
			};
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Head: Head
				{
					armor=14; 
				};
			};
		};
	};
	class AOT_Mask_SlightDamage_base: AOT_Mask_base
	{
		displayName="Ballistic Mask (25% Damaged)";
		hiddenSelectionsMaterials[]=
		{
			"Command_Master\AOT\data\aot_slight_damage.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsMaterials[]=
			{
				"Command_Master\AOT\data\aot_slight_damage.rvmat"
			};
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Head: Head
				{
					armor=11; 
				};
			};
		};
	};
	class AOT_Mask_HeavyDamage_base: AOT_Mask_base
	{
		displayName="Ballistic Mask (40% Damaged)";
		hiddenSelectionsMaterials[]=
		{
			"Command_Master\AOT\data\aot_heavy_damage.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsMaterials[]=
			{
				"Command_Master\AOT\data\aot_heavy_damage.rvmat"
			};
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Head: Head
				{
					armor=8; 
				};
			};
		};
	};
	
// AOT Originals	
	//Tiger
	//Tiger Desert Tan Mask
	class AOT_Mask_black: AOT_Mask_NoDamage_base
	{
		displayName="Ballistic Mask - Black (0% Damaged)";
		scope=2;
		scopeArsenal=2;
		picture="Command_Master\AOT\UI\gear_aot_mask_01_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_01_co.paa"};
	};
	class AOT_Mask_t_desert: AOT_Mask_NoDamage_base
	{
		displayName="Ballistic Mask - Desert Tiger (0% Damaged)";
		scope=2;
		scopeArsenal=2;
		picture="Command_Master\AOT\UI\gear_aot_mask_02_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_02_co.paa"};
	};

	//Tiger Steel Gray Mask
	class AOT_Mask_t_steel: AOT_Mask_t_desert
	{
		displayName="Ballistic Mask - Steel Tiger (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_03_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_03_co.paa"};
	};

	//Tiger Dark Woodland Mask
	class AOT_Mask_t_wood: AOT_Mask_t_desert
	{
		displayName="Ballistic Mask - Woodland Tiger (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_04_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_04_co.paa"};
	};

	//Flame Masks
	//Fire Red Mask
	class AOT_Mask_f_red: AOT_Mask_t_desert
	{
		displayName="Ballistic Mask - Fire Red (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_05_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_05_co.paa"};
	};

	//Fire Blue Mask
	class AOT_Mask_f_blue: AOT_Mask_t_desert
	{
		displayName="Ballistic Mask - Fire Blue (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_06_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_06_co.paa"};
	};

	//Fire Green Mask
	class AOT_Mask_f_green: AOT_Mask_t_desert
	{
		displayName="Ballistic Mask - Fire Green (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_07_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_07_co.paa"};
	};

	//Salem Mask
	class AOT_Mask_salem: AOT_Mask_SlightDamage_base // Textures uses different rvmat
	{
		displayName="Ballistic Mask - Salem Fire (25% Damaged)";
		scope=2;
		scopeArsenal=2;
		picture="Command_Master\AOT\UI\gear_aot_mask_08_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_08_co.paa"};
	};

// NFC3SPECTRO
	class AOT_Mask_NoDamage_NFC3_base: AOT_Mask_NoDamage_base
	{
		author="Facel/NFC3SPECTRO";
	};
	class AOT_Mask_line: AOT_Mask_NoDamage_NFC3_base
	{
		displayName="Ballistic Mask - Line Art (0% Damaged)";
		scope=2;
		scopeArsenal=2;
		picture="Command_Master\AOT\UI\gear_aot_mask_11_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_11_co.paa"};
	};
	class AOT_Mask_mouth: AOT_Mask_line
	{
		displayName="Ballistic Mask - Mouth (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_12_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_12_co.paa"};
	};
	class AOT_Mask_alien: AOT_Mask_line
	{
		displayName="Ballistic Mask - Alien (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_13_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_13_co.paa"};
	};
	class AOT_Mask_angrysm: AOT_Mask_line
	{
		displayName="Ballistic Mask - Angry Space Marine (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_14_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_14_co.paa"};
	};
	class AOT_Mask_bionicle: AOT_Mask_line
	{
		displayName="Ballistic Mask - Bionicle (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_15_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_15_co.paa"};
	};
	class AOT_Mask_devilscartel: AOT_Mask_line
	{
		displayName="Ballistic Mask - The Devil's Cartel (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_16_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_16_co.paa"};
	};
	class AOT_Mask_grumpy: AOT_Mask_line
	{
		displayName="Ballistic Mask - Grumpy (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_17_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_17_co.paa"};
	};
	class AOT_Mask_japanese: AOT_Mask_line
	{
		displayName="Ballistic Mask - Japanese (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_18_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_18_co.paa"};
	};
	class AOT_Mask_spawn: AOT_Mask_line
	{
		displayName="Ballistic Mask - Spawn (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_19_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_19_co.paa"};
	};

// MilkShake
	class AOT_Mask_NoDamage_Milk_base: AOT_Mask_NoDamage_base
	{
		author="Facel/MilkShake";
	};
	class AOT_Mask_bfs: AOT_Mask_NoDamage_Milk_base
	{
		displayName="Ballistic Mask - B.F.S Standard Issue (0% Damaged)";
		scope=2;
		scopeArsenal=2;
		picture="Command_Master\AOT\UI\gear_aot_mask_20_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_20_co.paa"};
	};
	class AOT_Mask_bfskarl: AOT_Mask_bfs
	{
		
		displayName="Ballistic Mask - B.F.S Karl (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_21_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_21_co.paa"};
	};
	class AOT_Mask_gow: AOT_Mask_bfs
	{
		displayName="Ballistic Mask - God of war (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_22_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_22_co.paa"};
	};

// Mr Fox
	class AOT_Mask_NoDamage_Fox_base: AOT_Mask_NoDamage_base
	{
		author="Facel/Mr Fox";
	};
	class AOT_Mask_gorilla: AOT_Mask_NoDamage_Fox_base
	{
		displayName="Ballistic Mask - Gorilla (0% Damaged)";
		scope=2;
		scopeArsenal=2;
		picture="Command_Master\AOT\UI\gear_aot_mask_28_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_28_co.paa"};
	};
	class AOT_Mask_jp93: AOT_Mask_gorilla
	{
		displayName="Ballistic Mask - JP93 (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_29_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_29_co.paa"};
	};
	class AOT_Mask_york: AOT_Mask_gorilla
	{
		displayName="Ballistic Mask - York Transit (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_30_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_30_co.paa"};
	};

// Others
	class AOT_Mask_arctic: AOT_Mask_NoDamage_base
	{
		author="Facel/Till";
		scope=2;
		scopeArsenal=2;
		displayName="Ballistic Mask - Arctic (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_23_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_23_co.paa"};
	};
	class AOT_Mask_bobafett: AOT_Mask_arctic
	{
		author="Facel/Mutiny";
		displayName="Ballistic Mask - Boba Fett (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_24_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_24_co.paa"};
	};
	class AOT_Mask_bowler: AOT_Mask_arctic
	{
		author="Facel/JayRad";
		displayName="Ballistic Mask - Bowler (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_25_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_25_co.paa"};
	};
	class AOT_Mask_deadshot: AOT_Mask_arctic
	{
		author="Facel/JayRad";
		displayName="Ballistic Mask - Deadshot (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_26_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_26_co.paa"};
	};
	class AOT_Mask_multicam: AOT_Mask_arctic
	{
		author="Facel/Luke";
		displayName="Ballistic Mask - Multicam (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_27_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_27_co.paa"};
	};
	class AOT_Mask_rio: AOT_Mask_HeavyDamage_base
	{
		author="Facel/Rio";
		displayName="Ballistic Mask - Rio's camo (40% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_09_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_09_co.paa"};
	};
	class AOT_Mask_clemc: AOT_Mask_arctic
	{
		author="Facel/CLEMC";
		displayName="Ballistic Mask - CLEMC Standard Issue (0% Damaged)";
		picture="Command_Master\AOT\UI\gear_aot_mask_10_x_ca";
		hiddenSelectionsTextures[]={"Command_Master\AOT\data\customtextures\aot_mask_10_co.paa"};
	};

// Command
	class Command_BallisticMask_base: AOT_Mask_NoDamage_base
	{
		picture="Command_Master\AOT\CommandData\UI\Command_BallisticMask_UI_ca.paa";
		author="Almus";
		scope=0;
	};
	class Command_BallisticMask_Jewbussy: Command_BallisticMask_base // JEWBARD
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Jewbussy";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Jewbard.paa"};
	};
	class Command_BallisticMask_Yoshi: Command_BallisticMask_base // Yoshi
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Yoshi";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Yoshi.paa"};
	};
	class Command_BallisticMask_SMILE: Command_BallisticMask_base // Evil Smile
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Evil Smile";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\EvilSmile.paa"};
	};
	class Command_BallisticMask_Fox: Command_BallisticMask_base // Almus
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Almus";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Almus.paa"};
	};
	class Command_BallisticMask_Frog: Command_BallisticMask_base // Frog
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Frog";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Frog.paa"};
	};
	class Command_BallisticMask_Spider: Command_BallisticMask_base // Spider
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Spider";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Spider.paa"};
	};
	class Command_BallisticMask_Cods: Command_BallisticMask_base // Codsworth
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Codsworth";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Codsworth.paa"};
	}; 
	class Command_BallisticMask_Chase: Command_BallisticMask_base // Chase
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Chase";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Chase.paa"};
	};
	class Command_BallisticMask_Potato: Command_BallisticMask_base // Potato
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Potato";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Potato.paa"};
	};
	class Command_BallisticMask_Jonesy: Command_BallisticMask_base // Jonesy
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Jonesy";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Jonesy.paa"};
	};
	class Command_BallisticMask_Unknown: Command_BallisticMask_base // Unknown
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Unknown";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Unknown.paa"};
	};
	class Command_BallisticMask_Jules: Command_BallisticMask_base // Jules
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Jules";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Jules.paa"};
	};
	class Command_BallisticMask_Outbreak: Command_BallisticMask_base // Outbreak
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Outbreak";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Outbreak.paa"};
	};
	class Command_BallisticMask_Peasant: Command_BallisticMask_base // Peasant
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Peasant";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Peasant.paa"};
	};
	class Command_BallisticMask_Andre: Command_BallisticMask_base // Andre
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Andre";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Andre.paa"};
	};
	class Command_BallisticMask_Micky: Command_BallisticMask_base // Mickey Mouse
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Micky Mouse";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Mickey.paa"};
	};
	class Command_BallisticMask_Pooh: Command_BallisticMask_base // Winnie the Pooh
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Winnie the Pooh";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Pooh.paa"};
	};
	class Command_BallisticMask_Goofy: Command_BallisticMask_base // Mickey Mouse
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Goofy";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Goofy.paa"};
	};
	class Command_BallisticMask_Duck: Command_BallisticMask_base // Donald Duck
	{
		scope=2;
		scopeArsenal=2;
		displayName="[CMD] Ballistic Mask - Donald Duck";
		hiddenSelectionsTextures[]={"Command_Master\AOT\CommandData\Data\Mickey.paa"};
	};
};