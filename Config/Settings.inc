;********************************************************************
; SysInfo SysInfoSettings File
;********************************************************************
[Variables]

; Namings
NameDrives = Laufwerke
NameSystemload = Systemauslastung
NameSysteminformation = Systeminformationen
NameTemperatures = Temperaturen
NameUpAndDownstream = Up-/Downstream

; Colors
TitleColor=255,255,255,180
LineColor=255,255,255,25
BoxColor=0,0,0,100

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
BoxHeightSystem=(99 + #BoxOffset# * 2)
BoxHeightText=(117 + #BoxOffset# * 2)
BoxHeightNetwork=(125 + #BoxOffset# * 2)

; Temperatures
maxTemp = 100