#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getViewPortRect
		#define GEODE_STATICS_getViewPortRect
		GEODE_AS_STATIC_FUNCTION(getViewPortRect) 
	#endif

	#ifndef GEODE_STATICS_getScaleX
		#define GEODE_STATICS_getScaleX
		GEODE_AS_STATIC_FUNCTION(getScaleX) 
	#endif

	#ifndef GEODE_STATICS_getScaleY
		#define GEODE_STATICS_getScaleY
		GEODE_AS_STATIC_FUNCTION(getScaleY) 
	#endif

	#ifndef GEODE_STATICS_getFrameSize
		#define GEODE_STATICS_getFrameSize
		GEODE_AS_STATIC_FUNCTION(getFrameSize) 
	#endif

	#ifndef GEODE_STATICS_setFrameSize
		#define GEODE_STATICS_setFrameSize
		GEODE_AS_STATIC_FUNCTION(setFrameSize) 
	#endif

	#ifndef GEODE_STATICS_getVisibleSize
		#define GEODE_STATICS_getVisibleSize
		GEODE_AS_STATIC_FUNCTION(getVisibleSize) 
	#endif

	#ifndef GEODE_STATICS_getVisibleOrigin
		#define GEODE_STATICS_getVisibleOrigin
		GEODE_AS_STATIC_FUNCTION(getVisibleOrigin) 
	#endif

	#ifndef GEODE_STATICS_setDesignResolutionSize
		#define GEODE_STATICS_setDesignResolutionSize
		GEODE_AS_STATIC_FUNCTION(setDesignResolutionSize) 
	#endif

	#ifndef GEODE_STATICS_getDesignResolutionSize
		#define GEODE_STATICS_getDesignResolutionSize
		GEODE_AS_STATIC_FUNCTION(getDesignResolutionSize) 
	#endif

	#ifndef GEODE_STATICS_setTouchDelegate
		#define GEODE_STATICS_setTouchDelegate
		GEODE_AS_STATIC_FUNCTION(setTouchDelegate) 
	#endif

	#ifndef GEODE_STATICS_setViewPortInPoints
		#define GEODE_STATICS_setViewPortInPoints
		GEODE_AS_STATIC_FUNCTION(setViewPortInPoints) 
	#endif

	#ifndef GEODE_STATICS_setScissorInPoints
		#define GEODE_STATICS_setScissorInPoints
		GEODE_AS_STATIC_FUNCTION(setScissorInPoints) 
	#endif

	#ifndef GEODE_STATICS_isScissorEnabled
		#define GEODE_STATICS_isScissorEnabled
		GEODE_AS_STATIC_FUNCTION(isScissorEnabled) 
	#endif

	#ifndef GEODE_STATICS_getScissorRect
		#define GEODE_STATICS_getScissorRect
		GEODE_AS_STATIC_FUNCTION(getScissorRect) 
	#endif

	#ifndef GEODE_STATICS_setViewName
		#define GEODE_STATICS_setViewName
		GEODE_AS_STATIC_FUNCTION(setViewName) 
	#endif

	#ifndef GEODE_STATICS_pollInputEvents
		#define GEODE_STATICS_pollInputEvents
		GEODE_AS_STATIC_FUNCTION(pollInputEvents) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEGLViewProtocol> : ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>>::ModifyBase;
		using Base = cocos2d::CCEGLViewProtocol;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e314, Default, cocos2d::CCEGLViewProtocol, getViewPortRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46da58, Default, cocos2d::CCEGLViewProtocol, getFrameSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46da60, Default, cocos2d::CCEGLViewProtocol, setFrameSize, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46daa4, Default, cocos2d::CCEGLViewProtocol, getVisibleSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46dad4, Default, cocos2d::CCEGLViewProtocol, getVisibleOrigin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d938, Default, cocos2d::CCEGLViewProtocol, setDesignResolutionSize, float, float, ResolutionPolicy)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46da50, Default, cocos2d::CCEGLViewProtocol, getDesignResolutionSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46db20, Default, cocos2d::CCEGLViewProtocol, setTouchDelegate, cocos2d::EGLTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46db28, Default, cocos2d::CCEGLViewProtocol, setViewPortInPoints, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46db54, Default, cocos2d::CCEGLViewProtocol, setScissorInPoints, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46db80, Default, cocos2d::CCEGLViewProtocol, isScissorEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46dba0, Default, cocos2d::CCEGLViewProtocol, getScissorRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46dc30, Default, cocos2d::CCEGLViewProtocol, setViewName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e32c, Default, cocos2d::CCEGLViewProtocol, pollInputEvents, )
		}
	};
}
