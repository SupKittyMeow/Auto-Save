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

	#ifndef GEODE_STATICS_initWithWidthAndHeight
		#define GEODE_STATICS_initWithWidthAndHeight
		GEODE_AS_STATIC_FUNCTION(initWithWidthAndHeight) 
	#endif

	#ifndef GEODE_STATICS_getClearColor
		#define GEODE_STATICS_getClearColor
		GEODE_AS_STATIC_FUNCTION(getClearColor) 
	#endif

	#ifndef GEODE_STATICS_getClearDepth
		#define GEODE_STATICS_getClearDepth
		GEODE_AS_STATIC_FUNCTION(getClearDepth) 
	#endif

	#ifndef GEODE_STATICS_getClearFlags
		#define GEODE_STATICS_getClearFlags
		GEODE_AS_STATIC_FUNCTION(getClearFlags) 
	#endif

	#ifndef GEODE_STATICS_getClearStencil
		#define GEODE_STATICS_getClearStencil
		GEODE_AS_STATIC_FUNCTION(getClearStencil) 
	#endif

	#ifndef GEODE_STATICS_setAutoDraw
		#define GEODE_STATICS_setAutoDraw
		GEODE_AS_STATIC_FUNCTION(setAutoDraw) 
	#endif

	#ifndef GEODE_STATICS_setClearColor
		#define GEODE_STATICS_setClearColor
		GEODE_AS_STATIC_FUNCTION(setClearColor) 
	#endif

	#ifndef GEODE_STATICS_setClearDepth
		#define GEODE_STATICS_setClearDepth
		GEODE_AS_STATIC_FUNCTION(setClearDepth) 
	#endif

	#ifndef GEODE_STATICS_setClearFlags
		#define GEODE_STATICS_setClearFlags
		GEODE_AS_STATIC_FUNCTION(setClearFlags) 
	#endif

	#ifndef GEODE_STATICS_setClearStencil
		#define GEODE_STATICS_setClearStencil
		GEODE_AS_STATIC_FUNCTION(setClearStencil) 
	#endif

	#ifndef GEODE_STATICS_begin
		#define GEODE_STATICS_begin
		GEODE_AS_STATIC_FUNCTION(begin) 
	#endif

	#ifndef GEODE_STATICS_beginWithClear
		#define GEODE_STATICS_beginWithClear
		GEODE_AS_STATIC_FUNCTION(beginWithClear) 
	#endif

	#ifndef GEODE_STATICS_clear
		#define GEODE_STATICS_clear
		GEODE_AS_STATIC_FUNCTION(clear) 
	#endif

	#ifndef GEODE_STATICS_clearDepth
		#define GEODE_STATICS_clearDepth
		GEODE_AS_STATIC_FUNCTION(clearDepth) 
	#endif

	#ifndef GEODE_STATICS_clearStencil
		#define GEODE_STATICS_clearStencil
		GEODE_AS_STATIC_FUNCTION(clearStencil) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_endToLua
		#define GEODE_STATICS_endToLua
		GEODE_AS_STATIC_FUNCTION(endToLua) 
	#endif

	#ifndef GEODE_STATICS_isAutoDraw
		#define GEODE_STATICS_isAutoDraw
		GEODE_AS_STATIC_FUNCTION(isAutoDraw) 
	#endif

	#ifndef GEODE_STATICS_listenToBackground
		#define GEODE_STATICS_listenToBackground
		GEODE_AS_STATIC_FUNCTION(listenToBackground) 
	#endif

	#ifndef GEODE_STATICS_listenToForeground
		#define GEODE_STATICS_listenToForeground
		GEODE_AS_STATIC_FUNCTION(listenToForeground) 
	#endif

	#ifndef GEODE_STATICS_newCCImage
		#define GEODE_STATICS_newCCImage
		GEODE_AS_STATIC_FUNCTION(newCCImage) 
	#endif

	#ifndef GEODE_STATICS_saveToFile
		#define GEODE_STATICS_saveToFile
		GEODE_AS_STATIC_FUNCTION(saveToFile) 
	#endif

	#ifndef GEODE_STATICS_updateInternalScale
		#define GEODE_STATICS_updateInternalScale
		GEODE_AS_STATIC_FUNCTION(updateInternalScale) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_getSprite
		#define GEODE_STATICS_getSprite
		GEODE_AS_STATIC_FUNCTION(getSprite) 
	#endif

	#ifndef GEODE_STATICS_setSprite
		#define GEODE_STATICS_setSprite
		GEODE_AS_STATIC_FUNCTION(setSprite) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCRenderTexture> : ModifyBase<ModifyDerive<Der, cocos2d::CCRenderTexture>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCRenderTexture>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCRenderTexture>>::ModifyBase;
		using Base = cocos2d::CCRenderTexture;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x526fe4, Default, cocos2d::CCRenderTexture, create, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x526adc, Default, cocos2d::CCRenderTexture, create, int, int, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x526bbc, Default, cocos2d::CCRenderTexture, create, int, int, cocos2d::CCTexture2DPixelFormat, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x526ca4, Default, cocos2d::CCRenderTexture, initWithWidthAndHeight, int, int, cocos2d::CCTexture2DPixelFormat, unsigned int)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x5268fc, Default, cocos2d::CCRenderTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5270d8, Default, cocos2d::CCRenderTexture, begin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527584, Default, cocos2d::CCRenderTexture, end, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527a30, Default, cocos2d::CCRenderTexture, newCCImage, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527814, Default, cocos2d::CCRenderTexture, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x527788, Default, cocos2d::CCRenderTexture, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x526a34, Default, cocos2d::CCRenderTexture, getSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x526a3c, Default, cocos2d::CCRenderTexture, setSprite, cocos2d::CCSprite*)
		}
	};
}
