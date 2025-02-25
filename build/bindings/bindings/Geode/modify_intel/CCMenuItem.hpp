#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_initWithTarget
		#define GEODE_STATICS_initWithTarget
		GEODE_AS_STATIC_FUNCTION(initWithTarget) 
	#endif

	#ifndef GEODE_STATICS_getScriptTapHandler
		#define GEODE_STATICS_getScriptTapHandler
		GEODE_AS_STATIC_FUNCTION(getScriptTapHandler) 
	#endif

	#ifndef GEODE_STATICS_setTarget
		#define GEODE_STATICS_setTarget
		GEODE_AS_STATIC_FUNCTION(setTarget) 
	#endif

	#ifndef GEODE_STATICS_rect
		#define GEODE_STATICS_rect
		GEODE_AS_STATIC_FUNCTION(rect) 
	#endif

	#ifndef GEODE_STATICS_activate
		#define GEODE_STATICS_activate
		GEODE_AS_STATIC_FUNCTION(activate) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif

	#ifndef GEODE_STATICS_registerScriptTapHandler
		#define GEODE_STATICS_registerScriptTapHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptTapHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptTapHandler
		#define GEODE_STATICS_unregisterScriptTapHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptTapHandler) 
	#endif

	#ifndef GEODE_STATICS_isEnabled
		#define GEODE_STATICS_isEnabled
		GEODE_AS_STATIC_FUNCTION(isEnabled) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_isSelected
		#define GEODE_STATICS_isSelected
		GEODE_AS_STATIC_FUNCTION(isSelected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenuItem> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItem>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItem>>::ModifyBase;
		using Base = cocos2d::CCMenuItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3c1fc0, Default, cocos2d::CCMenuItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c1ee0, Default, cocos2d::CCMenuItem, initWithTarget, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c2210, Default, cocos2d::CCMenuItem, setTarget, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c2120, Default, cocos2d::CCMenuItem, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c2090, Default, cocos2d::CCMenuItem, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c20a0, Default, cocos2d::CCMenuItem, unselected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c20b0, Default, cocos2d::CCMenuItem, registerScriptTapHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c20e0, Default, cocos2d::CCMenuItem, unregisterScriptTapHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c21a0, Default, cocos2d::CCMenuItem, isEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c2190, Default, cocos2d::CCMenuItem, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c2200, Default, cocos2d::CCMenuItem, isSelected, )
		}
	};
}
