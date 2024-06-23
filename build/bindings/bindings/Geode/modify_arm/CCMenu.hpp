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

	#ifndef GEODE_STATICS_createWithArray
		#define GEODE_STATICS_createWithArray
		GEODE_AS_STATIC_FUNCTION(createWithArray) 
	#endif

	#ifndef GEODE_STATICS_createWithItem
		#define GEODE_STATICS_createWithItem
		GEODE_AS_STATIC_FUNCTION(createWithItem) 
	#endif

	#ifndef GEODE_STATICS_initWithArray
		#define GEODE_STATICS_initWithArray
		GEODE_AS_STATIC_FUNCTION(initWithArray) 
	#endif

	#ifndef GEODE_STATICS_setHandlerPriority
		#define GEODE_STATICS_setHandlerPriority
		GEODE_AS_STATIC_FUNCTION(setHandlerPriority) 
	#endif

	#ifndef GEODE_STATICS_alignItemsHorizontally
		#define GEODE_STATICS_alignItemsHorizontally
		GEODE_AS_STATIC_FUNCTION(alignItemsHorizontally) 
	#endif

	#ifndef GEODE_STATICS_alignItemsHorizontallyWithPadding
		#define GEODE_STATICS_alignItemsHorizontallyWithPadding
		GEODE_AS_STATIC_FUNCTION(alignItemsHorizontallyWithPadding) 
	#endif

	#ifndef GEODE_STATICS_alignItemsInColumnsWithArray
		#define GEODE_STATICS_alignItemsInColumnsWithArray
		GEODE_AS_STATIC_FUNCTION(alignItemsInColumnsWithArray) 
	#endif

	#ifndef GEODE_STATICS_alignItemsInRowsWithArray
		#define GEODE_STATICS_alignItemsInRowsWithArray
		GEODE_AS_STATIC_FUNCTION(alignItemsInRowsWithArray) 
	#endif

	#ifndef GEODE_STATICS_alignItemsVertically
		#define GEODE_STATICS_alignItemsVertically
		GEODE_AS_STATIC_FUNCTION(alignItemsVertically) 
	#endif

	#ifndef GEODE_STATICS_alignItemsVerticallyWithPadding
		#define GEODE_STATICS_alignItemsVerticallyWithPadding
		GEODE_AS_STATIC_FUNCTION(alignItemsVerticallyWithPadding) 
	#endif

	#ifndef GEODE_STATICS_itemForTouch
		#define GEODE_STATICS_itemForTouch
		GEODE_AS_STATIC_FUNCTION(itemForTouch) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
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


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenu> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenu>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenu>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenu>>::ModifyBase;
		using Base = cocos2d::CCMenu;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a6d34, Default, cocos2d::CCMenu, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a70e0, Default, cocos2d::CCMenu, createWithItem, cocos2d::CCMenuItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a7100, Default, cocos2d::CCMenu, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a7108, Default, cocos2d::CCMenu, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a710c, Default, cocos2d::CCMenu, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a7110, Default, cocos2d::CCMenu, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a71b8, Default, cocos2d::CCMenu, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a7170, Default, cocos2d::CCMenu, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a726c, Default, cocos2d::CCMenu, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a72c8, Default, cocos2d::CCMenu, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a75b0, Default, cocos2d::CCMenu, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a74c0, Default, cocos2d::CCMenu, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a7548, Default, cocos2d::CCMenu, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
		}
	};
}
