#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAudioSourceChangeCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAudioSourceChangeCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A27DE4))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkAudioSourceChangeCallbackInfo*, uintptr_t))(Il2CppBase() + 0x4A27E78))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkAudioSourceChangeCallbackInfo*))(Il2CppBase() + 0x4A27EA4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkAudioSourceChangeCallbackInfo*))(Il2CppBase() + 0x4A27F0C))(this);
	}
	template <typename T = bool> T get_bOtherAudioPlaying() {
		return ((T (*)(AkAudioSourceChangeCallbackInfo*))(Il2CppBase() + 0x4A28094))(this);
	}

};

}