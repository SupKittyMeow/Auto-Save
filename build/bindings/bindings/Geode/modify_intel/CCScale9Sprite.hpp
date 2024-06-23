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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fe8f0, Default, cocos2d::extension::CCScale9Sprite, createWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fe810, Default, cocos2d::extension::CCScale9Sprite, createWithSpriteFrameName, char const*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fe560, Default, cocos2d::extension::CCScale9Sprite, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fe390, Default, cocos2d::extension::CCScale9Sprite, create, char const*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x3fc930, Default, cocos2d::extension::CCScale9Sprite, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3fcb10, Default, cocos2d::extension::CCScale9Sprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fcb40, Default, cocos2d::extension::CCScale9Sprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fdcd0, Default, cocos2d::extension::CCScale9Sprite, setContentSize, const cocos2d::CCSize&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff3b0, Default, cocos2d::extension::CCScale9Sprite, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff210, Default, cocos2d::extension::CCScale9Sprite, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fefe0, Default, cocos2d::extension::CCScale9Sprite, setInsetLeft, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff000, Default, cocos2d::extension::CCScale9Sprite, setInsetTop, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff020, Default, cocos2d::extension::CCScale9Sprite, setInsetRight, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff040, Default, cocos2d::extension::CCScale9Sprite, setInsetBottom, float)
		}
	};
}
