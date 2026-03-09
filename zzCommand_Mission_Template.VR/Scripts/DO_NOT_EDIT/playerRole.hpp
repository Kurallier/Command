private _box = (_this select 0);
//Wait for the player to be valid as a variable.
waitUntil {!isNull player};
private _playerRole = roleDescription player;

//If the player role desc is empty, then get the class display name.
if (_playerRole == "")
then {
	_playerRole = ([configOf player] call BIS_fnc_displayName);
};
//Cast the display name into a string.
//NOTE: This is required.
private _string = format["%1",_playerRole];
_playerRole = _string;

//Default role
private _role = "Rifleman";

//-------------------------------------------------------- Ignore ------------------------------------------
if (("Officer" in _playerRole) OR ("Leader" in _playerRole) OR ("Radio" in _playerRole) OR ("Efreitor" in _playerRole) OR ("Sergeant" in _playerRole) OR ("RTO" in _playerRole)) 
then {
	_role = "Command"
};

if (
	(("Crew" in _playerRole) OR ("Pilot" in _playerRole) OR ("Driver" in _playerRole))
)
then {
	if(
		(("Pilot" in _playerRole) AND !(_crewPilotShareEquip))
	) 
	then {
		_role = "Pilot";
	} else{
		_role = "Crewman"
	};
};

if (("Medic" in _playerRole) OR ("Doctor" in _playerRole) OR ("Life" in _playerRole)) 
then {
	_role = "Medic"
};

if (("Marksman" in _playerRole) OR ("Sniper" in _playerRole) OR ("Sharpshooter" in _playerRole)) 
then {
	_role = "Marksman"
};

if (("Demo" in _playerRole) OR ("Engineer" in _playerRole)) 
then {
	_role = "EOD"
};

if (("Auto" in _playerRole) OR ("Gunner" in _playerRole)) 
then {
	_role = "MG"
};

if ("Grenadier" in _playerRole) 
then {
	_role = "GL"
};

if (("Anti" in _playerRole) OR ("AT" in _playerRole) OR ("Missile" in _playerRole)) 
then {
	_role = "Antitank"
};