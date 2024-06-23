#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "DynamicScrollDelegate.hpp"

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3add30
     * @note[short] MacOS (Intel): 0x4ba220
     * @note[short] Android
     */
     ~LevelSelectLayer();
    
private:
    [[deprecated("LevelSelectLayer::create not implemented")]]
    /**
     * @note[short] iOS: 0x40a26c
     * @note[short] Android
     */
    static LevelSelectLayer* create(int p0);
public:
    
private:
    [[deprecated("LevelSelectLayer::colorForPage not implemented")]]
    /**
     * @note[short] Windows: 0x2f8ee0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);
public:
    
private:
    [[deprecated("LevelSelectLayer::getColorValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getColorValue(int p0, int p1, float p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x3adf18
     * @note[short] MacOS (Intel): 0x43b920
     * @note[short] Windows: 0x2f7d60
     * @note[short] iOS: 0x40a328
     * @note[short] Android
     */
    bool init(int page);
    
private:
    [[deprecated("LevelSelectLayer::onBack not implemented")]]
    /**
     * @note[short] Windows: 0x2f9380
     * @note[short] iOS: 0x40ad2c
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSelectLayer::onDownload not implemented")]]
    /**
     * @note[short] Windows: 0x2f8b00
     * @note[short] iOS: 0x40ac74
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSelectLayer::onInfo not implemented")]]
    /**
     * @note[short] Windows: 0x2f9500
     * @note[short] iOS: 0x40ad74
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSelectLayer::onNext not implemented")]]
    /**
     * @note[short] Windows: 0x2f9280
     * @note[short] iOS: 0x40acfc
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSelectLayer::onPlay not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSelectLayer::onPrev not implemented")]]
    /**
     * @note[short] Windows: 0x2f9300
     * @note[short] iOS: 0x40accc
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x3add68
     * @note[short] MacOS (Intel): 0x43b710
     * @note[short] Windows: 0x2f7c30
     * @note[short] iOS: 0x40a220
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);
    
private:
    [[deprecated("LevelSelectLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd();
public:

    /**
     * @note[short] MacOS (ARM): 0x3b09b8
     * @note[short] MacOS (Intel): 0x43e490
     * @note[short] Windows: 0x2f93d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3b0a4c
     * @note[short] MacOS (Intel): 0x43e530
     * @note[short] Windows: 0x2f9420
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x3aec58
     * @note[short] MacOS (Intel): 0x43c7b0
     * @note[short] Windows: 0x2f8b50
     * @note[short] Android
     */
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x3b052c
     * @note[short] MacOS (Intel): 0x43e000
     * @note[short] Windows: 0x2f8bc0
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
};
