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
SolidColor=#BoxColor#
X=0
Y=0
W=#BoxSize#

[MyRainmeterBoxSeperator]
X=#BoxOffset#
Y=(#BoxOffset#*2+#FontHeight#)
H=1
W=#BoxContentWidth#
LineCount=1
LineWidth=1
LineColor=#LineColor#
AntiAlias=0

[MyRainmeterBoxTitleString]
X=(#BoxContentWidth#/2 + #BoxOffset#)
Y=(#BoxOffset# - #FontOffset#)
W=#BoxContentWidth#
FontFace=#Font#
FontSize=#FontHeight#
FontColor=#BoxTitleColor#
StringAlign=Center
StringStyle=#FontStyle#
StringCase=#FontCase#
AntiAlias=1

[MyRainmeterTitleString]
X=0
Y=20r
W=#BoxContentWidth#
H=#BoxHeight#
FontFace=#Font#
FontSize=#FontSize#
FontColor=#FontColorDefault#
StringStyle=Bold
StringCase=Upper
AntiAlias=#AntiA#
UpdateDivider=-1

[MyRainmeterDataString]
StringAlign=Right
X=#BoxContentWidth#
Y=0r
FontFace=#Font#
FontColor=#FontColorDefault#
FontSize=#FontSize#
AntiAlias=#AntiA#