#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreatorLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_canPlayOnlineLevels
		#define GEODE_STATICS_canPlayOnlineLevels
		GEODE_AS_STATIC_FUNCTION(canPlayOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_checkQuestsStatus
		#define GEODE_STATICS_checkQuestsStatus
		GEODE_AS_STATIC_FUNCTION(checkQuestsStatus) 
	#endif

	#ifndef GEODE_STATICS_onAdventureMap
		#define GEODE_STATICS_onAdventureMap
		GEODE_AS_STATIC_FUNCTION(onAdventureMap) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onChallenge
		#define GEODE_STATICS_onChallenge
		GEODE_AS_STATIC_FUNCTION(onChallenge) 
	#endif

	#ifndef GEODE_STATICS_onDailyLevel
		#define GEODE_STATICS_onDailyLevel
		GEODE_AS_STATIC_FUNCTION(onDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_onEventLevel
		#define GEODE_STATICS_onEventLevel
		GEODE_AS_STATIC_FUNCTION(onEventLevel) 
	#endif

	#ifndef GEODE_STATICS_onFameLevels
		#define GEODE_STATICS_onFameLevels
		GEODE_AS_STATIC_FUNCTION(onFameLevels) 
	#endif

	#ifndef GEODE_STATICS_onFeaturedLevels
		#define GEODE_STATICS_onFeaturedLevels
		GEODE_AS_STATIC_FUNCTION(onFeaturedLevels) 
	#endif

	#ifndef GEODE_STATICS_onGauntlets
		#define GEODE_STATICS_onGauntlets
		GEODE_AS_STATIC_FUNCTION(onGauntlets) 
	#endif

	#ifndef GEODE_STATICS_onLeaderboards
		#define GEODE_STATICS_onLeaderboards
		GEODE_AS_STATIC_FUNCTION(onLeaderboards) 
	#endif

	#ifndef GEODE_STATICS_onMapPacks
		#define GEODE_STATICS_onMapPacks
		GEODE_AS_STATIC_FUNCTION(onMapPacks) 
	#endif

	#ifndef GEODE_STATICS_onMultiplayer
		#define GEODE_STATICS_onMultiplayer
		GEODE_AS_STATIC_FUNCTION(onMultiplayer) 
	#endif

	#ifndef GEODE_STATICS_onMyLevels
		#define GEODE_STATICS_onMyLevels
		GEODE_AS_STATIC_FUNCTION(onMyLevels) 
	#endif

	#ifndef GEODE_STATICS_onOnlineLevels
		#define GEODE_STATICS_onOnlineLevels
		GEODE_AS_STATIC_FUNCTION(onOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_onOnlyFullVersion
		#define GEODE_STATICS_onOnlyFullVersion
		GEODE_AS_STATIC_FUNCTION(onOnlyFullVersion) 
	#endif

	#ifndef GEODE_STATICS_onPaths
		#define GEODE_STATICS_onPaths
		GEODE_AS_STATIC_FUNCTION(onPaths) 
	#endif

	#ifndef GEODE_STATICS_onSavedLevels
		#define GEODE_STATICS_onSavedLevels
		GEODE_AS_STATIC_FUNCTION(onSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_onSecretVault
		#define GEODE_STATICS_onSecretVault
		GEODE_AS_STATIC_FUNCTION(onSecretVault) 
	#endif

	#ifndef GEODE_STATICS_onTopLists
		#define GEODE_STATICS_onTopLists
		GEODE_AS_STATIC_FUNCTION(onTopLists) 
	#endif

	#ifndef GEODE_STATICS_onTreasureRoom
		#define GEODE_STATICS_onTreasureRoom
		GEODE_AS_STATIC_FUNCTION(onTreasureRoom) 
	#endif

	#ifndef GEODE_STATICS_onWeeklyLevel
		#define GEODE_STATICS_onWeeklyLevel
		GEODE_AS_STATIC_FUNCTION(onWeeklyLevel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_sceneWillResume
		#define GEODE_STATICS_sceneWillResume
		GEODE_AS_STATIC_FUNCTION(sceneWillResume) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreatorLayer> : ModifyBase<ModifyDerive<Der, CreatorLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreatorLayer>>;
		using ModifyBase<ModifyDerive<Der, CreatorLayer>>::ModifyBase;
		using Base = CreatorLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x236654, Default, CreatorLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x238b9c, Default, CreatorLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x238b2c, Default, CreatorLayer, sceneWillResume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x238a2c, Default, CreatorLayer, dialogClosed, DialogLayer*)
		}
	};
}
