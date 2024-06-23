#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"
#include "SetTextPopupDelegate.hpp"

class SetFolderPopup : public SetIDPopup, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetFolderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetFolderPopup, SetIDPopup)
    
private:
    [[deprecated("SetFolderPopup::create not implemented")]]
    /**
     * @note[short] Windows: 0x28a310
     * @note[short] Android
     */
    static SetFolderPopup* create(int p0, bool p1, gd::string p2);
public:
    
private:
    [[deprecated("SetFolderPopup::init not implemented")]]
    /**
     * @note[short] Windows: 0x28a450
     * @note[short] Android
     */
    bool init(int p0, bool p1, gd::string p2);
public:
    
private:
    [[deprecated("SetFolderPopup::onSetFolderName not implemented")]]
    /**
     * @note[short] Windows: 0x28a810
     * @note[short] Android
     */
    void onSetFolderName(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x24add0
     * @note[short] MacOS (Intel): 0x2a9a10
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x24b3b8
     * @note[short] MacOS (Intel): 0x2aa060
     * @note[short] Windows: 0x28aa10
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);
};
