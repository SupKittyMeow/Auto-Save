#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedEngine
		#define GEODE_STATICS_sharedEngine
		GEODE_AS_STATIC_FUNCTION(sharedEngine) 
	#endif

	#ifndef GEODE_STATICS_activateQueuedMusic
		#define GEODE_STATICS_activateQueuedMusic
		GEODE_AS_STATIC_FUNCTION(activateQueuedMusic) 
	#endif

	#ifndef GEODE_STATICS_channelForChannelID
		#define GEODE_STATICS_channelForChannelID
		GEODE_AS_STATIC_FUNCTION(channelForChannelID) 
	#endif

	#ifndef GEODE_STATICS_channelForUniqueID
		#define GEODE_STATICS_channelForUniqueID
		GEODE_AS_STATIC_FUNCTION(channelForUniqueID) 
	#endif

	#ifndef GEODE_STATICS_channelIDForUniqueID
		#define GEODE_STATICS_channelIDForUniqueID
		GEODE_AS_STATIC_FUNCTION(channelIDForUniqueID) 
	#endif

	#ifndef GEODE_STATICS_channelLinkSound
		#define GEODE_STATICS_channelLinkSound
		GEODE_AS_STATIC_FUNCTION(channelLinkSound) 
	#endif

	#ifndef GEODE_STATICS_channelStopped
		#define GEODE_STATICS_channelStopped
		GEODE_AS_STATIC_FUNCTION(channelStopped) 
	#endif

	#ifndef GEODE_STATICS_channelUnlinkSound
		#define GEODE_STATICS_channelUnlinkSound
		GEODE_AS_STATIC_FUNCTION(channelUnlinkSound) 
	#endif

	#ifndef GEODE_STATICS_clearAllAudio
		#define GEODE_STATICS_clearAllAudio
		GEODE_AS_STATIC_FUNCTION(clearAllAudio) 
	#endif

	#ifndef GEODE_STATICS_countActiveEffects
		#define GEODE_STATICS_countActiveEffects
		GEODE_AS_STATIC_FUNCTION(countActiveEffects) 
	#endif

	#ifndef GEODE_STATICS_countActiveMusic
		#define GEODE_STATICS_countActiveMusic
		GEODE_AS_STATIC_FUNCTION(countActiveMusic) 
	#endif

	#ifndef GEODE_STATICS_createStream
		#define GEODE_STATICS_createStream
		GEODE_AS_STATIC_FUNCTION(createStream) 
	#endif

	#ifndef GEODE_STATICS_fadeInBackgroundMusic
		#define GEODE_STATICS_fadeInBackgroundMusic
		GEODE_AS_STATIC_FUNCTION(fadeInBackgroundMusic) 
	#endif

	#ifndef GEODE_STATICS_fadeInMusic
		#define GEODE_STATICS_fadeInMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMusic) 
	#endif

	#ifndef GEODE_STATICS_fadeOutMusic
		#define GEODE_STATICS_fadeOutMusic
		GEODE_AS_STATIC_FUNCTION(fadeOutMusic) 
	#endif

	#ifndef GEODE_STATICS_getActiveMusic
		#define GEODE_STATICS_getActiveMusic
		GEODE_AS_STATIC_FUNCTION(getActiveMusic) 
	#endif

	#ifndef GEODE_STATICS_getActiveMusicChannel
		#define GEODE_STATICS_getActiveMusicChannel
		GEODE_AS_STATIC_FUNCTION(getActiveMusicChannel) 
	#endif

	#ifndef GEODE_STATICS_getBackgroundMusicVolume
		#define GEODE_STATICS_getBackgroundMusicVolume
		GEODE_AS_STATIC_FUNCTION(getBackgroundMusicVolume) 
	#endif

	#ifndef GEODE_STATICS_getChannelGroup
		#define GEODE_STATICS_getChannelGroup
		GEODE_AS_STATIC_FUNCTION(getChannelGroup) 
	#endif

	#ifndef GEODE_STATICS_getFMODStatus
		#define GEODE_STATICS_getFMODStatus
		GEODE_AS_STATIC_FUNCTION(getFMODStatus) 
	#endif

	#ifndef GEODE_STATICS_getMeteringValue
		#define GEODE_STATICS_getMeteringValue
		GEODE_AS_STATIC_FUNCTION(getMeteringValue) 
	#endif

	#ifndef GEODE_STATICS_getMusicChannelID
		#define GEODE_STATICS_getMusicChannelID
		GEODE_AS_STATIC_FUNCTION(getMusicChannelID) 
	#endif

	#ifndef GEODE_STATICS_getMusicLengthMS
		#define GEODE_STATICS_getMusicLengthMS
		GEODE_AS_STATIC_FUNCTION(getMusicLengthMS) 
	#endif

	#ifndef GEODE_STATICS_getMusicTime
		#define GEODE_STATICS_getMusicTime
		GEODE_AS_STATIC_FUNCTION(getMusicTime) 
	#endif

	#ifndef GEODE_STATICS_getMusicTimeMS
		#define GEODE_STATICS_getMusicTimeMS
		GEODE_AS_STATIC_FUNCTION(getMusicTimeMS) 
	#endif

	#ifndef GEODE_STATICS_getNextChannelID
		#define GEODE_STATICS_getNextChannelID
		GEODE_AS_STATIC_FUNCTION(getNextChannelID) 
	#endif

	#ifndef GEODE_STATICS_getTweenContainer
		#define GEODE_STATICS_getTweenContainer
		GEODE_AS_STATIC_FUNCTION(getTweenContainer) 
	#endif

	#ifndef GEODE_STATICS_isChannelStopping
		#define GEODE_STATICS_isChannelStopping
		GEODE_AS_STATIC_FUNCTION(isChannelStopping) 
	#endif

	#ifndef GEODE_STATICS_isEffectLoaded
		#define GEODE_STATICS_isEffectLoaded
		GEODE_AS_STATIC_FUNCTION(isEffectLoaded) 
	#endif

	#ifndef GEODE_STATICS_isMusicPlaying
		#define GEODE_STATICS_isMusicPlaying
		GEODE_AS_STATIC_FUNCTION(isMusicPlaying) 
	#endif

	#ifndef GEODE_STATICS_isSoundReady
		#define GEODE_STATICS_isSoundReady
		GEODE_AS_STATIC_FUNCTION(isSoundReady) 
	#endif

	#ifndef GEODE_STATICS_lengthForSound
		#define GEODE_STATICS_lengthForSound
		GEODE_AS_STATIC_FUNCTION(lengthForSound) 
	#endif

	#ifndef GEODE_STATICS_loadAndPlayMusic
		#define GEODE_STATICS_loadAndPlayMusic
		GEODE_AS_STATIC_FUNCTION(loadAndPlayMusic) 
	#endif

	#ifndef GEODE_STATICS_loadAudioState
		#define GEODE_STATICS_loadAudioState
		GEODE_AS_STATIC_FUNCTION(loadAudioState) 
	#endif

	#ifndef GEODE_STATICS_loadMusic
		#define GEODE_STATICS_loadMusic
		GEODE_AS_STATIC_FUNCTION(loadMusic) 
	#endif

	#ifndef GEODE_STATICS_pauseAllAudio
		#define GEODE_STATICS_pauseAllAudio
		GEODE_AS_STATIC_FUNCTION(pauseAllAudio) 
	#endif

	#ifndef GEODE_STATICS_pauseAllEffects
		#define GEODE_STATICS_pauseAllEffects
		GEODE_AS_STATIC_FUNCTION(pauseAllEffects) 
	#endif

	#ifndef GEODE_STATICS_pauseAllMusic
		#define GEODE_STATICS_pauseAllMusic
		GEODE_AS_STATIC_FUNCTION(pauseAllMusic) 
	#endif

	#ifndef GEODE_STATICS_pauseEffect
		#define GEODE_STATICS_pauseEffect
		GEODE_AS_STATIC_FUNCTION(pauseEffect) 
	#endif

	#ifndef GEODE_STATICS_pauseMusic
		#define GEODE_STATICS_pauseMusic
		GEODE_AS_STATIC_FUNCTION(pauseMusic) 
	#endif

	#ifndef GEODE_STATICS_pitchForIdx
		#define GEODE_STATICS_pitchForIdx
		GEODE_AS_STATIC_FUNCTION(pitchForIdx) 
	#endif

	#ifndef GEODE_STATICS_playEffect
		#define GEODE_STATICS_playEffect
		GEODE_AS_STATIC_FUNCTION(playEffect) 
	#endif

	#ifndef GEODE_STATICS_playEffectAdvanced
		#define GEODE_STATICS_playEffectAdvanced
		GEODE_AS_STATIC_FUNCTION(playEffectAdvanced) 
	#endif

	#ifndef GEODE_STATICS_playEffectAsync
		#define GEODE_STATICS_playEffectAsync
		GEODE_AS_STATIC_FUNCTION(playEffectAsync) 
	#endif

	#ifndef GEODE_STATICS_playMusic
		#define GEODE_STATICS_playMusic
		GEODE_AS_STATIC_FUNCTION(playMusic) 
	#endif

	#ifndef GEODE_STATICS_preloadEffect
		#define GEODE_STATICS_preloadEffect
		GEODE_AS_STATIC_FUNCTION(preloadEffect) 
	#endif

	#ifndef GEODE_STATICS_preloadEffectAsync
		#define GEODE_STATICS_preloadEffectAsync
		GEODE_AS_STATIC_FUNCTION(preloadEffectAsync) 
	#endif

	#ifndef GEODE_STATICS_preloadMusic
		#define GEODE_STATICS_preloadMusic
		GEODE_AS_STATIC_FUNCTION(preloadMusic) 
	#endif

	#ifndef GEODE_STATICS_printResult
		#define GEODE_STATICS_printResult
		GEODE_AS_STATIC_FUNCTION(printResult) 
	#endif

	#ifndef GEODE_STATICS_queuedEffectFinishedLoading
		#define GEODE_STATICS_queuedEffectFinishedLoading
		GEODE_AS_STATIC_FUNCTION(queuedEffectFinishedLoading) 
	#endif

	#ifndef GEODE_STATICS_queuePlayEffect
		#define GEODE_STATICS_queuePlayEffect
		GEODE_AS_STATIC_FUNCTION(queuePlayEffect) 
	#endif

	#ifndef GEODE_STATICS_queueStartMusic
		#define GEODE_STATICS_queueStartMusic
		GEODE_AS_STATIC_FUNCTION(queueStartMusic) 
	#endif

	#ifndef GEODE_STATICS_registerChannel
		#define GEODE_STATICS_registerChannel
		GEODE_AS_STATIC_FUNCTION(registerChannel) 
	#endif

	#ifndef GEODE_STATICS_releaseRemovedSounds
		#define GEODE_STATICS_releaseRemovedSounds
		GEODE_AS_STATIC_FUNCTION(releaseRemovedSounds) 
	#endif

	#ifndef GEODE_STATICS_resumeAllAudio
		#define GEODE_STATICS_resumeAllAudio
		GEODE_AS_STATIC_FUNCTION(resumeAllAudio) 
	#endif

	#ifndef GEODE_STATICS_resumeAllEffects
		#define GEODE_STATICS_resumeAllEffects
		GEODE_AS_STATIC_FUNCTION(resumeAllEffects) 
	#endif

	#ifndef GEODE_STATICS_resumeAllMusic
		#define GEODE_STATICS_resumeAllMusic
		GEODE_AS_STATIC_FUNCTION(resumeAllMusic) 
	#endif

	#ifndef GEODE_STATICS_resumeAudio
		#define GEODE_STATICS_resumeAudio
		GEODE_AS_STATIC_FUNCTION(resumeAudio) 
	#endif

	#ifndef GEODE_STATICS_resumeEffect
		#define GEODE_STATICS_resumeEffect
		GEODE_AS_STATIC_FUNCTION(resumeEffect) 
	#endif

	#ifndef GEODE_STATICS_resumeMusic
		#define GEODE_STATICS_resumeMusic
		GEODE_AS_STATIC_FUNCTION(resumeMusic) 
	#endif

	#ifndef GEODE_STATICS_reverbToString
		#define GEODE_STATICS_reverbToString
		GEODE_AS_STATIC_FUNCTION(reverbToString) 
	#endif

	#ifndef GEODE_STATICS_saveAudioState
		#define GEODE_STATICS_saveAudioState
		GEODE_AS_STATIC_FUNCTION(saveAudioState) 
	#endif

	#ifndef GEODE_STATICS_setBackgroundMusicVolume
		#define GEODE_STATICS_setBackgroundMusicVolume
		GEODE_AS_STATIC_FUNCTION(setBackgroundMusicVolume) 
	#endif

	#ifndef GEODE_STATICS_setChannelPitch
		#define GEODE_STATICS_setChannelPitch
		GEODE_AS_STATIC_FUNCTION(setChannelPitch) 
	#endif

	#ifndef GEODE_STATICS_setChannelVolume
		#define GEODE_STATICS_setChannelVolume
		GEODE_AS_STATIC_FUNCTION(setChannelVolume) 
	#endif

	#ifndef GEODE_STATICS_setChannelVolumeMod
		#define GEODE_STATICS_setChannelVolumeMod
		GEODE_AS_STATIC_FUNCTION(setChannelVolumeMod) 
	#endif

	#ifndef GEODE_STATICS_setEffectsVolume
		#define GEODE_STATICS_setEffectsVolume
		GEODE_AS_STATIC_FUNCTION(setEffectsVolume) 
	#endif

	#ifndef GEODE_STATICS_setMusicTimeMS
		#define GEODE_STATICS_setMusicTimeMS
		GEODE_AS_STATIC_FUNCTION(setMusicTimeMS) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

	#ifndef GEODE_STATICS_setupAudioEngine
		#define GEODE_STATICS_setupAudioEngine
		GEODE_AS_STATIC_FUNCTION(setupAudioEngine) 
	#endif

	#ifndef GEODE_STATICS_start
		#define GEODE_STATICS_start
		GEODE_AS_STATIC_FUNCTION(start) 
	#endif

	#ifndef GEODE_STATICS_startMusic
		#define GEODE_STATICS_startMusic
		GEODE_AS_STATIC_FUNCTION(startMusic) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_stopAllEffects
		#define GEODE_STATICS_stopAllEffects
		GEODE_AS_STATIC_FUNCTION(stopAllEffects) 
	#endif

	#ifndef GEODE_STATICS_stopAllMusic
		#define GEODE_STATICS_stopAllMusic
		GEODE_AS_STATIC_FUNCTION(stopAllMusic) 
	#endif

	#ifndef GEODE_STATICS_stopAndGetFade
		#define GEODE_STATICS_stopAndGetFade
		GEODE_AS_STATIC_FUNCTION(stopAndGetFade) 
	#endif

	#ifndef GEODE_STATICS_stopAndRemoveMusic
		#define GEODE_STATICS_stopAndRemoveMusic
		GEODE_AS_STATIC_FUNCTION(stopAndRemoveMusic) 
	#endif

	#ifndef GEODE_STATICS_stopChannel
		#define GEODE_STATICS_stopChannel
		GEODE_AS_STATIC_FUNCTION(stopChannel) 
	#endif

	#ifndef GEODE_STATICS_stopChannelTween
		#define GEODE_STATICS_stopChannelTween
		GEODE_AS_STATIC_FUNCTION(stopChannelTween) 
	#endif

	#ifndef GEODE_STATICS_stopChannelTweens
		#define GEODE_STATICS_stopChannelTweens
		GEODE_AS_STATIC_FUNCTION(stopChannelTweens) 
	#endif

	#ifndef GEODE_STATICS_stopMusic
		#define GEODE_STATICS_stopMusic
		GEODE_AS_STATIC_FUNCTION(stopMusic) 
	#endif

	#ifndef GEODE_STATICS_stopMusicNotInSet
		#define GEODE_STATICS_stopMusicNotInSet
		GEODE_AS_STATIC_FUNCTION(stopMusicNotInSet) 
	#endif

	#ifndef GEODE_STATICS_storeEffect
		#define GEODE_STATICS_storeEffect
		GEODE_AS_STATIC_FUNCTION(storeEffect) 
	#endif

	#ifndef GEODE_STATICS_swapMusicIndex
		#define GEODE_STATICS_swapMusicIndex
		GEODE_AS_STATIC_FUNCTION(swapMusicIndex) 
	#endif

	#ifndef GEODE_STATICS_testFunction
		#define GEODE_STATICS_testFunction
		GEODE_AS_STATIC_FUNCTION(testFunction) 
	#endif

	#ifndef GEODE_STATICS_triggerQueuedMusic
		#define GEODE_STATICS_triggerQueuedMusic
		GEODE_AS_STATIC_FUNCTION(triggerQueuedMusic) 
	#endif

	#ifndef GEODE_STATICS_unloadAllEffects
		#define GEODE_STATICS_unloadAllEffects
		GEODE_AS_STATIC_FUNCTION(unloadAllEffects) 
	#endif

	#ifndef GEODE_STATICS_unloadEffect
		#define GEODE_STATICS_unloadEffect
		GEODE_AS_STATIC_FUNCTION(unloadEffect) 
	#endif

	#ifndef GEODE_STATICS_unregisterChannel
		#define GEODE_STATICS_unregisterChannel
		GEODE_AS_STATIC_FUNCTION(unregisterChannel) 
	#endif

	#ifndef GEODE_STATICS_updateBackgroundFade
		#define GEODE_STATICS_updateBackgroundFade
		GEODE_AS_STATIC_FUNCTION(updateBackgroundFade) 
	#endif

	#ifndef GEODE_STATICS_updateChannel
		#define GEODE_STATICS_updateChannel
		GEODE_AS_STATIC_FUNCTION(updateChannel) 
	#endif

	#ifndef GEODE_STATICS_updateChannelTweens
		#define GEODE_STATICS_updateChannelTweens
		GEODE_AS_STATIC_FUNCTION(updateChannelTweens) 
	#endif

	#ifndef GEODE_STATICS_updateMetering
		#define GEODE_STATICS_updateMetering
		GEODE_AS_STATIC_FUNCTION(updateMetering) 
	#endif

	#ifndef GEODE_STATICS_updateQueuedEffects
		#define GEODE_STATICS_updateQueuedEffects
		GEODE_AS_STATIC_FUNCTION(updateQueuedEffects) 
	#endif

	#ifndef GEODE_STATICS_updateQueuedMusic
		#define GEODE_STATICS_updateQueuedMusic
		GEODE_AS_STATIC_FUNCTION(updateQueuedMusic) 
	#endif

	#ifndef GEODE_STATICS_updateReverb
		#define GEODE_STATICS_updateReverb
		GEODE_AS_STATIC_FUNCTION(updateReverb) 
	#endif

	#ifndef GEODE_STATICS_updateTemporaryEffects
		#define GEODE_STATICS_updateTemporaryEffects
		GEODE_AS_STATIC_FUNCTION(updateTemporaryEffects) 
	#endif

	#ifndef GEODE_STATICS_waitUntilSoundReady
		#define GEODE_STATICS_waitUntilSoundReady
		GEODE_AS_STATIC_FUNCTION(waitUntilSoundReady) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMODAudioEngine> : ModifyBase<ModifyDerive<Der, FMODAudioEngine>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODAudioEngine>>;
		using ModifyBase<ModifyDerive<Der, FMODAudioEngine>>::ModifyBase;
		using Base = FMODAudioEngine;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x360e54, Default, FMODAudioEngine, sharedEngine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3638d8, Default, FMODAudioEngine, channelForChannelID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3620ac, Default, FMODAudioEngine, clearAllAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36bec0, Default, FMODAudioEngine, fadeOutMusic, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x364ca8, Default, FMODAudioEngine, getActiveMusicChannel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36927c, Default, FMODAudioEngine, getBackgroundMusicVolume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366d7c, Default, FMODAudioEngine, playEffect, gd::string, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366c7c, Default, FMODAudioEngine, playEffect, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x364de4, Default, FMODAudioEngine, playEffectAdvanced, gd::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, bool, int, int, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36103c, Default, FMODAudioEngine, setup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x362154, Default, FMODAudioEngine, stopAllEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x362440, Default, FMODAudioEngine, stopAllMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x362540, Default, FMODAudioEngine, update, float)
		}
	};
}
