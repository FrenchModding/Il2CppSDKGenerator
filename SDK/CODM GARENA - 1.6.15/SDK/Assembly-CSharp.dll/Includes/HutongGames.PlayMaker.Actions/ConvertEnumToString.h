#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertEnumToString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertEnumToString"));
	}

	template <typename T = uintptr_t> T& enumVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertEnumToString*))(Il2CppBase() + 0x4F3D2C0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertEnumToString*))(Il2CppBase() + 0x4F3D2D4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertEnumToString*))(Il2CppBase() + 0x4F3D428))(this);
	}
	template <typename T = void> T DoConvertEnumToString() {
		return ((T (*)(ConvertEnumToString*))(Il2CppBase() + 0x4F3D300))(this);
	}

};

}