#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithArray
		#define GEODE_STATICS_createWithArray
		GEODE_AS_STATIC_FUNCTION(createWithArray) 
	#endif

	#ifndef GEODE_STATICS_createWithCapacity
		#define GEODE_STATICS_createWithCapacity
		GEODE_AS_STATIC_FUNCTION(createWithCapacity) 
	#endif

	#ifndef GEODE_STATICS_createWithContentsOfFile
		#define GEODE_STATICS_createWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createWithContentsOfFileThreadSafe
		#define GEODE_STATICS_createWithContentsOfFileThreadSafe
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFileThreadSafe) 
	#endif

	#ifndef GEODE_STATICS_createWithObject
		#define GEODE_STATICS_createWithObject
		GEODE_AS_STATIC_FUNCTION(createWithObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_initWithArray
		#define GEODE_STATICS_initWithArray
		GEODE_AS_STATIC_FUNCTION(initWithArray) 
	#endif

	#ifndef GEODE_STATICS_initWithCapacity
		#define GEODE_STATICS_initWithCapacity
		GEODE_AS_STATIC_FUNCTION(initWithCapacity) 
	#endif

	#ifndef GEODE_STATICS_initWithObject
		#define GEODE_STATICS_initWithObject
		GEODE_AS_STATIC_FUNCTION(initWithObject) 
	#endif

	#ifndef GEODE_STATICS_addObjectNew
		#define GEODE_STATICS_addObjectNew
		GEODE_AS_STATIC_FUNCTION(addObjectNew) 
	#endif

	#ifndef GEODE_STATICS_addObjectsFromArray
		#define GEODE_STATICS_addObjectsFromArray
		GEODE_AS_STATIC_FUNCTION(addObjectsFromArray) 
	#endif

	#ifndef GEODE_STATICS_capacity
		#define GEODE_STATICS_capacity
		GEODE_AS_STATIC_FUNCTION(capacity) 
	#endif

	#ifndef GEODE_STATICS_containsObject
		#define GEODE_STATICS_containsObject
		GEODE_AS_STATIC_FUNCTION(containsObject) 
	#endif

	#ifndef GEODE_STATICS_exchangeObject
		#define GEODE_STATICS_exchangeObject
		GEODE_AS_STATIC_FUNCTION(exchangeObject) 
	#endif

	#ifndef GEODE_STATICS_exchangeObjectAtIndex
		#define GEODE_STATICS_exchangeObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(exchangeObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObject
		#define GEODE_STATICS_fastRemoveObject
		GEODE_AS_STATIC_FUNCTION(fastRemoveObject) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndex
		#define GEODE_STATICS_fastRemoveObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndexChild
		#define GEODE_STATICS_fastRemoveObjectAtIndexChild
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndexChild) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndexNew
		#define GEODE_STATICS_fastRemoveObjectAtIndexNew
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndexNew) 
	#endif

	#ifndef GEODE_STATICS_indexOfObject
		#define GEODE_STATICS_indexOfObject
		GEODE_AS_STATIC_FUNCTION(indexOfObject) 
	#endif

	#ifndef GEODE_STATICS_insertObject
		#define GEODE_STATICS_insertObject
		GEODE_AS_STATIC_FUNCTION(insertObject) 
	#endif

	#ifndef GEODE_STATICS_isEqualToArray
		#define GEODE_STATICS_isEqualToArray
		GEODE_AS_STATIC_FUNCTION(isEqualToArray) 
	#endif

	#ifndef GEODE_STATICS_randomObject
		#define GEODE_STATICS_randomObject
		GEODE_AS_STATIC_FUNCTION(randomObject) 
	#endif

	#ifndef GEODE_STATICS_recreateNewIndexes
		#define GEODE_STATICS_recreateNewIndexes
		GEODE_AS_STATIC_FUNCTION(recreateNewIndexes) 
	#endif

	#ifndef GEODE_STATICS_reduceMemoryFootprint
		#define GEODE_STATICS_reduceMemoryFootprint
		GEODE_AS_STATIC_FUNCTION(reduceMemoryFootprint) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeObject
		#define GEODE_STATICS_removeObject
		GEODE_AS_STATIC_FUNCTION(removeObject) 
	#endif

	#ifndef GEODE_STATICS_removeObjectAtIndex
		#define GEODE_STATICS_removeObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(removeObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_removeObjectAtIndexChild
		#define GEODE_STATICS_removeObjectAtIndexChild
		GEODE_AS_STATIC_FUNCTION(removeObjectAtIndexChild) 
	#endif

	#ifndef GEODE_STATICS_removeObjectsInArray
		#define GEODE_STATICS_removeObjectsInArray
		GEODE_AS_STATIC_FUNCTION(removeObjectsInArray) 
	#endif

	#ifndef GEODE_STATICS_replaceObjectAtIndex
		#define GEODE_STATICS_replaceObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(replaceObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_reverseObjects
		#define GEODE_STATICS_reverseObjects
		GEODE_AS_STATIC_FUNCTION(reverseObjects) 
	#endif

	#ifndef GEODE_STATICS_stringAtIndex
		#define GEODE_STATICS_stringAtIndex
		GEODE_AS_STATIC_FUNCTION(stringAtIndex) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCArray> : ModifyBase<ModifyDerive<Der, cocos2d::CCArray>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCArray>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCArray>>::ModifyBase;
		using Base = cocos2d::CCArray;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x72cbb0, Default, cocos2d::CCArray, initWithCapacity, unsigned int)
		}
	};
}
