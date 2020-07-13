#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatGameScoreView"));
	}

	template <typename T = uintptr_t> T& BlueInfo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BombCarrySprite() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RoundLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& LastShowRound() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBombCarrySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScoreIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundEndedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOccupiedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentRoundText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T ShowBombCarrySprite(bool show) {
		return ((T (*)(TacticalCombatGameScoreView*, bool))(Il2CppBase() + 0x3D7C020))(this, show);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t leadingState, uintptr_t data) {
		return ((T (*)(TacticalCombatGameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D7C150))(this, leadingState, data);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(TacticalCombatGameScoreView*, uintptr_t))(Il2CppBase() + 0x3D7C21C))(this, resetType);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(TacticalCombatGameScoreView*))(Il2CppBase() + 0x3D7C33C))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(TacticalCombatGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x3D7C508))(this, data, force);
	}
	template <typename T = void> T UpdateScoreIcon(uintptr_t data) {
		return ((T (*)(TacticalCombatGameScoreView*, uintptr_t))(Il2CppBase() + 0x3D7C8A4))(this, data);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(TacticalCombatGameScoreView*))(Il2CppBase() + 0x3D7CC98))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(TacticalCombatGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x3D7CD30))(this, totalTime, leftTime);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(TacticalCombatGameScoreView*, uintptr_t, float))(Il2CppBase() + 0x3D7CE24))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(TacticalCombatGameScoreView*))(Il2CppBase() + 0x3D7CF34))(this);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(TacticalCombatGameScoreView*))(Il2CppBase() + 0x3D7CFD4))(this);
	}
	template <typename T = void> T PlayOccupiedEffect(int32_t domAreaID) {
		return ((T (*)(TacticalCombatGameScoreView*, int32_t))(Il2CppBase() + 0x3D7D06C))(this, domAreaID);
	}
	template <typename T = void> T UpdateCurrentRoundText() {
		return ((T (*)(TacticalCombatGameScoreView*))(Il2CppBase() + 0x3D7C63C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameScoreView*, uintptr_t))(Il2CppBase() + 0x3D7D10C))(this, P0);
	}

};

}