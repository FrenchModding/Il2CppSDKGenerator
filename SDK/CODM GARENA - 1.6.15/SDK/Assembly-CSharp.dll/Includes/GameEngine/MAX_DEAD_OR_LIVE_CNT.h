#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MAXDEADORLIVECNT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MAX_DEAD_OR_LIVE_CNT"));
	}

	template <typename T = int32_t> static T& VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}