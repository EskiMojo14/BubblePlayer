[Player]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify
PlayerType=State

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

[ProgressDec]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress
Decimals=2
Substitute="nan":"0"

[Progress]
Measure=Calc
Formula=ProgressDec*100
