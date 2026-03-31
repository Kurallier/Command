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
		class Components;
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
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsusf\addons\rhsusf_melb\data\loadouts\RHS_AH6M_EDEN_CA.paa";
				class pylons
				{
					class pylon1  // Outer-Left
					{
						hardpoints[]=
						{
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_RocketPod_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_BasicCannon_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_ShortRange_AGM_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzRHS_AircraftSpecific_MELB_General.hpp"
							"RHS_HP_MELB_L"
						};
						maxweight=1200;
						bay=-1;
						UIposition[]={0.625,0.2};
						priority=2;
						attachment="";
						turret[]={};
						hitpoint="HitPylon1";
					};
					class pylon2: pylon1  // Inner-Left
					{
						hardpoints[]=
						{
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_RocketPod_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_BasicCannon_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_ShortRange_AGM_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzRHS_AircraftSpecific_MELB_General.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzRHS_AircraftSpecific_MELB_M134.hpp"
						};
						maxweight=800;
						UIposition[]={0.56199998,0.30000001};
						priority=1;
						hitpoint="HitPylon2";
						attachment="";
					};
					class pylon3: pylon2  // Inner-Right
					{
						UIposition[]={0.103,0.30000001};
						hitpoint="HitPylon3";
						attachment="";
					};
					class pylon4: pylon1  // Outer-Right
					{
						hardpoints[]=
						{
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_RocketPod_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_BasicCannon_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\_All_ShortRange_AGM_Hardpoints.hpp"
							#include "\CE_Aviation_Munitions\CE_Aviation_Munitions\Data\zHardpoints\zzRHS_AircraftSpecific_MELB_General.hpp"
							"RHS_HP_MELB_R"
						};					
						UIposition[]={0.039999999,0.2};
						hitpoint="HitPylon4";
						attachment="";
					};
				};
				class Presets
				{
					class Standard
					{
						attachment[]=
						{
							"rhs_mag_AGM114K_4",
							"rhs_mag_m134_pylon_3000",
							"rhs_mag_m134_pylon_3000",
							"rhs_mag_M229_19"
						};
						displayname="Standard (M134{APT}+RKT+AGM)";
					};
					class Standard_SLAPT
					{
						attachment[]=
						{
							"rhs_mag_AGM114K_4",
							"rhs_mag_m134_pylon_3000_SLAPT",
							"rhs_mag_m134_pylon_3000_SLAPT",
							"rhs_mag_M229_19"
						};
						displayname="Standard (M134{SLAPT}+RKT+AGM)";
					};
					class CE_CAS
					{
						attachment[]=
						{
							"rhsusf_mag_gau19_melb_left",
							"rhs_mag_M229_19",
							"rhs_mag_M229_19",
							"rhs_mag_AGM114K_4"
						};
						displayname="CAS (GAU+RKT+AGM)";
					};
					class CE_CAS_HEI
					{
						attachment[]=
						{
							"rhsusf_mag_gau19_melb_left_HEI",
							"rhs_mag_M229_19",
							"rhs_mag_M229_19",
							"rhs_mag_AGM114K_4"
						};
						displayname="Heavy CAS (GAU{HEI}+RKT+AGM)";
					};
					class CE_CAS_GAU13
					{
						attachment[]=
						{
							"rhsusf_mag_gau19_melb_left_gau13_HEAPT",
							"rhs_mag_M229_19",
							"rhs_mag_M229_19",
							"rhs_mag_AGM114K_4"
						};
						displayname="Heavy CAS (GAU13{HEAPT}+RKT+AGM)";
					};
				};
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