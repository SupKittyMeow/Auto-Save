#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DemonInfoPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createFromString
		#define GEODE_STATICS_createFromString
		GEODE_AS_STATIC_FUNCTION(createFromString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DemonInfoPopup> : ModifyBase<ModifyDerive<Der, DemonInfoPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DemonInfoPopup>>;
		using ModifyBase<ModifyDerive<Der, DemonInfoPopup>>::ModifyBase;
		using Base = DemonInfoPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d2c7c, Default, DemonInfoPopup, create, int, int, int, int, int, int, int, int, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d0a5c, Default, DemonInfoPopup, createFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d2dd8, Default, DemonInfoPopup, init, int, int, int, int, int, int, int, int, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d371c, Default, DemonInfoPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d3758, Default, DemonInfoPopup, keyBackClicked, )
		}
	};
}
