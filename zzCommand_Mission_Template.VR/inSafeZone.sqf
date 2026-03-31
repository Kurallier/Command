//README:
//To use this script, simply select if you wish to let players ads while in the safezone.
//NOTE: If players are fast enough, they can circumvent the forced safety and still shoot.
//but if this is a common issue my recomendation is to kick them until they stop :)

hint "In Safe Zone";
player allowDamage false;

private _allow_ads = flase;

private _no_ads = {
	player action ["SwitchWeapon", player, player, -1];
	while {true} do
	{
		player action ["SwitchWeapon", player, player, -1];
		sleep 1;
	};

};

private _can_ads = {
	player action ["SwitchWeapon", player, player, -1];
	while {true} do
	{
		player action ["SwitchWeapon", player, player, -1];
		sleep 1;
	};

};

if (_allow_ads) 
then {
	call _no_ads;
}
else {
	call _can_ads;
};
