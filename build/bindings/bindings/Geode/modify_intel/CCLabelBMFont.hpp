#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createBatched
		#define GEODE_STATICS_createBatched
		GEODE_AS_STATIC_FUNCTION(createBatched) 
	#endif

	#ifndef GEODE_STATICS_purgeCachedData
		#define GEODE_STATICS_purgeCachedData
		GEODE_AS_STATIC_FUNCTION(purgeCachedData) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_getConfiguration
		#define GEODE_STATICS_getConfiguration
		GEODE_AS_STATIC_FUNCTION(getConfiguration) 
	#endif

	#ifndef GEODE_STATICS_getExtraKerning
		#define GEODE_STATICS_getExtraKerning
		GEODE_AS_STATIC_FUNCTION(getExtraKerning) 
	#endif

	#ifndef GEODE_STATICS_getFntFile
		#define GEODE_STATICS_getFntFile
		GEODE_AS_STATIC_FUNCTION(getFntFile) 
	#endif

	#ifndef GEODE_STATICS_getIsBatched
		#define GEODE_STATICS_getIsBatched
		GEODE_AS_STATIC_FUNCTION(getIsBatched) 
	#endif

	#ifndef GEODE_STATICS_getLetterPosXLeft
		#define GEODE_STATICS_getLetterPosXLeft
		GEODE_AS_STATIC_FUNCTION(getLetterPosXLeft) 
	#endif

	#ifndef GEODE_STATICS_getLetterPosXRight
		#define GEODE_STATICS_getLetterPosXRight
		GEODE_AS_STATIC_FUNCTION(getLetterPosXRight) 
	#endif

	#ifndef GEODE_STATICS_getTargetArray
		#define GEODE_STATICS_getTargetArray
		GEODE_AS_STATIC_FUNCTION(getTargetArray) 
	#endif

	#ifndef GEODE_STATICS_setExtraKerning
		#define GEODE_STATICS_setExtraKerning
		GEODE_AS_STATIC_FUNCTION(setExtraKerning) 
	#endif

	#ifndef GEODE_STATICS_setFntFile
		#define GEODE_STATICS_setFntFile
		GEODE_AS_STATIC_FUNCTION(setFntFile) 
	#endif

	#ifndef GEODE_STATICS_setIsBatched
		#define GEODE_STATICS_setIsBatched
		GEODE_AS_STATIC_FUNCTION(setIsBatched) 
	#endif

	#ifndef GEODE_STATICS_setTargetArray
		#define GEODE_STATICS_setTargetArray
		GEODE_AS_STATIC_FUNCTION(setTargetArray) 
	#endif

	#ifndef GEODE_STATICS_createFontChars
		#define GEODE_STATICS_createFontChars
		GEODE_AS_STATIC_FUNCTION(createFontChars) 
	#endif

	#ifndef GEODE_STATICS_kerningAmountForFirst
		#define GEODE_STATICS_kerningAmountForFirst
		GEODE_AS_STATIC_FUNCTION(kerningAmountForFirst) 
	#endif

	#ifndef GEODE_STATICS_limitLabelWidth
		#define GEODE_STATICS_limitLabelWidth
		GEODE_AS_STATIC_FUNCTION(limitLabelWidth) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setAnchorPoint
		#define GEODE_STATICS_setAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS_setCString
		#define GEODE_STATICS_setCString
		GEODE_AS_STATIC_FUNCTION(setCString) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_setAlignment
		#define GEODE_STATICS_setAlignment
		GEODE_AS_STATIC_FUNCTION(setAlignment) 
	#endif

	#ifndef GEODE_STATICS_setWidth
		#define GEODE_STATICS_setWidth
		GEODE_AS_STATIC_FUNCTION(setWidth) 
	#endif

	#ifndef GEODE_STATICS_setLineBreakWithoutSpace
		#define GEODE_STATICS_setLineBreakWithoutSpace
		GEODE_AS_STATIC_FUNCTION(setLineBreakWithoutSpace) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedColor
		#define GEODE_STATICS_getDisplayedColor
		GEODE_AS_STATIC_FUNCTION(getDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedOpacity
		#define GEODE_STATICS_getDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(getDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isCascadeColorEnabled
		#define GEODE_STATICS_isCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeColorEnabled
		#define GEODE_STATICS_setCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedColor
		#define GEODE_STATICS_updateDisplayedColor
		GEODE_AS_STATIC_FUNCTION(updateDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_isCascadeOpacityEnabled
		#define GEODE_STATICS_isCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeOpacityEnabled
		#define GEODE_STATICS_setCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLabelBMFont> : ModifyBase<ModifyDerive<Der, cocos2d::CCLabelBMFont>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLabelBMFont>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLabelBMFont>>::ModifyBase;
		using Base = cocos2d::CCLabelBMFont;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e0fa0, Default, cocos2d::CCLabelBMFont, create, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e0ef0, Default, cocos2d::CCLabelBMFont, create, char const*, char const*, float, cocos2d::CCTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e0e50, Default, cocos2d::CCLabelBMFont, create, char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e0d30, Default, cocos2d::CCLabelBMFont, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e4670, Default, cocos2d::CCLabelBMFont, setFntFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e1780, Default, cocos2d::CCLabelBMFont, createFontChars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e4790, Default, cocos2d::CCLabelBMFont, limitLabelWidth, float, float, float)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5e1630, Default, cocos2d::CCLabelBMFont)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e13d0, Default, cocos2d::CCLabelBMFont, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e4630, Default, cocos2d::CCLabelBMFont, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e4650, Default, cocos2d::CCLabelBMFont, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e4610, Default, cocos2d::CCLabelBMFont, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2c50, Default, cocos2d::CCLabelBMFont, setAnchorPoint, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2130, Default, cocos2d::CCLabelBMFont, setString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2180, Default, cocos2d::CCLabelBMFont, setString, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e23d0, Default, cocos2d::CCLabelBMFont, getString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2420, Default, cocos2d::CCLabelBMFont, setCString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2c90, Default, cocos2d::CCLabelBMFont, updateLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e45b0, Default, cocos2d::CCLabelBMFont, setAlignment, cocos2d::CCTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e45d0, Default, cocos2d::CCLabelBMFont, setWidth, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e45f0, Default, cocos2d::CCLabelBMFont, setLineBreakWithoutSpace, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2200, Default, cocos2d::CCLabelBMFont, setString, unsigned short*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2480, Default, cocos2d::CCLabelBMFont, setColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2440, Default, cocos2d::CCLabelBMFont, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2460, Default, cocos2d::CCLabelBMFont, getDisplayedColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2610, Default, cocos2d::CCLabelBMFont, getDisplayedOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e25f0, Default, cocos2d::CCLabelBMFont, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2630, Default, cocos2d::CCLabelBMFont, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2770, Default, cocos2d::CCLabelBMFont, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e28f0, Default, cocos2d::CCLabelBMFont, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2bd0, Default, cocos2d::CCLabelBMFont, isCascadeColorEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2bf0, Default, cocos2d::CCLabelBMFont, setCascadeColorEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2a20, Default, cocos2d::CCLabelBMFont, updateDisplayedColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2c10, Default, cocos2d::CCLabelBMFont, isCascadeOpacityEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2c30, Default, cocos2d::CCLabelBMFont, setCascadeOpacityEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5e2910, Default, cocos2d::CCLabelBMFont, updateDisplayedOpacity, unsigned char)
		}
	};
}
