#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class OBB2D : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "OBB2D";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OBB2D, cocos2d::CCNode)
    
private:
    [[deprecated("OBB2D::create not implemented")]]
    /**
     * @note[short] Windows: 0x6c390
     * @note[short] Android
     */
    static OBB2D* create(cocos2d::CCPoint p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("OBB2D::calculateWithCenter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateWithCenter(cocos2d::CCPoint p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("OBB2D::computeAxes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn computeAxes();
public:
    
private:
    [[deprecated("OBB2D::getBoundingRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBoundingRect();
public:
    
private:
    [[deprecated("OBB2D::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("OBB2D::orderCorners not implemented")]]
    /**
     * @note[short] Windows: 0x6c880
     * @note[short] Android
     */
    TodoReturn orderCorners();
public:
    
private:
    [[deprecated("OBB2D::overlaps not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn overlaps(OBB2D* p0);
public:
    
private:
    [[deprecated("OBB2D::overlaps1Way not implemented")]]
    /**
     * @note[short] Windows: 0x6cc10
     * @note[short] Android
     */
    TodoReturn overlaps1Way(OBB2D* p0);
public:
};
