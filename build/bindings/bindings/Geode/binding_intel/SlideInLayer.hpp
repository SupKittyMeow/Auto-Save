#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SlideInLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "SlideInLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SlideInLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("SlideInLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SlideInLayer* create();
public:

    /**
     * @note[short] MacOS (ARM): 0x22e290
     * @note[short] MacOS (Intel): 0x28a300
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x22e954
     * @note[short] MacOS (Intel): 0x28aa30
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x22e990
     * @note[short] MacOS (Intel): 0x28aa60
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x22e9b0
     * @note[short] MacOS (Intel): 0x28aac0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x22e9a0
     * @note[short] MacOS (Intel): 0x28aa80
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x22e9a8
     * @note[short] MacOS (Intel): 0x28aaa0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x22e674
     * @note[short] MacOS (Intel): 0x28a730
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x22e6ac
     * @note[short] MacOS (Intel): 0x28a770
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22e610
     * @note[short] MacOS (Intel): 0x28a6b0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x22e63c
     * @note[short] MacOS (Intel): 0x28a700
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x22e6d0
     * @note[short] MacOS (Intel): 0x28a7b0
     * @note[short] Android
     */
    virtual TodoReturn exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x22e734
     * @note[short] MacOS (Intel): 0x28a800
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x22e824
     * @note[short] MacOS (Intel): 0x28a8f0
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x22e8f4
     * @note[short] MacOS (Intel): 0x28a9d0
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x22e904
     * @note[short] MacOS (Intel): 0x28a9f0
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x22e8f0
     * @note[short] MacOS (Intel): 0x28a9c0
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x22e614
     * @note[short] MacOS (Intel): 0x28a6c0
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x22e628
     * @note[short] MacOS (Intel): 0x28a6e0
     * @note[short] Android
     */
    virtual void enableUI();
};
