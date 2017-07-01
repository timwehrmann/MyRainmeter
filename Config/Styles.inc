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
X=#BoxLeftMargin#
Y=#BoxTopMargin#
W=#BoxSize#

[MyRainmeterBoxTitleString]
X=(#BoxContentWidth#/2 + #BoxPadding# + #BoxLeftMargin#)
Y=(#BoxPadding# - #FontOffset# + #BoxTopMargin#)
W=#BoxContentWidth#
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#BoxTitleColor#
StringAlign=Center
StringStyle=#TitleFontStyle#
StringCase=#TitleFontCase#
AntiAlias=#AntiAlias#

[MyRainmeterBoxSeperator]
X=(#BoxPadding# + #BoxLeftMargin#)
Y=(#BoxPadding# * 2 + #FontSize# + #BoxTopMargin#)
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
X=(#BoxLeftMargin# + #DisplayToDisplayMargin#)
Y=0r
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#TitleColor#
AntiAlias=#AntiAlias#
StringStyle=#TitleFontStyle#
StringCase=#TitleFontCase#
UpdateDivider=-1

[MyRainmeterTitleDataString]
UpdateDivider=1
NumOfDecimals=1
AutoScale=1

[MyRainmeterTitleStringGraphTopCentered]
X=(#BoxLeftMargin# + #DisplayToDisplayMargin# + #BoxContentWidth# / 2)
Y=(#DisplayToDisplayMargin# + #FontOffset# - #BoldOffset#)
StringAlign=Center

[MyRainmeterTitleStringGraphBottomCentered]
X=0r
Y=(#DisplayToDisplayMargin# + #FontOffset# + #GraphHeightSmall#)
StringAlign=Center

[MyRainmeterTitleStringBarLeft]
X=(0 + #BarPadding#)r
Y=(#BarPadding# - #BoldOffset#)r
StringAlign=Left

[MyRainmeterTitleStringTemperatureList]
Y=(#FontSize# + #BoxPadding#)r

[MyRainmeterDataString]
X=#BoxContentWidth#r
Y=0r
FontFace=#FontFamily#
FontColor=#TextColor#
FontSize=#FontSize#
AntiAlias=#AntiAlias#
StringAlign=Right
NumOfDecimals=1
AutoScale=1

[MyRainmeterDataStringCurrentTemp]
X=-34r
NumOfDecimals=0
Text="%1"

[MyRainmeterDataStringMaxTemp]
NumOfDecimals=0
Text="/ %1°C"

[MyRainmeterDataStringBarLeft]
X=#BarPadding#r
Y=#BarPadding#r
StringAlign=Left

[MyRainmeterDataStringBarRight]
X=(#BoxContentWidth# - #BarPadding# * 2)r
Y=0r
StringAlign=Right

;-------------------------------

[MyRainmeterBoxToBoxMargin]
SolidColor=#DebugColor#
X=0
Y=0
W=(#BoxSize# + #BoxLeftMargin# + #BoxRightMargin#)
H=#BoxTopMargin#

[MyRainmeterDisplayToDisplayMargin]
SolidColor=#DebugColor#
X=0
Y=0
W=(#BoxSize# + #BoxLeftMargin# + #BoxRightMargin#)
H=#DisplayToDisplayMargin#

[MyRainmeterGraph]
X=(#BoxLeftMargin# + #DisplayToDisplayMargin#)
Y=#DisplayToDisplayMargin#r
H=#GraphHeightSmall#
W=#BoxContentWidth#
GraphStart=#Direction#
SolidColor=#GraphBackColor#
LineColor=#TemperatureDefault#
LineWidth=#LineWidth#
LineCount=1
AntiAlias=0
DynamicVariables=1

[MyRainmeterBar]
X=(#BoxLeftMargin# + #DisplayToDisplayMargin#)
Y=#DisplayToDisplayMargin#r
H=#BarHeight#
W=#BoxContentWidth#
BarColor=#BarActiveColor#
SolidColor=#BarBackColor#
BarOrientation=Horizontal

;-------------------------------

[MyRainmeterOrientationLine]
X=(#BoxLeftMargin# + #DisplayToDisplayMargin#)
Y=(#GraphHeight# * 0.25)r
H=1
W=#BoxContentWidth#
SolidColor=#GraphSeparatorColor#

[MyRainmeterOrientationTitle]
X=#BoxContentWidth#r
Y=0r
W=#BoxContentWidth#
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#GraphSeparatorColor#
AntiAlias=1
StringAlign=Right
StringCase=#TitleFontCase#
UpdateDivider=-1