#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DailyLevelPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_claimLevelReward
		#define GEODE_STATICS_claimLevelReward
		GEODE_AS_STATIC_FUNCTION(claimLevelReward) 
	#endif

	#ifndef GEODE_STATICS_createDailyNode
		#define GEODE_STATICS_createDailyNode
		GEODE_AS_STATIC_FUNCTION(createDailyNode) 
	#endif

	#ifndef GEODE_STATICS_createNodeIfLoaded
		#define GEODE_STATICS_createNodeIfLoaded
		GEODE_AS_STATIC_FUNCTION(createNodeIfLoaded) 
	#endif

	#ifndef GEODE_STATICS_downloadAndCreateNode
		#define GEODE_STATICS_downloadAndCreateNode
		GEODE_AS_STATIC_FUNCTION(downloadAndCreateNode) 
	#endif

	#ifndef GEODE_STATICS_exitDailyNode
		#define GEODE_STATICS_exitDailyNode
		GEODE_AS_STATIC_FUNCTION(exitDailyNode) 
	#endif

	#ifndef GEODE_STATICS_getDailyTime
		#define GEODE_STATICS_getDailyTime
		GEODE_AS_STATIC_FUNCTION(getDailyTime) 
	#endif

	#ifndef GEODE_STATICS_getDailyTimeString
		#define GEODE_STATICS_getDailyTimeString
		GEODE_AS_STATIC_FUNCTION(getDailyTimeString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onTheSafe
		#define GEODE_STATICS_onTheSafe
		GEODE_AS_STATIC_FUNCTION(onTheSafe) 
	#endif

	#ifndef GEODE_STATICS_refreshDailyPage
		#define GEODE_STATICS_refreshDailyPage
		GEODE_AS_STATIC_FUNCTION(refreshDailyPage) 
	#endif

	#ifndef GEODE_STATICS_skipDailyLevel
		#define GEODE_STATICS_skipDailyLevel
		GEODE_AS_STATIC_FUNCTION(skipDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_tryGetDailyStatus
		#define GEODE_STATICS_tryGetDailyStatus
		GEODE_AS_STATIC_FUNCTION(tryGetDailyStatus) 
	#endif

	#ifndef GEODE_STATICS_updateTimers
		#define GEODE_STATICS_updateTimers
		GEODE_AS_STATIC_FUNCTION(updateTimers) 
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

	#ifndef GEODE_STATICS_dailyStatusFinished
		#define GEODE_STATICS_dailyStatusFinished
		GEODE_AS_STATIC_FUNCTION(dailyStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_dailyStatusFailed
		#define GEODE_STATICS_dailyStatusFailed
		GEODE_AS_STATIC_FUNCTION(dailyStatusFailed) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFinished
		#define GEODE_STATICS_levelDownloadFinished
		GEODE_AS_STATIC_FUNCTION(levelDownloadFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFailed
		#define GEODE_STATICS_levelDownloadFailed
		GEODE_AS_STATIC_FUNCTION(levelDownloadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DailyLevelPage> : ModifyBase<ModifyDerive<Der, DailyLevelPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DailyLevelPage>>;
		using ModifyBase<ModifyDerive<Der, DailyLevelPage>>::ModifyBase;
		using Base = DailyLevelPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d930c, Default, DailyLevelPage, init, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db5e0, Default, DailyLevelPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db544, Default, DailyLevelPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db3b8, Default, DailyLevelPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1daa90, Default, DailyLevelPage, dailyStatusFinished, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dae7c, Default, DailyLevelPage, dailyStatusFailed, GJTimedLevelType, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db0b8, Default, DailyLevelPage, levelDownloadFinished, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1db198, Default, DailyLevelPage, levelDownloadFailed, int)
		}
	};
}
