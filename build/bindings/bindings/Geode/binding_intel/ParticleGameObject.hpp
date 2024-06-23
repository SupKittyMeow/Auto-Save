#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class ParticleGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "ParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParticleGameObject, EnhancedGameObject)
    
private:
    [[deprecated("ParticleGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ParticleGameObject* create();
public:
    
private:
    [[deprecated("ParticleGameObject::applyParticleSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyParticleSettings(cocos2d::CCParticleSystemQuad* p0);
public:
    
private:
    [[deprecated("ParticleGameObject::createAndAddCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndAddCustomParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::createParticlePreviewArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createParticlePreviewArt();
public:
    
private:
    [[deprecated("ParticleGameObject::setParticleString not implemented")]]
    /**
     * @note[short] Android
     */
    void setParticleString(gd::string p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticle not implemented")]]
    /**
     * @note[short] Windows: 0x474740
     * @note[short] Android
     */
    void updateParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleAngle(float p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticlePreviewArtOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticlePreviewArtOpacity(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleScale(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleStruct not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleStruct();
public:

    /**
     * @note[short] MacOS (ARM): 0x16b5d0
     * @note[short] MacOS (Intel): 0x1ac8b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x16c6a8
     * @note[short] MacOS (Intel): 0x1ad990
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x16c718
     * @note[short] MacOS (Intel): 0x1ada00
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x16c788
     * @note[short] MacOS (Intel): 0x1ada70
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x16c5c4
     * @note[short] MacOS (Intel): 0x1ad8d0
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x16c610
     * @note[short] MacOS (Intel): 0x1ad910
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x16c65c
     * @note[short] MacOS (Intel): 0x1ad950
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x16c8ec
     * @note[short] MacOS (Intel): 0x1adbd0
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x16b874
     * @note[short] MacOS (Intel): 0x1acbc0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x16b920
     * @note[short] MacOS (Intel): 0x1acc90
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x16cab8
     * @note[short] MacOS (Intel): 0x1addc0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x16ca74
     * @note[short] MacOS (Intel): 0x1add80
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x16b608
     * @note[short] MacOS (Intel): 0x1ac8e0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x16ccac
     * @note[short] MacOS (Intel): 0x1adfc0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x16ba00
     * @note[short] MacOS (Intel): 0x1acd70
     * @note[short] Android
     */
    virtual TodoReturn claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x16bfc8
     * @note[short] MacOS (Intel): 0x1ad310
     * @note[short] Android
     */
    virtual TodoReturn unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x16c054
     * @note[short] MacOS (Intel): 0x1ad390
     * @note[short] Android
     */
    virtual TodoReturn particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x16c7f8
     * @note[short] MacOS (Intel): 0x1adae0
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x16b8f0
     * @note[short] MacOS (Intel): 0x1acc50
     * @note[short] Android
     */
    virtual TodoReturn blendModeChanged();

    /**
     * @note[short] MacOS (ARM): 0x1a1520
     * @note[short] MacOS (Intel): 0x1ed4e0
     * @note[short] Android
     */
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x1a1524
     * @note[short] MacOS (Intel): 0x1ed4f0
     * @note[short] Android
     */
    virtual TodoReturn updateParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x16c9e0
     * @note[short] MacOS (Intel): 0x1adcc0
     * @note[short] Android
     */
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x16ca2c
     * @note[short] MacOS (Intel): 0x1add20
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x16cb20
     * @note[short] MacOS (Intel): 0x1ade20
     * @note[short] Android
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x16cc5c
     * @note[short] MacOS (Intel): 0x1adf70
     * @note[short] Android
     */
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
    gd::string m_particleData;
    bool m_updatedParticleData;
private:
    bool m_hasUniformObjectColor;
public:
private:
    bool m_shouldQuickStart;
public:
};
