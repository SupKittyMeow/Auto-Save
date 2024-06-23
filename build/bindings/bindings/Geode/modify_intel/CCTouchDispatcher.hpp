#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getTargetPrio
		#define GEODE_STATICS_getTargetPrio
		GEODE_AS_STATIC_FUNCTION(getTargetPrio) 
	#endif

	#ifndef GEODE_STATICS_setDispatchEvents
		#define GEODE_STATICS_setDispatchEvents
		GEODE_AS_STATIC_FUNCTION(setDispatchEvents) 
	#endif

	#ifndef GEODE_STATICS_setPriority
		#define GEODE_STATICS_setPriority
		GEODE_AS_STATIC_FUNCTION(setPriority) 
	#endif

	#ifndef GEODE_STATICS_addPrioTargetedDelegate
		#define GEODE_STATICS_addPrioTargetedDelegate
		GEODE_AS_STATIC_FUNCTION(addPrioTargetedDelegate) 
	#endif

	#ifndef GEODE_STATICS_addStandardDelegate
		#define GEODE_STATICS_addStandardDelegate
		GEODE_AS_STATIC_FUNCTION(addStandardDelegate) 
	#endif

	#ifndef GEODE_STATICS_addTargetedDelegate
		#define GEODE_STATICS_addTargetedDelegate
		GEODE_AS_STATIC_FUNCTION(addTargetedDelegate) 
	#endif

	#ifndef GEODE_STATICS_decrementForcePrio
		#define GEODE_STATICS_decrementForcePrio
		GEODE_AS_STATIC_FUNCTION(decrementForcePrio) 
	#endif

	#ifndef GEODE_STATICS_findHandler
		#define GEODE_STATICS_findHandler
		GEODE_AS_STATIC_FUNCTION(findHandler) 
	#endif

	#ifndef GEODE_STATICS_forceAddHandler
		#define GEODE_STATICS_forceAddHandler
		GEODE_AS_STATIC_FUNCTION(forceAddHandler) 
	#endif

	#ifndef GEODE_STATICS_forceRemoveAllDelegates
		#define GEODE_STATICS_forceRemoveAllDelegates
		GEODE_AS_STATIC_FUNCTION(forceRemoveAllDelegates) 
	#endif

	#ifndef GEODE_STATICS_forceRemoveDelegate
		#define GEODE_STATICS_forceRemoveDelegate
		GEODE_AS_STATIC_FUNCTION(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_STATICS_incrementForcePrio
		#define GEODE_STATICS_incrementForcePrio
		GEODE_AS_STATIC_FUNCTION(incrementForcePrio) 
	#endif

	#ifndef GEODE_STATICS_isDispatchEvents
		#define GEODE_STATICS_isDispatchEvents
		GEODE_AS_STATIC_FUNCTION(isDispatchEvents) 
	#endif

	#ifndef GEODE_STATICS_isUsingForcePrio
		#define GEODE_STATICS_isUsingForcePrio
		GEODE_AS_STATIC_FUNCTION(isUsingForcePrio) 
	#endif

	#ifndef GEODE_STATICS_rearrangeHandlers
		#define GEODE_STATICS_rearrangeHandlers
		GEODE_AS_STATIC_FUNCTION(rearrangeHandlers) 
	#endif

	#ifndef GEODE_STATICS_registerForcePrio
		#define GEODE_STATICS_registerForcePrio
		GEODE_AS_STATIC_FUNCTION(registerForcePrio) 
	#endif

	#ifndef GEODE_STATICS_removeAllDelegates
		#define GEODE_STATICS_removeAllDelegates
		GEODE_AS_STATIC_FUNCTION(removeAllDelegates) 
	#endif

	#ifndef GEODE_STATICS_removeDelegate
		#define GEODE_STATICS_removeDelegate
		GEODE_AS_STATIC_FUNCTION(removeDelegate) 
	#endif

	#ifndef GEODE_STATICS_touches
		#define GEODE_STATICS_touches
		GEODE_AS_STATIC_FUNCTION(touches) 
	#endif

	#ifndef GEODE_STATICS_unregisterForcePrio
		#define GEODE_STATICS_unregisterForcePrio
		GEODE_AS_STATIC_FUNCTION(unregisterForcePrio) 
	#endif

	#ifndef GEODE_STATICS_touchesBegan
		#define GEODE_STATICS_touchesBegan
		GEODE_AS_STATIC_FUNCTION(touchesBegan) 
	#endif

	#ifndef GEODE_STATICS_touchesMoved
		#define GEODE_STATICS_touchesMoved
		GEODE_AS_STATIC_FUNCTION(touchesMoved) 
	#endif

	#ifndef GEODE_STATICS_touchesEnded
		#define GEODE_STATICS_touchesEnded
		GEODE_AS_STATIC_FUNCTION(touchesEnded) 
	#endif

	#ifndef GEODE_STATICS_touchesCancelled
		#define GEODE_STATICS_touchesCancelled
		GEODE_AS_STATIC_FUNCTION(touchesCancelled) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouchDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDispatcher>>::ModifyBase;
		using Base = cocos2d::CCTouchDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d56d0, Default, cocos2d::CCTouchDispatcher, setDispatchEvents, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d6130, Default, cocos2d::CCTouchDispatcher, setPriority, int, cocos2d::CCTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d5990, Default, cocos2d::CCTouchDispatcher, addPrioTargetedDelegate, cocos2d::CCTouchDelegate*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d59b0, Default, cocos2d::CCTouchDispatcher, addTargetedDelegate, cocos2d::CCTouchDelegate*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d5fe0, Default, cocos2d::CCTouchDispatcher, findHandler, cocos2d::CCTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d5980, Default, cocos2d::CCTouchDispatcher, isUsingForcePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d5890, Default, cocos2d::CCTouchDispatcher, registerForcePrio, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d62a0, Default, cocos2d::CCTouchDispatcher, touches, cocos2d::CCSet*, cocos2d::CCEvent*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d5930, Default, cocos2d::CCTouchDispatcher, unregisterForcePrio, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d68e0, Default, cocos2d::CCTouchDispatcher, touchesBegan, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d6920, Default, cocos2d::CCTouchDispatcher, touchesMoved, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d6960, Default, cocos2d::CCTouchDispatcher, touchesEnded, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d69a0, Default, cocos2d::CCTouchDispatcher, touchesCancelled, cocos2d::CCSet*, cocos2d::CCEvent*)
		}
	};
}
