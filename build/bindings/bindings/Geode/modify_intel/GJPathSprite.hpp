#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addRankLabel
		#define GEODE_STATICS_addRankLabel
		GEODE_AS_STATIC_FUNCTION(addRankLabel) 
	#endif

	#ifndef GEODE_STATICS_addShardSprite
		#define GEODE_STATICS_addShardSprite
		GEODE_AS_STATIC_FUNCTION(addShardSprite) 
	#endif

	#ifndef GEODE_STATICS_changeToLockedArt
		#define GEODE_STATICS_changeToLockedArt
		GEODE_AS_STATIC_FUNCTION(changeToLockedArt) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateState
		#define GEODE_STATICS_updateState
		GEODE_AS_STATIC_FUNCTION(updateState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPathSprite> : ModifyBase<ModifyDerive<Der, GJPathSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathSprite>>;
		using ModifyBase<ModifyDerive<Der, GJPathSprite>>::ModifyBase;
		using Base = GJPathSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd4e0, Default, GJPathSprite, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x301b70, Default, GJPathSprite, addRankLabel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x301650, Default, GJPathSprite, addShardSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x300640, Default, GJPathSprite, changeToLockedArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x301a60, Default, GJPathSprite, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2fd580, Default, GJPathSprite, updateState, )
		}
	};
}
