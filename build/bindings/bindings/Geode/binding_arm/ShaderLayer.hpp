#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ShaderLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ShaderLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ShaderLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("ShaderLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ShaderLayer* create();
public:
    
private:
    [[deprecated("ShaderLayer::objectPosToShaderPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectPosToShaderPos(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x356bf8
     * @note[short] Windows: 0x45c4b0
     * @note[short] Android
     */
    void performCalculations();
    
private:
    [[deprecated("ShaderLayer::preBulgeShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preBulgeShader();
public:
    
private:
    [[deprecated("ShaderLayer::preChromaticGlitchShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preChromaticGlitchShader();
public:
    
private:
    [[deprecated("ShaderLayer::preChromaticShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preChromaticShader();
public:
    
private:
    [[deprecated("ShaderLayer::preColorChangeShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preColorChangeShader();
public:
    
private:
    [[deprecated("ShaderLayer::preCommonShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preCommonShader();
public:
    
private:
    [[deprecated("ShaderLayer::preGlitchShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preGlitchShader();
public:
    
private:
    [[deprecated("ShaderLayer::preGrayscaleShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preGrayscaleShader();
public:
    
private:
    [[deprecated("ShaderLayer::preHueShiftShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preHueShiftShader();
public:
    
private:
    [[deprecated("ShaderLayer::preInvertColorShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preInvertColorShader();
public:
    
private:
    [[deprecated("ShaderLayer::preLensCircleShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preLensCircleShader();
public:
    
private:
    [[deprecated("ShaderLayer::preMotionBlurShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preMotionBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::prepareTargetContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prepareTargetContainer();
public:
    
private:
    [[deprecated("ShaderLayer::prePinchShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prePinchShader();
public:
    
private:
    [[deprecated("ShaderLayer::prePixelateShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prePixelateShader();
public:
    
private:
    [[deprecated("ShaderLayer::preRadialBlurShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preRadialBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::preSepiaShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preSepiaShader();
public:
    
private:
    [[deprecated("ShaderLayer::preShockLineShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preShockLineShader();
public:
    
private:
    [[deprecated("ShaderLayer::preShockWaveShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preShockWaveShader();
public:
    
private:
    [[deprecated("ShaderLayer::preSplitScreenShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preSplitScreenShader();
public:
    
private:
    [[deprecated("ShaderLayer::resetAllShaders not implemented")]]
    /**
     * @note[short] Windows: 0x45d940
     * @note[short] Android
     */
    bool resetAllShaders();
public:
    
private:
    [[deprecated("ShaderLayer::resetTargetContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetTargetContainer();
public:
    
private:
    [[deprecated("ShaderLayer::setupBulgeShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupBulgeShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupChromaticGlitchUniforms not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupChromaticGlitchUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupChromaticUniforms not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupChromaticUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupColorChangeShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupColorChangeShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupCommonUniforms not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupCommonUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupGlitchUniforms not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupGlitchUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupGrayscaleShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupGrayscaleShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupHueShiftShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupHueShiftShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupInvertColorShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupInvertColorShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupLensCircleShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLensCircleShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupMotionBlurShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupMotionBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupPinchShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupPinchShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupRadialBlurShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupRadialBlurShader();
public:
    
private:
    [[deprecated("ShaderLayer::setupSepiaShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSepiaShader();
public:

    /**
     * @note[short] MacOS (ARM): 0x350c14
     * @note[short] Windows: 0x455f60
     * @note[short] Android
     */
    TodoReturn setupShader(bool p0);
    
private:
    [[deprecated("ShaderLayer::setupShockLineUniforms not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupShockLineUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupShockWaveUniforms not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupShockWaveUniforms();
public:
    
private:
    [[deprecated("ShaderLayer::setupSplitScreenShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSplitScreenShader();
public:
    
private:
    [[deprecated("ShaderLayer::toggleAntiAlias not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleAntiAlias(bool p0);
public:
    
private:
    [[deprecated("ShaderLayer::triggerBulge not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerBulge(float p0, float p1, float p2, float p3, float p4, int p5, int p6, float p7, bool p8);
public:
    
private:
    [[deprecated("ShaderLayer::triggerChromaticGlitch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerChromaticGlitch(bool p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int p8, float p9, bool p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerChromaticX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerChromaticX(float p0, float p1, int p2, float p3, bool p4);
public:
    
private:
    [[deprecated("ShaderLayer::triggerChromaticY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerChromaticY(float p0, float p1, int p2, float p3, bool p4);
public:
    
private:
    [[deprecated("ShaderLayer::triggerColorChange not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerColorChange(float p0, float p1, float p2, float p3, float p4, float p5, float p6, int p7, float p8);
public:
    
private:
    [[deprecated("ShaderLayer::triggerGlitch not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerGlitch(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7);
public:
    
private:
    [[deprecated("ShaderLayer::triggerGrayscale not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerGrayscale(float p0, float p1, bool p2, int p3, int p4, float p5);
public:
    
private:
    [[deprecated("ShaderLayer::triggerHueShift not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerHueShift(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::triggerInvertColor not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerInvertColor(float p0, float p1, float p2, float p3, float p4, bool p5, bool p6, bool p7, int p8, float p9);
public:
    
private:
    [[deprecated("ShaderLayer::triggerLensCircle not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerLensCircle(float p0, float p1, float p2, float p3, int p4, int p5, float p6, float p7, int p8, float p9, bool p10);
public:
    
private:
    [[deprecated("ShaderLayer::triggerMotionBlurX not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerMotionBlurX(float p0, float p1, float p2, float p3, int p4, float p5, bool p6, int p7, int p8, float p9, bool p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerMotionBlurY not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerMotionBlurY(float p0, float p1, float p2, float p3, int p4, float p5, bool p6, int p7, int p8, float p9, bool p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPinchX not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerPinchX(float p0, float p1, float p2, float p3, float p4, bool p5, int p6, int p7, float p8, bool p9);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPinchY not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerPinchY(float p0, float p1, float p2, float p3, float p4, bool p5, int p6, int p7, float p8, bool p9);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPixelateX not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerPixelateX(float p0, float p1, bool p2, bool p3, int p4, float p5, bool p6);
public:
    
private:
    [[deprecated("ShaderLayer::triggerPixelateY not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerPixelateY(float p0, float p1, bool p2, bool p3, int p4, float p5, bool p6);
public:
    
private:
    [[deprecated("ShaderLayer::triggerRadialBlur not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerRadialBlur(float p0, float p1, float p2, float p3, int p4, float p5, float p6, bool p7, int p8, int p9, float p10, bool p11);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSepia not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerSepia(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::triggerShockLine not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerShockLine(float p0, float p1, bool p2, bool p3, bool p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, int p12, bool p13, bool p14, bool p15, float p16, bool p17, float p18, int p19, float p20);
public:
    
private:
    [[deprecated("ShaderLayer::triggerShockWave not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerShockWave(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, float p8, float p9, float p10, int p11, bool p12, bool p13, bool p14, float p15, float p16, bool p17, float p18, int p19, float p20);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSplitScreenCols not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerSplitScreenCols(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::triggerSplitScreenRows not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerSplitScreenRows(float p0, float p1, int p2, float p3);
public:
    
private:
    [[deprecated("ShaderLayer::tweenValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenValue(float p0, float p1, int p2, float p3, int p4, float p5);
public:
    
private:
    [[deprecated("ShaderLayer::tweenValueAuto not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenValueAuto(float p0, int p1, float p2, int p3, float p4);
public:
    
private:
    [[deprecated("ShaderLayer::updateEffectOffsets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEffectOffsets(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x355f40
     * @note[short] Android
     */
    TodoReturn updateMotionBlurSpeedX(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x355f74
     * @note[short] Android
     */
    TodoReturn updateMotionBlurSpeedY(float p0, float p1);
    
private:
    [[deprecated("ShaderLayer::updateShockLineCenter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShockLineCenter(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("ShaderLayer::updateShockWaveCenter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShockWaveCenter(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("ShaderLayer::updateZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    bool updateZLayer(int p0, int p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x352250
     * @note[short] MacOS (Intel): 0x3cfaa0
     * @note[short] Windows: 0x455e50
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x350b50
     * @note[short] MacOS (Intel): 0x3ce300
     * @note[short] Windows: 0x456d00
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x356eb0
     * @note[short] MacOS (Intel): 0x3d5910
     * @note[short] Windows: 0x45ce00
     * @note[short] Android
     */
    virtual void visit();
};
