#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomListView.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getCellHeight
		#define GEODE_STATICS_getCellHeight
		GEODE_AS_STATIC_FUNCTION(getCellHeight) 
	#endif

	#ifndef GEODE_STATICS_reloadAll
		#define GEODE_STATICS_reloadAll
		GEODE_AS_STATIC_FUNCTION(reloadAll) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_getListCell
		#define GEODE_STATICS_getListCell
		GEODE_AS_STATIC_FUNCTION(getListCell) 
	#endif

	#ifndef GEODE_STATICS_loadCell
		#define GEODE_STATICS_loadCell
		GEODE_AS_STATIC_FUNCTION(loadCell) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomListView> : ModifyBase<ModifyDerive<Der, CustomListView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomListView>>;
		using ModifyBase<ModifyDerive<Der, CustomListView>>::ModifyBase;
		using Base = CustomListView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e7194, Default, CustomListView, create, cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f3900, Default, CustomListView, setupList, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e72a4, Default, CustomListView, getListCell, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e82d8, Default, CustomListView, loadCell, TableViewCell*, int)
		}
	};
}
