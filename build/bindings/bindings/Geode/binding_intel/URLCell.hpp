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

class URLCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "URLCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLCell, TableViewCell)
    
private:
    [[deprecated("URLCell::loadFromObject not implemented")]]
    /**
     * @note[short] Windows: 0xbd870
     * @note[short] Android
     */
    void loadFromObject(CCURLObject* p0);
public:
    
private:
    [[deprecated("URLCell::onURL not implemented")]]
    /**
     * @note[short] Android
     */
    void onURL(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("URLCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1fe164
     * @note[short] MacOS (Intel): 0x255320
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fe1d4
     * @note[short] MacOS (Intel): 0x255390
     * @note[short] Android
     */
    virtual void draw();
};
