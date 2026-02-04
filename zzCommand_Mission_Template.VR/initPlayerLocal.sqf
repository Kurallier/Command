player setVariable["lastLoadout", getUnitLoadout player];

[
    "ace_arsenal_displayClosed", 
    {
        hint "Saved your respawn loadout...";        
        player setVariable["lastLoadout", getUnitLoadout player];
    }
] call CBA_fnc_addEventHandler; 