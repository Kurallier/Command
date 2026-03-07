player setVariable["lastLoadout", getUnitLoadout player];

[
    "ace_arsenal_displayClosed", 
    {
        hint "Saved your respawn loadout...";        
        player setVariable["lastLoadout", getUnitLoadout player];
    }
] call CBA_fnc_addEventHandler; 


// Arsenal by Role
    // Set [arsenal_1] to the variable name of the arsenal. 
    // To add multiple arsenals, add another new line using the example.
    // Copy and pasting the template arsenal will assign it as arsenal_1_1

// Example: [ArsenalVariableName] execVM "arsenalbyrole.sqf";

[arsenal_1] execVM "scripts\arsenalbyrole.sqf";