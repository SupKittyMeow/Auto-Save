#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TimerItem_padded.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, TimerItem_padded> : ModifyBase<ModifyDerive<Der, TimerItem_padded>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TimerItem_padded>>;
		using ModifyBase<ModifyDerive<Der, TimerItem_padded>>::ModifyBase;
		using Base = TimerItem_padded;
        using Derived = Der;
		void apply() override {

		}
	};
}
