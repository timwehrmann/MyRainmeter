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
Y=0
W=#BoxSize#

[MyRainmeterBoxSeperator]
X=#BoxPadding#
Y=(#BoxPadding#*2+#FontSize#)
H=1
W=#BoxContentWidth#
LineCount=1
LineWidth=1
LineColor=#LineColor#
AntiAlias=0

[MyRainmeterBoxTitleString]
X=(#BoxContentWidth#/2 + #BoxPadding#)
Y=(#BoxPadding# - #FontOffset#)
W=#BoxContentWidth#
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#BoxTitleColor#
StringAlign=Center
StringStyle=#TitleFontStyle#
StringCase=#TitleFontCase#
AntiAlias=1

;-------------------------------

[MyRainmeterTitleString]
X=0
Y=0r
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#TitleColor#
AntiAlias=#AntiA#
StringStyle=#TitleFontStyle#
StringCase=#TitleFontCase#
UpdateDivider=-1

[MyRainmeterTitleStringGraphTopCentered]
X=(#BoxContentWidth# / 2)
Y=(#FontOffset# - 1)
StringAlign=Center

[MyRainmeterDataString]
X=#BoxContentWidth#
Y=0r
FontFace=#FontFamily#
FontColor=#TextColor#
FontSize=#FontSize#
AntiAlias=#AntiA#
StringAlign=Right
NumOfDecimals=1
AutoScale=1

[MyRainmeterDataStringBarLeft]
X=#BarPadding#
Y=#FontOffset#r
StringAlign=Left

[MyRainmeterDataStringBarRight]
X=(#BoxContentWidth# - #BarPadding#)
Y=0r
StringAlign=Right

;-------------------------------

[MyRainmeterGraph]
X=0
Y=0r
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
Y=0
H=#BarHeight#
W=#BoxContentWidth#
BarColor=#BarFrontColor#
SolidColor=#BarBackColor#
BarOrientation=Horizontal