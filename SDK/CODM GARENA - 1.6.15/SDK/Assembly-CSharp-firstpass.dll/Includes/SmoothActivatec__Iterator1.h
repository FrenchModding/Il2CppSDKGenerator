#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SmoothActivatecIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "<SmoothActivate>c__Iterator1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& fader__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(SmoothActivatecIterator1*))(Il2CppBase() + 0x38A9184))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SmoothActivatecIterator1*))(Il2CppBase() + 0x38A94B0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SmoothActivatecIterator1*))(Il2CppBase() + 0x38A94B8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SmoothActivatecIterator1*))(Il2CppBase() + 0x38A94C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SmoothActivatecIterator1*))(Il2CppBase() + 0x38A94D4))(this);
	}

};

}