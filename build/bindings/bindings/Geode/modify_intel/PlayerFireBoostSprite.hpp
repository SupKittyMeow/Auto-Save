#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerFireBoostSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_animateFireIn
		#define GEODE_STATICS_animateFireIn
		GEODE_AS_STATIC_FUNCTION(animateFireIn) 
	#endif

	#ifndef GEODE_STATICS_animateFireOut
		#define GEODE_STATICS_animateFireOut
		GEODE_AS_STATIC_FUNCTION(animateFireOut) 
	#endif

	#ifndef GEODE_STATICS_loopFireAnimation
		#define GEODE_STATICS_loopFireAnimation
		GEODE_AS_STATIC_FUNCTION(loopFireAnimation) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayerFireBoostSprite> : ModifyBase<ModifyDerive<Der, PlayerFireBoostSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerFireBoostSprite>>;
		using ModifyBase<ModifyDerive<Der, PlayerFireBoostSprite>>::ModifyBase;
		using Base = PlayerFireBoostSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4211c0, Default, PlayerFireBoostSprite, animateFireIn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x421230, Default, PlayerFireBoostSprite, animateFireOut, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420f00, Default, PlayerFireBoostSprite, loopFireAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4262a0, Default, PlayerFireBoostSprite, init, )
		}
	};
}
