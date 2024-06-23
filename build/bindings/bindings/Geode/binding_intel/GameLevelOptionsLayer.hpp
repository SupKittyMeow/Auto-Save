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

class GameLevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameLevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameLevelOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("GameLevelOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GameLevelOptionsLayer* create(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelOptionsLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x24effc
     * @note[short] MacOS (Intel): 0x2ae150
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x24f068
     * @note[short] MacOS (Intel): 0x2ae1c0
     * @note[short] Android
     */
    virtual void didToggle(int p0);
};
