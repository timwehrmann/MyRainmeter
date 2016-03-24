[Variables]
;-------------------------------
;-- Variables for the boxes
;-------------------------------
; Namings
NameDrives = Laufwerke
NameSystemload = Systemauslastung
NameSysteminformation = Systeminformationen
NameTemperatures = Temperaturen
NameUpAndDownstream = Up-/Downstream

; Colors
TitleColor=255,255,255,100
LineColor=255,255,255,25
BoxColor=0,0,0,100
TemperatureGPU=255,239,143,255
TemperatureCPU=228,167,100,255

; Font
FontCase=Upper
FontStyle=Bold

; Width and Paddings
FontOffset=3
BoxOffset=10
BoxContentWidth=200
BoxSize=(#BoxContentWidth# + #BoxOffset# * 2)

; Heights
BoxHeightDrives=(159 + #BoxOffset# * 2)
BoxHeightSystem=(73 + #BoxOffset# * 2)
BoxHeightText=(118 + #BoxOffset# * 2)
BoxHeightTemperature=(179 + #BoxOffset# * 2)
BoxHeightNetwork=(125 + #BoxOffset# * 2)

; Temperatures
minTemp=0
maxTemp=100
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