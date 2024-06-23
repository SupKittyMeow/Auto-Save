#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getInstance
		#define GEODE_STATICS_getInstance
		GEODE_AS_STATIC_FUNCTION(getInstance) 
	#endif

	#ifndef GEODE_STATICS_destroyInstance
		#define GEODE_STATICS_destroyInstance
		GEODE_AS_STATIC_FUNCTION(destroyInstance) 
	#endif

	#ifndef GEODE_STATICS_send
		#define GEODE_STATICS_send
		GEODE_AS_STATIC_FUNCTION(send) 
	#endif

	#ifndef GEODE_STATICS_lazyInitThreadSemphore
		#define GEODE_STATICS_lazyInitThreadSemphore
		GEODE_AS_STATIC_FUNCTION(lazyInitThreadSemphore) 
	#endif

	#ifndef GEODE_STATICS_dispatchResponseCallbacks
		#define GEODE_STATICS_dispatchResponseCallbacks
		GEODE_AS_STATIC_FUNCTION(dispatchResponseCallbacks) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCHttpClient> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>>::ModifyBase;
		using Base = cocos2d::extension::CCHttpClient;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3cfc, Default, cocos2d::extension::CCHttpClient, getInstance, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3d60, Default, cocos2d::extension::CCHttpClient, destroyInstance, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4ac0, Default, cocos2d::extension::CCHttpClient, send, cocos2d::extension::CCHttpRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4074, Default, cocos2d::extension::CCHttpClient, lazyInitThreadSemphore, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3da4, Default, cocos2d::extension::CCHttpClient, dispatchResponseCallbacks, float)
		}
	};
}
