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

	#ifndef GEODE_STATICS_getScriptAccelerateHandlerEntry
		#define GEODE_STATICS_getScriptAccelerateHandlerEntry
		GEODE_AS_STATIC_FUNCTION(getScriptAccelerateHandlerEntry) 
	#endif

	#ifndef GEODE_STATICS_getScriptKeypadHandlerEntry
		#define GEODE_STATICS_getScriptKeypadHandlerEntry
		GEODE_AS_STATIC_FUNCTION(getScriptKeypadHandlerEntry) 
	#endif

	#ifndef GEODE_STATICS_getScriptTouchHandlerEntry
		#define GEODE_STATICS_getScriptTouchHandlerEntry
		GEODE_AS_STATIC_FUNCTION(getScriptTouchHandlerEntry) 
	#endif

	#ifndef GEODE_STATICS_excuteScriptTouchHandler
		#define GEODE_STATICS_excuteScriptTouchHandler
		GEODE_AS_STATIC_FUNCTION(excuteScriptTouchHandler) 
	#endif

	#ifndef GEODE_STATICS_registerScriptAccelerateHandler
		#define GEODE_STATICS_registerScriptAccelerateHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptAccelerateHandler) 
	#endif

	#ifndef GEODE_STATICS_registerScriptKeypadHandler
		#define GEODE_STATICS_registerScriptKeypadHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptKeypadHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptAccelerateHandler
		#define GEODE_STATICS_unregisterScriptAccelerateHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptAccelerateHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptKeypadHandler
		#define GEODE_STATICS_unregisterScriptKeypadHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptKeypadHandler) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_registerScriptTouchHandler
		#define GEODE_STATICS_registerScriptTouchHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptTouchHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptTouchHandler
		#define GEODE_STATICS_unregisterScriptTouchHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptTouchHandler) 
	#endif

	#ifndef GEODE_STATICS_isTouchEnabled
		#define GEODE_STATICS_isTouchEnabled
		GEODE_AS_STATIC_FUNCTION(isTouchEnabled) 
	#endif

	#ifndef GEODE_STATICS_setTouchEnabled
		#define GEODE_STATICS_setTouchEnabled
		GEODE_AS_STATIC_FUNCTION(setTouchEnabled) 
	#endif

	#ifndef GEODE_STATICS_setTouchMode
		#define GEODE_STATICS_setTouchMode
		GEODE_AS_STATIC_FUNCTION(setTouchMode) 
	#endif

	#ifndef GEODE_STATICS_getTouchMode
		#define GEODE_STATICS_getTouchMode
		GEODE_AS_STATIC_FUNCTION(getTouchMode) 
	#endif

	#ifndef GEODE_STATICS_setTouchPriority
		#define GEODE_STATICS_setTouchPriority
		GEODE_AS_STATIC_FUNCTION(setTouchPriority) 
	#endif

	#ifndef GEODE_STATICS_getTouchPriority
		#define GEODE_STATICS_getTouchPriority
		GEODE_AS_STATIC_FUNCTION(getTouchPriority) 
	#endif

	#ifndef GEODE_STATICS_isAccelerometerEnabled
		#define GEODE_STATICS_isAccelerometerEnabled
		GEODE_AS_STATIC_FUNCTION(isAccelerometerEnabled) 
	#endif

	#ifndef GEODE_STATICS_setAccelerometerEnabled
		#define GEODE_STATICS_setAccelerometerEnabled
		GEODE_AS_STATIC_FUNCTION(setAccelerometerEnabled) 
	#endif

	#ifndef GEODE_STATICS_setAccelerometerInterval
		#define GEODE_STATICS_setAccelerometerInterval
		GEODE_AS_STATIC_FUNCTION(setAccelerometerInterval) 
	#endif

	#ifndef GEODE_STATICS_isKeypadEnabled
		#define GEODE_STATICS_isKeypadEnabled
		GEODE_AS_STATIC_FUNCTION(isKeypadEnabled) 
	#endif

	#ifndef GEODE_STATICS_setKeypadEnabled
		#define GEODE_STATICS_setKeypadEnabled
		GEODE_AS_STATIC_FUNCTION(setKeypadEnabled) 
	#endif

	#ifndef GEODE_STATICS_isKeyboardEnabled
		#define GEODE_STATICS_isKeyboardEnabled
		GEODE_AS_STATIC_FUNCTION(isKeyboardEnabled) 
	#endif

	#ifndef GEODE_STATICS_setKeyboardEnabled
		#define GEODE_STATICS_setKeyboardEnabled
		GEODE_AS_STATIC_FUNCTION(setKeyboardEnabled) 
	#endif

	#ifndef GEODE_STATICS_isMouseEnabled
		#define GEODE_STATICS_isMouseEnabled
		GEODE_AS_STATIC_FUNCTION(isMouseEnabled) 
	#endif

	#ifndef GEODE_STATICS_setMouseEnabled
		#define GEODE_STATICS_setMouseEnabled
		GEODE_AS_STATIC_FUNCTION(setMouseEnabled) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesBegan
		#define GEODE_STATICS_ccTouchesBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchesBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesMoved
		#define GEODE_STATICS_ccTouchesMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchesMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesEnded
		#define GEODE_STATICS_ccTouchesEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchesEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesCancelled
		#define GEODE_STATICS_ccTouchesCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchesCancelled) 
	#endif

	#ifndef GEODE_STATICS_setPreviousPriority
		#define GEODE_STATICS_setPreviousPriority
		GEODE_AS_STATIC_FUNCTION(setPreviousPriority) 
	#endif

	#ifndef GEODE_STATICS_getPreviousPriority
		#define GEODE_STATICS_getPreviousPriority
		GEODE_AS_STATIC_FUNCTION(getPreviousPriority) 
	#endif

	#ifndef GEODE_STATICS_didAccelerate
		#define GEODE_STATICS_didAccelerate
		GEODE_AS_STATIC_FUNCTION(didAccelerate) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyMenuClicked
		#define GEODE_STATICS_keyMenuClicked
		GEODE_AS_STATIC_FUNCTION(keyMenuClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLayer> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayer>>::ModifyBase;
		using Base = cocos2d::CCLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41b6cc, Default, cocos2d::CCLayer, create, )
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x41b2b0, Default, cocos2d::CCLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x41b4e0, Default, cocos2d::CCLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41b670, Default, cocos2d::CCLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bf40, Default, cocos2d::CCLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c0c4, Default, cocos2d::CCLayer, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c004, Default, cocos2d::CCLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41b7d4, Default, cocos2d::CCLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41b848, Default, cocos2d::CCLayer, registerScriptTouchHandler, int, bool, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41b8a8, Default, cocos2d::CCLayer, unregisterScriptTouchHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41b964, Default, cocos2d::CCLayer, isTouchEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41b96c, Default, cocos2d::CCLayer, setTouchEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41b9dc, Default, cocos2d::CCLayer, setTouchMode, cocos2d::ccTouchesMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41baac, Default, cocos2d::CCLayer, getTouchMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41ba40, Default, cocos2d::CCLayer, setTouchPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41baa4, Default, cocos2d::CCLayer, getTouchPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bab4, Default, cocos2d::CCLayer, isAccelerometerEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41babc, Default, cocos2d::CCLayer, setAccelerometerEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41baf8, Default, cocos2d::CCLayer, setAccelerometerInterval, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bc00, Default, cocos2d::CCLayer, isKeypadEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bc08, Default, cocos2d::CCLayer, setKeypadEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bc7c, Default, cocos2d::CCLayer, isKeyboardEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bc84, Default, cocos2d::CCLayer, setKeyboardEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bcec, Default, cocos2d::CCLayer, isMouseEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bcf4, Default, cocos2d::CCLayer, setMouseEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c0fc, Default, cocos2d::CCLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c1bc, Default, cocos2d::CCLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c25c, Default, cocos2d::CCLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c2fc, Default, cocos2d::CCLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c39c, Default, cocos2d::CCLayer, ccTouchesBegan, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c43c, Default, cocos2d::CCLayer, ccTouchesMoved, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c4dc, Default, cocos2d::CCLayer, ccTouchesEnded, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c57c, Default, cocos2d::CCLayer, ccTouchesCancelled, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9a6c, Default, cocos2d::CCLayer, setPreviousPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9a74, Default, cocos2d::CCLayer, getPreviousPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bb2c, Default, cocos2d::CCLayer, didAccelerate, cocos2d::CCAcceleration*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bd98, Default, cocos2d::CCLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41be40, Default, cocos2d::CCLayer, keyMenuClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41bed0, Default, cocos2d::CCLayer, keyDown, cocos2d::enumKeyCodes)
		}
	};
}
