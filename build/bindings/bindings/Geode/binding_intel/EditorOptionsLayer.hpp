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

class EditorOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("EditorOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EditorOptionsLayer* create();
public:
    
private:
    [[deprecated("EditorOptionsLayer::onButtonRows not implemented")]]
    /**
     * @note[short] Windows: 0x27f4f0
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorOptionsLayer::onButtonsPerRow not implemented")]]
    /**
     * @note[short] Windows: 0x27f460
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x23c554
     * @note[short] MacOS (Intel): 0x299e60
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x23cf50
     * @note[short] MacOS (Intel): 0x29a840
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23c570
     * @note[short] MacOS (Intel): 0x299e90
     * @note[short] Windows: 0x27eb80
     * @note[short] Android
     */
    virtual void setupOptions();
};
