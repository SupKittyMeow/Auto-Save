#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setContentSize
		#define GEODE_STATICS_setContentSize
		GEODE_AS_STATIC_FUNCTION(setContentSize) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedColor
		#define GEODE_STATICS_updateDisplayedColor
		GEODE_AS_STATIC_FUNCTION(updateDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_getPreferredSize
		#define GEODE_STATICS_getPreferredSize
		GEODE_AS_STATIC_FUNCTION(getPreferredSize) 
	#endif

	#ifndef GEODE_STATICS_setPreferredSize
		#define GEODE_STATICS_setPreferredSize
		GEODE_AS_STATIC_FUNCTION(setPreferredSize) 
	#endif

	#ifndef GEODE_STATICS_getCapInsets
		#define GEODE_STATICS_getCapInsets
		GEODE_AS_STATIC_FUNCTION(getCapInsets) 
	#endif

	#ifndef GEODE_STATICS_setCapInsets
		#define GEODE_STATICS_setCapInsets
		GEODE_AS_STATIC_FUNCTION(setCapInsets) 
	#endif

	#ifndef GEODE_STATICS_getInsetLeft
		#define GEODE_STATICS_getInsetLeft
		GEODE_AS_STATIC_FUNCTION(getInsetLeft) 
	#endif

	#ifndef GEODE_STATICS_setInsetLeft
		#define GEODE_STATICS_setInsetLeft
		GEODE_AS_STATIC_FUNCTION(setInsetLeft) 
	#endif

	#ifndef GEODE_STATICS_getInsetTop
		#define GEODE_STATICS_getInsetTop
		GEODE_AS_STATIC_FUNCTION(getInsetTop) 
	#endif

	#ifndef GEODE_STATICS_setInsetTop
		#define GEODE_STATICS_setInsetTop
		GEODE_AS_STATIC_FUNCTION(setInsetTop) 
	#endif

	#ifndef GEODE_STATICS_getInsetRight
		#define GEODE_STATICS_getInsetRight
		GEODE_AS_STATIC_FUNCTION(getInsetRight) 
	#endif

	#ifndef GEODE_STATICS_setInsetRight
		#define GEODE_STATICS_setInsetRight
		GEODE_AS_STATIC_FUNCTION(setInsetRight) 
	#endif

	#ifndef GEODE_STATICS_getInsetBottom
		#define GEODE_STATICS_getInsetBottom
		GEODE_AS_STATIC_FUNCTION(getInsetBottom) 
	#endif

	#ifndef GEODE_STATICS_setInsetBottom
		#define GEODE_STATICS_setInsetBottom
		GEODE_AS_STATIC_FUNCTION(setInsetBottom) 
	#endif

	#ifndef GEODE_STATICS_initWithBatchNode
		#define GEODE_STATICS_initWithBatchNode
		GEODE_AS_STATIC_FUNCTION(initWithBatchNode) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrame
		#define GEODE_STATICS_initWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrameName
		#define GEODE_STATICS_initWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_updateWithBatchNode
		#define GEODE_STATICS_updateWithBatchNode
		GEODE_AS_STATIC_FUNCTION(updateWithBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setSpriteFrame
		#define GEODE_STATICS_setSpriteFrame
		GEODE_AS_STATIC_FUNCTION(setSpriteFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCScale9Sprite> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScale9Sprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScale9Sprite>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScale9Sprite>>::ModifyBase;
		using Base = cocos2d::extension::CCScale9Sprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377de4, Default, cocos2d::extension::CCScale9Sprite, createWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377ce0, Default, cocos2d::extension::CCScale9Sprite, createWithSpriteFrameName, char const*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3779d8, Default, cocos2d::extension::CCScale9Sprite, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3777b4, Default, cocos2d::extension::CCScale9Sprite, create, char const*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x3760c0, Default, cocos2d::extension::CCScale9Sprite, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x376174, Default, cocos2d::extension::CCScale9Sprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37623c, Default, cocos2d::extension::CCScale9Sprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37713c, Default, cocos2d::extension::CCScale9Sprite, setContentSize, const cocos2d::CCSize&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3784c4, Default, cocos2d::extension::CCScale9Sprite, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378810, Default, cocos2d::extension::CCScale9Sprite, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378698, Default, cocos2d::extension::CCScale9Sprite, setOpacity, GLubyte)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378318, Default, cocos2d::extension::CCScale9Sprite, updateDisplayedOpacity, GLubyte)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378688, Default, cocos2d::extension::CCScale9Sprite, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3784f8, Default, cocos2d::extension::CCScale9Sprite, setColor, const cocos2d::ccColor3B&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378384, Default, cocos2d::extension::CCScale9Sprite, updateDisplayedColor, const cocos2d::ccColor3B&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378198, Default, cocos2d::extension::CCScale9Sprite, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378308, Default, cocos2d::extension::CCScale9Sprite, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377fe8, Default, cocos2d::extension::CCScale9Sprite, getPreferredSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377fb4, Default, cocos2d::extension::CCScale9Sprite, setPreferredSize, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37808c, Default, cocos2d::extension::CCScale9Sprite, getCapInsets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377ff4, Default, cocos2d::extension::CCScale9Sprite, setCapInsets, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378484, Default, cocos2d::extension::CCScale9Sprite, getInsetLeft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3784a4, Default, cocos2d::extension::CCScale9Sprite, setInsetLeft, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37848c, Default, cocos2d::extension::CCScale9Sprite, getInsetTop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3784ac, Default, cocos2d::extension::CCScale9Sprite, setInsetTop, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378494, Default, cocos2d::extension::CCScale9Sprite, getInsetRight, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3784b4, Default, cocos2d::extension::CCScale9Sprite, setInsetRight, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37849c, Default, cocos2d::extension::CCScale9Sprite, getInsetBottom, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3784bc, Default, cocos2d::extension::CCScale9Sprite, setInsetBottom, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376308, Default, cocos2d::extension::CCScale9Sprite, initWithBatchNode, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37629c, Default, cocos2d::extension::CCScale9Sprite, initWithBatchNode, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377614, Default, cocos2d::extension::CCScale9Sprite, initWithFile, const char*, cocos2d::CCRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377754, Default, cocos2d::extension::CCScale9Sprite, initWithFile, const char*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377868, Default, cocos2d::extension::CCScale9Sprite, initWithFile, cocos2d::CCRect, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377988, Default, cocos2d::extension::CCScale9Sprite, initWithFile, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377a60, Default, cocos2d::extension::CCScale9Sprite, initWithSpriteFrame, cocos2d::CCSpriteFrame*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377b98, Default, cocos2d::extension::CCScale9Sprite, initWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377c70, Default, cocos2d::extension::CCScale9Sprite, initWithSpriteFrameName, const char*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x377d94, Default, cocos2d::extension::CCScale9Sprite, initWithSpriteFrameName, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3763ac, Default, cocos2d::extension::CCScale9Sprite, updateWithBatchNode, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3783f0, Default, cocos2d::extension::CCScale9Sprite, setSpriteFrame, cocos2d::CCSpriteFrame*)
		}
	};
}
