#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class LoadoutDetailBaseNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "LoadoutDetailBaseNavController"));
	}

	template <typename T = uintptr_t> T& m_SquadAvatarCtrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232C77C))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232C81C))(this);
	}
	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232C8BC))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232C95C))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232CA14))(this);
	}
	template <typename T = void> T OnNavigationWillShow(uintptr_t data) {
		return ((T (*)(LoadoutDetailBaseNavController*, uintptr_t))(Il2CppBase() + 0x232CAB4))(this, data);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LoadoutDetailBaseNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x232CB70))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LoadoutDetailBaseNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x232CC24))(this, data, nextData);
	}
	template <typename T = void> T OnShowImpl(uintptr_t data) {
		return ((T (*)(LoadoutDetailBaseNavController*, uintptr_t))(Il2CppBase() + 0x232CCD8))(this, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232D318))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232D320))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232D328))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232D330))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(LoadoutDetailBaseNavController*))(Il2CppBase() + 0x232D338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillShow(uintptr_t P0) {
		return ((T (*)(LoadoutDetailBaseNavController*, uintptr_t))(Il2CppBase() + 0x232D340))(this, P0);
	}

};

}