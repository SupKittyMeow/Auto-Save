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


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCCallFunc> : ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCCallFunc>>::ModifyBase;
		using Base = cocos2d::CCCallFunc;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b8f10, Default, cocos2d::CCCallFunc, create, cocos2d::CCObject*, cocos2d::SEL_CallFunc)
		}
	};
}
