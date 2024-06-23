#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CurrencyRewardLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createObjects
		#define GEODE_STATICS_createObjects
		GEODE_AS_STATIC_FUNCTION(createObjects) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFull
		#define GEODE_STATICS_createObjectsFull
		GEODE_AS_STATIC_FUNCTION(createObjectsFull) 
	#endif

	#ifndef GEODE_STATICS_createUnlockObject
		#define GEODE_STATICS_createUnlockObject
		GEODE_AS_STATIC_FUNCTION(createUnlockObject) 
	#endif

	#ifndef GEODE_STATICS_incrementCount
		#define GEODE_STATICS_incrementCount
		GEODE_AS_STATIC_FUNCTION(incrementCount) 
	#endif

	#ifndef GEODE_STATICS_incrementDiamondsCount
		#define GEODE_STATICS_incrementDiamondsCount
		GEODE_AS_STATIC_FUNCTION(incrementDiamondsCount) 
	#endif

	#ifndef GEODE_STATICS_incrementMoonsCount
		#define GEODE_STATICS_incrementMoonsCount
		GEODE_AS_STATIC_FUNCTION(incrementMoonsCount) 
	#endif

	#ifndef GEODE_STATICS_incrementSpecialCount1
		#define GEODE_STATICS_incrementSpecialCount1
		GEODE_AS_STATIC_FUNCTION(incrementSpecialCount1) 
	#endif

	#ifndef GEODE_STATICS_incrementSpecialCount2
		#define GEODE_STATICS_incrementSpecialCount2
		GEODE_AS_STATIC_FUNCTION(incrementSpecialCount2) 
	#endif

	#ifndef GEODE_STATICS_incrementStarsCount
		#define GEODE_STATICS_incrementStarsCount
		GEODE_AS_STATIC_FUNCTION(incrementStarsCount) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_pulseSprite
		#define GEODE_STATICS_pulseSprite
		GEODE_AS_STATIC_FUNCTION(pulseSprite) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CurrencyRewardLayer> : ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>>;
		using ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>>::ModifyBase;
		using Base = CurrencyRewardLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6b865c, Default, CurrencyRewardLayer, create, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6ba6d4, Default, CurrencyRewardLayer, createObjects, CurrencySpriteType, int, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6ba798, Default, CurrencyRewardLayer, createObjectsFull, CurrencySpriteType, int, cocos2d::CCSprite*, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6ba73c, Default, CurrencyRewardLayer, createUnlockObject, cocos2d::CCSprite*, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bba28, Default, CurrencyRewardLayer, incrementCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bbcc8, Default, CurrencyRewardLayer, incrementDiamondsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bbe18, Default, CurrencyRewardLayer, incrementMoonsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bc0b8, Default, CurrencyRewardLayer, incrementSpecialCount1, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bbf68, Default, CurrencyRewardLayer, incrementSpecialCount2, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bbb78, Default, CurrencyRewardLayer, incrementStarsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6b8764, Default, CurrencyRewardLayer, init, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bc208, Default, CurrencyRewardLayer, pulseSprite, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bb3b8, Default, CurrencyRewardLayer, update, float)
		}
	};
}
