[Player]
Measure=Plugin
Plugin=GPMDPPlugin

[Cover]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Cover
CoverPath=#@#Cover.png
UpdateDivider=10

[CoverAbs]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=CoverWebAddress
Substitute="":"#@#images\nocover.png"
DynamicVariables=1

[Track]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Title
Substitute="":"N/A"

[Artist]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Artist
Substitute="":"N/A"

[Progress]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Progress
