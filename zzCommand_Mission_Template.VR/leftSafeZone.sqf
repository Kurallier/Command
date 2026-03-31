terminate inZoneH;
hint "Left Safe Zone";
player allowDamage true;

//NOTE: This is just a dirty way to not have functions. Will do both methods of 'un-safeing' the player.
player action ["SwitchWeapon", player, player, 0];
[player, currentWeapon player, false] call ace_safemode_fnc_setWeaponSafety;
