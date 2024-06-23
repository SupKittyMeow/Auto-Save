#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_PVRImagesHavePremultipliedAlpha
		#define GEODE_STATICS_PVRImagesHavePremultipliedAlpha
		GEODE_AS_STATIC_FUNCTION(PVRImagesHavePremultipliedAlpha) 
	#endif

	#ifndef GEODE_STATICS_defaultAlphaPixelFormat
		#define GEODE_STATICS_defaultAlphaPixelFormat
		GEODE_AS_STATIC_FUNCTION(defaultAlphaPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_setDefaultAlphaPixelFormat
		#define GEODE_STATICS_setDefaultAlphaPixelFormat
		GEODE_AS_STATIC_FUNCTION(setDefaultAlphaPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_initPremultipliedATextureWithImage
		#define GEODE_STATICS_initPremultipliedATextureWithImage
		GEODE_AS_STATIC_FUNCTION(initPremultipliedATextureWithImage) 
	#endif

	#ifndef GEODE_STATICS_initWithData
		#define GEODE_STATICS_initWithData
		GEODE_AS_STATIC_FUNCTION(initWithData) 
	#endif

	#ifndef GEODE_STATICS_initWithETCFile
		#define GEODE_STATICS_initWithETCFile
		GEODE_AS_STATIC_FUNCTION(initWithETCFile) 
	#endif

	#ifndef GEODE_STATICS_initWithImage
		#define GEODE_STATICS_initWithImage
		GEODE_AS_STATIC_FUNCTION(initWithImage) 
	#endif

	#ifndef GEODE_STATICS_initWithPVRFile
		#define GEODE_STATICS_initWithPVRFile
		GEODE_AS_STATIC_FUNCTION(initWithPVRFile) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_getContentSizeInPixels
		#define GEODE_STATICS_getContentSizeInPixels
		GEODE_AS_STATIC_FUNCTION(getContentSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_setAliasTexParameters
		#define GEODE_STATICS_setAliasTexParameters
		GEODE_AS_STATIC_FUNCTION(setAliasTexParameters) 
	#endif

	#ifndef GEODE_STATICS_setAntiAliasTexParameters
		#define GEODE_STATICS_setAntiAliasTexParameters
		GEODE_AS_STATIC_FUNCTION(setAntiAliasTexParameters) 
	#endif

	#ifndef GEODE_STATICS_setTexParameters
		#define GEODE_STATICS_setTexParameters
		GEODE_AS_STATIC_FUNCTION(setTexParameters) 
	#endif

	#ifndef GEODE_STATICS_bitsPerPixelForFormat
		#define GEODE_STATICS_bitsPerPixelForFormat
		GEODE_AS_STATIC_FUNCTION(bitsPerPixelForFormat) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_drawAtPoint
		#define GEODE_STATICS_drawAtPoint
		GEODE_AS_STATIC_FUNCTION(drawAtPoint) 
	#endif

	#ifndef GEODE_STATICS_drawInRect
		#define GEODE_STATICS_drawInRect
		GEODE_AS_STATIC_FUNCTION(drawInRect) 
	#endif

	#ifndef GEODE_STATICS_generateMipmap
		#define GEODE_STATICS_generateMipmap
		GEODE_AS_STATIC_FUNCTION(generateMipmap) 
	#endif

	#ifndef GEODE_STATICS_hasMipmaps
		#define GEODE_STATICS_hasMipmaps
		GEODE_AS_STATIC_FUNCTION(hasMipmaps) 
	#endif

	#ifndef GEODE_STATICS_hasPremultipliedAlpha
		#define GEODE_STATICS_hasPremultipliedAlpha
		GEODE_AS_STATIC_FUNCTION(hasPremultipliedAlpha) 
	#endif

	#ifndef GEODE_STATICS_keepData
		#define GEODE_STATICS_keepData
		GEODE_AS_STATIC_FUNCTION(keepData) 
	#endif

	#ifndef GEODE_STATICS_releaseData
		#define GEODE_STATICS_releaseData
		GEODE_AS_STATIC_FUNCTION(releaseData) 
	#endif

	#ifndef GEODE_STATICS_releaseGLTexture
		#define GEODE_STATICS_releaseGLTexture
		GEODE_AS_STATIC_FUNCTION(releaseGLTexture) 
	#endif

	#ifndef GEODE_STATICS_stringForFormat
		#define GEODE_STATICS_stringForFormat
		GEODE_AS_STATIC_FUNCTION(stringForFormat) 
	#endif

	#ifndef GEODE_STATICS_getPixelFormat
		#define GEODE_STATICS_getPixelFormat
		GEODE_AS_STATIC_FUNCTION(getPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_getPixelsWide
		#define GEODE_STATICS_getPixelsWide
		GEODE_AS_STATIC_FUNCTION(getPixelsWide) 
	#endif

	#ifndef GEODE_STATICS_getPixelsHigh
		#define GEODE_STATICS_getPixelsHigh
		GEODE_AS_STATIC_FUNCTION(getPixelsHigh) 
	#endif

	#ifndef GEODE_STATICS_getName
		#define GEODE_STATICS_getName
		GEODE_AS_STATIC_FUNCTION(getName) 
	#endif

	#ifndef GEODE_STATICS_getMaxS
		#define GEODE_STATICS_getMaxS
		GEODE_AS_STATIC_FUNCTION(getMaxS) 
	#endif

	#ifndef GEODE_STATICS_setMaxS
		#define GEODE_STATICS_setMaxS
		GEODE_AS_STATIC_FUNCTION(setMaxS) 
	#endif

	#ifndef GEODE_STATICS_getMaxT
		#define GEODE_STATICS_getMaxT
		GEODE_AS_STATIC_FUNCTION(getMaxT) 
	#endif

	#ifndef GEODE_STATICS_setMaxT
		#define GEODE_STATICS_setMaxT
		GEODE_AS_STATIC_FUNCTION(setMaxT) 
	#endif

	#ifndef GEODE_STATICS_getContentSize
		#define GEODE_STATICS_getContentSize
		GEODE_AS_STATIC_FUNCTION(getContentSize) 
	#endif

	#ifndef GEODE_STATICS_getShaderProgram
		#define GEODE_STATICS_getShaderProgram
		GEODE_AS_STATIC_FUNCTION(getShaderProgram) 
	#endif

	#ifndef GEODE_STATICS_setShaderProgram
		#define GEODE_STATICS_setShaderProgram
		GEODE_AS_STATIC_FUNCTION(setShaderProgram) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTexture2D> : ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>>::ModifyBase;
		using Base = cocos2d::CCTexture2D;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9984, Default, cocos2d::CCTexture2D, PVRImagesHavePremultipliedAlpha, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9b50, Default, cocos2d::CCTexture2D, defaultAlphaPixelFormat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9b44, Default, cocos2d::CCTexture2D, setDefaultAlphaPixelFormat, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8c34, Default, cocos2d::CCTexture2D, initPremultipliedATextureWithImage, cocos2d::CCImage*, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e88a8, Default, cocos2d::CCTexture2D, initWithData, void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e98bc, Default, cocos2d::CCTexture2D, initWithETCFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8bc0, Default, cocos2d::CCTexture2D, initWithImage, cocos2d::CCImage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e97e4, Default, cocos2d::CCTexture2D, initWithPVRFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9444, Default, cocos2d::CCTexture2D, initWithString, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e94b4, Default, cocos2d::CCTexture2D, initWithString, char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e95e4, Default, cocos2d::CCTexture2D, initWithString, char const*, cocos2d::_ccFontDefinition*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e87f8, Default, cocos2d::CCTexture2D, getContentSizeInPixels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9a80, Default, cocos2d::CCTexture2D, setAliasTexParameters, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9ad0, Default, cocos2d::CCTexture2D, setAntiAliasTexParameters, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e99e8, Default, cocos2d::CCTexture2D, setTexParameters, cocos2d::_ccTexParams*)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3e8734, Default, cocos2d::CCTexture2D)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x3e8640, Default, cocos2d::CCTexture2D, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8b58, Default, cocos2d::CCTexture2D, bitsPerPixelForFormat, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9b5c, Default, cocos2d::CCTexture2D, bitsPerPixelForFormat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8b78, Default, cocos2d::CCTexture2D, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e95ec, Default, cocos2d::CCTexture2D, drawAtPoint, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e96f0, Default, cocos2d::CCTexture2D, drawInRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9990, Default, cocos2d::CCTexture2D, generateMipmap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e99e0, Default, cocos2d::CCTexture2D, hasMipmaps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e88a0, Default, cocos2d::CCTexture2D, hasPremultipliedAlpha, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8898, Default, cocos2d::CCTexture2D, keepData, void*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8890, Default, cocos2d::CCTexture2D, releaseData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8864, Default, cocos2d::CCTexture2D, releaseGLTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e9b20, Default, cocos2d::CCTexture2D, stringForFormat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8780, Default, cocos2d::CCTexture2D, getPixelFormat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8788, Default, cocos2d::CCTexture2D, getPixelsWide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8790, Default, cocos2d::CCTexture2D, getPixelsHigh, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8798, Default, cocos2d::CCTexture2D, getName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8800, Default, cocos2d::CCTexture2D, getMaxS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8808, Default, cocos2d::CCTexture2D, setMaxS, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8810, Default, cocos2d::CCTexture2D, getMaxT, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8818, Default, cocos2d::CCTexture2D, setMaxT, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e87a0, Default, cocos2d::CCTexture2D, getContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8820, Default, cocos2d::CCTexture2D, getShaderProgram, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e8828, Default, cocos2d::CCTexture2D, setShaderProgram, cocos2d::CCGLProgram*)
		}
	};
}
