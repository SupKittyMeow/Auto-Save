#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x32e06c
     * @note[short] MacOS (Intel): 0x3a7d30
     * @note[short] Windows: 0x3c1e0
     * @note[short] iOS: 0x1316d8
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int unk1, bool unk2, cocos2d::CCArray* unk3, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x32e43c
     * @note[short] MacOS (Intel): 0x3a8120
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int unk1, bool unk2);
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPage(cocos2d::CCLayer* p0, int p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::cancelAndStoleTouch not implemented")]]
    /**
     * @note[short] iOS: 0x132b48
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::claimTouch not implemented")]]
    /**
     * @note[short] iOS: 0x132ae4
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getRelativePageForNum not implemented")]]
    /**
     * @note[short] Android
     */
    int getRelativePageForNum(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getRelativePosForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativePosForPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getTotalPages not implemented")]]
    /**
     * @note[short] iOS: 0x132154
     * @note[short] Android
     */
    int getTotalPages();
public:

    /**
     * @note[short] MacOS (ARM): 0x32e124
     * @note[short] MacOS (Intel): 0x3a7dc0
     * @note[short] Windows: 0x3c3b0
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);
    
private:
    [[deprecated("BoomScrollLayer::instantMoveToPage not implemented")]]
    /**
     * @note[short] Windows: 0x3cf40
     * @note[short] iOS: 0x132724
     * @note[short] Android
     */
    void instantMoveToPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::moveToPage not implemented")]]
    /**
     * @note[short] iOS: 0x1327fc
     * @note[short] Android
     */
    void moveToPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::moveToPageEnded not implemented")]]
    /**
     * @note[short] Android
     */
    void moveToPageEnded();
public:
    
private:
    [[deprecated("BoomScrollLayer::pageNumberForPosition not implemented")]]
    /**
     * @note[short] Android
     */
    int pageNumberForPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::positionForPageWithNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionForPageWithNumber(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::quickUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdate();
public:
    
private:
    [[deprecated("BoomScrollLayer::removePage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::removePageWithNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePageWithNumber(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::repositionPagesLooped not implemented")]]
    /**
     * @note[short] Windows: 0x3d1e0
     * @note[short] Android
     */
    void repositionPagesLooped();
public:
    
private:
    [[deprecated("BoomScrollLayer::selectPage not implemented")]]
    /**
     * @note[short] Android
     */
    void selectPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setDotScale not implemented")]]
    /**
     * @note[short] Android
     */
    void setDotScale(float p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setPagesIndicatorPosition not implemented")]]
    /**
     * @note[short] iOS: 0x131abc
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setupDynamicScrolling not implemented")]]
    /**
     * @note[short] Windows: 0x3c720
     * @note[short] Android
     */
    void setupDynamicScrolling(cocos2d::CCArray* p0, DynamicScrollDelegate* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::togglePageIndicators not implemented")]]
    /**
     * @note[short] Windows: 0x3cce0
     * @note[short] Android
     */
    void togglePageIndicators(bool p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::updateDots not implemented")]]
    /**
     * @note[short] Windows: 0x3cae0
     * @note[short] iOS: 0x132170
     * @note[short] Android
     */
    void updateDots(float p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::updatePages not implemented")]]
    /**
     * @note[short] Windows: 0x3c9c0
     * @note[short] Android
     */
    void updatePages();
public:

    /**
     * @note[short] MacOS (ARM): 0x32f6a8
     * @note[short] MacOS (Intel): 0x3a9570
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x3301bc
     * @note[short] MacOS (Intel): 0x3aa0a0
     * @note[short] Windows: 0x3d890
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x330288
     * @note[short] MacOS (Intel): 0x3aa190
     * @note[short] Windows: 0x3d940
     * @note[short] iOS: 0x132cf0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x330548
     * @note[short] MacOS (Intel): 0x3aa4b0
     * @note[short] Windows: 0x3dc70
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x32ffec
     * @note[short] MacOS (Intel): 0x3a9ee0
     * @note[short] Windows: 0x3d7b0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x32fe74
     * @note[short] MacOS (Intel): 0x3a9d50
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
};
