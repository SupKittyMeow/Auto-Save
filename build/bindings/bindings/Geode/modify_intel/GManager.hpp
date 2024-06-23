#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getCompressedSaveString
		#define GEODE_STATICS_getCompressedSaveString
		GEODE_AS_STATIC_FUNCTION(getCompressedSaveString) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_load
		#define GEODE_STATICS_load
		GEODE_AS_STATIC_FUNCTION(load) 
	#endif

	#ifndef GEODE_STATICS_loadDataFromFile
		#define GEODE_STATICS_loadDataFromFile
		GEODE_AS_STATIC_FUNCTION(loadDataFromFile) 
	#endif

	#ifndef GEODE_STATICS_loadFromCompressedString
		#define GEODE_STATICS_loadFromCompressedString
		GEODE_AS_STATIC_FUNCTION(loadFromCompressedString) 
	#endif

	#ifndef GEODE_STATICS_loadFromString
		#define GEODE_STATICS_loadFromString
		GEODE_AS_STATIC_FUNCTION(loadFromString) 
	#endif

	#ifndef GEODE_STATICS_save
		#define GEODE_STATICS_save
		GEODE_AS_STATIC_FUNCTION(save) 
	#endif

	#ifndef GEODE_STATICS_saveData
		#define GEODE_STATICS_saveData
		GEODE_AS_STATIC_FUNCTION(saveData) 
	#endif

	#ifndef GEODE_STATICS_saveGMTo
		#define GEODE_STATICS_saveGMTo
		GEODE_AS_STATIC_FUNCTION(saveGMTo) 
	#endif

	#ifndef GEODE_STATICS_tryLoadData
		#define GEODE_STATICS_tryLoadData
		GEODE_AS_STATIC_FUNCTION(tryLoadData) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GManager> : ModifyBase<ModifyDerive<Der, GManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GManager>>;
		using ModifyBase<ModifyDerive<Der, GManager>>::ModifyBase;
		using Base = GManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b61b0, Default, GManager, save, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b62b0, Default, GManager, saveGMTo, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b5f20, Default, GManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b5f40, Default, GManager, setup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b64d0, Default, GManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b6b50, Default, GManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4b6b60, Default, GManager, firstLoad, )
		}
	};
}
