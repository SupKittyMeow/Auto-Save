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

class LevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("LevelOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LevelOptionsLayer* create(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer::onSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x214280
     * @note[short] MacOS (Intel): 0x26dcc0
     * @note[short] Windows: 0x3040e0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x214298
     * @note[short] MacOS (Intel): 0x26dce0
     * @note[short] Windows: 0x304100
     * @note[short] Android
     */
    virtual TodoReturn getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x213c34
     * @note[short] MacOS (Intel): 0x26d570
     * @note[short] Windows: 0x303a40
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x2142b4
     * @note[short] MacOS (Intel): 0x26dd00
     * @note[short] Windows: 0x304120
     * @note[short] Android
     */
    virtual void didToggle(int p0);
};
