#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SimplePlayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_asyncLoadIcon
		#define GEODE_STATICS_asyncLoadIcon
		GEODE_AS_STATIC_FUNCTION(asyncLoadIcon) 
	#endif

	#ifndef GEODE_STATICS_createRobotSprite
		#define GEODE_STATICS_createRobotSprite
		GEODE_AS_STATIC_FUNCTION(createRobotSprite) 
	#endif

	#ifndef GEODE_STATICS_createSpiderSprite
		#define GEODE_STATICS_createSpiderSprite
		GEODE_AS_STATIC_FUNCTION(createSpiderSprite) 
	#endif

	#ifndef GEODE_STATICS_hideAll
		#define GEODE_STATICS_hideAll
		GEODE_AS_STATIC_FUNCTION(hideAll) 
	#endif

	#ifndef GEODE_STATICS_hideSecondary
		#define GEODE_STATICS_hideSecondary
		GEODE_AS_STATIC_FUNCTION(hideSecondary) 
	#endif

	#ifndef GEODE_STATICS_iconFinishedLoading
		#define GEODE_STATICS_iconFinishedLoading
		GEODE_AS_STATIC_FUNCTION(iconFinishedLoading) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setColors
		#define GEODE_STATICS_setColors
		GEODE_AS_STATIC_FUNCTION(setColors) 
	#endif

	#ifndef GEODE_STATICS_setFrames
		#define GEODE_STATICS_setFrames
		GEODE_AS_STATIC_FUNCTION(setFrames) 
	#endif

	#ifndef GEODE_STATICS_setSecondColor
		#define GEODE_STATICS_setSecondColor
		GEODE_AS_STATIC_FUNCTION(setSecondColor) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerFrame
		#define GEODE_STATICS_updatePlayerFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SimplePlayer> : ModifyBase<ModifyDerive<Der, SimplePlayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SimplePlayer>>;
		using ModifyBase<ModifyDerive<Der, SimplePlayer>>::ModifyBase;
		using Base = SimplePlayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f84a4, Default, SimplePlayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fdeb8, Default, SimplePlayer, setSecondColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fbf00, Default, SimplePlayer, updateColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f8784, Default, SimplePlayer, updatePlayerFrame, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fe1c4, Default, SimplePlayer, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fde58, Default, SimplePlayer, setColor, cocos2d::ccColor3B const&)
		}
	};
}
