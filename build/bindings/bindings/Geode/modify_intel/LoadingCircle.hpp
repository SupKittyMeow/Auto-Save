#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LoadingCircle.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_fadeAndRemove
		#define GEODE_STATICS_fadeAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeAndRemove) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LoadingCircle> : ModifyBase<ModifyDerive<Der, LoadingCircle>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LoadingCircle>>;
		using ModifyBase<ModifyDerive<Der, LoadingCircle>>::ModifyBase;
		using Base = LoadingCircle;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c8dc0, Default, LoadingCircle, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c90f0, Default, LoadingCircle, fadeAndRemove, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c9000, Default, LoadingCircle, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c8f30, Default, LoadingCircle, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c9180, Default, LoadingCircle, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c9400, Default, LoadingCircle, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c91a0, Default, LoadingCircle, registerWithTouchDispatcher, )
		}
	};
}
