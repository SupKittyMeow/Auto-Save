#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UILayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "UILayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UILayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("UILayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x42fd64
     * @note[short] Android
     */
    static UILayer* create(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x430f10
     * @note[short] MacOS (Intel): 0x4d2bf0
     * @note[short] Android
     */
    void disableMenu();
    
private:
    [[deprecated("UILayer::editorPlaytest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorPlaytest(bool p0);
public:
    
private:
    [[deprecated("UILayer::enableEditorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void enableEditorMode();
public:

    /**
     * @note[short] MacOS (ARM): 0x431538
     * @note[short] MacOS (Intel): 0x4d34a0
     * @note[short] Android
     */
    TodoReturn enableMenu();

    /**
     * @note[short] MacOS (ARM): 0x43103c
     * @note[short] MacOS (Intel): 0x4d2d40
     * @note[short] Windows: 0x4a0b80
     * @note[short] Android
     */
    void handleKeypress(cocos2d::enumKeyCodes p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x42fe64
     * @note[short] MacOS (Intel): 0x4d1a70
     * @note[short] Windows: 0x49fe60
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);
    
private:
    [[deprecated("UILayer::isJumpButtonPressed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x431774
     * @note[short] Android
     */
    bool isJumpButtonPressed(bool p0);
public:
    
private:
    [[deprecated("UILayer::onCheck not implemented")]]
    /**
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UILayer::onDeleteCheck not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteCheck(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UILayer::onPause not implemented")]]
    /**
     * @note[short] Windows: 0x4a1300
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UILayer::processUINodesTouch not implemented")]]
    /**
     * @note[short] Android
     */
    void processUINodesTouch(GJUITouchEvent p0, cocos2d::CCTouch* p1);
public:
    
private:
    [[deprecated("UILayer::processUINodeTouch not implemented")]]
    /**
     * @note[short] Windows: 0x4a1810
     * @note[short] Android
     */
    void processUINodeTouch(GJUITouchEvent p0, int p1, cocos2d::CCPoint p2, GJUINode* p3);
public:
    
private:
    [[deprecated("UILayer::refreshDpad not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshDpad();
public:

    /**
     * @note[short] MacOS (ARM): 0x431688
     * @note[short] MacOS (Intel): 0x4d3600
     * @note[short] Android
     */
    void resetAllButtons();
    
private:
    [[deprecated("UILayer::resetUINodeState not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x430d58
     * @note[short] Windows: 0x4a09e0
     * @note[short] Android
     */
    void resetUINodeState();
public:
    
private:
    [[deprecated("UILayer::toggleCheckpointsMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleCheckpointsMenu(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x43154c
     * @note[short] MacOS (Intel): 0x4d34c0
     * @note[short] Android
     */
    void toggleMenuVisibility(bool p0);
    
private:
    [[deprecated("UILayer::togglePlatformerMode not implemented")]]
    /**
     * @note[short] Android
     */
    void togglePlatformerMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateDualMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDualMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateUINodeVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUINodeVisibility(bool p0);
public:
    
private:
    [[deprecated("UILayer::doPause not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doPause();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x4317c0
     * @note[short] MacOS (Intel): 0x4d3740
     * @note[short] Windows: 0x4a14e0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x431a14
     * @note[short] MacOS (Intel): 0x4d3920
     * @note[short] Windows: 0x4a1670
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x431b48
     * @note[short] MacOS (Intel): 0x4d3a20
     * @note[short] Windows: 0x4a1690
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x43245c
     * @note[short] MacOS (Intel): 0x4d4260
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x432478
     * @note[short] MacOS (Intel): 0x4d42a0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x431368
     * @note[short] MacOS (Intel): 0x4d32c0
     * @note[short] Windows: 0x4a1240
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x431328
     * @note[short] MacOS (Intel): 0x4d3220
     * @note[short] Windows: 0x4a1220
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x431348
     * @note[short] MacOS (Intel): 0x4d3270
     * @note[short] Windows: 0x4a1230
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    void* m_stupidDelegate;
    void* m_pUnknown1;
    cocos2d::CCMenu* m_checkpointMenu;
    CCMenuItemSpriteExtra* m_pauseBtn;
    bool m_bUnknown2;
    bool m_bUnknown3;
    bool m_p1Jumping;
    bool m_p2Jumping;
    bool m_checkpointBtnDown;
    int m_p1TouchId;
    int m_p2TouchId;
    float m_clkTimer;
    bool m_inPlatformer;
    GJBaseGameLayer* m_gameLayer;
    bool m_initialized;
    cocos2d::CCArray* m_uiNodes;
    bool m_dualMode;
    bool m_dpadType;
    bool m_editorMode;
};
