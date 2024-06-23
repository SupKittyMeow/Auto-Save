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

class SongCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongCell, TableViewCell)
    
private:
    [[deprecated("SongCell::loadFromObject not implemented")]]
    /**
     * @note[short] Windows: 0xb1ca0
     * @note[short] Android
     */
    void loadFromObject(SongObject* p0);
public:
    
private:
    [[deprecated("SongCell::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1f96b4
     * @note[short] MacOS (Intel): 0x24f6f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f96e4
     * @note[short] MacOS (Intel): 0x24f730
     * @note[short] Android
     */
    virtual void draw();
};
