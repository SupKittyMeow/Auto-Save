#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EffectGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getTargetColorIndex
		#define GEODE_STATICS_getTargetColorIndex
		GEODE_AS_STATIC_FUNCTION(getTargetColorIndex) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_playTriggerEffect
		#define GEODE_STATICS_playTriggerEffect
		GEODE_AS_STATIC_FUNCTION(playTriggerEffect) 
	#endif

	#ifndef GEODE_STATICS_resetSpawnTrigger
		#define GEODE_STATICS_resetSpawnTrigger
		GEODE_AS_STATIC_FUNCTION(resetSpawnTrigger) 
	#endif

	#ifndef GEODE_STATICS_setTargetID
		#define GEODE_STATICS_setTargetID
		GEODE_AS_STATIC_FUNCTION(setTargetID) 
	#endif

	#ifndef GEODE_STATICS_setTargetID2
		#define GEODE_STATICS_setTargetID2
		GEODE_AS_STATIC_FUNCTION(setTargetID2) 
	#endif

	#ifndef GEODE_STATICS_triggerEffectFinished
		#define GEODE_STATICS_triggerEffectFinished
		GEODE_AS_STATIC_FUNCTION(triggerEffectFinished) 
	#endif

	#ifndef GEODE_STATICS_updateInteractiveHover
		#define GEODE_STATICS_updateInteractiveHover
		GEODE_AS_STATIC_FUNCTION(updateInteractiveHover) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialColor
		#define GEODE_STATICS_updateSpecialColor
		GEODE_AS_STATIC_FUNCTION(updateSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_updateSpeedModType
		#define GEODE_STATICS_updateSpeedModType
		GEODE_AS_STATIC_FUNCTION(updateSpeedModType) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setRScaleX
		#define GEODE_STATICS_setRScaleX
		GEODE_AS_STATIC_FUNCTION(setRScaleX) 
	#endif

	#ifndef GEODE_STATICS_setRScaleY
		#define GEODE_STATICS_setRScaleY
		GEODE_AS_STATIC_FUNCTION(setRScaleY) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

	#ifndef GEODE_STATICS_canReverse
		#define GEODE_STATICS_canReverse
		GEODE_AS_STATIC_FUNCTION(canReverse) 
	#endif

	#ifndef GEODE_STATICS_isSpecialSpawnObject
		#define GEODE_STATICS_isSpecialSpawnObject
		GEODE_AS_STATIC_FUNCTION(isSpecialSpawnObject) 
	#endif

	#ifndef GEODE_STATICS_canBeOrdered
		#define GEODE_STATICS_canBeOrdered
		GEODE_AS_STATIC_FUNCTION(canBeOrdered) 
	#endif

	#ifndef GEODE_STATICS_getObjectLabel
		#define GEODE_STATICS_getObjectLabel
		GEODE_AS_STATIC_FUNCTION(getObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_setObjectLabel
		#define GEODE_STATICS_setObjectLabel
		GEODE_AS_STATIC_FUNCTION(setObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_stateSensitiveOff
		#define GEODE_STATICS_stateSensitiveOff
		GEODE_AS_STATIC_FUNCTION(stateSensitiveOff) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EffectGameObject> : ModifyBase<ModifyDerive<Der, EffectGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EffectGameObject>>;
		using ModifyBase<ModifyDerive<Der, EffectGameObject>>::ModifyBase;
		using Base = EffectGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1727fc, Default, EffectGameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173c70, Default, EffectGameObject, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1562b4, Default, EffectGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172880, Default, EffectGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x157800, Default, EffectGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14e5e8, Default, EffectGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172504, Default, EffectGameObject, setRScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172514, Default, EffectGameObject, setRScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173be8, Default, EffectGameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173998, Default, EffectGameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173ba8, Default, EffectGameObject, spawnXPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173df0, Default, EffectGameObject, canReverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173e7c, Default, EffectGameObject, isSpecialSpawnObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173e84, Default, EffectGameObject, canBeOrdered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1550, Default, EffectGameObject, getObjectLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1558, Default, EffectGameObject, setObjectLabel, cocos2d::CCLabelBMFont*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173908, Default, EffectGameObject, stateSensitiveOff, GJBaseGameLayer*)
		}
	};
}
