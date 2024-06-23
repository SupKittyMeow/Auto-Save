#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PointNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PointNode> : ModifyBase<ModifyDerive<Der, PointNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PointNode>>;
		using ModifyBase<ModifyDerive<Der, PointNode>>::ModifyBase;
		using Base = PointNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8d534, Default, PointNode, create, cocos2d::CCPoint)
		}
	};
}
