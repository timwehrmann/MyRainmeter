[time]
StringAlign=Center
StringCase=None
StringStyle=Normal
StringEffect=None
FontEffectColor=0,0,0,20
FontColor=#color4#
FontFace=#LocalFontFace#
FontSize=150
AntiAlias=1
ClipString=0

[timeshadow]
StringAlign=Center
StringStyle=Normal
FontColor=#color2#
FontFace=#LocalFontFace#
FontSize=150
AntiAlias=1
ClipString=0

;-------------------------------

[Date]
StringAlign=Center
StringCase=None
StringStyle=Normal
StringEffect=shadow
FontEffectColor=#color2#
FontColor=#color4#
FontFace=#LocalFontFace#
FontSize=25
AntiAlias=1
ClipString=0

[DateShadow]
StringAlign=Center
StringCase=None
StringStyle=Normal
StringEffect=shadow
FontEffectColor=#color2#
FontColor=#color2#
FontFace=#LocalFontFace#
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

[MyRainmeterTitleString]
X=0
Y=(#FontSize# + #BoxPadding#)r
W=#BoxContentWidth#
H=#BoxHeight#
FontFace=#FontFamily#
FontSize=#FontSize#
FontColor=#TitleColor#
StringStyle=#TitleFontStyle#
StringCase=#TitleFontCase#
AntiAlias=#AntiA#
UpdateDivider=-1

[MyRainmeterDataString]
StringAlign=Right
X=#BoxContentWidth#
Y=0r
FontFace=#FontFamily#
FontColor=#TextColor#
FontSize=#FontSize#
AntiAlias=#AntiA#