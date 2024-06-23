#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GradientTriggerObject.hpp>
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

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GradientTriggerObject> : ModifyBase<ModifyDerive<Der, GradientTriggerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GradientTriggerObject>>;
		using ModifyBase<ModifyDerive<Der, GradientTriggerObject>>::ModifyBase;
		using Base = GradientTriggerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196bd0, Default, GradientTriggerObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198500, Default, GradientTriggerObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196c30, Default, GradientTriggerObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
