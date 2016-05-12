/*
	Author: Revo

	Description:
	Used for the music 3den preference. Will get all music tracks from CfgMusic, removes unwanted once and initilises a loop.
	Depending on the _value, the loop will be stopped.

	Parameter(s):
	value: BOOL - default: false
	Returns:
	true
*/
private ["_value","_unwantedSongs","_song","_CfgMusic"];
_value = param [0,false,[false]];

if (_value && isNil 'Enh_musicEH') then
{
	_unwantedSongs =
	[
		'click',
		'Defcon',
		'C_EA_RadioBroadcast1',
		'C_EA_RadioBroadcast2',
		'C_EA_RadioMusic1',
		'C_EA_RadioMusic2',
		'radio_music',
		'RadioAmbient1',
		'RadioAmbient2',
		'RadioAmbient3',
		'RadioAmbient4',
		'RadioAmbient5',
		'RadioAmbient6',
		'RadioAmbient7',
		'RadioAmbient8',
		'RadioAmbient9',
		'RadioAmbient10',
		'RadioAmbient11',
		'RadioAmbient12',
		'RadioAmbient13',
		'RadioAmbient14',
		'RadioAmbient15',
		'RadioAmbient16',
		'RadioAmbient17',
		'RadioAmbient18',
		'RadioAmbient19',
		'RadioAmbient20',
		'RadioAmbient21',
		'RadioAmbient22',
		'RadioAmbient23',
		'RadioAmbient24',
		'RadioAmbient25',
		'RadioAmbient26',
		'RadioAmbient27',
		'RadioAmbient28',
		'RadioAmbient29',
		'RadioAmbient30'
	];
	//Create display for song name
	if (isNull (findDisplay 313 displayCtrl 500)) then
	{
		findDisplay 313 ctrlCreate ["RscStructuredText", 500];

		(findDisplay 313 displayCtrl 500) ctrlSetPosition
		[
		   pixelGrid * pixelW * 28,
		   pixelGrid * pixelH * 37.35,
		   pixelGrid * pixelW * 11,
		   pixelGrid * pixelH * 2.25
		];
		(findDisplay 313 displayCtrl 500) ctrlCommit 0;
	//Create play list
	_CfgMusic = 'true' configClasses (configFile >> 'CfgMusic');
	Enh_songList = [];

	{
		_song = (str _x splitString '/') select 2;
		Enh_songList pushBack _song;
		false;
	} count _CfgMusic;
	Enh_songList = Enh_songList - _unwantedSongs;
	//Select new song and update display
	Enh_selectNewSong =
	{
		Enh_currentSong = (selectRandom Enh_songList);
		playMusic Enh_currentSong;
		(findDisplay 313 displayCtrl 500) ctrlSetStructuredText parseText format ["<t size ='0.65'>%1: %2</t>",localize "STR_songDisplay",Enh_currentSong];
	};

	call Enh_selectNewSong;
	//Add music event handler for infinite loop
	Enh_musicEH = addMusicEventHandler ['MusicStop',
	{
		call Enh_selectNewSong;
	}];
}
else
{
	if(!(isNil 'Enh_musicEH') && !(_value)) then
	{
		removeMusicEventHandler ['MusicStop',Enh_musicEH];
		ctrlDelete (findDisplay 313 displayCtrl 500);
		playMusic "";
		Enh_musicEH = nil;
		Enh_currentSong = nil;
		Enh_selectNewSong = nil;
		Enh_songList = nil;
	};
};

true;
