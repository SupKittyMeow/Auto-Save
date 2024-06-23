#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJDropDownLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_enterLayer
		#define GEODE_STATICS_enterLayer
		GEODE_AS_STATIC_FUNCTION(enterLayer) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_showLayer
		#define GEODE_STATICS_showLayer
		GEODE_AS_STATIC_FUNCTION(showLayer) 
	#endif

	#ifndef GEODE_STATICS_hideLayer
		#define GEODE_STATICS_hideLayer
		GEODE_AS_STATIC_FUNCTION(hideLayer) 
	#endif

	#ifndef GEODE_STATICS_layerVisible
		#define GEODE_STATICS_layerVisible
		GEODE_AS_STATIC_FUNCTION(layerVisible) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
	#endif

	#ifndef GEODE_STATICS_disableUI
		#define GEODE_STATICS_disableUI
		GEODE_AS_STATIC_FUNCTION(disableUI) 
	#endif

	#ifndef GEODE_STATICS_enableUI
		#define GEODE_STATICS_enableUI
		GEODE_AS_STATIC_FUNCTION(enableUI) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJDropDownLayer> : ModifyBase<ModifyDerive<Der, GJDropDownLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJDropDownLayer>>;
		using ModifyBase<ModifyDerive<Der, GJDropDownLayer>>::ModifyBase;
		using Base = GJDropDownLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f18a0, Default, GJDropDownLayer, init, char const*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1cd0, Default, GJDropDownLayer, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1770, Default, GJDropDownLayer, create, const char*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1cb0, Default, GJDropDownLayer, create, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f20b0, Default, GJDropDownLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f20e0, Default, GJDropDownLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1d70, Default, GJDropDownLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1db0, Default, GJDropDownLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1d40, Default, GJDropDownLayer, enterLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1df0, Default, GJDropDownLayer, exitLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1e30, Default, GJDropDownLayer, showLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1f40, Default, GJDropDownLayer, hideLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2050, Default, GJDropDownLayer, layerVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f2070, Default, GJDropDownLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1d00, Default, GJDropDownLayer, disableUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5f1d20, Default, GJDropDownLayer, enableUI, )
		}
	};
}
