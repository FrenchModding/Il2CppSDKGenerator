#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ENumberItemEffectType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ENumberItemEffectType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ENumberItemEffectType_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ENumberItemEffectType_UseTimesBuf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ENumberItemEffectType_ExpireBuf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}