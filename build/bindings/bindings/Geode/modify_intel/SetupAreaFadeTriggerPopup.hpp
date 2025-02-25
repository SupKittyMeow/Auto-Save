#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaFadeTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAreaFadeTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaFadeTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaFadeTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaFadeTriggerPopup>>::ModifyBase;
		using Base = SetupAreaFadeTriggerPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
