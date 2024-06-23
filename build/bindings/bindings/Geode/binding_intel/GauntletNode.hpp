#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletNode, cocos2d::CCNode)
    
private:
    [[deprecated("GauntletNode::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GauntletNode* create(GJMapPack* p0);
public:
    
private:
    [[deprecated("GauntletNode::frameForType not implemented")]]
    /**
     * @note[short] Windows: 0x1ef420
     * @note[short] Android
     */
    TodoReturn frameForType(GauntletType p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4c6d84
     * @note[short] MacOS (Intel): 0x57abf0
     * @note[short] Windows: 0x1edf90
     * @note[short] Android
     */
    bool init(GJMapPack* p0);
    
private:
    [[deprecated("GauntletNode::nameForType not implemented")]]
    /**
     * @note[short] Windows: 0x1f0590
     * @note[short] Android
     */
    static gd::string nameForType(GauntletType p0);
public:
    
private:
    [[deprecated("GauntletNode::onClaimReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onClaimReward();
public:
};
