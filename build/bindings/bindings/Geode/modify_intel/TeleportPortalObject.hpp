#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TeleportPortalObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getTeleportXOff
		#define GEODE_STATICS_getTeleportXOff
		GEODE_AS_STATIC_FUNCTION(getTeleportXOff) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setPositionOverride
		#define GEODE_STATICS_setPositionOverride
		GEODE_AS_STATIC_FUNCTION(setPositionOverride) 
	#endif

	#ifndef GEODE_STATICS_setStartPosOverride
		#define GEODE_STATICS_setStartPosOverride
		GEODE_AS_STATIC_FUNCTION(setStartPosOverride) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setStartPos
		#define GEODE_STATICS_setStartPos
		GEODE_AS_STATIC_FUNCTION(setStartPos) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_setRotation2
		#define GEODE_STATICS_setRotation2
		GEODE_AS_STATIC_FUNCTION(setRotation2) 
	#endif

	#ifndef GEODE_STATICS_addToGroup2
		#define GEODE_STATICS_addToGroup2
		GEODE_AS_STATIC_FUNCTION(addToGroup2) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup2
		#define GEODE_STATICS_removeFromGroup2
		GEODE_AS_STATIC_FUNCTION(removeFromGroup2) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TeleportPortalObject> : ModifyBase<ModifyDerive<Der, TeleportPortalObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TeleportPortalObject>>;
		using ModifyBase<ModifyDerive<Der, TeleportPortalObject>>::ModifyBase;
		using Base = TeleportPortalObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8ac0, Default, TeleportPortalObject, create, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8e60, Default, TeleportPortalObject, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8f10, Default, TeleportPortalObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8cb0, Default, TeleportPortalObject, setStartPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1bb5f0, Default, TeleportPortalObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b9060, Default, TeleportPortalObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8fa0, Default, TeleportPortalObject, addToGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b9000, Default, TeleportPortalObject, removeFromGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8f70, Default, TeleportPortalObject, setRotation2, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8f80, Default, TeleportPortalObject, addToGroup2, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1b8f90, Default, TeleportPortalObject, removeFromGroup2, int)
		}
	};
}
