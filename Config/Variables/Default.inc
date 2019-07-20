[Variables]
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