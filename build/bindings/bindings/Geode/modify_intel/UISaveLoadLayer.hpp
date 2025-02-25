#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UISaveLoadLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onLoad
		#define GEODE_STATICS_onLoad
		GEODE_AS_STATIC_FUNCTION(onLoad) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UISaveLoadLayer> : ModifyBase<ModifyDerive<Der, UISaveLoadLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UISaveLoadLayer>>;
		using ModifyBase<ModifyDerive<Der, UISaveLoadLayer>>::ModifyBase;
		using Base = UISaveLoadLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
