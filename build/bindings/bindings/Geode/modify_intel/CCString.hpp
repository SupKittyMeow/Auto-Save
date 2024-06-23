#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithData
		#define GEODE_STATICS_createWithData
		GEODE_AS_STATIC_FUNCTION(createWithData) 
	#endif

	#ifndef GEODE_STATICS_getCString
		#define GEODE_STATICS_getCString
		GEODE_AS_STATIC_FUNCTION(getCString) 
	#endif

	#ifndef GEODE_STATICS_boolValue
		#define GEODE_STATICS_boolValue
		GEODE_AS_STATIC_FUNCTION(boolValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCString> : ModifyBase<ModifyDerive<Der, cocos2d::CCString>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCString>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCString>>::ModifyBase;
		using Base = cocos2d::CCString;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b7370, Default, cocos2d::CCString, createWithData, unsigned char const*, unsigned long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b6cc0, Default, cocos2d::CCString, getCString, )
		}
	};
}
