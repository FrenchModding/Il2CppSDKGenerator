#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class TdirCustomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "TdirCustomData"));
	}

	template <typename T = int32_t> T& Attr1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Attr2() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& UserData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(TdirCustomData*, uintptr_t))(Il2CppBase() + 0x443C7F0))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(TdirCustomData*, uintptr_t))(Il2CppBase() + 0x443C8D8))(this, reader);
	}

};

}