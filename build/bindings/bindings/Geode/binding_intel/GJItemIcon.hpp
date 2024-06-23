#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)
    
private:
    [[deprecated("GJItemIcon::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2fe438
     * @note[short] Android
     */
    static GJItemIcon* create(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);
public:
    
private:
    [[deprecated("GJItemIcon::changeToLockedState not implemented")]]
    /**
     * @note[short] Windows: 0x2694c0
     * @note[short] iOS: 0x316ab8
     * @note[short] Android
     */
    void changeToLockedState(float p0);
public:
    
private:
    [[deprecated("GJItemIcon::createBrowserItem not implemented")]]
    /**
     * @note[short] Windows: 0x268880
     * @note[short] Android
     */
    static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID);
public:
    
private:
    [[deprecated("GJItemIcon::createStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createStoreItem(UnlockType p0, int p1, bool p2, cocos2d::ccColor3B p3);
public:
    
private:
    [[deprecated("GJItemIcon::darkenStoreItem not implemented")]]
    /**
     * @note[short] Windows: 0x2691d0
     * @note[short] Android
     */
    void darkenStoreItem(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("GJItemIcon::darkenStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn darkenStoreItem(ShopType p0);
public:
    
private:
    [[deprecated("GJItemIcon::init not implemented")]]
    /**
     * @note[short] Windows: 0x2689a0
     * @note[short] iOS: 0x3186d4
     * @note[short] Android
     */
    bool init(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);
public:
    
private:
    [[deprecated("GJItemIcon::scaleForType not implemented")]]
    /**
     * @note[short] Windows: 0x2695a0
     * @note[short] Android
     */
    float scaleForType(UnlockType p0);
public:
    
private:
    [[deprecated("GJItemIcon::toggleEnabledState not implemented")]]
    /**
     * @note[short] Windows: 0x269400
     * @note[short] iOS: 0x316b94
     * @note[short] Android
     */
    TodoReturn toggleEnabledState(bool p0);
public:
    
private:
    [[deprecated("GJItemIcon::unlockedColorForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockedColorForType(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2fea70
     * @note[short] MacOS (Intel): 0x372e20
     * @note[short] Windows: 0x2690b0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
