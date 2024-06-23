#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BitmapFontCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "BitmapFontCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BitmapFontCache, cocos2d::CCObject)
    
private:
    [[deprecated("BitmapFontCache::sharedFontCache not implemented")]]
    /**
     * @note[short] iOS: 0x303f5c
     * @note[short] Android
     */
    static BitmapFontCache* sharedFontCache();
public:

    /**
     * @note[short] MacOS (ARM): 0x1caed8
     * @note[short] MacOS (Intel): 0x21a7e0
     * @note[short] iOS: 0x304048
     * @note[short] Android
     */
    FontObject* fontWithConfigFile(char const* p0, float p1);
    
private:
    [[deprecated("BitmapFontCache::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init();
public:
    
private:
    [[deprecated("BitmapFontCache::purgeSharedFontCache not implemented")]]
    /**
     * @note[short] iOS: 0x303fc8
     * @note[short] Android
     */
    static void purgeSharedFontCache();
public:
};
