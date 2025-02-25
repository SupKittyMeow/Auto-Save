#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCAnimatedSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_cleanupSprite
		#define GEODE_STATICS_cleanupSprite
		GEODE_AS_STATIC_FUNCTION(cleanupSprite) 
	#endif

	#ifndef GEODE_STATICS_createWithType
		#define GEODE_STATICS_createWithType
		GEODE_AS_STATIC_FUNCTION(createWithType) 
	#endif

	#ifndef GEODE_STATICS_initWithType
		#define GEODE_STATICS_initWithType
		GEODE_AS_STATIC_FUNCTION(initWithType) 
	#endif

	#ifndef GEODE_STATICS_loadType
		#define GEODE_STATICS_loadType
		GEODE_AS_STATIC_FUNCTION(loadType) 
	#endif

	#ifndef GEODE_STATICS_runAnimation
		#define GEODE_STATICS_runAnimation
		GEODE_AS_STATIC_FUNCTION(runAnimation) 
	#endif

	#ifndef GEODE_STATICS_runAnimationForced
		#define GEODE_STATICS_runAnimationForced
		GEODE_AS_STATIC_FUNCTION(runAnimationForced) 
	#endif

	#ifndef GEODE_STATICS_stopTween
		#define GEODE_STATICS_stopTween
		GEODE_AS_STATIC_FUNCTION(stopTween) 
	#endif

	#ifndef GEODE_STATICS_switchToMode
		#define GEODE_STATICS_switchToMode
		GEODE_AS_STATIC_FUNCTION(switchToMode) 
	#endif

	#ifndef GEODE_STATICS_tweenToAnimation
		#define GEODE_STATICS_tweenToAnimation
		GEODE_AS_STATIC_FUNCTION(tweenToAnimation) 
	#endif

	#ifndef GEODE_STATICS_tweenToAnimationFinished
		#define GEODE_STATICS_tweenToAnimationFinished
		GEODE_AS_STATIC_FUNCTION(tweenToAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_willPlayAnimation
		#define GEODE_STATICS_willPlayAnimation
		GEODE_AS_STATIC_FUNCTION(willPlayAnimation) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_animationFinishedO
		#define GEODE_STATICS_animationFinishedO
		GEODE_AS_STATIC_FUNCTION(animationFinishedO) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCAnimatedSprite> : ModifyBase<ModifyDerive<Der, CCAnimatedSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCAnimatedSprite>>;
		using ModifyBase<ModifyDerive<Der, CCAnimatedSprite>>::ModifyBase;
		using Base = CCAnimatedSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dfaf8, Default, CCAnimatedSprite, cleanupSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2df14c, Default, CCAnimatedSprite, createWithType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2df220, Default, CCAnimatedSprite, initWithType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2df40c, Default, CCAnimatedSprite, loadType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dfc94, Default, CCAnimatedSprite, runAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dfd7c, Default, CCAnimatedSprite, runAnimationForced, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e0290, Default, CCAnimatedSprite, stopTween, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dfb88, Default, CCAnimatedSprite, switchToMode, spriteMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dfea4, Default, CCAnimatedSprite, tweenToAnimation, gd::string, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e01a0, Default, CCAnimatedSprite, tweenToAnimationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2dfe74, Default, CCAnimatedSprite, willPlayAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e0318, Default, CCAnimatedSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e03c8, Default, CCAnimatedSprite, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e0300, Default, CCAnimatedSprite, animationFinished, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e02cc, Default, CCAnimatedSprite, animationFinishedO, cocos2d::CCObject*)
		}
	};
}
