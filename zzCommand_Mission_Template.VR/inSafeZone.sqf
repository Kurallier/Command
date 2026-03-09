hint "In Safe Zone";
player allowDamage false;
player action ["SwitchWeapon", player, player, -1];

while {true} do
{
player action ["SwitchWeapon", player, player, -1];
sleep 1;
};