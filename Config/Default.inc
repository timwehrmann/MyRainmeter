[Variables]
;-------------------------------
;-- Variables for the boxes
;-------------------------------

; SpeedFan IDs
Drive1 = C:
Drive2 = D:

; Networks
SpeedTestDL=94.4
SpeedTestUL=33.31
NetAVG=4
FastNet=100

; General colors
ClockColor = 0,0,0,100
ClockShadowColor = 0,0,0,20
TitleColor = 255,255,255,140
TextColor = 255,255,255,100
LineColor = 255,255,255,25
BarActiveColor=255,255,255,60
BarBackColor = 255,255,255,40
GraphBackColor = 255,255,255,20
BoxTitleColor = 255,255,255,255
BoxBackgroundColor = 0,0,0,100
TemperatureDefault = 255,255,255,100
Temperature1 = 255,239,143,255
Temperature2 = 228,167,100,255
Temperature3 = 144,215,91,255
Temperature4 = 91,215,193,255
Temperature5 = 170,91,215,255
DebugColor = 255,0,0,100

; Font
FontFamilyDate=ITC Avant Garde Pro XLt
FontFamilyClock=ITC Avant Garde Pro Bk
FontFamily = Myriad Pro
FontHeight = 8
FontSize = (#FontHeight# > 0 ? #FontHeight# : 8)
TitleFontCase = Upper
TitleFontStyle = Bold
AntiAlias=1

; General widths and heights
FontOffset=3
BoldOffset=1
BoxPadding=10
BoxContentWidth=200
BoxToBoxMargin=(#BoxPadding# + 5)
DisplayToDisplayMargin=#BoxPadding#

; Graph settings
GraphHeight = 50
GraphHeightSmall = 42

; Bar settings
BarHeight = 18
BarPadding = 3

; Temperatures min and max values
minTemp=0
maxTemp=80
TempSensorGraphics=0
TempSensorCPU=9
TempSensorSystem=1
TempSensorDrive1=7
TempSensorDrive2=8

; Box settings
BoxSize=(#BoxContentWidth# + #BoxPadding# * 2)
BoxPaddingWithTitle = (#BoxPadding# * 2 + #FontSize# + #BoxPadding# + 1)
BoxHeightDrives=(#BoxPaddingWithTitle# + (#BoxPadding# + #GraphHeightSmall# + #BarHeight#) * 2)
BoxHeightSystem=(#BoxPaddingWithTitle# + (#BoxPadding# + #BarHeight#) * 2)
BoxHeightText=(#BoxPaddingWithTitle# + (#BoxPadding# + #FontSize#) * 5)
BoxHeightTemperature=(#BoxPaddingWithTitle# + #BoxPadding# + #GraphHeight# + (#BoxPadding# + #FontSize#) * 5)
BoxHeightNetwork=(#BoxPaddingWithTitle# + (#BoxPadding# + #GraphHeightSmall# + #BarHeight#) * 2)