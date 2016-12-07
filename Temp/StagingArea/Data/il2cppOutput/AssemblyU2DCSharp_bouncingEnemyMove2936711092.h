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
// playerMove
struct playerMove_t2095641170;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bouncingEnemyMove
struct  bouncingEnemyMove_t2936711092  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject bouncingEnemyMove::player
	GameObject_t3674682005 * ___player_2;
	// UnityEngine.Rigidbody2D bouncingEnemyMove::rb
	Rigidbody2D_t1743771669 * ___rb_3;
	// System.Boolean bouncingEnemyMove::touchingGround
	bool ___touchingGround_4;
	// System.Single bouncingEnemyMove::jumpCounter
	float ___jumpCounter_5;
	// playerMove bouncingEnemyMove::thePlayer
	playerMove_t2095641170 * ___thePlayer_6;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(bouncingEnemyMove_t2936711092, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(bouncingEnemyMove_t2936711092, ___rb_3)); }
	inline Rigidbody2D_t1743771669 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody2D_t1743771669 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_touchingGround_4() { return static_cast<int32_t>(offsetof(bouncingEnemyMove_t2936711092, ___touchingGround_4)); }
	inline bool get_touchingGround_4() const { return ___touchingGround_4; }
	inline bool* get_address_of_touchingGround_4() { return &___touchingGround_4; }
	inline void set_touchingGround_4(bool value)
	{
		___touchingGround_4 = value;
	}

	inline static int32_t get_offset_of_jumpCounter_5() { return static_cast<int32_t>(offsetof(bouncingEnemyMove_t2936711092, ___jumpCounter_5)); }
	inline float get_jumpCounter_5() const { return ___jumpCounter_5; }
	inline float* get_address_of_jumpCounter_5() { return &___jumpCounter_5; }
	inline void set_jumpCounter_5(float value)
	{
		___jumpCounter_5 = value;
	}

	inline static int32_t get_offset_of_thePlayer_6() { return static_cast<int32_t>(offsetof(bouncingEnemyMove_t2936711092, ___thePlayer_6)); }
	inline playerMove_t2095641170 * get_thePlayer_6() const { return ___thePlayer_6; }
	inline playerMove_t2095641170 ** get_address_of_thePlayer_6() { return &___thePlayer_6; }
	inline void set_thePlayer_6(playerMove_t2095641170 * value)
	{
		___thePlayer_6 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
