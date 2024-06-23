#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_swapBuffers
		#define GEODE_STATICS_swapBuffers
		GEODE_AS_STATIC_FUNCTION(swapBuffers) 
	#endif

	#ifndef GEODE_STATICS_toggleFullScreen
		#define GEODE_STATICS_toggleFullScreen
		GEODE_AS_STATIC_FUNCTION(toggleFullScreen) 
	#endif

	#ifndef GEODE_STATICS_pollEvents
		#define GEODE_STATICS_pollEvents
		GEODE_AS_STATIC_FUNCTION(pollEvents) 
	#endif

	#ifndef GEODE_STATICS_setupWindow
		#define GEODE_STATICS_setupWindow
		GEODE_AS_STATIC_FUNCTION(setupWindow) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_onGLFWCharCallback
		#define GEODE_STATICS_onGLFWCharCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWCharCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWCursorEnterFunCallback
		#define GEODE_STATICS_onGLFWCursorEnterFunCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWCursorEnterFunCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWDeviceChangeFunCallback
		#define GEODE_STATICS_onGLFWDeviceChangeFunCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWDeviceChangeFunCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWError
		#define GEODE_STATICS_onGLFWError
		GEODE_AS_STATIC_FUNCTION(onGLFWError) 
	#endif

	#ifndef GEODE_STATICS_onGLFWKeyCallback
		#define GEODE_STATICS_onGLFWKeyCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWKeyCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWMouseCallBack
		#define GEODE_STATICS_onGLFWMouseCallBack
		GEODE_AS_STATIC_FUNCTION(onGLFWMouseCallBack) 
	#endif

	#ifndef GEODE_STATICS_onGLFWMouseMoveCallBack
		#define GEODE_STATICS_onGLFWMouseMoveCallBack
		GEODE_AS_STATIC_FUNCTION(onGLFWMouseMoveCallBack) 
	#endif

	#ifndef GEODE_STATICS_onGLFWMouseScrollCallback
		#define GEODE_STATICS_onGLFWMouseScrollCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWMouseScrollCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWWindowIconifyFunCallback
		#define GEODE_STATICS_onGLFWWindowIconifyFunCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWWindowIconifyFunCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWWindowPosCallback
		#define GEODE_STATICS_onGLFWWindowPosCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWWindowPosCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWWindowSizeFunCallback
		#define GEODE_STATICS_onGLFWWindowSizeFunCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWWindowSizeFunCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWframebuffersize
		#define GEODE_STATICS_onGLFWframebuffersize
		GEODE_AS_STATIC_FUNCTION(onGLFWframebuffersize) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEGLView> : ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>>::ModifyBase;
		using Base = cocos2d::CCEGLView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x464e30, Default, cocos2d::CCEGLView, swapBuffers, )
		}
	};
}
