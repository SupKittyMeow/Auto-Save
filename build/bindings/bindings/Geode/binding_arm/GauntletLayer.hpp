#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x31d474
     * @note[short] MacOS (Intel): 0x3954e0
     * @note[short] Android
     */
    static GauntletLayer* create(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x31d624
     * @note[short] MacOS (Intel): 0x3956d0
     * @note[short] Windows: 0x1e93d0
     * @note[short] Android
     */
    bool init(GauntletType p0);
    
private:
    [[deprecated("GauntletLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletLayer::onLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(GauntletType p0);
public:
    
private:
    [[deprecated("GauntletLayer::setupGauntlet not implemented")]]
    /**
     * @note[short] Windows: 0x1e9fd0
     * @note[short] Android
     */
    TodoReturn setupGauntlet(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GauntletLayer::unlockActiveItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockActiveItem();
public:

    /**
     * @note[short] MacOS (ARM): 0x31f6f8
     * @note[short] MacOS (Intel): 0x3978b0
     * @note[short] Windows: 0x1eb630
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x31ebdc
     * @note[short] MacOS (Intel): 0x396e80
     * @note[short] Windows: 0x1e9bc0
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x31ed74
     * @note[short] MacOS (Intel): 0x397010
     * @note[short] Windows: 0x1e9dd0
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
};
