#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJStoreItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getCurrencyKey
		#define GEODE_STATICS_getCurrencyKey
		GEODE_AS_STATIC_FUNCTION(getCurrencyKey) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJStoreItem> : ModifyBase<ModifyDerive<Der, GJStoreItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJStoreItem>>;
		using ModifyBase<ModifyDerive<Der, GJStoreItem>>::ModifyBase;
		using Base = GJStoreItem;
        using Derived = Der;
		void apply() override {

		}
	};
}
