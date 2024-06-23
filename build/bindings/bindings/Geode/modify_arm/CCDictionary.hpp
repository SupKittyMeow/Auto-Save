#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithContentsOfFile
		#define GEODE_STATICS_createWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createWithContentsOfFileThreadSafe
		#define GEODE_STATICS_createWithContentsOfFileThreadSafe
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFileThreadSafe) 
	#endif

	#ifndef GEODE_STATICS_createWithDictionary
		#define GEODE_STATICS_createWithDictionary
		GEODE_AS_STATIC_FUNCTION(createWithDictionary) 
	#endif

	#ifndef GEODE_STATICS_getFirstKey
		#define GEODE_STATICS_getFirstKey
		GEODE_AS_STATIC_FUNCTION(getFirstKey) 
	#endif

	#ifndef GEODE_STATICS_setObject
		#define GEODE_STATICS_setObject
		GEODE_AS_STATIC_FUNCTION(setObject) 
	#endif

	#ifndef GEODE_STATICS_setObjectUnSafe
		#define GEODE_STATICS_setObjectUnSafe
		GEODE_AS_STATIC_FUNCTION(setObjectUnSafe) 
	#endif

	#ifndef GEODE_STATICS_allKeys
		#define GEODE_STATICS_allKeys
		GEODE_AS_STATIC_FUNCTION(allKeys) 
	#endif

	#ifndef GEODE_STATICS_allKeysForObject
		#define GEODE_STATICS_allKeysForObject
		GEODE_AS_STATIC_FUNCTION(allKeysForObject) 
	#endif

	#ifndef GEODE_STATICS_charForKey
		#define GEODE_STATICS_charForKey
		GEODE_AS_STATIC_FUNCTION(charForKey) 
	#endif

	#ifndef GEODE_STATICS_count
		#define GEODE_STATICS_count
		GEODE_AS_STATIC_FUNCTION(count) 
	#endif

	#ifndef GEODE_STATICS_objectForKey
		#define GEODE_STATICS_objectForKey
		GEODE_AS_STATIC_FUNCTION(objectForKey) 
	#endif

	#ifndef GEODE_STATICS_randomObject
		#define GEODE_STATICS_randomObject
		GEODE_AS_STATIC_FUNCTION(randomObject) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeObjectForElememt
		#define GEODE_STATICS_removeObjectForElememt
		GEODE_AS_STATIC_FUNCTION(removeObjectForElememt) 
	#endif

	#ifndef GEODE_STATICS_removeObjectForKey
		#define GEODE_STATICS_removeObjectForKey
		GEODE_AS_STATIC_FUNCTION(removeObjectForKey) 
	#endif

	#ifndef GEODE_STATICS_removeObjectsForKeys
		#define GEODE_STATICS_removeObjectsForKeys
		GEODE_AS_STATIC_FUNCTION(removeObjectsForKeys) 
	#endif

	#ifndef GEODE_STATICS_valueForKey
		#define GEODE_STATICS_valueForKey
		GEODE_AS_STATIC_FUNCTION(valueForKey) 
	#endif

	#ifndef GEODE_STATICS_writeToFile
		#define GEODE_STATICS_writeToFile
		GEODE_AS_STATIC_FUNCTION(writeToFile) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_acceptVisitor
		#define GEODE_STATICS_acceptVisitor
		GEODE_AS_STATIC_FUNCTION(acceptVisitor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDictionary> : ModifyBase<ModifyDerive<Der, cocos2d::CCDictionary>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDictionary>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDictionary>>::ModifyBase;
		using Base = cocos2d::CCDictionary;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0fac, Default, cocos2d::CCDictionary, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a1138, Default, cocos2d::CCDictionary, createWithContentsOfFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a1030, Default, cocos2d::CCDictionary, createWithContentsOfFileThreadSafe, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29f8f0, Default, cocos2d::CCDictionary, setObject, cocos2d::CCObject*, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29f408, Default, cocos2d::CCDictionary, objectForKey, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29ee04, Default, cocos2d::CCDictionary, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0608, Default, cocos2d::CCDictionary, removeObjectForKey, gd::string const&)
		}
	};
}
