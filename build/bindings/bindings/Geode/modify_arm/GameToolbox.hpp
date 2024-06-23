#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addBackButton
		#define GEODE_STATICS_addBackButton
		GEODE_AS_STATIC_FUNCTION(addBackButton) 
	#endif

	#ifndef GEODE_STATICS_addRThumbScrollButton
		#define GEODE_STATICS_addRThumbScrollButton
		GEODE_AS_STATIC_FUNCTION(addRThumbScrollButton) 
	#endif

	#ifndef GEODE_STATICS_alignItemsHorisontally
		#define GEODE_STATICS_alignItemsHorisontally
		GEODE_AS_STATIC_FUNCTION(alignItemsHorisontally) 
	#endif

	#ifndef GEODE_STATICS_alignItemsVertically
		#define GEODE_STATICS_alignItemsVertically
		GEODE_AS_STATIC_FUNCTION(alignItemsVertically) 
	#endif

	#ifndef GEODE_STATICS_bounceTime
		#define GEODE_STATICS_bounceTime
		GEODE_AS_STATIC_FUNCTION(bounceTime) 
	#endif

	#ifndef GEODE_STATICS_colorToSepia
		#define GEODE_STATICS_colorToSepia
		GEODE_AS_STATIC_FUNCTION(colorToSepia) 
	#endif

	#ifndef GEODE_STATICS_contentScaleClipRect
		#define GEODE_STATICS_contentScaleClipRect
		GEODE_AS_STATIC_FUNCTION(contentScaleClipRect) 
	#endif

	#ifndef GEODE_STATICS_createHashString
		#define GEODE_STATICS_createHashString
		GEODE_AS_STATIC_FUNCTION(createHashString) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_doWeHaveInternet
		#define GEODE_STATICS_doWeHaveInternet
		GEODE_AS_STATIC_FUNCTION(doWeHaveInternet) 
	#endif

	#ifndef GEODE_STATICS_easeToText
		#define GEODE_STATICS_easeToText
		GEODE_AS_STATIC_FUNCTION(easeToText) 
	#endif

	#ifndef GEODE_STATICS_fast_rand_0_1
		#define GEODE_STATICS_fast_rand_0_1
		GEODE_AS_STATIC_FUNCTION(fast_rand_0_1) 
	#endif

	#ifndef GEODE_STATICS_fast_rand_minus1_1
		#define GEODE_STATICS_fast_rand_minus1_1
		GEODE_AS_STATIC_FUNCTION(fast_rand_minus1_1) 
	#endif

	#ifndef GEODE_STATICS_fast_rand
		#define GEODE_STATICS_fast_rand
		GEODE_AS_STATIC_FUNCTION(fast_rand) 
	#endif

	#ifndef GEODE_STATICS_fast_srand
		#define GEODE_STATICS_fast_srand
		GEODE_AS_STATIC_FUNCTION(fast_srand) 
	#endif

	#ifndef GEODE_STATICS_gen_random
		#define GEODE_STATICS_gen_random
		GEODE_AS_STATIC_FUNCTION(gen_random) 
	#endif

	#ifndef GEODE_STATICS_getDropActionWDelay
		#define GEODE_STATICS_getDropActionWDelay
		GEODE_AS_STATIC_FUNCTION(getDropActionWDelay) 
	#endif

	#ifndef GEODE_STATICS_getDropActionWEnd
		#define GEODE_STATICS_getDropActionWEnd
		GEODE_AS_STATIC_FUNCTION(getDropActionWEnd) 
	#endif

	#ifndef GEODE_STATICS_getEasedAction
		#define GEODE_STATICS_getEasedAction
		GEODE_AS_STATIC_FUNCTION(getEasedAction) 
	#endif

	#ifndef GEODE_STATICS_getEasedValue
		#define GEODE_STATICS_getEasedValue
		GEODE_AS_STATIC_FUNCTION(getEasedValue) 
	#endif

	#ifndef GEODE_STATICS_getfast_srand
		#define GEODE_STATICS_getfast_srand
		GEODE_AS_STATIC_FUNCTION(getfast_srand) 
	#endif

	#ifndef GEODE_STATICS_getInvertedEasing
		#define GEODE_STATICS_getInvertedEasing
		GEODE_AS_STATIC_FUNCTION(getInvertedEasing) 
	#endif

	#ifndef GEODE_STATICS_getLargestMergedIntDicts
		#define GEODE_STATICS_getLargestMergedIntDicts
		GEODE_AS_STATIC_FUNCTION(getLargestMergedIntDicts) 
	#endif

	#ifndef GEODE_STATICS_getMultipliedHSV
		#define GEODE_STATICS_getMultipliedHSV
		GEODE_AS_STATIC_FUNCTION(getMultipliedHSV) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getResponse
		#define GEODE_STATICS_getResponse
		GEODE_AS_STATIC_FUNCTION(getResponse) 
	#endif

	#ifndef GEODE_STATICS_getTimeString
		#define GEODE_STATICS_getTimeString
		GEODE_AS_STATIC_FUNCTION(getTimeString) 
	#endif

	#ifndef GEODE_STATICS_hsvFromString
		#define GEODE_STATICS_hsvFromString
		GEODE_AS_STATIC_FUNCTION(hsvFromString) 
	#endif

	#ifndef GEODE_STATICS_intToShortString
		#define GEODE_STATICS_intToShortString
		GEODE_AS_STATIC_FUNCTION(intToShortString) 
	#endif

	#ifndef GEODE_STATICS_intToString
		#define GEODE_STATICS_intToString
		GEODE_AS_STATIC_FUNCTION(intToString) 
	#endif

	#ifndef GEODE_STATICS_isIOS
		#define GEODE_STATICS_isIOS
		GEODE_AS_STATIC_FUNCTION(isIOS) 
	#endif

	#ifndef GEODE_STATICS_isRateEasing
		#define GEODE_STATICS_isRateEasing
		GEODE_AS_STATIC_FUNCTION(isRateEasing) 
	#endif

	#ifndef GEODE_STATICS_mergeDictsSaveLargestInt
		#define GEODE_STATICS_mergeDictsSaveLargestInt
		GEODE_AS_STATIC_FUNCTION(mergeDictsSaveLargestInt) 
	#endif

	#ifndef GEODE_STATICS_mergeDictsSkipConflict
		#define GEODE_STATICS_mergeDictsSkipConflict
		GEODE_AS_STATIC_FUNCTION(mergeDictsSkipConflict) 
	#endif

	#ifndef GEODE_STATICS_msToTimeString
		#define GEODE_STATICS_msToTimeString
		GEODE_AS_STATIC_FUNCTION(msToTimeString) 
	#endif

	#ifndef GEODE_STATICS_multipliedColorValue
		#define GEODE_STATICS_multipliedColorValue
		GEODE_AS_STATIC_FUNCTION(multipliedColorValue) 
	#endif

	#ifndef GEODE_STATICS_openAppPage
		#define GEODE_STATICS_openAppPage
		GEODE_AS_STATIC_FUNCTION(openAppPage) 
	#endif

	#ifndef GEODE_STATICS_openRateURL
		#define GEODE_STATICS_openRateURL
		GEODE_AS_STATIC_FUNCTION(openRateURL) 
	#endif

	#ifndef GEODE_STATICS_particleFromString
		#define GEODE_STATICS_particleFromString
		GEODE_AS_STATIC_FUNCTION(particleFromString) 
	#endif

	#ifndef GEODE_STATICS_particleFromStruct
		#define GEODE_STATICS_particleFromStruct
		GEODE_AS_STATIC_FUNCTION(particleFromStruct) 
	#endif

	#ifndef GEODE_STATICS_particleStringToStruct
		#define GEODE_STATICS_particleStringToStruct
		GEODE_AS_STATIC_FUNCTION(particleStringToStruct) 
	#endif

	#ifndef GEODE_STATICS_pointsToString
		#define GEODE_STATICS_pointsToString
		GEODE_AS_STATIC_FUNCTION(pointsToString) 
	#endif

	#ifndef GEODE_STATICS_postClipVisit
		#define GEODE_STATICS_postClipVisit
		GEODE_AS_STATIC_FUNCTION(postClipVisit) 
	#endif

	#ifndef GEODE_STATICS_preVisitWithClippingRect
		#define GEODE_STATICS_preVisitWithClippingRect
		GEODE_AS_STATIC_FUNCTION(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_STATICS_preVisitWithClipRect
		#define GEODE_STATICS_preVisitWithClipRect
		GEODE_AS_STATIC_FUNCTION(preVisitWithClipRect) 
	#endif

	#ifndef GEODE_STATICS_saveParticleToString
		#define GEODE_STATICS_saveParticleToString
		GEODE_AS_STATIC_FUNCTION(saveParticleToString) 
	#endif

	#ifndef GEODE_STATICS_saveStringToFile
		#define GEODE_STATICS_saveStringToFile
		GEODE_AS_STATIC_FUNCTION(saveStringToFile) 
	#endif

	#ifndef GEODE_STATICS_stringFromHSV
		#define GEODE_STATICS_stringFromHSV
		GEODE_AS_STATIC_FUNCTION(stringFromHSV) 
	#endif

	#ifndef GEODE_STATICS_stringSetupToDict
		#define GEODE_STATICS_stringSetupToDict
		GEODE_AS_STATIC_FUNCTION(stringSetupToDict) 
	#endif

	#ifndef GEODE_STATICS_stringSetupToMap
		#define GEODE_STATICS_stringSetupToMap
		GEODE_AS_STATIC_FUNCTION(stringSetupToMap) 
	#endif

	#ifndef GEODE_STATICS_strongColor
		#define GEODE_STATICS_strongColor
		GEODE_AS_STATIC_FUNCTION(strongColor) 
	#endif

	#ifndef GEODE_STATICS_timestampToHumanReadable
		#define GEODE_STATICS_timestampToHumanReadable
		GEODE_AS_STATIC_FUNCTION(timestampToHumanReadable) 
	#endif

	#ifndef GEODE_STATICS_transformColor
		#define GEODE_STATICS_transformColor
		GEODE_AS_STATIC_FUNCTION(transformColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameToolbox> : ModifyBase<ModifyDerive<Der, GameToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameToolbox>>;
		using ModifyBase<ModifyDerive<Der, GameToolbox>>::ModifyBase;
		using Base = GameToolbox;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45326c, Default, GameToolbox, addBackButton, cocos2d::CCLayer*, cocos2d::CCMenuItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453354, Default, GameToolbox, addRThumbScrollButton, cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4528d0, Default, GameToolbox, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x459ec8, Default, GameToolbox, intToShortString, int)
		}
	};
}
