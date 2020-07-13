#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonReceiveRoleNavigationUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonReceiveRoleNavigationUIController"));
	}

	template <typename T = uintptr_t> T& m_ChangeController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseRankLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CD8D4))(this);
	}
	template <typename T = bool> T IsShowAvatar() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CD974))(this);
	}
	template <typename T = bool> T IsUseRankLight() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CDA68))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CDB08))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CDBC0))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39CDC60))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39CE1AC))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CE2DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowAvatar() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CE2E4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUseRankLight() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CE2EC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CE2F4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(UICommonReceiveRoleNavigationUIController*))(Il2CppBase() + 0x39CE2FC))(this);
	}

};

}