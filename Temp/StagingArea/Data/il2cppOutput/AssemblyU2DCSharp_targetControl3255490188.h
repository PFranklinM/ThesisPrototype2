#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// playerMove
struct playerMove_t2095641170;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// targetControl
struct  targetControl_t3255490188  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject targetControl::target
	GameObject_t3674682005 * ___target_2;
	// UnityEngine.GameObject targetControl::player
	GameObject_t3674682005 * ___player_3;
	// UnityEngine.GameObject targetControl::bullet
	GameObject_t3674682005 * ___bullet_4;
	// UnityEngine.GameObject targetControl::meleeColliderRight
	GameObject_t3674682005 * ___meleeColliderRight_5;
	// UnityEngine.GameObject targetControl::meleeColliderLeft
	GameObject_t3674682005 * ___meleeColliderLeft_6;
	// UnityEngine.Vector2 targetControl::pos
	Vector2_t4282066565  ___pos_7;
	// System.Single targetControl::ROF
	float ___ROF_8;
	// System.Single targetControl::shotDelay
	float ___shotDelay_9;
	// System.Boolean targetControl::AREquipped
	bool ___AREquipped_10;
	// System.Boolean targetControl::SGEquipped
	bool ___SGEquipped_11;
	// System.Boolean targetControl::HCEquipped
	bool ___HCEquipped_12;
	// System.Boolean targetControl::RLEquipped
	bool ___RLEquipped_13;
	// System.Boolean targetControl::MLEquipped
	bool ___MLEquipped_14;
	// System.Boolean targetControl::playerHasMeleeAttack
	bool ___playerHasMeleeAttack_15;
	// System.Boolean targetControl::playerFacingLeft
	bool ___playerFacingLeft_16;
	// System.Boolean targetControl::playerFacingRight
	bool ___playerFacingRight_17;
	// playerMove targetControl::thePlayer
	playerMove_t2095641170 * ___thePlayer_18;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___target_2)); }
	inline GameObject_t3674682005 * get_target_2() const { return ___target_2; }
	inline GameObject_t3674682005 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t3674682005 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___player_3)); }
	inline GameObject_t3674682005 * get_player_3() const { return ___player_3; }
	inline GameObject_t3674682005 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t3674682005 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_bullet_4() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___bullet_4)); }
	inline GameObject_t3674682005 * get_bullet_4() const { return ___bullet_4; }
	inline GameObject_t3674682005 ** get_address_of_bullet_4() { return &___bullet_4; }
	inline void set_bullet_4(GameObject_t3674682005 * value)
	{
		___bullet_4 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_4, value);
	}

	inline static int32_t get_offset_of_meleeColliderRight_5() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___meleeColliderRight_5)); }
	inline GameObject_t3674682005 * get_meleeColliderRight_5() const { return ___meleeColliderRight_5; }
	inline GameObject_t3674682005 ** get_address_of_meleeColliderRight_5() { return &___meleeColliderRight_5; }
	inline void set_meleeColliderRight_5(GameObject_t3674682005 * value)
	{
		___meleeColliderRight_5 = value;
		Il2CppCodeGenWriteBarrier(&___meleeColliderRight_5, value);
	}

	inline static int32_t get_offset_of_meleeColliderLeft_6() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___meleeColliderLeft_6)); }
	inline GameObject_t3674682005 * get_meleeColliderLeft_6() const { return ___meleeColliderLeft_6; }
	inline GameObject_t3674682005 ** get_address_of_meleeColliderLeft_6() { return &___meleeColliderLeft_6; }
	inline void set_meleeColliderLeft_6(GameObject_t3674682005 * value)
	{
		___meleeColliderLeft_6 = value;
		Il2CppCodeGenWriteBarrier(&___meleeColliderLeft_6, value);
	}

	inline static int32_t get_offset_of_pos_7() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___pos_7)); }
	inline Vector2_t4282066565  get_pos_7() const { return ___pos_7; }
	inline Vector2_t4282066565 * get_address_of_pos_7() { return &___pos_7; }
	inline void set_pos_7(Vector2_t4282066565  value)
	{
		___pos_7 = value;
	}

	inline static int32_t get_offset_of_ROF_8() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___ROF_8)); }
	inline float get_ROF_8() const { return ___ROF_8; }
	inline float* get_address_of_ROF_8() { return &___ROF_8; }
	inline void set_ROF_8(float value)
	{
		___ROF_8 = value;
	}

	inline static int32_t get_offset_of_shotDelay_9() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___shotDelay_9)); }
	inline float get_shotDelay_9() const { return ___shotDelay_9; }
	inline float* get_address_of_shotDelay_9() { return &___shotDelay_9; }
	inline void set_shotDelay_9(float value)
	{
		___shotDelay_9 = value;
	}

	inline static int32_t get_offset_of_AREquipped_10() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___AREquipped_10)); }
	inline bool get_AREquipped_10() const { return ___AREquipped_10; }
	inline bool* get_address_of_AREquipped_10() { return &___AREquipped_10; }
	inline void set_AREquipped_10(bool value)
	{
		___AREquipped_10 = value;
	}

	inline static int32_t get_offset_of_SGEquipped_11() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___SGEquipped_11)); }
	inline bool get_SGEquipped_11() const { return ___SGEquipped_11; }
	inline bool* get_address_of_SGEquipped_11() { return &___SGEquipped_11; }
	inline void set_SGEquipped_11(bool value)
	{
		___SGEquipped_11 = value;
	}

	inline static int32_t get_offset_of_HCEquipped_12() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___HCEquipped_12)); }
	inline bool get_HCEquipped_12() const { return ___HCEquipped_12; }
	inline bool* get_address_of_HCEquipped_12() { return &___HCEquipped_12; }
	inline void set_HCEquipped_12(bool value)
	{
		___HCEquipped_12 = value;
	}

	inline static int32_t get_offset_of_RLEquipped_13() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___RLEquipped_13)); }
	inline bool get_RLEquipped_13() const { return ___RLEquipped_13; }
	inline bool* get_address_of_RLEquipped_13() { return &___RLEquipped_13; }
	inline void set_RLEquipped_13(bool value)
	{
		___RLEquipped_13 = value;
	}

	inline static int32_t get_offset_of_MLEquipped_14() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___MLEquipped_14)); }
	inline bool get_MLEquipped_14() const { return ___MLEquipped_14; }
	inline bool* get_address_of_MLEquipped_14() { return &___MLEquipped_14; }
	inline void set_MLEquipped_14(bool value)
	{
		___MLEquipped_14 = value;
	}

	inline static int32_t get_offset_of_playerHasMeleeAttack_15() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___playerHasMeleeAttack_15)); }
	inline bool get_playerHasMeleeAttack_15() const { return ___playerHasMeleeAttack_15; }
	inline bool* get_address_of_playerHasMeleeAttack_15() { return &___playerHasMeleeAttack_15; }
	inline void set_playerHasMeleeAttack_15(bool value)
	{
		___playerHasMeleeAttack_15 = value;
	}

	inline static int32_t get_offset_of_playerFacingLeft_16() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___playerFacingLeft_16)); }
	inline bool get_playerFacingLeft_16() const { return ___playerFacingLeft_16; }
	inline bool* get_address_of_playerFacingLeft_16() { return &___playerFacingLeft_16; }
	inline void set_playerFacingLeft_16(bool value)
	{
		___playerFacingLeft_16 = value;
	}

	inline static int32_t get_offset_of_playerFacingRight_17() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___playerFacingRight_17)); }
	inline bool get_playerFacingRight_17() const { return ___playerFacingRight_17; }
	inline bool* get_address_of_playerFacingRight_17() { return &___playerFacingRight_17; }
	inline void set_playerFacingRight_17(bool value)
	{
		___playerFacingRight_17 = value;
	}

	inline static int32_t get_offset_of_thePlayer_18() { return static_cast<int32_t>(offsetof(targetControl_t3255490188, ___thePlayer_18)); }
	inline playerMove_t2095641170 * get_thePlayer_18() const { return ___thePlayer_18; }
	inline playerMove_t2095641170 ** get_address_of_thePlayer_18() { return &___thePlayer_18; }
	inline void set_thePlayer_18(playerMove_t2095641170 * value)
	{
		___thePlayer_18 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
