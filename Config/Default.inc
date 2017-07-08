[Variables]
;---------------------------------------------------
;-- SpeedFan IDs
Drive1 = C:
Drive1MaxMB = 544
Drive2 = D:
Drive2MaxMB = 177
Drive3 = E:
Drive3MaxMB = 562
Drive4 = F:
Drive4MaxMB = 562

;---------------------------------------------------
;-- Networks
SpeedTestDL=94.4
SpeedTestUL=33.31
NetAVG=4
FastNet=100

;---------------------------------------------------
;-- Colors
ClockColor = 0,0,0,100
ClockShadowColor = 0,0,0,20
TitleColor = 255,255,255,140
TextColor = 255,255,255,100
LineColor = 255,255,255,25
BarActiveColor=233,186,118,60
BarBackColor = 233,186,118,40
GraphBackColor = 233,186,118,20
GraphSeparatorColor = 255,255,255,64
BoxTitleColor = 255,255,255,255
BoxBackgroundColor = 0,0,0,100
TemperatureDefault = 255,255,255,128
Temperature1 = 255,199,143,255
Temperature1Max = 255,199,143,128
Temperature2 = 199,255,143,255
Temperature2Max = 199,255,143,128
Temperature3 = 143,255,199,255
Temperature3Max = 143,255,199,128
Temperature4 = 143,199,255,255
Temperature4Max = 143,199,255,128
Temperature5 = 199,143,255,255
Temperature5Max = 199,143,255,128
Temperature6 = 255,143,199,255
Temperature6Max = 255,143,199,128
DebugColor = 255,0,0,0

;---------------------------------------------------
;-- Fonts
FontFamilyDate=ITC Avant Garde Pro XLt
FontFamilyClock=ITC Avant Garde Pro Bk
FontFamily = Myriad Pro
FontSize = 8
TitleFontCase = Upper
TitleFontStyle = Bold
AntiAlias=1

;---------------------------------------------------
;-- Widths / Heights / Margins / Paddings
FontOffset = 3
FontHeight = (#FontSize# + #FontOffset#)
BoldOffset = 1
BoxPadding = 10
BoxContentWidth = 240
BoxTopMargin = (#BoxPadding# + 5)
BoxLeftMargin = (#BoxPadding# + 5)
BoxRightMargin = (#BoxPadding# + 5)
BarTextMargin = (#FontOffset# + (#BoxPadding# / 2))
DisplayToDisplayMargin = #BoxPadding#
RowText = (#BoxPadding# + #FontSize#)
RowBarGraph = (#BarHeight# + #BarTextMargin# + #FontHeight# + #BoxPadding#)

;---------------------------------------------------
;-- Graph settings
Direction = Left
GraphHeight = 124
GraphHeightSmall = 44

;---------------------------------------------------
;-- Bar settings
BarHeight = 30
BarPadding = 4

;---------------------------------------------------
;-- Temperatures min and max values
minTemp=0
maxTemp=80

;---------------------------------------------------
;-- HWiNFO IDs
GPUSensorId=0xe0002000
GPUSensorInstance=0x0
GPUEntryId=0x1000000
CPUSensorId=0xF0000400
CPUSensorInstance=0x0
CPUEntryId=0x100007f
SystemSensorId=0xf7067950
SystemSensorInstance=0x0
SystemEntryId=0x1000000
Drive1SensorId=0xf0000100
Drive1SensorInstance=0x0
Drive1EntryId=0x1000001
Drive2SensorId=0xf0000100
Drive2SensorInstance=0x3
Drive2EntryId=0x1000000
Drive3SensorId=0xf0000100
Drive3SensorInstance=0x1
Drive3EntryId=0x1000001
Drive4SensorId=0xf0000100
Drive4SensorInstance=0x2
Drive4EntryId=0x1000001

;---------------------------------------------------
;-- Box settings
BoxSize=(#BoxContentWidth# + #BoxPadding# * 2)
BoxPaddingWithTitle = (#BoxPadding# * 2 + #FontSize# + #BoxPadding# + 1)
BoxHeightDrives=(#BoxPaddingWithTitle# + #RowBarGraph# * 4)
BoxHeightSystem=(#BoxPaddingWithTitle# + #RowText# * 2 + #RowBarGraph# * 2)
BoxHeightText=(#BoxPaddingWithTitle# + #RowText# * 5)
BoxHeightNetwork=(#BoxPaddingWithTitle# + #RowText# * 2 + #RowBarGraph# * 2)
BoxHeightTemperature=(#BoxPaddingWithTitle# + #BoxPadding# + #GraphHeight# + #RowText# * 6)