;-----------------------------------------------------------------------------------------------------------------------
;--- Classes for "Date" meters

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

;-----------------------------------------------------------------------------------------------------------------------
;--- Classes for box backgrounds

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

[MyRainmeterTextDisplayContainer]
X=0
Y=(#DisplayToDisplayMargin# - #FontOffset# * 2) + #FontOffset#
W=#BoxContentWidth#
H=0

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

;-----------------------------------------------------------------------------------------------------------------------
;--- Generic classes

[MyRainmeterTitleString]
X=(#BoxLeftMargin# + #DisplayToDisplayMargin#)
Y=0r
H=#FontHeight#
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#TitleColor#
AntiAlias=#AntiAlias#
StringStyle=#TitleFontStyle#
StringCase=#TitleFontCase#
UpdateDivider=-1

[MyRainmeterDataString]
X=#BoxContentWidth#r
Y=0r
H=#FontHeight#
FontFace=#FontFamily#
FontColor=#TextColor#
FontSize=#FontSize#
AntiAlias=#AntiAlias#
StringAlign=Right
NumOfDecimals=1
AutoScale=1

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

;-----------------------------------------------------------------------------------------------------------------------
;-- Classes for "Bar" meters

[MyRainmeterTitleStringBarLeft]
X=(0 + #BarPadding#)r
Y=(#BarPadding# - #BoldOffset#)r
StringAlign=Left

[MyRainmeterDataStringBarRight]
X=(#BoxContentWidth# - #BarPadding# * 2)r
Y=0r
StringAlign=Right

;-----------------------------------------------------------------------------------------------------------------------
;-- Classes for "GraphAndBar" meters

[MyRainmeterTitleStringGraphTopCentered]
X=(#BoxLeftMargin# + #DisplayToDisplayMargin# + #BoxContentWidth# / 2)
Y=(#DisplayToDisplayMargin# + #FontOffset# - #BoldOffset#)
StringAlign=Center

[MyRainmeterTitleStringGraphBottomCentered]
X=0r
Y=(#DisplayToDisplayMargin# + #FontOffset# + #GraphHeightSmall#)
StringAlign=Center

[MyRainmeterDataStringBarLeft]
X=#BarPadding#r
Y=#BarPadding#r
StringAlign=Left

;-----------------------------------------------------------------------------------------------------------------------
;-- Classes for "GraphAndBarCondensed" meters

[MyRainmeterGraphCondensed]
X=0r
Y=0r
H=#BarHeight#
W=#BoxContentWidth#

[MyRainmeterTitleStringGraphAndBarCondensed]
Y=(#BarHeight# + #BarTextMargin#)r

[MyRainmeterDataStringGraphAndBarCondensed]
H=#BarHeight#
W=#BoxContentWidth#
Y=((#BarHeight# / 2) + #DisplayToDisplayMargin#)
X=(#BoxContentWidth# + #BoxLeftMargin# + #BoxPadding#)
StringAlign=RightCenter

[MyRainmeterDataStringFreePercentual]
NumOfDecimals=1
Percentual=1
Text="#LabelFree#: %1%"

[MyRainmeterDataStringBytesSecond]
NumOfDecimals=0
Text="%1B/s"

[MyRainmeterDataStringPercentual]
NumOfDecimals=0
Percentual=1
Text="%1%"

[MyRainmeterDataStringBytes]
NumOfDecimals=1
Text="%1B / %2B"

;-----------------------------------------------------------------------------------------------------------------------
;-- Classes for "Temperature" meter

[MyRainmeterTitleStringTemperature]
Y=(#FontSize# + #BoxPadding#)r

[MyRainmeterDataStringTemperature]
AutoScale=0
NumOfDecimals=0
Text="%1 / %2 °C"

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