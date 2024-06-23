#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_textFieldWithPlaceHolder
		#define GEODE_STATICS_textFieldWithPlaceHolder
		GEODE_AS_STATIC_FUNCTION(textFieldWithPlaceHolder) 
	#endif

	#ifndef GEODE_STATICS_initWithPlaceHolder
		#define GEODE_STATICS_initWithPlaceHolder
		GEODE_AS_STATIC_FUNCTION(initWithPlaceHolder) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_getColorSpaceHolder
		#define GEODE_STATICS_getColorSpaceHolder
		GEODE_AS_STATIC_FUNCTION(getColorSpaceHolder) 
	#endif

	#ifndef GEODE_STATICS_setColorSpaceHolder
		#define GEODE_STATICS_setColorSpaceHolder
		GEODE_AS_STATIC_FUNCTION(setColorSpaceHolder) 
	#endif

	#ifndef GEODE_STATICS_getPlaceHolder
		#define GEODE_STATICS_getPlaceHolder
		GEODE_AS_STATIC_FUNCTION(getPlaceHolder) 
	#endif

	#ifndef GEODE_STATICS_setPlaceHolder
		#define GEODE_STATICS_setPlaceHolder
		GEODE_AS_STATIC_FUNCTION(setPlaceHolder) 
	#endif

	#ifndef GEODE_STATICS_setSecureTextEntry
		#define GEODE_STATICS_setSecureTextEntry
		GEODE_AS_STATIC_FUNCTION(setSecureTextEntry) 
	#endif

	#ifndef GEODE_STATICS_isSecureTextEntry
		#define GEODE_STATICS_isSecureTextEntry
		GEODE_AS_STATIC_FUNCTION(isSecureTextEntry) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS_attachWithIME
		#define GEODE_STATICS_attachWithIME
		GEODE_AS_STATIC_FUNCTION(attachWithIME) 
	#endif

	#ifndef GEODE_STATICS_detachWithIME
		#define GEODE_STATICS_detachWithIME
		GEODE_AS_STATIC_FUNCTION(detachWithIME) 
	#endif

	#ifndef GEODE_STATICS_canAttachWithIME
		#define GEODE_STATICS_canAttachWithIME
		GEODE_AS_STATIC_FUNCTION(canAttachWithIME) 
	#endif

	#ifndef GEODE_STATICS_canDetachWithIME
		#define GEODE_STATICS_canDetachWithIME
		GEODE_AS_STATIC_FUNCTION(canDetachWithIME) 
	#endif

	#ifndef GEODE_STATICS_insertText
		#define GEODE_STATICS_insertText
		GEODE_AS_STATIC_FUNCTION(insertText) 
	#endif

	#ifndef GEODE_STATICS_deleteBackward
		#define GEODE_STATICS_deleteBackward
		GEODE_AS_STATIC_FUNCTION(deleteBackward) 
	#endif

	#ifndef GEODE_STATICS_getContentText
		#define GEODE_STATICS_getContentText
		GEODE_AS_STATIC_FUNCTION(getContentText) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTextFieldTTF> : ModifyBase<ModifyDerive<Der, cocos2d::CCTextFieldTTF>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTextFieldTTF>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTextFieldTTF>>::ModifyBase;
		using Base = cocos2d::CCTextFieldTTF;
        using Derived = Der;
		void apply() override {

		}
	};
}
