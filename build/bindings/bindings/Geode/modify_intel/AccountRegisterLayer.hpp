#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountRegisterLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createTextBackground
		#define GEODE_STATICS_createTextBackground
		GEODE_AS_STATIC_FUNCTION(createTextBackground) 
	#endif

	#ifndef GEODE_STATICS_createTextInput
		#define GEODE_STATICS_createTextInput
		GEODE_AS_STATIC_FUNCTION(createTextInput) 
	#endif

	#ifndef GEODE_STATICS_createTextLabel
		#define GEODE_STATICS_createTextLabel
		GEODE_AS_STATIC_FUNCTION(createTextLabel) 
	#endif

	#ifndef GEODE_STATICS_disableNodes
		#define GEODE_STATICS_disableNodes
		GEODE_AS_STATIC_FUNCTION(disableNodes) 
	#endif

	#ifndef GEODE_STATICS_hideLoadingUI
		#define GEODE_STATICS_hideLoadingUI
		GEODE_AS_STATIC_FUNCTION(hideLoadingUI) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_resetLabel
		#define GEODE_STATICS_resetLabel
		GEODE_AS_STATIC_FUNCTION(resetLabel) 
	#endif

	#ifndef GEODE_STATICS_resetLabels
		#define GEODE_STATICS_resetLabels
		GEODE_AS_STATIC_FUNCTION(resetLabels) 
	#endif

	#ifndef GEODE_STATICS_showLoadingUI
		#define GEODE_STATICS_showLoadingUI
		GEODE_AS_STATIC_FUNCTION(showLoadingUI) 
	#endif

	#ifndef GEODE_STATICS_toggleUI
		#define GEODE_STATICS_toggleUI
		GEODE_AS_STATIC_FUNCTION(toggleUI) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_validEmail
		#define GEODE_STATICS_validEmail
		GEODE_AS_STATIC_FUNCTION(validEmail) 
	#endif

	#ifndef GEODE_STATICS_validPassword
		#define GEODE_STATICS_validPassword
		GEODE_AS_STATIC_FUNCTION(validPassword) 
	#endif

	#ifndef GEODE_STATICS_validUser
		#define GEODE_STATICS_validUser
		GEODE_AS_STATIC_FUNCTION(validUser) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_allowTextInput
		#define GEODE_STATICS_allowTextInput
		GEODE_AS_STATIC_FUNCTION(allowTextInput) 
	#endif

	#ifndef GEODE_STATICS_registerAccountFinished
		#define GEODE_STATICS_registerAccountFinished
		GEODE_AS_STATIC_FUNCTION(registerAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_registerAccountFailed
		#define GEODE_STATICS_registerAccountFailed
		GEODE_AS_STATIC_FUNCTION(registerAccountFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AccountRegisterLayer> : ModifyBase<ModifyDerive<Der, AccountRegisterLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountRegisterLayer>>;
		using ModifyBase<ModifyDerive<Der, AccountRegisterLayer>>::ModifyBase;
		using Base = AccountRegisterLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0f20, Default, AccountRegisterLayer, resetLabel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0e00, Default, AccountRegisterLayer, resetLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49e910, Default, AccountRegisterLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1690, Default, AccountRegisterLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a14c0, Default, AccountRegisterLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1010, Default, AccountRegisterLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a16d0, Default, AccountRegisterLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a21d0, Default, AccountRegisterLayer, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a2290, Default, AccountRegisterLayer, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a2340, Default, AccountRegisterLayer, allowTextInput, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0870, Default, AccountRegisterLayer, registerAccountFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0a10, Default, AccountRegisterLayer, registerAccountFailed, AccountError)
		}
	};
}
