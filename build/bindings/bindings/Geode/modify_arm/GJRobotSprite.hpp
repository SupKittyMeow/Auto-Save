#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRobotSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_hideGlow
		#define GEODE_STATICS_hideGlow
		GEODE_AS_STATIC_FUNCTION(hideGlow) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_showGlow
		#define GEODE_STATICS_showGlow
		GEODE_AS_STATIC_FUNCTION(showGlow) 
	#endif

	#ifndef GEODE_STATICS_updateColor01
		#define GEODE_STATICS_updateColor01
		GEODE_AS_STATIC_FUNCTION(updateColor01) 
	#endif

	#ifndef GEODE_STATICS_updateColor02
		#define GEODE_STATICS_updateColor02
		GEODE_AS_STATIC_FUNCTION(updateColor02) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateFrame
		#define GEODE_STATICS_updateFrame
		GEODE_AS_STATIC_FUNCTION(updateFrame) 
	#endif

	#ifndef GEODE_STATICS_updateGlowColor
		#define GEODE_STATICS_updateGlowColor
		GEODE_AS_STATIC_FUNCTION(updateGlowColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_hideSecondary
		#define GEODE_STATICS_hideSecondary
		GEODE_AS_STATIC_FUNCTION(hideSecondary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRobotSprite> : ModifyBase<ModifyDerive<Der, GJRobotSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRobotSprite>>;
		using ModifyBase<ModifyDerive<Der, GJRobotSprite>>::ModifyBase;
		using Base = GJRobotSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50e80c, Default, GJRobotSprite, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50f694, Default, GJRobotSprite, hideGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50e9cc, Default, GJRobotSprite, init, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50e93c, Default, GJRobotSprite, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50f680, Default, GJRobotSprite, showGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50f6a8, Default, GJRobotSprite, updateColor01, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50f954, Default, GJRobotSprite, updateColor02, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50f6bc, Default, GJRobotSprite, updateColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50ef7c, Default, GJRobotSprite, updateFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50f964, Default, GJRobotSprite, updateGlowColor, cocos2d::ccColor3B, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50f9e0, Default, GJRobotSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x50fac4, Default, GJRobotSprite, hideSecondary, )
		}
	};
}
