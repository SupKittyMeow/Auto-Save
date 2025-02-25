#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RotateGameplayGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateGameplayRotation
		#define GEODE_STATICS_updateGameplayRotation
		GEODE_AS_STATIC_FUNCTION(updateGameplayRotation) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateStartValues
		#define GEODE_STATICS_updateStartValues
		GEODE_AS_STATIC_FUNCTION(updateStartValues) 
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
	struct ModifyDerive<Der, RotateGameplayGameObject> : ModifyBase<ModifyDerive<Der, RotateGameplayGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RotateGameplayGameObject>>;
		using ModifyBase<ModifyDerive<Der, RotateGameplayGameObject>>::ModifyBase;
		using Base = RotateGameplayGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1eb3d0, Default, RotateGameplayGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ed0f0, Default, RotateGameplayGameObject, updateStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ecd70, Default, RotateGameplayGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1eb420, Default, RotateGameplayGameObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
