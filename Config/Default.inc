[Variables]
;-----------------------------------------------------------------------------------------------------------------------
;-- SpeedFan IDs
Drive1 = C:
DriveType1 = SSD
Drive1MaxMB = 544
Drive2 = D:
DriveType2 = HDD
Drive2MaxMB = 177
Drive3 = E:
DriveType3 = SSD
Drive3MaxMB = 562
Drive4 = P:
DriveType4 = SSD
Drive4MaxMB = 562

;-----------------------------------------------------------------------------------------------------------------------
;-- HWiNFO IDs
CurrentDownloadSensorId=0xf000ea00
CurrentDownloadSensorInstance=0x0
CurrentDownloadEntryId=0x8000002
CurrentUploadSensorId=0xf000ea00
CurrentUploadSensorInstance=0x0
CurrentUploadEntryId=0x8000003
GPUSensorId=0xe0002000
GPUSensorInstance=0x0
GPUEntryId=0x1000000
CPUSensorId=0xf0000400
CPUSensorInstance=0x0
CPUEntryId=0x10000ff
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

;-----------------------------------------------------------------------------------------------------------------------
;-- Networks
SpeedTestDL=94.4
SpeedTestUL=33.31
NetAVG=4
FastNet=100

;-----------------------------------------------------------------------------------------------------------------------
;-- Temperatures min and max values
minTemp=0
maxTemp=80

;-----------------------------------------------------------------------------------------------------------------------
;-- Widths / Heights / Margins / Paddings
BoxContentWidth = 241
BoxPadding = 10
BoxTopMargin = (#BoxPadding# + 5)
BoxLeftMargin = 0
BoxRightMargin = 0
BarHeight = 30
BarPadding = 4
GraphHeight = 129
FontOffset = 3
BoldOffset = 1
BarTextMargin = (#FontOffset# + (#BoxPadding# / 2))

;-----------------------------------------------------------------------------------------------------------------------
;-- Colors (Temperature hue: 20 / 60 / 100 / 140 / 180 / 220 / 0)
ClockColor = 0,0,0,100
ClockShadowColor = 0,0,0,20
ClockBackgroundColor = 0,0,0,32
TitleColor = 255,255,255,140
TextColor = 255,255,255,100
LineColor = 255,255,255,25
BarActiveColor=233,186,118,60
BarBackColor = 233,186,118,40
GraphBackColor = 233,186,118,20
GraphSeparatorColor = 255,255,255,64
BoxTitleColor = 255,255,255,255
BoxBackgroundColor = 0,0,0,255
FullsizeBoxBackgroundColor = 0,0,0,100
ElementBackgroundColor = 0,255,0,0
MarginBackgroundColor = 255,0,0,0
TemperatureDefault = 255,255,255,128
Temperature1 = 255,199,143,192
Temperature2 = 199,255,143,192
Temperature3 = 143,255,199,192
Temperature4 = 143,199,255,192
Temperature5 = 199,143,255,192
Temperature6 = 255,143,199,192
Temperature7 = 255,142,142,192

;-----------------------------------------------------------------------------------------------------------------------
;-- Fonts
FontFamilyDate=ITC Avant Garde Pro XLt
FontFamilyClock=ITC Avant Garde Pro Bk
FontFamily = Myriad Pro
FontSize = 8
TitleFontCase = Upper
TitleFontStyle = Bold
AntiAlias=1
Direction = Left

;-----------------------------------------------------------------------------------------------------------------------
;-- Box settings
BoxFullsizeEnabled = 1

DriveBoxTitleEnabled = 1
DriveBoxAmountOfBarGraphMeters = 4
DriveBoxAmountOfGraphMeters = 0
DriveBoxAmountOfTextMeters = 0

NetworkBoxTitleEnabled = 1
NetworkBoxAmountOfBarGraphMeters = 2
NetworkBoxAmountOfGraphMeters = 0
NetworkBoxAmountOfTextMeters = 2

SystemBoxTitleEnabled = 1
SystemBoxAmountOfBarGraphMeters = 2
SystemBoxAmountOfGraphMeters = 0
SystemBoxAmountOfTextMeters = 2

TemperatureBoxTitleEnabled = 1
TemperatureBoxAmountOfBarGraphMeters = 0
TemperatureBoxAmountOfGraphMeters = 1
TemperatureBoxAmountOfTextMeters = 7

;-----------------------------------------------------------------------------------------------------------------------
;-- Auto-generated values

FontHeight = (#FontSize# + #FontOffset#)
DisplayToDisplayMargin = #BoxPadding#
BoxWidth=(#BoxContentWidth# + #BoxPadding# * 2)
BoxFullsizeWidth=(#BoxWidth# + #BoxLeftMargin# + #BoxRightMargin#) * #BoxFullsizeEnabled#

BoxTitleHeight = (#BoxPadding# + #FontSize# + #BoxPadding# + 1)
BarGraphMeterHeight = (#DisplayToDisplayMargin# + #BarHeight# + #BarTextMargin# + #FontHeight#)
GraphMeterHeight = (#DisplayToDisplayMargin# + #GraphHeight#)
TextMeterHeight = (#BoxPadding# + #FontSize#)

BoxHeightDrives=(#DriveBoxTitleEnabled# * #BoxTitleHeight#) + (#DriveBoxAmountOfBarGraphMeters# * #BarGraphMeterHeight#) + (#DriveBoxAmountOfGraphMeters# * #GraphMeterHeight#) + (#DriveBoxAmountOfTextMeters# * #TextMeterHeight#) + #BoxPadding#
BoxHeightNetwork=(#NetworkBoxTitleEnabled# * #BoxTitleHeight#) + (#NetworkBoxAmountOfBarGraphMeters# * #BarGraphMeterHeight#) + (#NetworkBoxAmountOfGraphMeters# * #GraphMeterHeight#) + (#NetworkBoxAmountOfTextMeters# * #TextMeterHeight#) + #BoxPadding#
BoxHeightSystem=(#SystemBoxTitleEnabled# * #BoxTitleHeight#) + (#SystemBoxAmountOfBarGraphMeters# * #BarGraphMeterHeight#) + (#SystemBoxAmountOfGraphMeters# * #GraphMeterHeight#) + (#SystemBoxAmountOfTextMeters# * #TextMeterHeight#) + #BoxPadding#
BoxHeightTemperature=(#TemperatureBoxTitleEnabled# * #BoxTitleHeight#) + (#TemperatureBoxAmountOfBarGraphMeters# * #BarGraphMeterHeight#) + (#TemperatureBoxAmountOfGraphMeters# * #GraphMeterHeight#) + (#TemperatureBoxAmountOfTextMeters# * #TextMeterHeight#) + #BoxPadding#

ClockTimeWidth = (#WORKAREAWIDTH# / 2 - #BoxFullsizeWidth#)