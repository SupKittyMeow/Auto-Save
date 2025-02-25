#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ObjectDecoderDelegate.hpp"

class GJObjectDecoder : public cocos2d::CCNode, public ObjectDecoderDelegate {
public:
    static constexpr auto CLASS_NAME = "GJObjectDecoder";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJObjectDecoder, cocos2d::CCNode)
    
private:
    [[deprecated("GJObjectDecoder::sharedDecoder not implemented")]]
    /**
     * @note[short] iOS: 0x227094
     * @note[short] Android
     */
    static GJObjectDecoder* sharedDecoder();
public:

    /**
     * @note[short] MacOS (Intel): 0x731e10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x64412c
     * @note[short] MacOS (Intel): 0x731e20
     * @note[short] Windows: 0x271ea0
     * @note[short] Android
     */
    virtual TodoReturn getDecodedObject(int p0, DS_Dictionary* p1);
};
