#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVEWeaponSecondSkillController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVEWeaponSecondSkillController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVEWeaponSecondSkillController*))(Il2CppBase() + 0x406CF5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEWeaponSecondSkillController*))(Il2CppBase() + 0x406D1F0))(this);
	}

};

}