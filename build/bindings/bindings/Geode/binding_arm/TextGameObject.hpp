#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class TextGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "TextGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TextGameObject, GameObject)
    
private:
    [[deprecated("TextGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TextGameObject* create(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("TextGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("TextGameObject::updateTextObject not implemented")]]
    /**
     * @note[short] Windows: 0x19d5e0
     * @note[short] Android
     */
    void updateTextObject(gd::string p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x504f98
     * @note[short] MacOS (Intel): 0x5da200
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x50514c
     * @note[short] MacOS (Intel): 0x5da380
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x504ce4
     * @note[short] MacOS (Intel): 0x5d9f80
     * @note[short] Android
     */
    virtual TodoReturn updateTextKerning(int p0);

    /**
     * @note[short] MacOS (ARM): 0x505998
     * @note[short] MacOS (Intel): 0x5dad80
     * @note[short] Android
     */
    virtual TodoReturn getTextKerning();
    gd::string m_text;
    int m_kerning;
};
