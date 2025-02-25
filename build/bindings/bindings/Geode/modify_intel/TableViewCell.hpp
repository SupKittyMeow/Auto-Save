#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewCell> : ModifyBase<ModifyDerive<Der, TableViewCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewCell>>;
		using ModifyBase<ModifyDerive<Der, TableViewCell>>::ModifyBase;
		using Base = TableViewCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x633d10, Default, TableViewCell, char const*, float, float)
		}
	};
}
