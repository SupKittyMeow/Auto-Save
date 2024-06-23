#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)
    
private:
    [[deprecated("CheckpointGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CheckpointGameObject* create();
public:
    
private:
    [[deprecated("CheckpointGameObject::resetCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCheckpoint();
public:
    
private:
    [[deprecated("CheckpointGameObject::updateCheckpointSpriteVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointSpriteVisibility();
public:

    /**
     * @note[short] MacOS (ARM): 0x1889c0
     * @note[short] MacOS (Intel): 0x1cee10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x188e00
     * @note[short] MacOS (Intel): 0x1cf260
     * @note[short] Android
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x18a13c
     * @note[short] MacOS (Intel): 0x1d0870
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x188a1c
     * @note[short] MacOS (Intel): 0x1cee70
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x18a010
     * @note[short] MacOS (Intel): 0x1d0730
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x18971c
     * @note[short] MacOS (Intel): 0x1cfc50
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x188a34
     * @note[short] MacOS (Intel): 0x1cee90
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS (ARM): 0x18a194
     * @note[short] MacOS (Intel): 0x1d08e0
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x189380
     * @note[short] MacOS (Intel): 0x1cf840
     * @note[short] Android
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
};
