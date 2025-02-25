#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, GJDropDownLayerDelegate> : ModifyBase<ModifyDerive<Der, GJDropDownLayerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJDropDownLayerDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJDropDownLayerDelegate>>::ModifyBase;
		using Base = GJDropDownLayerDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
