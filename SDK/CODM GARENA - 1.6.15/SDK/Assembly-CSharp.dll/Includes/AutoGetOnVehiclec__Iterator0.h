#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoGetOnVehiclecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AutoGetOnVehicle>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& physicVehicle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& OwnerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(AutoGetOnVehiclecIterator0*))(Il2CppBase() + 0x32162E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(AutoGetOnVehiclecIterator0*))(Il2CppBase() + 0x3216440))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AutoGetOnVehiclecIterator0*))(Il2CppBase() + 0x3216448))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AutoGetOnVehiclecIterator0*))(Il2CppBase() + 0x3216450))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AutoGetOnVehiclecIterator0*))(Il2CppBase() + 0x3216464))(this);
	}

};

}