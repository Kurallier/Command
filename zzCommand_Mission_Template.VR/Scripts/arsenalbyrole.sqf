// README:
	//To use this script it must be called from initPlayerLocal.sqf!
	//Example usage: [arsenal_1] execVM "arsenalbyrole.sqf";

	//NOTE:
	//This script will only apply to the object with the variable name,
	//if you have multiple arsenals, you must call this script for each of them.
//

#include "DO_NOT_EDIT\playerRole.hpp"

#include "DO_NOT_EDIT\PremadeArrays.hpp"

private _CMD_BscAIO = _CMD_BscMedical + _CMD_BasicItems + _CMD_BallisticMasks + _CMD_Grenades + _CMD_TFAR;

/* 
 	// These are premade lists which contain items that EVERY mission should include, aka these are basic items. 
	// DO NOT EDIT THE "DO_NOT_EDIT_PREMADES.hpp" UNLESS YOU KNOW WHAT YOU ARE DOING!

	Arsenal Defines:
	_CMD_BscMedical = Basic medical that everyone should have access to.
	_CMD_AdvMedical = Advanced medical that only medics should have access to.
	_CMD_BasicItems = Basics that everyone should have access to.
	_CMD_TFAR = Basic TFAR radio that everyone should have access to.
	_CMD_Explosives = Explosives/Clackers/Detector that EOD/Engineer should have access to.
	_CMD_BallisticMasks = Ballistic masks that everyone should have access to.
	_CMD_Grenades = Basic grenades that everyone should have access to.
	_CMD_PilotEquipment = HGU Helmets and Vests that only pilots should have access to.

	AIO Defines:
	_CMD_BscAIO = _CMD_BscMedical + _CMD_BasicItems + _CMD_BallisticMasks + _CMD_Grenades + _CMD_TFAR
*/

//--- E D I T   F R O M   H E R E   O N L Y --------------

//------------ Set this to true to have pilots and crewman share the same equipment ------------------
_crewPilotShareEquip=false;

private _CMD_MssEquip=
[
	// Insert string of mission-specific Uniform/Vest/Backpack classnames here (everyone has access to these) (ex: )
];

private _CMD_MssAmmo=
[
	// Insert string of mission-specific ammo-mags/supply classnames here (everyone has access to these) (ex: )
];

private _CMD_MssRfn=
[
	// Insert string of mission-specific rifles/guns classnames here (everyone has access to these) (ex: )
];

//--------------- Put all role specific equipment below --------------------------
//NOTE: You can make a loadout and then press the "Export" button to make a specific loadout.
switch (_role) do {

case "Command": {
		systemChat "Arsenal Role: Command";
		[_box, _CMD_BscAIO + _CMD_AdvMedical + [ 

			// Insert Command Loadout here, below this line
			//Example:"rhs_weap_ak74n_gp25","ACE_M26_Clacker"

		],false] call ace_arsenal_fnc_initBox;
	};

case "Crewman": {
		systemChat "Arsenal Role: Crewman";
		[_box, _CMD_BscAIO + _CMD_AdvMedical + [ 

			// Insert Crewman Loadout here, below this line

	
		],false] call ace_arsenal_fnc_initBox;
	};

case "Pilot": {
		systemChat "Arsenal Role: Pilot";
		[_box, _CMD_BscAIO + _CMD_AdvMedical + _CMD_PilotEquipment + [

			// Insert Pilot Loadout here, below this line

		
		],false] call ace_arsenal_fnc_initBox;
	};

case "Medic": {
		systemChat "Arsenal Role: Medic";
		[_box, _CMD_BscAIO + _CMD_AdvMedical + [

			// Insert Medic Loadout here, below this line

		
		],false] call ace_arsenal_fnc_initBox;
	};

case "Marksman": {
		systemChat "Arsenal Role: Marksman";
		[_box, _CMD_BscAIO + [

			// Insert Marksman Loadout here, below this line
			
	
		],false] call ace_arsenal_fnc_initBox;

	};

case "EOD": {
		systemChat "Arsenal Role: EOD";
		[_box, _CMD_BscAIO + _CMD_Explosives + [

			// Insert Engineer Loadout here, below this line

		
		],false] call ace_arsenal_fnc_initBox;
	};

case "MG": {
		systemChat "Arsenal Role: MG";
		[_box, _CMD_BscAIO + [

			// Insert Autorifleman Loadout here, below this line

		
		],false] call ace_arsenal_fnc_initBox;

	};

case "GL": {
		systemChat "Arsenal Role: GL";
		[_box, _CMD_BscAIO + [
			
			// Insert Grenadier Loadout here, below this line
			

		],false] call ace_arsenal_fnc_initBox;
	};

case "Antitank": {
		systemChat "Arsenal Role: Antitank";
		[_box, _CMD_BscAIO + [

			// Insert Anti-Tank Loadout here, below this line


		],false] call ace_arsenal_fnc_initBox;
	};

default {
		systemChat "Arsenal Role: Rifleman";
		[_box, _CMD_BscAIO, false] call ace_arsenal_fnc_initBox;
	};


};