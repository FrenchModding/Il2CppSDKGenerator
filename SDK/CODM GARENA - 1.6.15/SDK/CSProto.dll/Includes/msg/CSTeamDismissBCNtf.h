#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamDismissBCNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamDismissBCNtf"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamDismissBCNtf*))(Il2CppBase() + 0x51E2E3C))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamDismissBCNtf*, uint64_t))(Il2CppBase() + 0x51E2E44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamDismissBCNtf*, bool))(Il2CppBase() + 0x51E2E54))(this, createIfMissing);
	}

};

}