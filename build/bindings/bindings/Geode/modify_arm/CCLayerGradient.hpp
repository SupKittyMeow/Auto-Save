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

	#ifndef GEODE_STATICS_getShouldPremultiply
		#define GEODE_STATICS_getShouldPremultiply
		GEODE_AS_STATIC_FUNCTION(getShouldPremultiply) 
	#endif

	#ifndef GEODE_STATICS_setShouldPremultiply
		#define GEODE_STATICS_setShouldPremultiply
		GEODE_AS_STATIC_FUNCTION(setShouldPremultiply) 
	#endif

	#ifndef GEODE_STATICS_setValues
		#define GEODE_STATICS_setValues
		GEODE_AS_STATIC_FUNCTION(setValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_initWithColor
		#define GEODE_STATICS_initWithColor
		GEODE_AS_STATIC_FUNCTION(initWithColor) 
	#endif

	#ifndef GEODE_STATICS_getStartColor
		#define GEODE_STATICS_getStartColor
		GEODE_AS_STATIC_FUNCTION(getStartColor) 
	#endif

	#ifndef GEODE_STATICS_setStartColor
		#define GEODE_STATICS_setStartColor
		GEODE_AS_STATIC_FUNCTION(setStartColor) 
	#endif

	#ifndef GEODE_STATICS_getEndColor
		#define GEODE_STATICS_getEndColor
		GEODE_AS_STATIC_FUNCTION(getEndColor) 
	#endif

	#ifndef GEODE_STATICS_setEndColor
		#define GEODE_STATICS_setEndColor
		GEODE_AS_STATIC_FUNCTION(setEndColor) 
	#endif

	#ifndef GEODE_STATICS_getStartOpacity
		#define GEODE_STATICS_getStartOpacity
		GEODE_AS_STATIC_FUNCTION(getStartOpacity) 
	#endif

	#ifndef GEODE_STATICS_setStartOpacity
		#define GEODE_STATICS_setStartOpacity
		GEODE_AS_STATIC_FUNCTION(setStartOpacity) 
	#endif

	#ifndef GEODE_STATICS_getEndOpacity
		#define GEODE_STATICS_getEndOpacity
		GEODE_AS_STATIC_FUNCTION(getEndOpacity) 
	#endif

	#ifndef GEODE_STATICS_setEndOpacity
		#define GEODE_STATICS_setEndOpacity
		GEODE_AS_STATIC_FUNCTION(setEndOpacity) 
	#endif

	#ifndef GEODE_STATICS_getVector
		#define GEODE_STATICS_getVector
		GEODE_AS_STATIC_FUNCTION(getVector) 
	#endif

	#ifndef GEODE_STATICS_setVector
		#define GEODE_STATICS_setVector
		GEODE_AS_STATIC_FUNCTION(setVector) 
	#endif

	#ifndef GEODE_STATICS_setCompressedInterpolation
		#define GEODE_STATICS_setCompressedInterpolation
		GEODE_AS_STATIC_FUNCTION(setCompressedInterpolation) 
	#endif

	#ifndef GEODE_STATICS_isCompressedInterpolation
		#define GEODE_STATICS_isCompressedInterpolation
		GEODE_AS_STATIC_FUNCTION(isCompressedInterpolation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLayerGradient> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>>::ModifyBase;
		using Base = cocos2d::CCLayerGradient;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41dfd0, Default, cocos2d::CCLayerGradient, create, cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41e1ec, Default, cocos2d::CCLayerGradient, create, cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&)
		}
	};
}
