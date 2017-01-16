[Variables]
;-------------------------------
;-- Variables for the boxes
;-------------------------------

; SpeedFan IDs
Drive1 = C:
Drive1MaxMB = 544
Drive2 = D:
Drive2MaxMB = 177
Drive3 = E:
Drive3MaxMB = 562

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
GraphSeparatorColor = 255,255,255,64
BoxTitleColor = 255,255,255,255
BoxBackgroundColor = 0,0,0,100
TemperatureDefault = 255,255,255,100
Temperature1 = 255,199,143,255
Temperature2 = 199,255,143,255
Temperature3 = 143,255,199,255
Temperature4 = 143,199,255,255
Temperature5 = 199,143,255,255
Temperature6 = 255,143,199,255
DebugColor = 255,0,0,0

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
FontOffset = 3
BoldOffset = 1
BoxPadding = 10
BoxContentWidth = 440
BoxTopMargin = (#BoxPadding# + 5)
BoxLeftMargin = (#BoxPadding# + 500)
BoxRightMargin = (#BoxPadding# + 5)
DisplayToDisplayMargin = #BoxPadding#

; Graph settings
GraphHeight = 124
GraphHeightSmall = 44

; Bar settings
BarHeight = 19
BarPadding = 4

; Temperatures min and max values
minTemp=0
maxTemp=80
TempSensorGraphics=0
TempSensorCPU=9
TempSensorSystem=1
TempSensorDrive1=7
TempSensorDrive2=8
TempSensorDrive3=13

; Box settings
BoxSize=(#BoxContentWidth# + #BoxPadding# * 2)
BoxPaddingWithTitle = (#BoxPadding# * 2 + #FontSize# + #BoxPadding# + 1)
BoxHeightDrives=(#BoxPaddingWithTitle# + (#BoxPadding# + #GraphHeightSmall# + #BarHeight#) * 3)
BoxHeightSystem=(#BoxPaddingWithTitle# + (#BoxPadding# + #BarHeight#) * 2)
BoxHeightText=(#BoxPaddingWithTitle# + (#BoxPadding# + #FontSize#) * 5)
BoxHeightNetwork=(#BoxPaddingWithTitle# + (#BoxPadding# + #GraphHeightSmall# + #BarHeight#) * 2)
BoxHeightTemperature=(#BoxPaddingWithTitle# + #BoxPadding# + #GraphHeight# + (#BoxPadding# + #FontSize#) * 6)