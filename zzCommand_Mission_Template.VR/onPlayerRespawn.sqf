removeAllWeapons player;
removeGoggles player;
removeHeadgear player;
removeVest player;
removeUniform player;
removeAllAssignedItems player;
clearAllItemsFromBackpack player;
removeBackpack player;

player setUnitLoadout (player getVariable "lastLoadout");

["Terminate"] call BIS_fnc_EGSpectator;