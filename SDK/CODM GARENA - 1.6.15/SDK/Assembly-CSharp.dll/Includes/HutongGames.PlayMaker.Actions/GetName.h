#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetName"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetName*))(Il2CppBase() + 0x508F454))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetName*))(Il2CppBase() + 0x508F514))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetName*))(Il2CppBase() + 0x508F6A0))(this);
	}
	template <typename T = void> T DoGetGameObjectName() {
		return ((T (*)(GetName*))(Il2CppBase() + 0x508F540))(this);
	}

};

}