[Player]
Measure=Plugin
Plugin=NowPlaying
PlayerName=iTunes
PlayerType=State

[Cover]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[Player]
PlayerType=Cover
UpdateDivider=10

[CoverAbs]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[Player]
PlayerType=Cover
Substitute="":"#@#images\nocover.png"
UpdateDivider=50

[Track]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[Player]
PlayerType=TITLE
Substitute="":"N/A"

[Artist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[Player]
PlayerType=ARTIST
Substitute="":"N/A"

[Progress]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[Player]
PlayerType=Progress
