#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_loadCustomLevelCell
		#define GEODE_STATICS_loadCustomLevelCell
		GEODE_AS_STATIC_FUNCTION(loadCustomLevelCell) 
	#endif

	#ifndef GEODE_STATICS_loadFromLevel
		#define GEODE_STATICS_loadFromLevel
		GEODE_AS_STATIC_FUNCTION(loadFromLevel) 
	#endif

	#ifndef GEODE_STATICS_loadLocalLevelCell
		#define GEODE_STATICS_loadLocalLevelCell
		GEODE_AS_STATIC_FUNCTION(loadLocalLevelCell) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_updateCellMode
		#define GEODE_STATICS_updateCellMode
		GEODE_AS_STATIC_FUNCTION(updateCellMode) 
	#endif

	#ifndef GEODE_STATICS_updateToggle
		#define GEODE_STATICS_updateToggle
		GEODE_AS_STATIC_FUNCTION(updateToggle) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelCell> : ModifyBase<ModifyDerive<Der, LevelCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelCell>>;
		using ModifyBase<ModifyDerive<Der, LevelCell>>::ModifyBase;
		using Base = LevelCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x1f4a04, Default, LevelCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4904, Default, LevelCell, create, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f5430, Default, LevelCell, loadCustomLevelCell, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ea748, Default, LevelCell, loadFromLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4aa4, Default, LevelCell, loadLocalLevelCell, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7d40, Default, LevelCell, onClick, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7d28, Default, LevelCell, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7ea4, Default, LevelCell, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4a88, Default, LevelCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7ee4, Default, LevelCell, draw, )
		}
	};
}
