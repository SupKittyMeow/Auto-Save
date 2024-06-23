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

	#ifndef GEODE_STATICS_initWithSprite
		#define GEODE_STATICS_initWithSprite
		GEODE_AS_STATIC_FUNCTION(initWithSprite) 
	#endif

	#ifndef GEODE_STATICS_getBarChangeRate
		#define GEODE_STATICS_getBarChangeRate
		GEODE_AS_STATIC_FUNCTION(getBarChangeRate) 
	#endif

	#ifndef GEODE_STATICS_getPercentage
		#define GEODE_STATICS_getPercentage
		GEODE_AS_STATIC_FUNCTION(getPercentage) 
	#endif

	#ifndef GEODE_STATICS_getSprite
		#define GEODE_STATICS_getSprite
		GEODE_AS_STATIC_FUNCTION(getSprite) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_setAnchorPoint
		#define GEODE_STATICS_setAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_setBarChangeRate
		#define GEODE_STATICS_setBarChangeRate
		GEODE_AS_STATIC_FUNCTION(setBarChangeRate) 
	#endif

	#ifndef GEODE_STATICS_setPercentage
		#define GEODE_STATICS_setPercentage
		GEODE_AS_STATIC_FUNCTION(setPercentage) 
	#endif

	#ifndef GEODE_STATICS_setReverseDirection
		#define GEODE_STATICS_setReverseDirection
		GEODE_AS_STATIC_FUNCTION(setReverseDirection) 
	#endif

	#ifndef GEODE_STATICS_setReverseProgress
		#define GEODE_STATICS_setReverseProgress
		GEODE_AS_STATIC_FUNCTION(setReverseProgress) 
	#endif

	#ifndef GEODE_STATICS_setSprite
		#define GEODE_STATICS_setSprite
		GEODE_AS_STATIC_FUNCTION(setSprite) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif

	#ifndef GEODE_STATICS_boundaryTexCoord
		#define GEODE_STATICS_boundaryTexCoord
		GEODE_AS_STATIC_FUNCTION(boundaryTexCoord) 
	#endif

	#ifndef GEODE_STATICS_isReverseDirection
		#define GEODE_STATICS_isReverseDirection
		GEODE_AS_STATIC_FUNCTION(isReverseDirection) 
	#endif

	#ifndef GEODE_STATICS_textureCoordFromAlphaPoint
		#define GEODE_STATICS_textureCoordFromAlphaPoint
		GEODE_AS_STATIC_FUNCTION(textureCoordFromAlphaPoint) 
	#endif

	#ifndef GEODE_STATICS_updateBar
		#define GEODE_STATICS_updateBar
		GEODE_AS_STATIC_FUNCTION(updateBar) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_updateProgress
		#define GEODE_STATICS_updateProgress
		GEODE_AS_STATIC_FUNCTION(updateProgress) 
	#endif

	#ifndef GEODE_STATICS_updateRadial
		#define GEODE_STATICS_updateRadial
		GEODE_AS_STATIC_FUNCTION(updateRadial) 
	#endif

	#ifndef GEODE_STATICS_vertexFromAlphaPoint
		#define GEODE_STATICS_vertexFromAlphaPoint
		GEODE_AS_STATIC_FUNCTION(vertexFromAlphaPoint) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_getMidpoint
		#define GEODE_STATICS_getMidpoint
		GEODE_AS_STATIC_FUNCTION(getMidpoint) 
	#endif

	#ifndef GEODE_STATICS_setMidpoint
		#define GEODE_STATICS_setMidpoint
		GEODE_AS_STATIC_FUNCTION(setMidpoint) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCProgressTimer> : ModifyBase<ModifyDerive<Der, cocos2d::CCProgressTimer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCProgressTimer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCProgressTimer>>::ModifyBase;
		using Base = cocos2d::CCProgressTimer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x60f290, Default, cocos2d::CCProgressTimer, create, cocos2d::CCSprite*)
		}
	};
}
