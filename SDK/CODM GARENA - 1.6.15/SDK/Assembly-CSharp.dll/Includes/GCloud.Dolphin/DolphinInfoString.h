#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinInfoString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinInfoString"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpdateInfoString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T GetUpdateInfoString(uintptr_t curVersionStage, uintptr_t updatetype, uintptr_t isDownloading) {
		return ((T (*)(DolphinInfoString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x452418C))(this, curVersionStage, updatetype, isDownloading);
	}

};

}