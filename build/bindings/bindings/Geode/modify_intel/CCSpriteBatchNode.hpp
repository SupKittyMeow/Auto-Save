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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171670, Default, cocos2d::CCSpriteBatchNode, initWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x171940, Default, cocos2d::CCSpriteBatchNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1719f0, Default, cocos2d::CCSpriteBatchNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1718f0, Default, cocos2d::CCSpriteBatchNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171dc0, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171dd0, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171b60, Default, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171e40, Default, cocos2d::CCSpriteBatchNode, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172120, Default, cocos2d::CCSpriteBatchNode, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171de0, Default, cocos2d::CCSpriteBatchNode, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1721d0, Default, cocos2d::CCSpriteBatchNode, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1729c0, Default, cocos2d::CCSpriteBatchNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x171ac0, Default, cocos2d::CCSpriteBatchNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173220, Default, cocos2d::CCSpriteBatchNode, setBlendFunc, cocos2d::_ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173240, Default, cocos2d::CCSpriteBatchNode, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173260, Default, cocos2d::CCSpriteBatchNode, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173290, Default, cocos2d::CCSpriteBatchNode, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
