#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSFXPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createSFXWidget
		#define GEODE_STATICS_createSFXWidget
		GEODE_AS_STATIC_FUNCTION(createSFXWidget) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBrowseSFX
		#define GEODE_STATICS_onBrowseSFX
		GEODE_AS_STATIC_FUNCTION(onBrowseSFX) 
	#endif

	#ifndef GEODE_STATICS_updateLength
		#define GEODE_STATICS_updateLength
		GEODE_AS_STATIC_FUNCTION(updateLength) 
	#endif

	#ifndef GEODE_STATICS_pageChanged
		#define GEODE_STATICS_pageChanged
		GEODE_AS_STATIC_FUNCTION(pageChanged) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getActiveSFXID
		#define GEODE_STATICS_getActiveSFXID
		GEODE_AS_STATIC_FUNCTION(getActiveSFXID) 
	#endif

	#ifndef GEODE_STATICS_overridePlaySFX
		#define GEODE_STATICS_overridePlaySFX
		GEODE_AS_STATIC_FUNCTION(overridePlaySFX) 
	#endif

	#ifndef GEODE_STATICS_sfxBrowserClosed
		#define GEODE_STATICS_sfxBrowserClosed
		GEODE_AS_STATIC_FUNCTION(sfxBrowserClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSFXPopup> : ModifyBase<ModifyDerive<Der, SetupSFXPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSFXPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSFXPopup>>::ModifyBase;
		using Base = SetupSFXPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423934, Default, SetupSFXPopup, pageChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423988, Default, SetupSFXPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423e6c, Default, SetupSFXPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423d48, Default, SetupSFXPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423ca4, Default, SetupSFXPopup, getActiveSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423cb4, Default, SetupSFXPopup, overridePlaySFX, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423f1c, Default, SetupSFXPopup, sfxBrowserClosed, SFXBrowser*)
		}
	};
}
