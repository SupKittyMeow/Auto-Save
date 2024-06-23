#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getLocation
		#define GEODE_STATICS_getLocation
		GEODE_AS_STATIC_FUNCTION(getLocation) 
	#endif

	#ifndef GEODE_STATICS_getPreviousLocation
		#define GEODE_STATICS_getPreviousLocation
		GEODE_AS_STATIC_FUNCTION(getPreviousLocation) 
	#endif

	#ifndef GEODE_STATICS_getStartLocation
		#define GEODE_STATICS_getStartLocation
		GEODE_AS_STATIC_FUNCTION(getStartLocation) 
	#endif

	#ifndef GEODE_STATICS_getDelta
		#define GEODE_STATICS_getDelta
		GEODE_AS_STATIC_FUNCTION(getDelta) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouch> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>>::ModifyBase;
		using Base = cocos2d::CCTouch;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a550, Default, cocos2d::CCTouch, getLocation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a580, Default, cocos2d::CCTouch, getPreviousLocation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a5b0, Default, cocos2d::CCTouch, getStartLocation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a5e0, Default, cocos2d::CCTouch, getDelta, )
		}
	};
}
