#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class CodmShopRightSubTabView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "CodmShopRightSubTabView"));
	}

	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ContainerBg() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContainerArrow() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteLine() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}