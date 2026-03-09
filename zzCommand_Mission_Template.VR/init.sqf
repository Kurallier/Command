// Disables ambient life and enables enviroment sounds
sleep 0.1; //to make sure the following takes effect, see BIS wiki
enableEnvironment [false, true];

//Stops AI callouts
enableSentences false;

//Date & Time
setDate [2021, 10, 20, 13, 00]; //All Must Be In NUMBER format [YEAR, MONTH, DAY, HOUR, MINUTE]

//NUMBERS are percentage amounts (100% = 1, 10% = 0.1, 1% = 0.01)
0 setOvercast 0.6;			
0 setRain 0;     			//Must Have Rain Set To Manual Override
0 setLightnings 0; 			//Must Have Lighting Set To Manual Override	

ACE_maxWeightDrag = 5000; // 800 is default
ACE_maxWeightCarry = 5000; // 600 is default