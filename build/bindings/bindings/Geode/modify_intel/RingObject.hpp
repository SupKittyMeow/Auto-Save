#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RingObject.hpp>
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

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setRScale
		#define GEODE_STATICS_setRScale
		GEODE_AS_STATIC_FUNCTION(setRScale) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_shouldDrawEditorHitbox
		#define GEODE_STATICS_shouldDrawEditorHitbox
		GEODE_AS_STATIC_FUNCTION(shouldDrawEditorHitbox) 
	#endif

	#ifndef GEODE_STATICS_powerOnObject
		#define GEODE_STATICS_powerOnObject
		GEODE_AS_STATIC_FUNCTION(powerOnObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RingObject> : ModifyBase<ModifyDerive<Der, RingObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RingObject>>;
		using ModifyBase<ModifyDerive<Der, RingObject>>::ModifyBase;
		using Base = RingObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af530, Default, RingObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af590, Default, RingObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af510, Default, RingObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af5c0, Default, RingObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af710, Default, RingObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af560, Default, RingObject, setRScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af3b0, Default, RingObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af5a0, Default, RingObject, shouldDrawEditorHitbox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1af3c0, Default, RingObject, powerOnObject, int)
		}
	};
}
