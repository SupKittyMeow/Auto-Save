#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)
    
private:
    [[deprecated("GJRotationControl::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJRotationControl* create();
public:
    
private:
    [[deprecated("GJRotationControl::finishTouch not implemented")]]
    /**
     * @note[short] Windows: 0x125490
     * @note[short] Android
     */
    TodoReturn finishTouch();
public:
    
private:
    [[deprecated("GJRotationControl::setAngle not implemented")]]
    /**
     * @note[short] Android
     */
    void setAngle(float p0);
public:
    
private:
    [[deprecated("GJRotationControl::updateSliderPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSliderPosition(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x49db0
     * @note[short] MacOS (Intel): 0x51fe0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4a378
     * @note[short] MacOS (Intel): 0x525e0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x4a014
     * @note[short] MacOS (Intel): 0x52250
     * @note[short] Windows: 0x125510
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4a128
     * @note[short] MacOS (Intel): 0x52370
     * @note[short] Windows: 0x125610
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4a264
     * @note[short] MacOS (Intel): 0x524d0
     * @note[short] Windows: 0x1257b0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4a35c
     * @note[short] MacOS (Intel): 0x525a0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};
