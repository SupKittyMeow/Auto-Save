#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCTextInputNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setMaxLabelScale
		#define GEODE_STATICS_setMaxLabelScale
		GEODE_AS_STATIC_FUNCTION(setMaxLabelScale) 
	#endif

	#ifndef GEODE_STATICS_setMaxLabelWidth
		#define GEODE_STATICS_setMaxLabelWidth
		GEODE_AS_STATIC_FUNCTION(setMaxLabelWidth) 
	#endif

	#ifndef GEODE_STATICS_setLabelPlaceholderScale
		#define GEODE_STATICS_setLabelPlaceholderScale
		GEODE_AS_STATIC_FUNCTION(setLabelPlaceholderScale) 
	#endif

	#ifndef GEODE_STATICS_setLabelPlaceholderColor
		#define GEODE_STATICS_setLabelPlaceholderColor
		GEODE_AS_STATIC_FUNCTION(setLabelPlaceholderColor) 
	#endif

	#ifndef GEODE_STATICS_addTextArea
		#define GEODE_STATICS_addTextArea
		GEODE_AS_STATIC_FUNCTION(addTextArea) 
	#endif

	#ifndef GEODE_STATICS_forceOffset
		#define GEODE_STATICS_forceOffset
		GEODE_AS_STATIC_FUNCTION(forceOffset) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_refreshLabel
		#define GEODE_STATICS_refreshLabel
		GEODE_AS_STATIC_FUNCTION(refreshLabel) 
	#endif

	#ifndef GEODE_STATICS_setLabelNormalColor
		#define GEODE_STATICS_setLabelNormalColor
		GEODE_AS_STATIC_FUNCTION(setLabelNormalColor) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabel
		#define GEODE_STATICS_updateBlinkLabel
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabel) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabelToChar
		#define GEODE_STATICS_updateBlinkLabelToChar
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabelToChar) 
	#endif

	#ifndef GEODE_STATICS_updateCursorPosition
		#define GEODE_STATICS_updateCursorPosition
		GEODE_AS_STATIC_FUNCTION(updateCursorPosition) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultFontValues
		#define GEODE_STATICS_updateDefaultFontValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultFontValues) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_onClickTrackNode
		#define GEODE_STATICS_onClickTrackNode
		GEODE_AS_STATIC_FUNCTION(onClickTrackNode) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillShow
		#define GEODE_STATICS_keyboardWillShow
		GEODE_AS_STATIC_FUNCTION(keyboardWillShow) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillHide
		#define GEODE_STATICS_keyboardWillHide
		GEODE_AS_STATIC_FUNCTION(keyboardWillHide) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldInsertText
		#define GEODE_STATICS_onTextFieldInsertText
		GEODE_AS_STATIC_FUNCTION(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldAttachWithIME
		#define GEODE_STATICS_onTextFieldAttachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldDetachWithIME
		#define GEODE_STATICS_onTextFieldDetachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldDetachWithIME) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCTextInputNode> : ModifyBase<ModifyDerive<Der, CCTextInputNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCTextInputNode>>;
		using ModifyBase<ModifyDerive<Der, CCTextInputNode>>::ModifyBase;
		using Base = CCTextInputNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9d950, Default, CCTextInputNode, create, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e840, Default, CCTextInputNode, setMaxLabelScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e860, Default, CCTextInputNode, setMaxLabelWidth, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e880, Default, CCTextInputNode, setLabelPlaceholderScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e8a0, Default, CCTextInputNode, setLabelPlaceholderColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9de60, Default, CCTextInputNode, addTextArea, TextArea*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa02c0, Default, CCTextInputNode, forceOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9db00, Default, CCTextInputNode, init, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e600, Default, CCTextInputNode, refreshLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e8c0, Default, CCTextInputNode, setLabelNormalColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e450, Default, CCTextInputNode, setString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e8e0, Default, CCTextInputNode, updateBlinkLabelToChar, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa02d0, Default, CCTextInputNode, updateCursorPosition, cocos2d::CCPoint, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e0c0, Default, CCTextInputNode, updateLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9e3f0, Default, CCTextInputNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa0840, Default, CCTextInputNode, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa0a90, Default, CCTextInputNode, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9efb0, Default, CCTextInputNode, textChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ef90, Default, CCTextInputNode, onClickTrackNode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ed30, Default, CCTextInputNode, keyboardWillShow, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ef10, Default, CCTextInputNode, keyboardWillHide, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9f0c0, Default, CCTextInputNode, onTextFieldInsertText, cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9f820, Default, CCTextInputNode, onTextFieldAttachWithIME, cocos2d::CCTextFieldTTF*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9fb50, Default, CCTextInputNode, onTextFieldDetachWithIME, cocos2d::CCTextFieldTTF*)
		}
	};
}
