#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetScale"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& xScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& yScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& zScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetScale*))(Il2CppBase() + 0x50922D8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetScale*))(Il2CppBase() + 0x50922F0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetScale*))(Il2CppBase() + 0x50924D0))(this);
	}
	template <typename T = void> T DoGetScale() {
		return ((T (*)(GetScale*))(Il2CppBase() + 0x509231C))(this);
	}

};

}