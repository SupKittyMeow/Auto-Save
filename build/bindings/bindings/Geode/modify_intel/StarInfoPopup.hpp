#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StarInfoPopup.hpp>
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

	#ifndef GEODE_STATICS_createFromStringMoons
		#define GEODE_STATICS_createFromStringMoons
		GEODE_AS_STATIC_FUNCTION(createFromStringMoons) 
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
	struct ModifyDerive<Der, StarInfoPopup> : ModifyBase<ModifyDerive<Der, StarInfoPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StarInfoPopup>>;
		using ModifyBase<ModifyDerive<Der, StarInfoPopup>>::ModifyBase;
		using Base = StarInfoPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cea20, Default, StarInfoPopup, create, int, int, int, int, int, int, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cb650, Default, StarInfoPopup, createFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cb8e0, Default, StarInfoPopup, createFromStringMoons, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cebb0, Default, StarInfoPopup, init, int, int, int, int, int, int, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cf3a0, Default, StarInfoPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cf3d0, Default, StarInfoPopup, keyBackClicked, )
		}
	};
}
