/*
	Author: Revo

	Description:
	Used for the music 3den preference. Will get all music tracks from CfgMusic, removes unwanted once and initilises a loop.
	Depending on the _value, the loop will be stopped.

	Parameter(s):
	-
	Returns:
	true
*/
private ["_value","_unwantedSongs","_song","_CfgMusic"];
_value = param [0,false,[false]];

if (_value) then 
{
	_unwantedSongs = ['click','Defcon','C_EA_RadioBroadcast1','C_EA_RadioBroadcast2','C_EA_RadioMusic1','C_EA_RadioMusic2','radio_music','RadioAmbient1','RadioAmbient2','RadioAmbient4','RadioAmbient5','RadioAmbient6','RadioAmbient7','RadioAmbient8','RadioAmbient9','RadioAmbient10','RadioAmbient12','RadioAmbient14','RadioAmbient15','RadioAmbient16','RadioAmbient17','RadioAmbient18','RadioAmbient19','RadioAmbient20','RadioAmbient21','RadioAmbient22','RadioAmbient23','RadioAmbient24','RadioAmbient25','RadioAmbient26','RadioAmbient27','RadioAmbient28','RadioAmbient29','RadioAmbient30'];
	_CfgMusic = 'true' configClasses (configFile >> 'CfgMusic');
	Revo_songList = [];
	{
		_song = (str _x splitString '/') select 2;
		Revo_songList pushBack _song;
	} forEach _CfgMusic;
	Revo_songList = Revo_songList - _unwantedSongs;
	playMusic (selectRandom Revo_songList);
	Revo_musicEH = addMusicEventHandler ['MusicStop',
	{
	playMusic (selectRandom Revo_songList)
	}];
} 
else 
{
	if(!(isNil 'Revo_musicEH')) then 
	{
		removeMusicEventHandler ['MusicStop',Revo_musicEH];
		0 fadeMusic 0;
	};
};

true;
