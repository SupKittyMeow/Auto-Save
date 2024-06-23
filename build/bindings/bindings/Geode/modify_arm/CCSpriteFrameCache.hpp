#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedSpriteFrameCache
		#define GEODE_STATICS_sharedSpriteFrameCache
		GEODE_AS_STATIC_FUNCTION(sharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addSpriteFrame
		#define GEODE_STATICS_addSpriteFrame
		GEODE_AS_STATIC_FUNCTION(addSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_addSpriteFramesWithDictionary
		#define GEODE_STATICS_addSpriteFramesWithDictionary
		GEODE_AS_STATIC_FUNCTION(addSpriteFramesWithDictionary) 
	#endif

	#ifndef GEODE_STATICS_addSpriteFramesWithFile
		#define GEODE_STATICS_addSpriteFramesWithFile
		GEODE_AS_STATIC_FUNCTION(addSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFrameByName
		#define GEODE_STATICS_removeSpriteFrameByName
		GEODE_AS_STATIC_FUNCTION(removeSpriteFrameByName) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFrames
		#define GEODE_STATICS_removeSpriteFrames
		GEODE_AS_STATIC_FUNCTION(removeSpriteFrames) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFramesFromDictionary
		#define GEODE_STATICS_removeSpriteFramesFromDictionary
		GEODE_AS_STATIC_FUNCTION(removeSpriteFramesFromDictionary) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFramesFromFile
		#define GEODE_STATICS_removeSpriteFramesFromFile
		GEODE_AS_STATIC_FUNCTION(removeSpriteFramesFromFile) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFramesFromTexture
		#define GEODE_STATICS_removeSpriteFramesFromTexture
		GEODE_AS_STATIC_FUNCTION(removeSpriteFramesFromTexture) 
	#endif

	#ifndef GEODE_STATICS_removeUnusedSpriteFrames
		#define GEODE_STATICS_removeUnusedSpriteFrames
		GEODE_AS_STATIC_FUNCTION(removeUnusedSpriteFrames) 
	#endif

	#ifndef GEODE_STATICS_spriteFrameByName
		#define GEODE_STATICS_spriteFrameByName
		GEODE_AS_STATIC_FUNCTION(spriteFrameByName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteFrameCache> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrameCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrameCache>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrameCache>>::ModifyBase;
		using Base = cocos2d::CCSpriteFrameCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ab520, Default, cocos2d::CCSpriteFrameCache, sharedSpriteFrameCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ab7d8, Default, cocos2d::CCSpriteFrameCache, addSpriteFramesWithDictionary, cocos2d::CCDictionary*, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ac58c, Default, cocos2d::CCSpriteFrameCache, addSpriteFramesWithFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ad664, Default, cocos2d::CCSpriteFrameCache, spriteFrameByName, char const*)
		}
	};
}
