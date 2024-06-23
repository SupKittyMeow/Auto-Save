#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LoadingLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getLoadingString
		#define GEODE_STATICS_getLoadingString
		GEODE_AS_STATIC_FUNCTION(getLoadingString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadAssets
		#define GEODE_STATICS_loadAssets
		GEODE_AS_STATIC_FUNCTION(loadAssets) 
	#endif

	#ifndef GEODE_STATICS_loadingFinished
		#define GEODE_STATICS_loadingFinished
		GEODE_AS_STATIC_FUNCTION(loadingFinished) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_updateProgress
		#define GEODE_STATICS_updateProgress
		GEODE_AS_STATIC_FUNCTION(updateProgress) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LoadingLayer> : ModifyBase<ModifyDerive<Der, LoadingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LoadingLayer>>;
		using ModifyBase<ModifyDerive<Der, LoadingLayer>>::ModifyBase;
		using Base = LoadingLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a5890, Default, LoadingLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a60d0, Default, LoadingLayer, loadAssets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a6870, Default, LoadingLayer, loadingFinished, )
		}
	};
}
