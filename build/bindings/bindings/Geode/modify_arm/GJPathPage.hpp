#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onActivatePath
		#define GEODE_STATICS_onActivatePath
		GEODE_AS_STATIC_FUNCTION(onActivatePath) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onIconInfo
		#define GEODE_STATICS_onIconInfo
		GEODE_AS_STATIC_FUNCTION(onIconInfo) 
	#endif

	#ifndef GEODE_STATICS_onUnlock
		#define GEODE_STATICS_onUnlock
		GEODE_AS_STATIC_FUNCTION(onUnlock) 
	#endif

	#ifndef GEODE_STATICS_playUnlockAnimation
		#define GEODE_STATICS_playUnlockAnimation
		GEODE_AS_STATIC_FUNCTION(playUnlockAnimation) 
	#endif

	#ifndef GEODE_STATICS_showCantAffordMessage
		#define GEODE_STATICS_showCantAffordMessage
		GEODE_AS_STATIC_FUNCTION(showCantAffordMessage) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationFinished
		#define GEODE_STATICS_unlockAnimationFinished
		GEODE_AS_STATIC_FUNCTION(unlockAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationStep2
		#define GEODE_STATICS_unlockAnimationStep2
		GEODE_AS_STATIC_FUNCTION(unlockAnimationStep2) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationStep3
		#define GEODE_STATICS_unlockAnimationStep3
		GEODE_AS_STATIC_FUNCTION(unlockAnimationStep3) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_didPurchaseItem
		#define GEODE_STATICS_didPurchaseItem
		GEODE_AS_STATIC_FUNCTION(didPurchaseItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPathPage> : ModifyBase<ModifyDerive<Der, GJPathPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathPage>>;
		using ModifyBase<ModifyDerive<Der, GJPathPage>>::ModifyBase;
		using Base = GJPathPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2916fc, Default, GJPathPage, create, int, GJPathsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291bec, Default, GJPathPage, init, int, GJPathsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29392c, Default, GJPathPage, onActivatePath, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x293564, Default, GJPathPage, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x293614, Default, GJPathPage, onIconInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x293820, Default, GJPathPage, onUnlock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x293958, Default, GJPathPage, playUnlockAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x293f08, Default, GJPathPage, showCantAffordMessage, GJStoreItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x294854, Default, GJPathPage, unlockAnimationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29460c, Default, GJPathPage, unlockAnimationStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2949b0, Default, GJPathPage, unlockAnimationStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2953bc, Default, GJPathPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x295258, Default, GJPathPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2953f4, Default, GJPathPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x293954, Default, GJPathPage, didPurchaseItem, GJStoreItem*)
		}
	};
}
