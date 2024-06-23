#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class LikeItemLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LikeItemLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LikeItemLayer, FLAlertLayer)
    
private:
    [[deprecated("LikeItemLayer::create not implemented")]]
    /**
     * @note[short] Windows: 0x30d400
     * @note[short] Android
     */
    static LikeItemLayer* create(LikeItemType p0, int p1, int p2);
public:
    
private:
    [[deprecated("LikeItemLayer::init not implemented")]]
    /**
     * @note[short] Windows: 0x30d500
     * @note[short] Android
     */
    bool init(LikeItemType p0, int p1, int p2);
public:
    
private:
    [[deprecated("LikeItemLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LikeItemLayer::onDislike not implemented")]]
    /**
     * @note[short] Windows: 0x30d8e0
     * @note[short] Android
     */
    void onDislike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LikeItemLayer::onLike not implemented")]]
    /**
     * @note[short] Windows: 0x30d8d0
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LikeItemLayer::triggerLike not implemented")]]
    /**
     * @note[short] Windows: 0x30d8f0
     * @note[short] Android
     */
    void triggerLike(bool isLiked);
public:

    /**
     * @note[short] MacOS (ARM): 0x52a750
     * @note[short] MacOS (Intel): 0x604020
     * @note[short] Android
     */
    virtual void keyBackClicked();
    LikeItemType m_itemType;
    int m_itemID;
    int m_commentSourceID;
    LikeItemDelegate* m_likeDelegate;
};
