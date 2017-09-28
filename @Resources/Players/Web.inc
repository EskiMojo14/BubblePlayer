[Player]
Measure=Plugin
Plugin=WebNowPlaying

[Cover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
CoverPath=#@#CoverWeb.png
UpdateDivider=10

[CoverAbs]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=CoverWebAddress
Substitute="":"#@#images\nocover.png"

[Track]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
Substitute="":"N/A"

[Artist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
Substitute="":"N/A"

[Progress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
