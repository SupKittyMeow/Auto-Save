#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextAlertPopup : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TextAlertPopup";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextAlertPopup, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x24c288
     * @note[short] MacOS (Intel): 0x2ab0c0
     * @note[short] Windows: 0x28b920
     * @note[short] Android
     */
    static TextAlertPopup* create(gd::string p0, float p1, float p2, int p3, gd::string p4);

    /**
     * @note[short] MacOS (ARM): 0x24c4d0
     * @note[short] MacOS (Intel): 0x2ab2e0
     * @note[short] Windows: 0x28ba50
     * @note[short] Android
     */
    bool init(gd::string p0, float p1, float p2, int p3, gd::string p4);
    
private:
    [[deprecated("TextAlertPopup::setAlertPosition not implemented")]]
    /**
     * @note[short] Android
     */
    void setAlertPosition(cocos2d::CCPoint p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("TextAlertPopup::setLabelColor not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x2ab5f0
     * @note[short] Android
     */
    void setLabelColor(cocos2d::ccColor3B p0);
public:
};
