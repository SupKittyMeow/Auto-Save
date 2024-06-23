#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ProfilePage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_isOnWatchlist
		#define GEODE_STATICS_isOnWatchlist
		GEODE_AS_STATIC_FUNCTION(isOnWatchlist) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_loadPageFromUserInfo
		#define GEODE_STATICS_loadPageFromUserInfo
		GEODE_AS_STATIC_FUNCTION(loadPageFromUserInfo) 
	#endif

	#ifndef GEODE_STATICS_onBlockUser
		#define GEODE_STATICS_onBlockUser
		GEODE_AS_STATIC_FUNCTION(onBlockUser) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onComment
		#define GEODE_STATICS_onComment
		GEODE_AS_STATIC_FUNCTION(onComment) 
	#endif

	#ifndef GEODE_STATICS_onCommentHistory
		#define GEODE_STATICS_onCommentHistory
		GEODE_AS_STATIC_FUNCTION(onCommentHistory) 
	#endif

	#ifndef GEODE_STATICS_onCopyName
		#define GEODE_STATICS_onCopyName
		GEODE_AS_STATIC_FUNCTION(onCopyName) 
	#endif

	#ifndef GEODE_STATICS_onFollow
		#define GEODE_STATICS_onFollow
		GEODE_AS_STATIC_FUNCTION(onFollow) 
	#endif

	#ifndef GEODE_STATICS_onFriend
		#define GEODE_STATICS_onFriend
		GEODE_AS_STATIC_FUNCTION(onFriend) 
	#endif

	#ifndef GEODE_STATICS_onFriends
		#define GEODE_STATICS_onFriends
		GEODE_AS_STATIC_FUNCTION(onFriends) 
	#endif

	#ifndef GEODE_STATICS_onMessages
		#define GEODE_STATICS_onMessages
		GEODE_AS_STATIC_FUNCTION(onMessages) 
	#endif

	#ifndef GEODE_STATICS_onMyLevels
		#define GEODE_STATICS_onMyLevels
		GEODE_AS_STATIC_FUNCTION(onMyLevels) 
	#endif

	#ifndef GEODE_STATICS_onMyLists
		#define GEODE_STATICS_onMyLists
		GEODE_AS_STATIC_FUNCTION(onMyLists) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onRequests
		#define GEODE_STATICS_onRequests
		GEODE_AS_STATIC_FUNCTION(onRequests) 
	#endif

	#ifndef GEODE_STATICS_onSendMessage
		#define GEODE_STATICS_onSendMessage
		GEODE_AS_STATIC_FUNCTION(onSendMessage) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onStatInfo
		#define GEODE_STATICS_onStatInfo
		GEODE_AS_STATIC_FUNCTION(onStatInfo) 
	#endif

	#ifndef GEODE_STATICS_onTwitch
		#define GEODE_STATICS_onTwitch
		GEODE_AS_STATIC_FUNCTION(onTwitch) 
	#endif

	#ifndef GEODE_STATICS_onTwitter
		#define GEODE_STATICS_onTwitter
		GEODE_AS_STATIC_FUNCTION(onTwitter) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_onYouTube
		#define GEODE_STATICS_onYouTube
		GEODE_AS_STATIC_FUNCTION(onYouTube) 
	#endif

	#ifndef GEODE_STATICS_setupComments
		#define GEODE_STATICS_setupComments
		GEODE_AS_STATIC_FUNCTION(setupComments) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_showNoAccountError
		#define GEODE_STATICS_showNoAccountError
		GEODE_AS_STATIC_FUNCTION(showNoAccountError) 
	#endif

	#ifndef GEODE_STATICS_toggleMainPageVisibility
		#define GEODE_STATICS_toggleMainPageVisibility
		GEODE_AS_STATIC_FUNCTION(toggleMainPageVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFinished
		#define GEODE_STATICS_getUserInfoFinished
		GEODE_AS_STATIC_FUNCTION(getUserInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFailed
		#define GEODE_STATICS_getUserInfoFailed
		GEODE_AS_STATIC_FUNCTION(getUserInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_userInfoChanged
		#define GEODE_STATICS_userInfoChanged
		GEODE_AS_STATIC_FUNCTION(userInfoChanged) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFinished
		#define GEODE_STATICS_loadCommentsFinished
		GEODE_AS_STATIC_FUNCTION(loadCommentsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFailed
		#define GEODE_STATICS_loadCommentsFailed
		GEODE_AS_STATIC_FUNCTION(loadCommentsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFinished
		#define GEODE_STATICS_commentUploadFinished
		GEODE_AS_STATIC_FUNCTION(commentUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFailed
		#define GEODE_STATICS_commentUploadFailed
		GEODE_AS_STATIC_FUNCTION(commentUploadFailed) 
	#endif

	#ifndef GEODE_STATICS_commentDeleteFailed
		#define GEODE_STATICS_commentDeleteFailed
		GEODE_AS_STATIC_FUNCTION(commentDeleteFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ProfilePage> : ModifyBase<ModifyDerive<Der, ProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ProfilePage>>;
		using ModifyBase<ModifyDerive<Der, ProfilePage>>::ModifyBase;
		using Base = ProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c4d90, Default, ProfilePage, create, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c4fa0, Default, ProfilePage, init, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c6330, Default, ProfilePage, loadPageFromUserInfo, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c8e70, Default, ProfilePage, onStatInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7be330, Default, ProfilePage, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c61f0, Default, ProfilePage, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cdb20, Default, ProfilePage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc5e0, Default, ProfilePage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc860, Default, ProfilePage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc090, Default, ProfilePage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc6f0, Default, ProfilePage, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc7c0, Default, ProfilePage, updateUserScoreFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ccb50, Default, ProfilePage, getUserInfoFinished, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ccea0, Default, ProfilePage, getUserInfoFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ccf60, Default, ProfilePage, userInfoChanged, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd170, Default, ProfilePage, loadCommentsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd260, Default, ProfilePage, loadCommentsFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd330, Default, ProfilePage, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd830, Default, ProfilePage, commentUploadFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd8c0, Default, ProfilePage, commentUploadFailed, int, CommentError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd990, Default, ProfilePage, commentDeleteFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc270, Default, ProfilePage, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc2f0, Default, ProfilePage, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cc4c0, Default, ProfilePage, uploadActionFailed, int, int)
		}
	};
}
