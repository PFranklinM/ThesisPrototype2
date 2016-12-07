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

// shadowSpriteScript
struct  shadowSpriteScript_t841807152  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject shadowSpriteScript::player
	GameObject_t3674682005 * ___player_2;
	// UnityEngine.GameObject shadowSpriteScript::playerShadow
	GameObject_t3674682005 * ___playerShadow_3;
	// UnityEngine.Sprite shadowSpriteScript::shadowStandingLeft
	Sprite_t3199167241 * ___shadowStandingLeft_4;
	// UnityEngine.Sprite shadowSpriteScript::shadowStandingRight
	Sprite_t3199167241 * ___shadowStandingRight_5;
	// UnityEngine.SpriteRenderer shadowSpriteScript::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_6;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(shadowSpriteScript_t841807152, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerShadow_3() { return static_cast<int32_t>(offsetof(shadowSpriteScript_t841807152, ___playerShadow_3)); }
	inline GameObject_t3674682005 * get_playerShadow_3() const { return ___playerShadow_3; }
	inline GameObject_t3674682005 ** get_address_of_playerShadow_3() { return &___playerShadow_3; }
	inline void set_playerShadow_3(GameObject_t3674682005 * value)
	{
		___playerShadow_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerShadow_3, value);
	}

	inline static int32_t get_offset_of_shadowStandingLeft_4() { return static_cast<int32_t>(offsetof(shadowSpriteScript_t841807152, ___shadowStandingLeft_4)); }
	inline Sprite_t3199167241 * get_shadowStandingLeft_4() const { return ___shadowStandingLeft_4; }
	inline Sprite_t3199167241 ** get_address_of_shadowStandingLeft_4() { return &___shadowStandingLeft_4; }
	inline void set_shadowStandingLeft_4(Sprite_t3199167241 * value)
	{
		___shadowStandingLeft_4 = value;
		Il2CppCodeGenWriteBarrier(&___shadowStandingLeft_4, value);
	}

	inline static int32_t get_offset_of_shadowStandingRight_5() { return static_cast<int32_t>(offsetof(shadowSpriteScript_t841807152, ___shadowStandingRight_5)); }
	inline Sprite_t3199167241 * get_shadowStandingRight_5() const { return ___shadowStandingRight_5; }
	inline Sprite_t3199167241 ** get_address_of_shadowStandingRight_5() { return &___shadowStandingRight_5; }
	inline void set_shadowStandingRight_5(Sprite_t3199167241 * value)
	{
		___shadowStandingRight_5 = value;
		Il2CppCodeGenWriteBarrier(&___shadowStandingRight_5, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_6() { return static_cast<int32_t>(offsetof(shadowSpriteScript_t841807152, ___spriteRenderer_6)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_6() const { return ___spriteRenderer_6; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_6() { return &___spriteRenderer_6; }
	inline void set_spriteRenderer_6(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
