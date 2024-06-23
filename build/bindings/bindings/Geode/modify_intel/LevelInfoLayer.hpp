#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelInfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_confirmClone
		#define GEODE_STATICS_confirmClone
		GEODE_AS_STATIC_FUNCTION(confirmClone) 
	#endif

	#ifndef GEODE_STATICS_confirmDelete
		#define GEODE_STATICS_confirmDelete
		GEODE_AS_STATIC_FUNCTION(confirmDelete) 
	#endif

	#ifndef GEODE_STATICS_confirmMoveToBottom
		#define GEODE_STATICS_confirmMoveToBottom
		GEODE_AS_STATIC_FUNCTION(confirmMoveToBottom) 
	#endif

	#ifndef GEODE_STATICS_confirmMoveToTop
		#define GEODE_STATICS_confirmMoveToTop
		GEODE_AS_STATIC_FUNCTION(confirmMoveToTop) 
	#endif

	#ifndef GEODE_STATICS_confirmOwnerDelete
		#define GEODE_STATICS_confirmOwnerDelete
		GEODE_AS_STATIC_FUNCTION(confirmOwnerDelete) 
	#endif

	#ifndef GEODE_STATICS_downloadLevel
		#define GEODE_STATICS_downloadLevel
		GEODE_AS_STATIC_FUNCTION(downloadLevel) 
	#endif

	#ifndef GEODE_STATICS_incrementDislikes
		#define GEODE_STATICS_incrementDislikes
		GEODE_AS_STATIC_FUNCTION(incrementDislikes) 
	#endif

	#ifndef GEODE_STATICS_incrementLikes
		#define GEODE_STATICS_incrementLikes
		GEODE_AS_STATIC_FUNCTION(incrementLikes) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadLevelStep
		#define GEODE_STATICS_loadLevelStep
		GEODE_AS_STATIC_FUNCTION(loadLevelStep) 
	#endif

	#ifndef GEODE_STATICS_onAddToList
		#define GEODE_STATICS_onAddToList
		GEODE_AS_STATIC_FUNCTION(onAddToList) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onClone
		#define GEODE_STATICS_onClone
		GEODE_AS_STATIC_FUNCTION(onClone) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onFavorite
		#define GEODE_STATICS_onFavorite
		GEODE_AS_STATIC_FUNCTION(onFavorite) 
	#endif

	#ifndef GEODE_STATICS_onFeatured
		#define GEODE_STATICS_onFeatured
		GEODE_AS_STATIC_FUNCTION(onFeatured) 
	#endif

	#ifndef GEODE_STATICS_onGarage
		#define GEODE_STATICS_onGarage
		GEODE_AS_STATIC_FUNCTION(onGarage) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onLevelInfo
		#define GEODE_STATICS_onLevelInfo
		GEODE_AS_STATIC_FUNCTION(onLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_onLevelOptions
		#define GEODE_STATICS_onLevelOptions
		GEODE_AS_STATIC_FUNCTION(onLevelOptions) 
	#endif

	#ifndef GEODE_STATICS_onLevelLeaderboard
		#define GEODE_STATICS_onLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_onLowDetailMode
		#define GEODE_STATICS_onLowDetailMode
		GEODE_AS_STATIC_FUNCTION(onLowDetailMode) 
	#endif

	#ifndef GEODE_STATICS_onOwnerDelete
		#define GEODE_STATICS_onOwnerDelete
		GEODE_AS_STATIC_FUNCTION(onOwnerDelete) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onPlayReplay
		#define GEODE_STATICS_onPlayReplay
		GEODE_AS_STATIC_FUNCTION(onPlayReplay) 
	#endif

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_onRateDemon
		#define GEODE_STATICS_onRateDemon
		GEODE_AS_STATIC_FUNCTION(onRateDemon) 
	#endif

	#ifndef GEODE_STATICS_onRateStars
		#define GEODE_STATICS_onRateStars
		GEODE_AS_STATIC_FUNCTION(onRateStars) 
	#endif

	#ifndef GEODE_STATICS_onRateStarsMod
		#define GEODE_STATICS_onRateStarsMod
		GEODE_AS_STATIC_FUNCTION(onRateStarsMod) 
	#endif

	#ifndef GEODE_STATICS_onSetFolder
		#define GEODE_STATICS_onSetFolder
		GEODE_AS_STATIC_FUNCTION(onSetFolder) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_playStep4
		#define GEODE_STATICS_playStep4
		GEODE_AS_STATIC_FUNCTION(playStep4) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_setupLevelInfo
		#define GEODE_STATICS_setupLevelInfo
		GEODE_AS_STATIC_FUNCTION(setupLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_setupPlatformerStats
		#define GEODE_STATICS_setupPlatformerStats
		GEODE_AS_STATIC_FUNCTION(setupPlatformerStats) 
	#endif

	#ifndef GEODE_STATICS_setupProgressBars
		#define GEODE_STATICS_setupProgressBars
		GEODE_AS_STATIC_FUNCTION(setupProgressBars) 
	#endif

	#ifndef GEODE_STATICS_shouldDownloadLevel
		#define GEODE_STATICS_shouldDownloadLevel
		GEODE_AS_STATIC_FUNCTION(shouldDownloadLevel) 
	#endif

	#ifndef GEODE_STATICS_showSongWarning
		#define GEODE_STATICS_showSongWarning
		GEODE_AS_STATIC_FUNCTION(showSongWarning) 
	#endif

	#ifndef GEODE_STATICS_showUpdateAlert
		#define GEODE_STATICS_showUpdateAlert
		GEODE_AS_STATIC_FUNCTION(showUpdateAlert) 
	#endif

	#ifndef GEODE_STATICS_tryCloneLevel
		#define GEODE_STATICS_tryCloneLevel
		GEODE_AS_STATIC_FUNCTION(tryCloneLevel) 
	#endif

	#ifndef GEODE_STATICS_tryShowAd
		#define GEODE_STATICS_tryShowAd
		GEODE_AS_STATIC_FUNCTION(tryShowAd) 
	#endif

	#ifndef GEODE_STATICS_updateLabelValues
		#define GEODE_STATICS_updateLabelValues
		GEODE_AS_STATIC_FUNCTION(updateLabelValues) 
	#endif

	#ifndef GEODE_STATICS_updateSideButtons
		#define GEODE_STATICS_updateSideButtons
		GEODE_AS_STATIC_FUNCTION(updateSideButtons) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_numberInputClosed
		#define GEODE_STATICS_numberInputClosed
		GEODE_AS_STATIC_FUNCTION(numberInputClosed) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFinished
		#define GEODE_STATICS_levelDownloadFinished
		GEODE_AS_STATIC_FUNCTION(levelDownloadFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFailed
		#define GEODE_STATICS_levelDownloadFailed
		GEODE_AS_STATIC_FUNCTION(levelDownloadFailed) 
	#endif

	#ifndef GEODE_STATICS_levelUpdateFinished
		#define GEODE_STATICS_levelUpdateFinished
		GEODE_AS_STATIC_FUNCTION(levelUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_levelUpdateFailed
		#define GEODE_STATICS_levelUpdateFailed
		GEODE_AS_STATIC_FUNCTION(levelUpdateFailed) 
	#endif

	#ifndef GEODE_STATICS_levelDeleteFinished
		#define GEODE_STATICS_levelDeleteFinished
		GEODE_AS_STATIC_FUNCTION(levelDeleteFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDeleteFailed
		#define GEODE_STATICS_levelDeleteFailed
		GEODE_AS_STATIC_FUNCTION(levelDeleteFailed) 
	#endif

	#ifndef GEODE_STATICS_rateLevelClosed
		#define GEODE_STATICS_rateLevelClosed
		GEODE_AS_STATIC_FUNCTION(rateLevelClosed) 
	#endif

	#ifndef GEODE_STATICS_likedItem
		#define GEODE_STATICS_likedItem
		GEODE_AS_STATIC_FUNCTION(likedItem) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelInfoLayer> : ModifyBase<ModifyDerive<Der, LevelInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelInfoLayer>>::ModifyBase;
		using Base = LevelInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b8e60, Default, LevelInfoLayer, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bddb0, Default, LevelInfoLayer, confirmClone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd590, Default, LevelInfoLayer, confirmDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be5a0, Default, LevelInfoLayer, confirmMoveToBottom, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be4c0, Default, LevelInfoLayer, confirmMoveToTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bdcd0, Default, LevelInfoLayer, confirmOwnerDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bbdc0, Default, LevelInfoLayer, downloadLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b9040, Default, LevelInfoLayer, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0300, Default, LevelInfoLayer, loadLevelStep, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be840, Default, LevelInfoLayer, onAddToList, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be000, Default, LevelInfoLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be440, Default, LevelInfoLayer, onFavorite, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be3e0, Default, LevelInfoLayer, onGarage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd800, Default, LevelInfoLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be080, Default, LevelInfoLayer, onLevelInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be680, Default, LevelInfoLayer, onLevelOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd830, Default, LevelInfoLayer, onLevelLeaderboard, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd8a0, Default, LevelInfoLayer, onLike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bb5c0, Default, LevelInfoLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0430, Default, LevelInfoLayer, onPlayReplay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0a80, Default, LevelInfoLayer, onRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bda80, Default, LevelInfoLayer, onRateDemon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd920, Default, LevelInfoLayer, onRateStars, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bdc80, Default, LevelInfoLayer, onRateStarsMod, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be7a0, Default, LevelInfoLayer, onSetFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd680, Default, LevelInfoLayer, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bb540, Default, LevelInfoLayer, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c01b0, Default, LevelInfoLayer, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0270, Default, LevelInfoLayer, playStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c03b0, Default, LevelInfoLayer, playStep4, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bbeb0, Default, LevelInfoLayer, setupLevelInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bcb10, Default, LevelInfoLayer, setupPlatformerStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bce50, Default, LevelInfoLayer, setupProgressBars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c00c0, Default, LevelInfoLayer, showSongWarning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bfc20, Default, LevelInfoLayer, showUpdateAlert, UpdateResponse)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bdee0, Default, LevelInfoLayer, tryCloneLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bebc0, Default, LevelInfoLayer, updateLabelValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bdae0, Default, LevelInfoLayer, updateSideButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0ec0, Default, LevelInfoLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0ef0, Default, LevelInfoLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c05f0, Default, LevelInfoLayer, numberInputClosed, NumberInputLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be8a0, Default, LevelInfoLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf730, Default, LevelInfoLayer, levelDownloadFinished, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bfac0, Default, LevelInfoLayer, levelDownloadFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bfbb0, Default, LevelInfoLayer, levelUpdateFinished, GJGameLevel*, UpdateResponse)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bfda0, Default, LevelInfoLayer, levelUpdateFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bfea0, Default, LevelInfoLayer, levelDeleteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bffb0, Default, LevelInfoLayer, levelDeleteFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0bb0, Default, LevelInfoLayer, rateLevelClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0be0, Default, LevelInfoLayer, likedItem, LikeItemType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0cf0, Default, LevelInfoLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be9d0, Default, LevelInfoLayer, setIDPopupClosed, SetIDPopup*, int)
		}
	};
}
