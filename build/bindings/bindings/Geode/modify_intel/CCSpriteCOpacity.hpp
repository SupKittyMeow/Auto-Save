#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpriteCOpacity.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithSpriteFrame
		#define GEODE_STATICS_createWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpriteCOpacity> : ModifyBase<ModifyDerive<Der, CCSpriteCOpacity>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpriteCOpacity>>;
		using ModifyBase<ModifyDerive<Der, CCSpriteCOpacity>>::ModifyBase;
		using Base = CCSpriteCOpacity;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48b250, Default, CCSpriteCOpacity, setOpacity, unsigned char)
		}
	};
}
