#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SendMessageOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SendMessageOptions"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& RequireReceiver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DontRequireReceiver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}