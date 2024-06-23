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

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDelayTime> : ModifyBase<ModifyDerive<Der, cocos2d::CCDelayTime>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDelayTime>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDelayTime>>::ModifyBase;
		using Base = cocos2d::CCDelayTime;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba690, Default, cocos2d::CCDelayTime, create, float)
		}
	};
}
