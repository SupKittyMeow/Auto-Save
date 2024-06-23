#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NCSInfoLayer.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onLibrary
		#define GEODE_STATICS_onLibrary
		GEODE_AS_STATIC_FUNCTION(onLibrary) 
	#endif

	#ifndef GEODE_STATICS_onNCS
		#define GEODE_STATICS_onNCS
		GEODE_AS_STATIC_FUNCTION(onNCS) 
	#endif

	#ifndef GEODE_STATICS_onNCSIO
		#define GEODE_STATICS_onNCSIO
		GEODE_AS_STATIC_FUNCTION(onNCSIO) 
	#endif

	#ifndef GEODE_STATICS_onNCSUsage
		#define GEODE_STATICS_onNCSUsage
		GEODE_AS_STATIC_FUNCTION(onNCSUsage) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NCSInfoLayer> : ModifyBase<ModifyDerive<Der, NCSInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NCSInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, NCSInfoLayer>>::ModifyBase;
		using Base = NCSInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c42a0, Default, NCSInfoLayer, keyBackClicked, )
		}
	};
}
