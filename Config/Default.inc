[Variables]
;-------------------------------
;-- Variables for the boxes
;-------------------------------

; SpeedFan IDs
Drive1 = #SSD1#
; TODO Implement switch
Drive2 = #HDD1#
; TODO Implement switch

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
FontSize = (#FontHeight# > 0 ? #FontHeight# : 8)
FontCase = Upper
FontStyle = Bold
FontColorDefault = #DataColor#
; TODO Implement switch
FontFamily = #Font#
; TODO Implement switch

; General widths and heights
FontOffset=3
BoxPadding=10
BoxContentWidth=200

; Graph settings
GraphHeight = 50
GraphHeightSmall = 42

; Bar settings
BarHeight = 18

; Temperatures min and max values
minTemp=20
maxTemp=72

; Box settings
BoxSize=(#BoxContentWidth# + #BoxPadding# * 2)
BoxPaddingWithTitle = (#BoxPadding# * 2 + #FontSize# + #BoxPadding# + 1)
BoxHeightDrives=(#BoxPaddingWithTitle# + (#BoxPadding# + #GraphHeightSmall# + #BarHeight#) * 2)
BoxHeightSystem=(#BoxPaddingWithTitle# + (#BoxPadding# + #BarHeight#) * 2)
BoxHeightText=(#BoxPaddingWithTitle# + (#BoxPadding# + #FontSize#) * 5)
BoxHeightTemperature=(#BoxPaddingWithTitle# + #BoxPadding# + #GraphHeight# + (#BoxPadding# + #FontSize#) * 5)
BoxHeightNetwork=(#BoxPaddingWithTitle# + 106)
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