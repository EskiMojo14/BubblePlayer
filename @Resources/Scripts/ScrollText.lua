function Initialize()
	gap = SELF:GetOption('RepeatGap')
	fade = SELF:GetOption('Fade')
	color = SELF:GetOption('Color')
	width = SKIN:ParseFormula(SELF:GetOption('Width'))
	speed = 1 / SELF:GetOption('Speed')
	meter = SELF:GetOption('MeterName')
	anchorX = SKIN:ParseFormula(SELF:GetOption('AnchorX'))
	meterHWD = SKIN:GetMeter(meter)
	meterRepeatHWD = SKIN:GetMeter(meter..'Repeat')
	
	actionTimer = SELF:GetOption('ActionTimer')
end

oldText = ''
timing = 0
oldAnchorX = -1
function Update()
	local text = SELF:GetOption('Text')
	if oldText ~= text then
		SKIN:Bang('!SetOption', meter, 'Text', text)
		SKIN:Bang('!SetOption', meter..'Repeat', 'Text', text)
		SKIN:Bang('!UpdateMeter', meter)
		SKIN:Bang('!UpdateMeter', meter..'Repeat')
		timing = 0
		oldText = text
		UpdateNow()
	end
	anchorX = SKIN:ParseFormula(SELF:GetOption('AnchorX'))
	if oldAnchorX ~= anchorX then
		oldAnchorX = anchorX
		UpdateNow()
	end
end

function UpdateNow()
	local meterWidth = meterHWD:GetW()
	local fadeAmount = fade / meterWidth
	local maxTiming = math.ceil(400 * speed + gap/meterWidth * 400 * speed)
	if meterWidth > width then
		--Let it scroll~
		meterHWD:SetX(anchorX - (meterWidth+gap)*timing/maxTiming)
		local head = (anchorX - meterHWD:GetX()) / meterWidth
		local tail = width / meterWidth
		local headRepeat = (anchorX + width - meterRepeatHWD:GetX()) / meterWidth

		setColor         = 'GradientColor | 180 | '..color..',0;'..head..' | '..color..';'..(head + (timing ~= 0 and fadeAmount or 0) )..' | '..color..';'..(head + tail - fadeAmount)..' | '..color..',0;'..(head + tail)
		setColorRepeat    = 'GradientColor | 180 | '..color..';'..(headRepeat - fadeAmount)..' | '..color..',0;'..headRepeat

		if timing > 0 and timing < maxTiming then
			timing = timing + 1
		elseif timing == maxTiming then
			timing = 0
			SKIN:Bang('!CommandMeasure', actionTimer, 'Stop 1')
			UpdateNow()
		end
	else
		meterHWD:SetX(anchorX)
		setColor 		= 'Color | '..color
		setColorRepeat 	= 'Color | 00000000'
		SKIN:Bang('!CommandMeasure', actionTimer, 'Stop 1')
	end

	SKIN:Bang('!SetOption', meter, 'InlineSetting', setColor)
	SKIN:Bang('!SetOption', meter..'Repeat', 'InlineSetting', setColorRepeat)

	SKIN:Bang('!UpdateMeter', meter)
	SKIN:Bang('!UpdateMeter', meter..'Repeat')
end