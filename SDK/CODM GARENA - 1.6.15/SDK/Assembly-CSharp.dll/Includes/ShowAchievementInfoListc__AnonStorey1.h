#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowAchievementInfoListcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowAchievementInfoList>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ShowAchievementInfoListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1D06298))(this, it);
	}

};

}