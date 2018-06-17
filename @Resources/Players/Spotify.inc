[Player]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify
PlayerType=State

[Cover]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumArt
Res=640
CoverPath=#@#CoverSpotify.png

[CoverAbs]
Measure=Plugin
Plugin=SpotifyPlugin
Type=CoverPath
DynamicVariables=1
UpdateDivider=50
Substitute="":"#@#images\nocover.png"

[Track]
Measure=Plugin
Plugin=SpotifyPlugin
Type=TrackName
Substitute="":"N/A"

[Artist]
Measure=Plugin
Plugin=SpotifyPlugin
Type=ArtistName
Substitute="":"N/A"

[Progress]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress
Decimals=2
Substitute="nan":"0"
