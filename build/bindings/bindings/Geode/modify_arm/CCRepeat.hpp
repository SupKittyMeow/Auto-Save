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

	#ifndef GEODE_STATICS_initWithAction
		#define GEODE_STATICS_initWithAction
		GEODE_AS_STATIC_FUNCTION(initWithAction) 
	#endif

	#ifndef GEODE_STATICS_getInnerAction
		#define GEODE_STATICS_getInnerAction
		GEODE_AS_STATIC_FUNCTION(getInnerAction) 
	#endif

	#ifndef GEODE_STATICS_setInnerAction
		#define GEODE_STATICS_setInnerAction
		GEODE_AS_STATIC_FUNCTION(setInnerAction) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_isDone
		#define GEODE_STATICS_isDone
		GEODE_AS_STATIC_FUNCTION(isDone) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCRepeat> : ModifyBase<ModifyDerive<Der, cocos2d::CCRepeat>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCRepeat>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCRepeat>>::ModifyBase;
		using Base = cocos2d::CCRepeat;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33daf8, Default, cocos2d::CCRepeat, create, cocos2d::CCFiniteTimeAction*, unsigned int)
		}
	};
}
