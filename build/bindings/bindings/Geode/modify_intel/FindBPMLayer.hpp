#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FindBPMLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_calculateBPM
		#define GEODE_STATICS_calculateBPM
		GEODE_AS_STATIC_FUNCTION(calculateBPM) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_playMusic
		#define GEODE_STATICS_playMusic
		GEODE_AS_STATIC_FUNCTION(playMusic) 
	#endif

	#ifndef GEODE_STATICS_registerTouch
		#define GEODE_STATICS_registerTouch
		GEODE_AS_STATIC_FUNCTION(registerTouch) 
	#endif

	#ifndef GEODE_STATICS_onRecord
		#define GEODE_STATICS_onRecord
		GEODE_AS_STATIC_FUNCTION(onRecord) 
	#endif

	#ifndef GEODE_STATICS_recordingDidStop
		#define GEODE_STATICS_recordingDidStop
		GEODE_AS_STATIC_FUNCTION(recordingDidStop) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FindBPMLayer> : ModifyBase<ModifyDerive<Der, FindBPMLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FindBPMLayer>>;
		using ModifyBase<ModifyDerive<Der, FindBPMLayer>>::ModifyBase;
		using Base = FindBPMLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x515c40, Default, FindBPMLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x515ab0, Default, FindBPMLayer, playMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x515b40, Default, FindBPMLayer, registerTouch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5159a0, Default, FindBPMLayer, onRecord, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5159e0, Default, FindBPMLayer, recordingDidStop, )
		}
	};
}
