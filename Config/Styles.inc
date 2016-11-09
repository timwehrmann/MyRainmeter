[Time]
StringAlign=Center
StringCase=None
StringStyle=Normal
StringEffect=None
FontEffectColor=#ClockShadowColor#
FontColor=#ClockColor#
FontFace=#FontFamilyClock#
FontSize=150
AntiAlias=1
ClipString=0

[TimeShadow]
StringAlign=Center
StringStyle=Normal
FontColor=#ClockShadowColor#
FontFace=#FontFamilyClock#
FontSize=150
AntiAlias=1
ClipString=0

[Date]
StringAlign=Center
StringCase=None
StringStyle=Normal
StringEffect=shadow
FontEffectColor=#ClockShadowColor#
FontColor=#ClockColor#
FontFace=#FontFamilyDate#
FontSize=25
AntiAlias=1
ClipString=0

[DateShadow]
StringAlign=Center
StringCase=None
StringStyle=Normal
StringEffect=shadow
FontEffectColor=#ClockShadowColor#
FontColor=#ClockShadowColor#
FontFace=#FontFamilyDate#
FontSize=25
AntiAlias=1
ClipString=0

;-------------------------------

[MyRainmeterBoxBackground]
SolidColor=#BoxBackgroundColor#
X=0
Y=#BoxToBoxMargin#
W=#BoxSize#

[MyRainmeterBoxTitleString]
X=(#BoxContentWidth#/2 + #BoxPadding#)
Y=(#BoxPadding# - #FontOffset# + #BoxToBoxMargin#)
W=#BoxContentWidth#
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#BoxTitleColor#
StringAlign=Center
StringStyle=#TitleFontStyle#
StringCase=#TitleFontCase#
AntiAlias=#AntiAlias#

[MyRainmeterBoxSeperator]
X=#BoxPadding#
Y=(#BoxPadding# * 2 + #FontSize# + #BoxToBoxMargin#)
H=1
W=#BoxContentWidth#
LineCount=1
LineWidth=1
LineColor=#LineColor#
AntiAlias=0

;-------------------------------

[MyRainmeterTextDisplayContainer]
X=0
Y=(#DisplayToDisplayMargin# - #FontOffset# * 2) + #FontOffset#
W=#BoxContentWidth#
H=0

[MyRainmeterTitleString]
X=0
Y=0r
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#TitleColor#
AntiAlias=#AntiAlias#
StringStyle=#TitleFontStyle#
StringCase=#TitleFontCase#
UpdateDivider=-1

[MyRainmeterTitleStringGraphTopCentered]
X=(#BoxContentWidth# / 2)
Y=(#DisplayToDisplayMargin# + #FontOffset# + #GraphHeightSmall#)
StringAlign=Center

[MyRainmeterTitleStringBarLeft]
X=#BarPadding#
Y=(#BarPadding# - #BoldOffset#)r
StringAlign=Left

[MyRainmeterDataString]
X=#BoxContentWidth#
Y=0r
FontFace=#FontFamily#
FontColor=#TextColor#
FontSize=#FontSize#
AntiAlias=#AntiAlias#
StringAlign=Right
NumOfDecimals=1
AutoScale=1

[MyRainmeterDataStringBarLeft]
X=#BarPadding#
Y=#BarPadding#r
StringAlign=Left

[MyRainmeterDataStringBarRight]
X=(#BoxContentWidth# - #BarPadding#)
Y=0r
StringAlign=Right

;-------------------------------

[MyRainmeterBoxToBoxMargin]
SolidColor=#DebugColor#
X=0
Y=0
W=#BoxSize#
H=#BoxToBoxMargin#

[MyRainmeterDisplayToDisplayMargin]
SolidColor=#DebugColor#
X=0
Y=0
W=#BoxContentWidth#
H=#DisplayToDisplayMargin#

[MyRainmeterGraph]
X=0
Y=#DisplayToDisplayMargin#r
H=#GraphHeightSmall#
W=#BoxContentWidth#
GraphStart=#Direction#
SolidColor=#GraphBackColor#
LineColor=#TemperatureDefault#
LineWidth=#LineWidth#
LineCount=1
AntiAlias=0
AutoScale=1
DynamicVariables=1

[MyRainmeterBar]
X=0
Y=#DisplayToDisplayMargin#r
H=#BarHeight#
W=#BoxContentWidth#
BarColor=#BarActiveColor#
SolidColor=#BarBackColor#
BarOrientation=Horizontal

;-------------------------------

[MyRainmeterOrientationLine]
X=0
Y=(#GraphHeight# * 0.25)r
H=1
W=#BoxContentWidth#
SolidColor=#GraphSeparatorColor#

[MyRainmeterOrientationTitle]
X=#BoxContentWidth#
Y=0r
W=#BoxContentWidth#
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#GraphSeparatorColor#
AntiAlias=1
StringAlign=Right
StringCase=#TitleFontCase#
UpdateDivider=-1