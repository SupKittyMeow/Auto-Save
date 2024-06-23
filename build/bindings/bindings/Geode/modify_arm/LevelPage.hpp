#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addSecretCoin
		#define GEODE_STATICS_addSecretCoin
		GEODE_AS_STATIC_FUNCTION(addSecretCoin) 
	#endif

	#ifndef GEODE_STATICS_addSecretDoor
		#define GEODE_STATICS_addSecretDoor
		GEODE_AS_STATIC_FUNCTION(addSecretDoor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onMoreGames
		#define GEODE_STATICS_onMoreGames
		GEODE_AS_STATIC_FUNCTION(onMoreGames) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onSecretDoor
		#define GEODE_STATICS_onSecretDoor
		GEODE_AS_STATIC_FUNCTION(onSecretDoor) 
	#endif

	#ifndef GEODE_STATICS_onTheTower
		#define GEODE_STATICS_onTheTower
		GEODE_AS_STATIC_FUNCTION(onTheTower) 
	#endif

	#ifndef GEODE_STATICS_playCoinEffect
		#define GEODE_STATICS_playCoinEffect
		GEODE_AS_STATIC_FUNCTION(playCoinEffect) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_updateDynamicPage
		#define GEODE_STATICS_updateDynamicPage
		GEODE_AS_STATIC_FUNCTION(updateDynamicPage) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelPage> : ModifyBase<ModifyDerive<Der, LevelPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelPage>>;
		using ModifyBase<ModifyDerive<Der, LevelPage>>::ModifyBase;
		using Base = LevelPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aea48, Default, LevelPage, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b0314, Default, LevelPage, addSecretCoin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2b7c, Default, LevelPage, addSecretDoor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b145c, Default, LevelPage, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b0e74, Default, LevelPage, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b26d0, Default, LevelPage, onMoreGames, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b0b5c, Default, LevelPage, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2b7c, Default, LevelPage, onSecretDoor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2018, Default, LevelPage, onTheTower, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2734, Default, LevelPage, playCoinEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b33a4, Default, LevelPage, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3464, Default, LevelPage, playStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aecd4, Default, LevelPage, updateDynamicPage, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3518, Default, LevelPage, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3630, Default, LevelPage, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b364c, Default, LevelPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3254, Default, LevelPage, dialogClosed, DialogLayer*)
		}
	};
}
