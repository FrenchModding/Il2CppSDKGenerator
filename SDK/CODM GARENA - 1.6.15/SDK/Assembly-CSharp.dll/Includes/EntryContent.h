#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntryContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntryContent"));
	}

	template <typename T = Il2CppString*> T& StrIcon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& StrName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& StrUrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SortId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ViewOrientation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& EntryType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}