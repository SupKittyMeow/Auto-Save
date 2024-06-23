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
#include "LevelManagerDelegate.hpp"

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GauntletSelectLayer::create not implemented")]]
    /**
     * @note[short] Windows: 0x1ebc50
     * @note[short] Android
     */
    static GauntletSelectLayer* create(int p0);
public:
    
private:
    [[deprecated("GauntletSelectLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x4c50d8
     * @note[short] MacOS (Intel): 0x578d40
     * @note[short] Windows: 0x1ebd80
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("GauntletSelectLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onNext not implemented")]]
    /**
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onPlay not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onPrev not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onRefresh not implemented")]]
    /**
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4c5cf8
     * @note[short] MacOS (Intel): 0x579a60
     * @note[short] Windows: 0x1ece70
     * @note[short] Android
     */
    void setupGauntlets();
    
private:
    [[deprecated("GauntletSelectLayer::unblockPlay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unblockPlay();
public:
    
private:
    [[deprecated("GauntletSelectLayer::updateArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateArrows();
public:

    /**
     * @note[short] MacOS (ARM): 0x4c6d18
     * @note[short] MacOS (Intel): 0x57ab60
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x4c6bec
     * @note[short] MacOS (Intel): 0x57aa30
     * @note[short] Windows: 0x1ed860
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4c6b4c
     * @note[short] MacOS (Intel): 0x57a990
     * @note[short] Windows: 0x1ed770
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4c6aac
     * @note[short] MacOS (Intel): 0x57a8f0
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4c61dc
     * @note[short] MacOS (Intel): 0x579fd0
     * @note[short] Windows: 0x1ecb50
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x4c6374
     * @note[short] MacOS (Intel): 0x57a180
     * @note[short] Windows: 0x1ecd00
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
};
