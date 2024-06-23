#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODSoundState_padded.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, FMODSoundState_padded> : ModifyBase<ModifyDerive<Der, FMODSoundState_padded>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODSoundState_padded>>;
		using ModifyBase<ModifyDerive<Der, FMODSoundState_padded>>::ModifyBase;
		using Base = FMODSoundState_padded;
        using Derived = Der;
		void apply() override {

		}
	};
}
