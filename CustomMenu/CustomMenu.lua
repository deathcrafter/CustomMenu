function Initialize()

    -- gets the inc file to write
    local file = io.open(SKIN:MakePathAbsolute('CustomMenu\\CustomMenu.inc'), 'w')

    local t = {}

    for i = 1, 15 do
        -- to break the loop if there is no title
        if SELF:GetOption('Title'..i) == '' then
            break
        elseif SELF:GetOption('Title'..i) == '---' then
            table.insert(t, '\n[ContextSeparator'..i..']\nMeter=Shape\nMeterStyle=ContextSeparatorStyle\nContainer=ContextContainer')
        else
            table.insert(t, '\n[ContextOption'..i..']\nMeter=String\nText='..SELF:GetOption('Title'..i)..'\nMeterStyle=ContextStyle\nContainer=ContextContainer')
            
            if SELF:GetOption('Title'..i..'Subtitle1') ~= '' then
                table.insert(t, 'LeftMouseUpAction=[!ToggleMeterGroup ContextOption'..i..'][!UpdateMeterGroup ContextOption'..i..'][!Redraw]')
-- Indicator
                table.insert(t, '\n[SubContextIndicator'..i..']\nMeter=String\nMeterStyle=SubContextIndicatorStyle')
-- Subcontext background and container
                local rectangle = 'Rectangle 0,0,#SubContextWidth#,([ContextOption'..i..'Last:Y]-[ContextOption'..i..'Background:Y]),#ContextRounding# | StrokeWidth 0 | Extend Color\nDynamicVariables=1'

                table.insert(t, '\n[ContextOption'..i..'Background]\nMeter=Shape\nX=(#ContextWidth#+#SubContextBoxXOffset#)\nY=[ContextOption'..i..':Y]\nColor=Fill Color #SubContextBackgroundColor#\nShape='..rectangle..'\nHidden=1\nGroup=ContextOption'..i..'\nMouseLeaveAction=[!HideMeterGroup ContextOption'..i..'][!Redraw]')

                table.insert(t, '\n[ContextOption'..i..'Container]\nMeter=Shape\nX=r\nColor=Fill Color 255,255,255\nMeterStyle=ContextOption'..i..'Background')
-- Subcontext highlight
                table.insert(t, '\n[ContextOption'..i..'Indicator]\nMeter=Shape\nMeterStyle=SubContextIndicator\nContainer=ContextOption'..i..'Container')
-- First subcontext item
                table.insert(t, '\n[FirstItem'..i..']\nMeter=Image\nH=5\nW=#SubContextWidth#\nContainer=ContextOption'..i..'Container')

                for j=1,6 do
                    local b=SELF:GetOption('Title'..i..'Subtitle'..j)
                    if b == '' then
                        break
                    elseif SELF:GetOption('Title'..i..'Subtitle'..j) == '---' then
                        table.insert(t, '\n[ContextOption'..i..'Separator'..j..']\nMeter=Shape\nMeterStyle=SubContextSeparatorStyle\nContainer=ContextOption'..i..'Container')
                    else
                        table.insert(t, '\n[ContextOption'..i..'Subtitle'..j..']\nMeter=String\nText='..SELF:GetOption('Title'..i..'Subtitle'..j)..'\nContainer=ContextOption'..i..'Container\nMeterStyle=SubContextStyle\nHidden=1\nGroup=ContextOption'..i)
                        table.insert(t, 'LeftMouseUpAction='..SELF:GetOption('Title'..i..'Option'..j)..'[!DeactivateConfig]')
                        table.insert(t, 'MouseOverAction=[!SetOption ContextOption'..i..'Indicator Y "([#CURRENTSECTION#:Y]+#ContextIndicatorYOffset#-[ContextOption'..i..'Container:Y])"][!ShowMeter ContextOption'..i..'Indicator][!UpdateMeter ContextOption'..i..'Indicator][!Redraw]\nMouseLeaveAction=[!HideMeter ContextOption'..i..'Indicator][!UpdateMeter ContextOption'..i..'Indicator][!Redraw]')
                    end
                end

                table.insert(t, '\n[ContextOption'..i..'Last]\nMeter=String\nY=3R\nContainer=ContextOption'..i..'Container')
            else
                table.insert(t, 'LeftMouseUpAction='..SELF:GetOption('Option'..i)..'[!DeactivateConfig]')
            end
        end
    end

    file:write(table.concat(t, '\n'))
    file:close()
end