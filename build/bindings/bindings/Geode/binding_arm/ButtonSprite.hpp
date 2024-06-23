#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ButtonSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ButtonSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonSprite, cocos2d::CCSprite)

    /**
Create a ButtonSprite with a top sprite and a texture.

 @param topSprite The top sprite to add on top of the sprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of top spr     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, bool absolute, float height, const char* texture, float scale);

    /**
Create a ButtonSprite with text, a font and a texture.

 @param caption The text of the ButtonSprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param font The name of the BM font file to use

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of text

 @returns Pointer to the created ButtonSprite, or nullptr on er     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x65cf0
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale);
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x8295c
     * @note[short] MacOS (Intel): 0x92140
     * @note[short] Windows: 0x3e2d0
     * @note[short] iOS: 0x65d30
     * @note[short] Android
     */
    static ButtonSprite* create(char const* a, int b, int c, float d, bool e, char const* f, char const* g, float h);
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4, char const* font, char const* bg);
public:
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x920f0
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4);
public:

    /**
     * @note[short] MacOS (ARM): 0x82188
     * @note[short] MacOS (Intel): 0x918c0
     * @note[short] Windows: 0x3dfc0
     * @note[short] iOS: 0x655fc
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int unused, float height, float a, bool b, char const* bgSprite, bool noScaleSpriteForBG);
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* p0, int p1, int p2, float p3, float p4, bool p5);
public:
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* p0);
public:
    
private:
    [[deprecated("ButtonSprite::init not implemented")]]
    /**
     * @note[short] Windows: 0x3e3a0
     * @note[short] iOS: 0x65e04
     * @note[short] Android
     */
    bool init(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6, float p7);
public:
    
private:
    [[deprecated("ButtonSprite::init not implemented")]]
    /**
     * @note[short] Windows: 0x3e070
     * @note[short] iOS: 0x656c8
     * @note[short] Android
     */
    bool init(cocos2d::CCSprite* topSprite, int width, int unused, float scale, float height, bool unkBool, char const* bgSprite, bool useNormalCCSpriteForBG);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setColor(cocos2d::_ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x82d08
     * @note[short] MacOS (Intel): 0x92530
     * @note[short] Windows: 0x3ec60
     * @note[short] Android
     */
    void setString(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x830ac
     * @note[short] MacOS (Intel): 0x92920
     * @note[short] Windows: 0x3e6a0
     * @note[short] iOS: 0x663f4
     * @note[short] Android
     */
    void updateBGImage(char const* p0);
    
private:
    [[deprecated("ButtonSprite::updateSpriteBGSize not implemented")]]
    /**
     * @note[short] Windows: 0x3e7e0
     * @note[short] Android
     */
    void updateSpriteBGSize();
public:
    
private:
    [[deprecated("ButtonSprite::updateSpriteOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpriteOffset(cocos2d::CCPoint p0);
public:
    GEODE_PAD(24);
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_subSprite;
    cocos2d::CCSprite* m_subBGSprite;
    cocos2d::extension::CCScale9Sprite* m_BGSprite;
    GEODE_PAD(12);
    cocos2d::CCPoint m_spritePosition;
};
