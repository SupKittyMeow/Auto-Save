#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpritePlus.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addFollower
		#define GEODE_STATICS_addFollower
		GEODE_AS_STATIC_FUNCTION(addFollower) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrame
		#define GEODE_STATICS_createWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_followSprite
		#define GEODE_STATICS_followSprite
		GEODE_AS_STATIC_FUNCTION(followSprite) 
	#endif

	#ifndef GEODE_STATICS_getFollower
		#define GEODE_STATICS_getFollower
		GEODE_AS_STATIC_FUNCTION(getFollower) 
	#endif

	#ifndef GEODE_STATICS_removeFollower
		#define GEODE_STATICS_removeFollower
		GEODE_AS_STATIC_FUNCTION(removeFollower) 
	#endif

	#ifndef GEODE_STATICS_stopFollow
		#define GEODE_STATICS_stopFollow
		GEODE_AS_STATIC_FUNCTION(stopFollow) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrameName
		#define GEODE_STATICS_initWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpritePlus> : ModifyBase<ModifyDerive<Der, CCSpritePlus>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpritePlus>>;
		using ModifyBase<ModifyDerive<Der, CCSpritePlus>>::ModifyBase;
		using Base = CCSpritePlus;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f089c, Default, CCSpritePlus, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f0918, Default, CCSpritePlus, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f0994, Default, CCSpritePlus, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f056c, Default, CCSpritePlus, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f05e0, Default, CCSpritePlus, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f0654, Default, CCSpritePlus, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f06c8, Default, CCSpritePlus, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f0558, Default, CCSpritePlus, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f054c, Default, CCSpritePlus, initWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f073c, Default, CCSpritePlus, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f07ec, Default, CCSpritePlus, setFlipY, bool)
		}
	};
}
