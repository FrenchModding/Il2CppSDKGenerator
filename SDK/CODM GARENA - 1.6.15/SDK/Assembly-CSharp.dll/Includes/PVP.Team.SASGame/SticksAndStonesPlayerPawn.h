#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.SASGame {

class SticksAndStonesPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.SASGame", "SticksAndStonesPlayerPawn"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInventoryManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CreateInventoryManager() {
		return ((T (*)(SticksAndStonesPlayerPawn*))(Il2CppBase() + 0x34BE864))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateInventoryManager() {
		return ((T (*)(SticksAndStonesPlayerPawn*))(Il2CppBase() + 0x34BE930))(this);
	}

};

}