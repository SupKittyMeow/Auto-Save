#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SearchButton : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SearchButton";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SearchButton, cocos2d::CCSprite)
    
private:
    [[deprecated("SearchButton::create not implemented")]]
    /**
     * @note[short] Windows: 0x2f21f0
     * @note[short] Android
     */
    static SearchButton* create(char const* p0, char const* p1, float p2, char const* p3);
public:
    
private:
    [[deprecated("SearchButton::init not implemented")]]
    /**
     * @note[short] Windows: 0x2f22c0
     * @note[short] Android
     */
    bool init(char const* p0, char const* p1, float p2, char const* p3);
public:
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_icon;
};
