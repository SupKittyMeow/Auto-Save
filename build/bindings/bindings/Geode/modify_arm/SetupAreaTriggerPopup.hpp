#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaTriggerPopup.hpp>
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
	struct ModifyDerive<Der, SetupAreaTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaTriggerPopup>>::ModifyBase;
		using Base = SetupAreaTriggerPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
