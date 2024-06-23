#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScaleControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJScaleControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJScaleControl, cocos2d::CCLayer)
    
private:
    [[deprecated("GJScaleControl::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJScaleControl* create();
public:
    
private:
    [[deprecated("GJScaleControl::finishTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishTouch();
public:
    
private:
    [[deprecated("GJScaleControl::loadValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadValues(GameObject* p0, cocos2d::CCArray* p1, gd::unordered_map<int, GameObjectEditorState>& p2);
public:
    
private:
    [[deprecated("GJScaleControl::scaleFromValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scaleFromValue(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::skewFromValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn skewFromValue(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelX(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelXY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelXY(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelY(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::valueFromScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueFromScale(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::valueFromSkew not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueFromSkew(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4a3e0
     * @note[short] MacOS (Intel): 0x52650
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4aa18
     * @note[short] MacOS (Intel): 0x52d00
     * @note[short] Windows: 0x126340
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4abb4
     * @note[short] MacOS (Intel): 0x52ef0
     * @note[short] Windows: 0x126550
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4affc
     * @note[short] MacOS (Intel): 0x533c0
     * @note[short] Windows: 0x126970
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4b124
     * @note[short] MacOS (Intel): 0x53520
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    Slider* m_sliderX;
    Slider* m_sliderY;
    Slider* m_sliderXY;
    float m_touchX;
    float m_valueX;
    float m_valueY;
};
