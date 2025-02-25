#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelAreaInnerLayer.hpp>
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

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onDoor
		#define GEODE_STATICS_onDoor
		GEODE_AS_STATIC_FUNCTION(onDoor) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNextFloor
		#define GEODE_STATICS_onNextFloor
		GEODE_AS_STATIC_FUNCTION(onNextFloor) 
	#endif

	#ifndef GEODE_STATICS_playStep1
		#define GEODE_STATICS_playStep1
		GEODE_AS_STATIC_FUNCTION(playStep1) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_showFloor1CompleteDialog
		#define GEODE_STATICS_showFloor1CompleteDialog
		GEODE_AS_STATIC_FUNCTION(showFloor1CompleteDialog) 
	#endif

	#ifndef GEODE_STATICS_tryResumeTowerMusic
		#define GEODE_STATICS_tryResumeTowerMusic
		GEODE_AS_STATIC_FUNCTION(tryResumeTowerMusic) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelAreaInnerLayer> : ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>>::ModifyBase;
		using Base = LevelAreaInnerLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x275da0, Default, LevelAreaInnerLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x276ac0, Default, LevelAreaInnerLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x276b10, Default, LevelAreaInnerLayer, onDoor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x277aa0, Default, LevelAreaInnerLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2778c0, Default, LevelAreaInnerLayer, dialogClosed, DialogLayer*)
		}
	};
}
