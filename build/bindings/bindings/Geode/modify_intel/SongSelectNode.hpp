#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongSelectNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_audioNext
		#define GEODE_STATICS_audioNext
		GEODE_AS_STATIC_FUNCTION(audioNext) 
	#endif

	#ifndef GEODE_STATICS_audioPrevious
		#define GEODE_STATICS_audioPrevious
		GEODE_AS_STATIC_FUNCTION(audioPrevious) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onOpenCustomSong
		#define GEODE_STATICS_onOpenCustomSong
		GEODE_AS_STATIC_FUNCTION(onOpenCustomSong) 
	#endif

	#ifndef GEODE_STATICS_onSongMode
		#define GEODE_STATICS_onSongMode
		GEODE_AS_STATIC_FUNCTION(onSongMode) 
	#endif

	#ifndef GEODE_STATICS_selectSong
		#define GEODE_STATICS_selectSong
		GEODE_AS_STATIC_FUNCTION(selectSong) 
	#endif

	#ifndef GEODE_STATICS_showCustomSongSelect
		#define GEODE_STATICS_showCustomSongSelect
		GEODE_AS_STATIC_FUNCTION(showCustomSongSelect) 
	#endif

	#ifndef GEODE_STATICS_updateAudioLabel
		#define GEODE_STATICS_updateAudioLabel
		GEODE_AS_STATIC_FUNCTION(updateAudioLabel) 
	#endif

	#ifndef GEODE_STATICS_updateWidgetVisibility
		#define GEODE_STATICS_updateWidgetVisibility
		GEODE_AS_STATIC_FUNCTION(updateWidgetVisibility) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_customSongLayerClosed
		#define GEODE_STATICS_customSongLayerClosed
		GEODE_AS_STATIC_FUNCTION(customSongLayerClosed) 
	#endif

	#ifndef GEODE_STATICS_songIDChanged
		#define GEODE_STATICS_songIDChanged
		GEODE_AS_STATIC_FUNCTION(songIDChanged) 
	#endif

	#ifndef GEODE_STATICS_getActiveSongID
		#define GEODE_STATICS_getActiveSongID
		GEODE_AS_STATIC_FUNCTION(getActiveSongID) 
	#endif

	#ifndef GEODE_STATICS_getSongFileName
		#define GEODE_STATICS_getSongFileName
		GEODE_AS_STATIC_FUNCTION(getSongFileName) 
	#endif

	#ifndef GEODE_STATICS_getLevelSettings
		#define GEODE_STATICS_getLevelSettings
		GEODE_AS_STATIC_FUNCTION(getLevelSettings) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongSelectNode> : ModifyBase<ModifyDerive<Der, SongSelectNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongSelectNode>>;
		using ModifyBase<ModifyDerive<Der, SongSelectNode>>::ModifyBase;
		using Base = SongSelectNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2142e0, Default, SongSelectNode, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2143c0, Default, SongSelectNode, customSongLayerClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214420, Default, SongSelectNode, songIDChanged, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214450, Default, SongSelectNode, getActiveSongID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214470, Default, SongSelectNode, getSongFileName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2145b0, Default, SongSelectNode, getLevelSettings, )
		}
	};
}
