#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectListIconDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, SelectListIconDelegate> : ModifyBase<ModifyDerive<Der, SelectListIconDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectListIconDelegate>>;
		using ModifyBase<ModifyDerive<Der, SelectListIconDelegate>>::ModifyBase;
		using Base = SelectListIconDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
