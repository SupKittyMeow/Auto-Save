#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("GameOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GameOptionsLayer* create(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameOptionsLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameOptionsLayer::onPracticeMusicSync not implemented")]]
    /**
     * @note[short] Windows: 0x28e010
     * @note[short] Android
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GameOptionsLayer::onUIOptions not implemented")]]
    /**
     * @note[short] Android
     */
    void onUIOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GameOptionsLayer::showPracticeMusicSyncUnlockInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void showPracticeMusicSyncUnlockInfo();
public:

    /**
     * @note[short] MacOS (ARM): 0x24dd10
     * @note[short] MacOS (Intel): 0x2acbc0
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x24eaf0
     * @note[short] MacOS (Intel): 0x2ada80
     * @note[short] Android
     */
    virtual void didToggle(int p0);
};
