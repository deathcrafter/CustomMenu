
[ContextOption1]
Meter=String
Text=Change color to white
MeterStyle=ContextStyle
Container=ContextContainer
LeftMouseUpAction=[!SetOption MeterString SolidColor "255,255,255" "CustomContextMenu"][!UpdateMeter MeterString "CustomContextMenu"][!Redraw "CustomContextMenu"][!DeactivateConfig]

[ContextOption2]
Meter=String
Text=Change color to red
MeterStyle=ContextStyle
Container=ContextContainer
LeftMouseUpAction=[!SetOption MeterString SolidColor "255,0,0" "CustomContextMenu"][!UpdateMeter MeterString "CustomContextMenu"][!Redraw "CustomContextMenu"][!DeactivateConfig]

[ContextOption3]
Meter=String
Text=Permanent colors
MeterStyle=ContextStyle
Container=ContextContainer
LeftMouseUpAction=[!ToggleMeterGroup ContextOption3][!UpdateMeterGroup ContextOption3][!Redraw]

[SubContextIndicator3]
Meter=String
MeterStyle=SubContextIndicatorStyle

[ContextOption3Background]
Meter=Shape
X=(#ContextWidth#+#SubContextBoxXOffset#)
Y=[ContextOption3:Y]
Color=Fill Color #SubContextBackgroundColor#
Shape=Rectangle 0,0,#SubContextWidth#,([ContextOption3Last:Y]-[ContextOption3Background:Y]),#ContextRounding# | StrokeWidth 0 | Extend Color
DynamicVariables=1
Hidden=1
Group=ContextOption3
MouseLeaveAction=[!HideMeterGroup ContextOption3][!Redraw]

[ContextOption3Container]
Meter=Shape
X=r
Color=Fill Color 255,255,255
MeterStyle=ContextOption3Background

[ContextOption3Indicator]
Meter=Shape
MeterStyle=SubContextIndicator
Container=ContextOption3Container

[FirstItem3]
Meter=Image
H=5
W=#SubContextWidth#
Container=ContextOption3Container

[ContextOption3Subtitle1]
Meter=String
Text=Blue
Container=ContextOption3Container
MeterStyle=SubContextStyle
Hidden=1
Group=ContextOption3
LeftMouseUpAction=[!WriteKeyValue MeterString SolidColor "0,0,255" "C:\Users\sahoo\OneDrive\Documents\Rainmeter\Skins\CustomContextMenu\CustomContextMenu.ini"][!SetOption MeterString SolidColor "0,0,255" "CustomContextMenu"][!UpdateMeter MeterString "CustomContextMenu"][!Redraw "CustomContextMenu"][!DeactivateConfig]
MouseOverAction=[!SetOption ContextOption3Indicator Y "([#CURRENTSECTION#:Y]+#ContextIndicatorYOffset#-[ContextOption3Container:Y])"][!ShowMeter ContextOption3Indicator][!UpdateMeter ContextOption3Indicator][!Redraw]
MouseLeaveAction=[!HideMeter ContextOption3Indicator][!UpdateMeter ContextOption3Indicator][!Redraw]

[ContextOption3Separator2]
Meter=Shape
MeterStyle=SubContextSeparatorStyle
Container=ContextOption3Container

[ContextOption3Subtitle3]
Meter=String
Text=Pink
Container=ContextOption3Container
MeterStyle=SubContextStyle
Hidden=1
Group=ContextOption3
LeftMouseUpAction=[!WriteKeyValue MeterString SolidColor "255,0,255" "C:\Users\sahoo\OneDrive\Documents\Rainmeter\Skins\CustomContextMenu\CustomContextMenu.ini"][!SetOption MeterString SolidColor "255,0,255" "CustomContextMenu"][!UpdateMeter MeterString "CustomContextMenu"][!Redraw "CustomContextMenu"][!DeactivateConfig]
MouseOverAction=[!SetOption ContextOption3Indicator Y "([#CURRENTSECTION#:Y]+#ContextIndicatorYOffset#-[ContextOption3Container:Y])"][!ShowMeter ContextOption3Indicator][!UpdateMeter ContextOption3Indicator][!Redraw]
MouseLeaveAction=[!HideMeter ContextOption3Indicator][!UpdateMeter ContextOption3Indicator][!Redraw]

[ContextOption3Last]
Meter=String
Y=3R
Container=ContextOption3Container

[ContextSeparator4]
Meter=Shape
MeterStyle=ContextSeparatorStyle
Container=ContextContainer

[ContextOption5]
Meter=String
Text=Log death.crafter
MeterStyle=ContextStyle
Container=ContextContainer
LeftMouseUpAction=[!Log "death.crafter"][!DeactivateConfig]

[ContextSeparator6]
Meter=Shape
MeterStyle=ContextSeparatorStyle
Container=ContextContainer

[ContextOption7]
Meter=String
Text=Built-in
MeterStyle=ContextStyle
Container=ContextContainer
LeftMouseUpAction=[!ToggleMeterGroup ContextOption7][!UpdateMeterGroup ContextOption7][!Redraw]

[SubContextIndicator7]
Meter=String
MeterStyle=SubContextIndicatorStyle

[ContextOption7Background]
Meter=Shape
X=(#ContextWidth#+#SubContextBoxXOffset#)
Y=[ContextOption7:Y]
Color=Fill Color #SubContextBackgroundColor#
Shape=Rectangle 0,0,#SubContextWidth#,([ContextOption7Last:Y]-[ContextOption7Background:Y]),#ContextRounding# | StrokeWidth 0 | Extend Color
DynamicVariables=1
Hidden=1
Group=ContextOption7
MouseLeaveAction=[!HideMeterGroup ContextOption7][!Redraw]

[ContextOption7Container]
Meter=Shape
X=r
Color=Fill Color 255,255,255
MeterStyle=ContextOption7Background

[ContextOption7Indicator]
Meter=Shape
MeterStyle=SubContextIndicator
Container=ContextOption7Container

[FirstItem7]
Meter=Image
H=5
W=#SubContextWidth#
Container=ContextOption7Container

[ContextOption7Subtitle1]
Meter=String
Text=Refresh
Container=ContextOption7Container
MeterStyle=SubContextStyle
Hidden=1
Group=ContextOption7
LeftMouseUpAction=[!Refresh "CustomContextMenu"][!DeactivateConfig]
MouseOverAction=[!SetOption ContextOption7Indicator Y "([#CURRENTSECTION#:Y]+#ContextIndicatorYOffset#-[ContextOption7Container:Y])"][!ShowMeter ContextOption7Indicator][!UpdateMeter ContextOption7Indicator][!Redraw]
MouseLeaveAction=[!HideMeter ContextOption7Indicator][!UpdateMeter ContextOption7Indicator][!Redraw]

[ContextOption7Subtitle2]
Meter=String
Text=Skin Menu
Container=ContextOption7Container
MeterStyle=SubContextStyle
Hidden=1
Group=ContextOption7
LeftMouseUpAction=[!SkinMenu "CustomContextMenu"][!DeactivateConfig]
MouseOverAction=[!SetOption ContextOption7Indicator Y "([#CURRENTSECTION#:Y]+#ContextIndicatorYOffset#-[ContextOption7Container:Y])"][!ShowMeter ContextOption7Indicator][!UpdateMeter ContextOption7Indicator][!Redraw]
MouseLeaveAction=[!HideMeter ContextOption7Indicator][!UpdateMeter ContextOption7Indicator][!Redraw]

[ContextOption7Subtitle3]
Meter=String
Text=Rainmeter
Container=ContextOption7Container
MeterStyle=SubContextStyle
Hidden=1
Group=ContextOption7
LeftMouseUpAction=[!TrayMenu][!DeactivateConfig]
MouseOverAction=[!SetOption ContextOption7Indicator Y "([#CURRENTSECTION#:Y]+#ContextIndicatorYOffset#-[ContextOption7Container:Y])"][!ShowMeter ContextOption7Indicator][!UpdateMeter ContextOption7Indicator][!Redraw]
MouseLeaveAction=[!HideMeter ContextOption7Indicator][!UpdateMeter ContextOption7Indicator][!Redraw]

[ContextOption7Last]
Meter=String
Y=3R
Container=ContextOption7Container