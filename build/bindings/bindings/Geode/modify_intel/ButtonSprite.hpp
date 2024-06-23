#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ButtonSprite.hpp>
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

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_updateBGImage
		#define GEODE_STATICS_updateBGImage
		GEODE_AS_STATIC_FUNCTION(updateBGImage) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteBGSize
		#define GEODE_STATICS_updateSpriteBGSize
		GEODE_AS_STATIC_FUNCTION(updateSpriteBGSize) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteOffset
		#define GEODE_STATICS_updateSpriteOffset
		GEODE_AS_STATIC_FUNCTION(updateSpriteOffset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ButtonSprite> : ModifyBase<ModifyDerive<Der, ButtonSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ButtonSprite>>;
		using ModifyBase<ModifyDerive<Der, ButtonSprite>>::ModifyBase;
		using Base = ButtonSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x92140, Default, ButtonSprite, create, char const*, int, int, float, bool, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x920f0, Default, ButtonSprite, create, char const*, int, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x918c0, Default, ButtonSprite, create, cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x92530, Default, ButtonSprite, setString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x92920, Default, ButtonSprite, updateBGImage, char const*)
		}
	};
}
