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

class DemonFilterSelectLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonFilterSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonFilterSelectLayer, FLAlertLayer)
    
private:
    [[deprecated("DemonFilterSelectLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static DemonFilterSelectLayer* create();
public:
    
private:
    [[deprecated("DemonFilterSelectLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("DemonFilterSelectLayer::selectRating not implemented")]]
    /**
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x55bd74
     * @note[short] MacOS (Intel): 0x63c460
     * @note[short] Windows: 0x2f72c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x55c354
     * @note[short] MacOS (Intel): 0x63ca50
     * @note[short] Windows: 0x2f7a10
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
