[Variables]
;-------------------------------
;-- Variables for the boxes
;-------------------------------

; SpeedFan IDs
Drive1 = #SSD1#
Drive2 = #HDD1#

; Namings
NameDrives = Laufwerke
NameSystemload = Systemauslastung
NameSysteminformation = Systeminformationen
NameTemperatures = Temperaturen
NameUpAndDownstream = Up-/Downstream

; General colors
TextColor = 255,0,0,100
LineColor = 255,255,255,25
BoxTitleColor = 255,255,255,255


BoxColor=0,0,0,100
TemperatureDefault=255,255,255,100
Temperature1=255,239,143,255
Temperature2=228,167,100,255
Temperature3=144,215,91,255
Temperature4=91,215,193,255
Temperature5=170,91,215,255

; Font
FontSize = (#FontHeight# > 0 ? #FontHeight# : 16)
FontCase = Upper
FontStyle = Bold
FontColorDefault = (#DataColor# <> #NotDefined# ? #DataColor# : #TextColor#)
FontFamily = (#Font# > 0 ? #Font# : Myriad Pro)

; Width and Paddings
FontOffset=3
BoxOffset=10
BoxContentWidth=200
BoxSize=(#BoxContentWidth# + #BoxOffset# * 2)
BoxTitleHeight = (#FontSize# + #BoxOffset# + 1 + #BoxOffset#)

; Graph settings
GraphHeight = 50
GraphLabelOffset = 9
GraphHeightSmall = 42
GraphLabelOffsetSmall = 3

; Bar settings
BarHeight = 18

; Temperatures
minTemp=20
maxTemp=72

; Heights
BoxHeightDrives=(#BoxOffset# * 2 + #BoxTitleHeight# + (#GraphHeight# + #BarHeight#) * 2)
BoxHeightSystem=(73 + #BoxOffset# * 2)
BoxHeightText=(118 + #BoxOffset# * 2)
BoxHeightTemperature=(179 + #BoxOffset# * 2)
BoxHeightNetwork=(125 + #BoxOffset# * 2)
;-------------------------------



;-------------------------------
;-- Variables for clock and date
;-------------------------------
LocalFontFace=ITC Avant Garde Pro XLt
LocalFontFace2=ITC Avant Garde Pro Bk
;-------------------------------
Color2=0,0,0,20
Color4=0,0,0,100
;-------------------------------
January=Januar
February=Februar
March=Marz
April=April
May=May
June=Juni
July=Juli
August=August
September=September
October=Oktober
November=November
December=Dezember
;-------------------------------
Monday=Montag
Tuesday=Dienstag
Wednesday=Mittwoch
Thursday=Donnerstag
Friday=Freitag
Saturday=Samstag
Sunday=Sonntag
;-------------------------------