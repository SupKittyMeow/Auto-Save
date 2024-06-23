#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupZoomTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupZoomTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupZoomTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupZoomTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupZoomTriggerPopup>>::ModifyBase;
		using Base = SetupZoomTriggerPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
