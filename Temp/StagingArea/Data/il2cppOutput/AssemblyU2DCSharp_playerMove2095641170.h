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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// playerMove
struct  playerMove_t2095641170  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject playerMove::player
	GameObject_t3674682005 * ___player_2;
	// UnityEngine.GameObject playerMove::cameraCollider
	GameObject_t3674682005 * ___cameraCollider_3;
	// UnityEngine.GameObject playerMove::playerShadow
	GameObject_t3674682005 * ___playerShadow_4;
	// UnityEngine.Rigidbody2D playerMove::rb
	Rigidbody2D_t1743771669 * ___rb_5;
	// System.Int32 playerMove::jumpCounter
	int32_t ___jumpCounter_6;
	// System.Boolean playerMove::playerIsFlying
	bool ___playerIsFlying_7;
	// System.Boolean playerMove::screenTransition
	bool ___screenTransition_8;
	// System.Single playerMove::shadowMoveAmount
	float ___shadowMoveAmount_9;
	// System.Single playerMove::shadowMoveTimer
	float ___shadowMoveTimer_10;
	// System.Boolean playerMove::facingLeft
	bool ___facingLeft_11;
	// System.Boolean playerMove::facingRight
	bool ___facingRight_12;
	// System.Boolean playerMove::playerIsAirborn
	bool ___playerIsAirborn_13;
	// System.Int32 playerMove::health
	int32_t ___health_14;
	// UnityEngine.GameObject playerMove::healthText
	GameObject_t3674682005 * ___healthText_15;
	// System.Boolean playerMove::canMove
	bool ___canMove_16;
	// System.Boolean playerMove::playerHasFlight
	bool ___playerHasFlight_17;
	// System.Boolean playerMove::playerHasMelee
	bool ___playerHasMelee_18;
	// System.Boolean playerMove::playerHasShield
	bool ___playerHasShield_19;
	// System.Boolean playerMove::playerHasDoubleJump
	bool ___playerHasDoubleJump_20;
	// System.Boolean playerMove::playerHasShadow
	bool ___playerHasShadow_21;
	// UnityEngine.Sprite playerMove::playerStandingLeft
	Sprite_t3199167241 * ___playerStandingLeft_22;
	// UnityEngine.Sprite playerMove::playerStandingRight
	Sprite_t3199167241 * ___playerStandingRight_23;
	// UnityEngine.SpriteRenderer playerMove::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_24;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_cameraCollider_3() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___cameraCollider_3)); }
	inline GameObject_t3674682005 * get_cameraCollider_3() const { return ___cameraCollider_3; }
	inline GameObject_t3674682005 ** get_address_of_cameraCollider_3() { return &___cameraCollider_3; }
	inline void set_cameraCollider_3(GameObject_t3674682005 * value)
	{
		___cameraCollider_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraCollider_3, value);
	}

	inline static int32_t get_offset_of_playerShadow_4() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerShadow_4)); }
	inline GameObject_t3674682005 * get_playerShadow_4() const { return ___playerShadow_4; }
	inline GameObject_t3674682005 ** get_address_of_playerShadow_4() { return &___playerShadow_4; }
	inline void set_playerShadow_4(GameObject_t3674682005 * value)
	{
		___playerShadow_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerShadow_4, value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___rb_5)); }
	inline Rigidbody2D_t1743771669 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_t1743771669 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}

	inline static int32_t get_offset_of_jumpCounter_6() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___jumpCounter_6)); }
	inline int32_t get_jumpCounter_6() const { return ___jumpCounter_6; }
	inline int32_t* get_address_of_jumpCounter_6() { return &___jumpCounter_6; }
	inline void set_jumpCounter_6(int32_t value)
	{
		___jumpCounter_6 = value;
	}

	inline static int32_t get_offset_of_playerIsFlying_7() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerIsFlying_7)); }
	inline bool get_playerIsFlying_7() const { return ___playerIsFlying_7; }
	inline bool* get_address_of_playerIsFlying_7() { return &___playerIsFlying_7; }
	inline void set_playerIsFlying_7(bool value)
	{
		___playerIsFlying_7 = value;
	}

	inline static int32_t get_offset_of_screenTransition_8() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___screenTransition_8)); }
	inline bool get_screenTransition_8() const { return ___screenTransition_8; }
	inline bool* get_address_of_screenTransition_8() { return &___screenTransition_8; }
	inline void set_screenTransition_8(bool value)
	{
		___screenTransition_8 = value;
	}

	inline static int32_t get_offset_of_shadowMoveAmount_9() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___shadowMoveAmount_9)); }
	inline float get_shadowMoveAmount_9() const { return ___shadowMoveAmount_9; }
	inline float* get_address_of_shadowMoveAmount_9() { return &___shadowMoveAmount_9; }
	inline void set_shadowMoveAmount_9(float value)
	{
		___shadowMoveAmount_9 = value;
	}

	inline static int32_t get_offset_of_shadowMoveTimer_10() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___shadowMoveTimer_10)); }
	inline float get_shadowMoveTimer_10() const { return ___shadowMoveTimer_10; }
	inline float* get_address_of_shadowMoveTimer_10() { return &___shadowMoveTimer_10; }
	inline void set_shadowMoveTimer_10(float value)
	{
		___shadowMoveTimer_10 = value;
	}

	inline static int32_t get_offset_of_facingLeft_11() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___facingLeft_11)); }
	inline bool get_facingLeft_11() const { return ___facingLeft_11; }
	inline bool* get_address_of_facingLeft_11() { return &___facingLeft_11; }
	inline void set_facingLeft_11(bool value)
	{
		___facingLeft_11 = value;
	}

	inline static int32_t get_offset_of_facingRight_12() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___facingRight_12)); }
	inline bool get_facingRight_12() const { return ___facingRight_12; }
	inline bool* get_address_of_facingRight_12() { return &___facingRight_12; }
	inline void set_facingRight_12(bool value)
	{
		___facingRight_12 = value;
	}

	inline static int32_t get_offset_of_playerIsAirborn_13() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerIsAirborn_13)); }
	inline bool get_playerIsAirborn_13() const { return ___playerIsAirborn_13; }
	inline bool* get_address_of_playerIsAirborn_13() { return &___playerIsAirborn_13; }
	inline void set_playerIsAirborn_13(bool value)
	{
		___playerIsAirborn_13 = value;
	}

	inline static int32_t get_offset_of_health_14() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___health_14)); }
	inline int32_t get_health_14() const { return ___health_14; }
	inline int32_t* get_address_of_health_14() { return &___health_14; }
	inline void set_health_14(int32_t value)
	{
		___health_14 = value;
	}

	inline static int32_t get_offset_of_healthText_15() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___healthText_15)); }
	inline GameObject_t3674682005 * get_healthText_15() const { return ___healthText_15; }
	inline GameObject_t3674682005 ** get_address_of_healthText_15() { return &___healthText_15; }
	inline void set_healthText_15(GameObject_t3674682005 * value)
	{
		___healthText_15 = value;
		Il2CppCodeGenWriteBarrier(&___healthText_15, value);
	}

	inline static int32_t get_offset_of_canMove_16() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___canMove_16)); }
	inline bool get_canMove_16() const { return ___canMove_16; }
	inline bool* get_address_of_canMove_16() { return &___canMove_16; }
	inline void set_canMove_16(bool value)
	{
		___canMove_16 = value;
	}

	inline static int32_t get_offset_of_playerHasFlight_17() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerHasFlight_17)); }
	inline bool get_playerHasFlight_17() const { return ___playerHasFlight_17; }
	inline bool* get_address_of_playerHasFlight_17() { return &___playerHasFlight_17; }
	inline void set_playerHasFlight_17(bool value)
	{
		___playerHasFlight_17 = value;
	}

	inline static int32_t get_offset_of_playerHasMelee_18() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerHasMelee_18)); }
	inline bool get_playerHasMelee_18() const { return ___playerHasMelee_18; }
	inline bool* get_address_of_playerHasMelee_18() { return &___playerHasMelee_18; }
	inline void set_playerHasMelee_18(bool value)
	{
		___playerHasMelee_18 = value;
	}

	inline static int32_t get_offset_of_playerHasShield_19() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerHasShield_19)); }
	inline bool get_playerHasShield_19() const { return ___playerHasShield_19; }
	inline bool* get_address_of_playerHasShield_19() { return &___playerHasShield_19; }
	inline void set_playerHasShield_19(bool value)
	{
		___playerHasShield_19 = value;
	}

	inline static int32_t get_offset_of_playerHasDoubleJump_20() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerHasDoubleJump_20)); }
	inline bool get_playerHasDoubleJump_20() const { return ___playerHasDoubleJump_20; }
	inline bool* get_address_of_playerHasDoubleJump_20() { return &___playerHasDoubleJump_20; }
	inline void set_playerHasDoubleJump_20(bool value)
	{
		___playerHasDoubleJump_20 = value;
	}

	inline static int32_t get_offset_of_playerHasShadow_21() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerHasShadow_21)); }
	inline bool get_playerHasShadow_21() const { return ___playerHasShadow_21; }
	inline bool* get_address_of_playerHasShadow_21() { return &___playerHasShadow_21; }
	inline void set_playerHasShadow_21(bool value)
	{
		___playerHasShadow_21 = value;
	}

	inline static int32_t get_offset_of_playerStandingLeft_22() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerStandingLeft_22)); }
	inline Sprite_t3199167241 * get_playerStandingLeft_22() const { return ___playerStandingLeft_22; }
	inline Sprite_t3199167241 ** get_address_of_playerStandingLeft_22() { return &___playerStandingLeft_22; }
	inline void set_playerStandingLeft_22(Sprite_t3199167241 * value)
	{
		___playerStandingLeft_22 = value;
		Il2CppCodeGenWriteBarrier(&___playerStandingLeft_22, value);
	}

	inline static int32_t get_offset_of_playerStandingRight_23() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___playerStandingRight_23)); }
	inline Sprite_t3199167241 * get_playerStandingRight_23() const { return ___playerStandingRight_23; }
	inline Sprite_t3199167241 ** get_address_of_playerStandingRight_23() { return &___playerStandingRight_23; }
	inline void set_playerStandingRight_23(Sprite_t3199167241 * value)
	{
		___playerStandingRight_23 = value;
		Il2CppCodeGenWriteBarrier(&___playerStandingRight_23, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_24() { return static_cast<int32_t>(offsetof(playerMove_t2095641170, ___spriteRenderer_24)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_24() const { return ___spriteRenderer_24; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_24() { return &___spriteRenderer_24; }
	inline void set_spriteRenderer_24(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_24 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
