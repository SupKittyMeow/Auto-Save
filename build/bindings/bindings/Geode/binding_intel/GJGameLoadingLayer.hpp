#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGameLoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLoadingLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GJGameLoadingLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJGameLoadingLayer* create(GJGameLevel* level, bool editor);
public:
    
private:
    [[deprecated("GJGameLoadingLayer::gameLayerDidUnload not implemented")]]
    /**
     * @note[short] Android
     */
    void gameLayerDidUnload();
public:
    
private:
    [[deprecated("GJGameLoadingLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool editor);
public:
    
private:
    [[deprecated("GJGameLoadingLayer::loadLevel not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x129940
     * @note[short] Windows: 0x2380c0
     * @note[short] Android
     */
    void loadLevel();
public:
    
private:
    [[deprecated("GJGameLoadingLayer::transitionToLoadingLayer not implemented")]]
    /**
     * @note[short] Windows: 0x237ed0
     * @note[short] Android
     */
    static GJGameLoadingLayer* transitionToLoadingLayer(GJGameLevel* level, bool editor);
public:

    /**
     * @note[short] MacOS (Intel): 0x15a350
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (Intel): 0x15a340
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();
    GJGameLevel* m_level;
    bool m_editor;
};
