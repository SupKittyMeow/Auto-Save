#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"

class AchievementCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "AchievementCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementCell, TableViewCell)
    
private:
    [[deprecated("AchievementCell::loadFromDict not implemented")]]
    /**
     * @note[short] Windows: 0xaa740
     * @note[short] Android
     */
    void loadFromDict(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("AchievementCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1f47b0
     * @note[short] MacOS (Intel): 0x24a370
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f481c
     * @note[short] MacOS (Intel): 0x24a3e0
     * @note[short] Android
     */
    virtual void draw();
};
