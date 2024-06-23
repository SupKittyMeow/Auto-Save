#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildrenWithCleanup
		#define GEODE_STATICS_removeAllChildrenWithCleanup
		GEODE_AS_STATIC_FUNCTION(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_STATICS_reorderChild
		#define GEODE_STATICS_reorderChild
		GEODE_AS_STATIC_FUNCTION(reorderChild) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildren
		#define GEODE_STATICS_sortAllChildren
		GEODE_AS_STATIC_FUNCTION(sortAllChildren) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteBatchNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>>::ModifyBase;
		using Base = cocos2d::CCSpriteBatchNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b124, Default, cocos2d::CCSpriteBatchNode, initWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x13b3c8, Default, cocos2d::CCSpriteBatchNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x13b448, Default, cocos2d::CCSpriteBatchNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b36c, Default, cocos2d::CCSpriteBatchNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b818, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b81c, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b590, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b8ac, Default, cocos2d::CCSpriteBatchNode, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13bb28, Default, cocos2d::CCSpriteBatchNode, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b820, Default, cocos2d::CCSpriteBatchNode, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13bbd0, Default, cocos2d::CCSpriteBatchNode, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13c188, Default, cocos2d::CCSpriteBatchNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b4ec, Default, cocos2d::CCSpriteBatchNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13c9fc, Default, cocos2d::CCSpriteBatchNode, setBlendFunc, cocos2d::_ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13ca0c, Default, cocos2d::CCSpriteBatchNode, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13ca1c, Default, cocos2d::CCSpriteBatchNode, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13ca3c, Default, cocos2d::CCSpriteBatchNode, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
