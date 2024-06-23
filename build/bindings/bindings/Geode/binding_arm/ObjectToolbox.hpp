#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectToolbox : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectToolbox";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectToolbox, cocos2d::CCNode)
    
private:
    [[deprecated("ObjectToolbox::sharedState not implemented")]]
    /**
     * @note[short] Windows: 0x327460
     * @note[short] iOS: 0x287bdc
     * @note[short] Android
     */
    static ObjectToolbox* sharedState();
public:
    
private:
    [[deprecated("ObjectToolbox::allKeys not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn allKeys();
public:
    
private:
    [[deprecated("ObjectToolbox::gridNodeSizeForKey not implemented")]]
    /**
     * @note[short] Android
     */
    float gridNodeSizeForKey(int p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    const char* intKeyToFrame(int key);
    
private:
    [[deprecated("ObjectToolbox::perspectiveBlockFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveBlockFrame(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x592004
     * @note[short] MacOS (Intel): 0x6777a0
     * @note[short] Android
     */
    virtual bool init();
    gd::map<int, gd::string> m_allKeys;
};
