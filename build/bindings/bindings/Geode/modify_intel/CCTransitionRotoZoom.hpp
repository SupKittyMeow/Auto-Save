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

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionRotoZoom> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionRotoZoom>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionRotoZoom>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionRotoZoom>>::ModifyBase;
		using Base = cocos2d::CCTransitionRotoZoom;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8fc0, Default, cocos2d::CCTransitionRotoZoom, onEnter, )
		}
	};
}
