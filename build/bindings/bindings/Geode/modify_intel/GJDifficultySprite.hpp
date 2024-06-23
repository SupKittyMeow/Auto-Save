#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJDifficultySprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getDifficultyFrame
		#define GEODE_STATICS_getDifficultyFrame
		GEODE_AS_STATIC_FUNCTION(getDifficultyFrame) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateDifficultyFrame
		#define GEODE_STATICS_updateDifficultyFrame
		GEODE_AS_STATIC_FUNCTION(updateDifficultyFrame) 
	#endif

	#ifndef GEODE_STATICS_updateFeatureState
		#define GEODE_STATICS_updateFeatureState
		GEODE_AS_STATIC_FUNCTION(updateFeatureState) 
	#endif

	#ifndef GEODE_STATICS_updateFeatureStateFromLevel
		#define GEODE_STATICS_updateFeatureStateFromLevel
		GEODE_AS_STATIC_FUNCTION(updateFeatureStateFromLevel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJDifficultySprite> : ModifyBase<ModifyDerive<Der, GJDifficultySprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJDifficultySprite>>;
		using ModifyBase<ModifyDerive<Der, GJDifficultySprite>>::ModifyBase;
		using Base = GJDifficultySprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b2920, Default, GJDifficultySprite, create, int, GJDifficultyName)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b2a70, Default, GJDifficultySprite, getDifficultyFrame, int, GJDifficultyName)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b2a00, Default, GJDifficultySprite, init, int, GJDifficultyName)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b2ba0, Default, GJDifficultySprite, updateDifficultyFrame, int, GJDifficultyName)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b2d20, Default, GJDifficultySprite, updateFeatureState, GJFeatureState)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b2cd0, Default, GJDifficultySprite, updateFeatureStateFromLevel, GJGameLevel*)
		}
	};
}
