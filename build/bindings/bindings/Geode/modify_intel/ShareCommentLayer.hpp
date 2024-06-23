#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShareCommentLayer.hpp>
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

	#ifndef GEODE_STATICS_onClear
		#define GEODE_STATICS_onClear
		GEODE_AS_STATIC_FUNCTION(onClear) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPercent
		#define GEODE_STATICS_onPercent
		GEODE_AS_STATIC_FUNCTION(onPercent) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_updateCharCountLabel
		#define GEODE_STATICS_updateCharCountLabel
		GEODE_AS_STATIC_FUNCTION(updateCharCountLabel) 
	#endif

	#ifndef GEODE_STATICS_updateDescText
		#define GEODE_STATICS_updateDescText
		GEODE_AS_STATIC_FUNCTION(updateDescText) 
	#endif

	#ifndef GEODE_STATICS_updatePercentLabel
		#define GEODE_STATICS_updatePercentLabel
		GEODE_AS_STATIC_FUNCTION(updatePercentLabel) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareCommentLayer> : ModifyBase<ModifyDerive<Der, ShareCommentLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareCommentLayer>>;
		using ModifyBase<ModifyDerive<Der, ShareCommentLayer>>::ModifyBase;
		using Base = ShareCommentLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eaab0, Default, ShareCommentLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eaa00, Default, ShareCommentLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eaaf0, Default, ShareCommentLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eac70, Default, ShareCommentLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eaed0, Default, ShareCommentLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eafd0, Default, ShareCommentLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5eb0f0, Default, ShareCommentLayer, onClosePopup, UploadActionPopup*)
		}
	};
}
