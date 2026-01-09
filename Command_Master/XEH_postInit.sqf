_index = player createDiarySubject ["CommandMain","Unit Information"];
_index = player createDiarySubject ["CommandSOPs","SOPs"];
_index = player createDiarySubject ["CommandHaven","Haven"];

// Note that these entries are added in the REVERSE order they appear in this file. 

// THIS SHOULD ALWAYS BE AT THE BOTTOM OF THE LIST
private _sunriseSunsetTime = [date] call BIS_fnc_sunriseSunsetTime;
	player createDiaryRecord
	["Diary",
		[
			"Sunrise / Sunset", 
			format
			[
				"Sunrise: %1<br/>Sunset: %2<br/>",
				[_sunriseSunsetTime select 0] call BIS_fnc_timeToString,
				[_sunriseSunsetTime select 1] call BIS_fnc_timeToString
			]
		],
		taskNull,"",False
	];;

// ADD FROM HERE DOWNWARDS

if (isClass (configFile >> "cfgPatches" >> "tfar_core")) then
{
	_index = player createDiarySubject ["TFAR","TFAR"];

	player createDiaryRecord 
	[ "TFAR",
		[
			"Radio Info for Nerds",
			"
				<font size='18' color='#A85EFF'> BLUFOR </font><br/>
					RF-7800S-TR (rifleman), 30-512 Mhz, 2 km<br/>
					AN/PRC-152 (personal), 30-512 Mhz, 5 km<br/>
					RT-1523G (ASIP) (long range), 30-87 Mhz, 20 km<br/>
					RT-1523G (ASIP) (vehicle), 30-87 Mhz, 30 km<br/>
					AN/ARC-210 (airborne), 30-87 Mhz, 40 km<br/>
				<br/><br/>
				<font size='18' color='#A85EFF'> INDFOR </font><br/>
					AN/PRC-154 (rifleman, 30-512 Mhz, 2 km<br/>
					AN/PRC148-JEM (personal), 30-512 Mhz, 5 km<br/>
					AN/PRC-155 (long range), 30-87 Mhz, 20 km<br/>
					AN/PRC-155 (vehicle), 30-87 Mhz, 30 km<br/>
					AN/ARC-164 (airborne), 30-87 Mhz, 40 km<br/>
				<br/><br/>
				<font size='18' color='#A85EFF'> OPFOR </font><br/>
					PNR-1000A (rifleman), 30-512 Mhz, 2 km<br/>
					FADAK (personal), 30-512 Mhz, 5 km<br/>
					MR3000 (long range), 30-87 Mhz, 20 km<br/>
					MR3000 (vehicle), 30-87 Mhz, 30 km<br/>
					MR6000L (airborne), 30-87 Mhz, 40 km<br/>
				<br/><br/>
				Underwater transceiver, 32-41kHz, 70-300 m (depending on waves)<br/>
			"
		],
		taskNull,"",False
	];;

	player createDiaryRecord
	[ "TFAR",
		[
			"Frequencies for Roles",
			"
				<font size='18'> High Command LR: </font><font size='18' color='#FA1414'> 60 (Coy) / 50 (Plt) Mhz</font><br/>
				<br/><br/>
				<font size='18'> Platoon Command LR: </font><font size='18' color='#FA1414'> 50 (Plt) Mhz</font><br/>
				<font size='18'> Platoon Command SR: </font><font size='18' color='#FA1414'> 49 Mhz</font><br/>
				<font size='18'> JTAC-RTO LR: </font><font size='18' color='#FA1414'> 50 (Plt) / 70 (JTAC) Mhz</font><br/>
				<font size='18'> Angels (Medics) SR: </font><font size='18' color='#FA1414'> 55 Mhz</font><br/>
				<br/><br/>
				<font size='18'> Fox One Command LR: </font><font size='18' color='#FA1414'> 50 (Plt) Mhz</font><br/>
				<font size='18'> Fox One SR: </font><font size='18' color='#FA1414'> 51 Mhz</font><br/>
				<br/><br/>
				<font size='18'> Gator Eight Command LR: </font><font size='18' color='#FA1414'> 50 (Plt) Mhz</font><br/>
				<font size='18'> Gator Eight SR: </font><font size='18' color='#FA1414'> 52 Mhz</font><br/>
				<br/><br/>
				<font size='18'> Bastion Command LR: </font><font size='18' color='#FA1414'> 50 (Plt) / 70 (JTAC) Mhz</font><br/>
				<font size='18'> Hammer SR: </font><font size='18' color='#FA1414'> 53 Mhz</font><br/>
				<font size='18'> Anvil SR: </font><font size='18' color='#FA1414'> 53 Mhz</font><br/>
				<font size='18'> Crucible SR: </font><font size='18' color='#FA1414'> 53 Mhz</font><br/>
				<br/><br/>
				<font size='18'> Haven Command LR: </font><font size='18' color='#FA1414'> 60 (Coy) Mhz</font><br/>
				<font size='18'> Haven LR: </font><font size='18' color='#FA1414'> 80 (Air) / 70 (JTAC) Mhz</font><br/>
				<br/><br/>
			"
		],
		taskNull,"",False
	];;
};

// ADD FROM HERE UPWARDS >> THESE SHOULD ALWAYS BE IN THIS ORDER FROM THE TOP!

player createDiaryRecord 
[ "CommandHaven",
	[	"Callsigns",
		"
			<font size='18' color='#A85EFF'> ' Quiet ': Small Transport [Ex: MH-6M] </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Psycho ': Small CAS [Ex: AH-6M] </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Ranger ': Medium Transport/CAS [Ex: MH-80] </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Nomad ': Heavy Transport [Ex: CH-47] </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Outlaw ': Fixed Wing CAS [Ex: F-35] </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' SuperFish ': Small VTOL [Ex: V-22] </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' ChinaFish ': Medium VTOL [Ex: Y-32] </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Fish ': Heavy VTOL [Ex: Blackfish] </font><br/>
			<br/><br/>
		"
	],
	taskNull,"",False
];;

player createDiaryRecord 
[ "CommandSOPs",
	[	"Callsigns",
		"
			<font size='18' color='#A85EFF'> ' HQ ': Unit HQ aka Zeus </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Platoon ': Platoon HQ </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Keystone ': Platoon RTO </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Bridges ': Fox-1 RTO </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Pillars ': Gator-8 RTO </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Angels ': Platoon Medics </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Bastion ': Armored Unit </font><br/>
			<br/><br/>
			<font size='18' color='#A85EFF'> ' Haven ': Air HQ </font><br/>
			<br/><br/>
		"
	],
	taskNull,"",False
];;

player createDiaryRecord 
[ "CommandSOPs",
	[	"ACE Report",
		"
			<font size='18' color='#A85EFF'> ACE Report </font><br/>
				Tells your leadership how effective you currently are<br/>
				Answer using the following colour codes<br/>
				<font color='#00FF0D'>Green</font>: You have plenty<br/>
				<font color='#FFE100'>Yellow</font>: You have some<br/>
				<font color='#FF0000'>Red</font>: You have hardly any<br/>
			<br/>
			<font size='18' color='#A85EFF'> Ammo </font><br/>
				How many magazines do you have left? <br/><br/>
				<font color='#00FF0D'>Green</font>: You have plenty of Ammo<br/>
				<font color='#FFE100'>Yellow</font>: You have some Ammo<br/>
				<font color='#FF0000'>Red</font>: You have hardly any Ammo<br/>
			<br/>
			<font size='18' color='#A85EFF'> Casualty/Medical </font><br/>
				How much medical equipment (bandages etc) do you have left?<br/><br/>
				<font color='#00FF0D'>Green</font>: You have plenty<br/>
				<font color='#FFE100'>Yellow</font>: You have some<br/>
				<font color='#FF0000'>Red</font>: You have hardly any<br/>
			<br/>
			<font size='18' color='#A85EFF'> Equipment </font><br/>
				How much equipment (AT, Grenades, Explosives etc) do you have left?<br/><br/>
				If you started with none, and then report as <font color='#00FF0D'>Green</font><br/>
				<font color='#00FF0D'>Green</font>: You have plenty<br/>
				<font color='#FFE100'>Yellow</font>: You have some<br/>
				<font color='#FF0000'>Red</font>: You have hardly any<br/>
			<br/>
		"
	],
	taskNull,"",False
];;

player createDiaryRecord 
[ "CommandMain",
	[
		"Mission Roles",
		"
			<font size='18' color='#A85EFF'> Platoon Lead </font><br/>	 
				Coordinate with the squad leaders, medics, RTO, and maintain progress through the scenario.<br/>
			<br/>
			<font size='18' color='#A85EFF'> Platoon Staff </font><br/>
				Assistant to Platoon Leader. Takes over for downed PL/SL and can act as an RTO in a pinch. Very experienced player that fills in any role and helps where needed. <br/>
			<br/>
			<font size='18' color='#A85EFF'> Platoon RTO </font><br/>
				Provide missions for Haven and give frequent updates on progress, plan of action, and unit status. Prioritize extraction and infantry movement. <br/>
			<br/>
			<font size='18' color='#A85EFF'> Platoon Medic </font><br/>
				Maintain health of Command, support Squads when requested. Make sure medics are kitted appropriately and evenly suppoting Fox and Gator. <br/>
			<br/>
			<font size='18' color='#A85EFF'> Squad Lead </font><br/>
				Enact orders by Command at your discretion. Communicate with your fireteam and provide frequent ACE reports (ammo, casualties, equipment). <br/>
			<br/>
			<font size='18' color='#A85EFF'> Squad RTO </font><br/>
				Provide missions for Haven, working closely with your SL and prioritizing your squads immediate needs. <br/>
			<br/>
			<font size='18' color='#A85EFF'> Squad Medic </font><br/>
				Keep your fireteam alive following MARCH protocol. <br/>
			<br/>
			<font size='18' color='#A85EFF'> Infantry </font><br/>
				Click on heads. Stabilize your teammates if necessary, but prioritize shooting what shot them. <br/>
			<br/>
			<font size='18' color='#A85EFF'> Bastion (Hammer+Anvil+Crucible) </font><br/>
				Provides a ring of steel for Infantry, supposedly. <br/>
			<br/>
			<font size='18' color='#A85EFF'> Haven </font><br/>
				Provide cinematic CAS (and sometimes transport) for ground teams. <br/>
			<br/>
		"
	],
	taskNull,"",False
];;