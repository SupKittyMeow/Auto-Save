#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class SelectFontLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectFontLayer, FLAlertLayer)
    
private:
    [[deprecated("SelectFontLayer::create not implemented")]]
    /**
     * @note[short] Windows: 0x3016e0
     * @note[short] Android
     */
    static SelectFontLayer* create(LevelEditorLayer* p0);
public:
    
private:
    [[deprecated("SelectFontLayer::init not implemented")]]
    /**
     * @note[short] Windows: 0x27c060
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);
public:
    
private:
    [[deprecated("SelectFontLayer::onChangeFont not implemented")]]
    /**
     * @note[short] Windows: 0x27c880
     * @note[short] Android
     */
    void onChangeFont(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectFontLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SelectFontLayer::updateFontLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateFontLabel();
public:

    /**
     * @note[short] MacOS (ARM): 0x239790
     * @note[short] MacOS (Intel): 0x296930
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
