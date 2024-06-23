#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addAction
		#define GEODE_STATICS_addAction
		GEODE_AS_STATIC_FUNCTION(addAction) 
	#endif

	#ifndef GEODE_STATICS_pauseTarget
		#define GEODE_STATICS_pauseTarget
		GEODE_AS_STATIC_FUNCTION(pauseTarget) 
	#endif

	#ifndef GEODE_STATICS_resumeTarget
		#define GEODE_STATICS_resumeTarget
		GEODE_AS_STATIC_FUNCTION(resumeTarget) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCActionManager> : ModifyBase<ModifyDerive<Der, cocos2d::CCActionManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCActionManager>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCActionManager>>::ModifyBase;
		using Base = cocos2d::CCActionManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22f4d0, Default, cocos2d::CCActionManager, addAction, cocos2d::CCAction*, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22f210, Default, cocos2d::CCActionManager, pauseTarget, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22f2f0, Default, cocos2d::CCActionManager, resumeTarget, cocos2d::CCObject*)
		}
	};
}
