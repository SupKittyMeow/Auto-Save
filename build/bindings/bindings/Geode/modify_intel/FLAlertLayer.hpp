#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_incrementForcePrio
		#define GEODE_STATICS_incrementForcePrio
		GEODE_AS_STATIC_FUNCTION(incrementForcePrio) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBtn1
		#define GEODE_STATICS_onBtn1
		GEODE_AS_STATIC_FUNCTION(onBtn1) 
	#endif

	#ifndef GEODE_STATICS_onBtn2
		#define GEODE_STATICS_onBtn2
		GEODE_AS_STATIC_FUNCTION(onBtn2) 
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FLAlertLayer> : ModifyBase<ModifyDerive<Der, FLAlertLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FLAlertLayer>>;
		using ModifyBase<ModifyDerive<Der, FLAlertLayer>>::ModifyBase;
		using Base = FLAlertLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4a49c0, Default, FLAlertLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a4da0, Default, FLAlertLayer, create, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a4fd0, Default, FLAlertLayer, create, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a4c90, Default, FLAlertLayer, create, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a50e0, Default, FLAlertLayer, init, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a5c40, Default, FLAlertLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a5d60, Default, FLAlertLayer, onBtn1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a5dc0, Default, FLAlertLayer, onBtn2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a5ff0, Default, FLAlertLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a6230, Default, FLAlertLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a6110, Default, FLAlertLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a61b0, Default, FLAlertLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a6460, Default, FLAlertLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a5ed0, Default, FLAlertLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a5e20, Default, FLAlertLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a62b0, Default, FLAlertLayer, show, )
		}
	};
}
