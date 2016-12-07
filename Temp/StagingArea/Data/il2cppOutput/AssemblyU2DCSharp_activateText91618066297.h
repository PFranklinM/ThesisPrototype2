#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t3836129977;
// shadowCharacterTextBoxManager
struct shadowCharacterTextBoxManager_t2636567224;
// playerWentWhereTheyShouldntBoolScript
struct playerWentWhereTheyShouldntBoolScript_t2464196904;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// activateText9
struct  activateText9_t1618066297  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.TextAsset activateText9::theText
	TextAsset_t3836129977 * ___theText_2;
	// System.Int32 activateText9::startLine
	int32_t ___startLine_3;
	// System.Int32 activateText9::endLine
	int32_t ___endLine_4;
	// shadowCharacterTextBoxManager activateText9::textBox
	shadowCharacterTextBoxManager_t2636567224 * ___textBox_5;
	// playerWentWhereTheyShouldntBoolScript activateText9::checkpoint
	playerWentWhereTheyShouldntBoolScript_t2464196904 * ___checkpoint_6;
	// System.Boolean activateText9::textHasPlayed
	bool ___textHasPlayed_7;

public:
	inline static int32_t get_offset_of_theText_2() { return static_cast<int32_t>(offsetof(activateText9_t1618066297, ___theText_2)); }
	inline TextAsset_t3836129977 * get_theText_2() const { return ___theText_2; }
	inline TextAsset_t3836129977 ** get_address_of_theText_2() { return &___theText_2; }
	inline void set_theText_2(TextAsset_t3836129977 * value)
	{
		___theText_2 = value;
		Il2CppCodeGenWriteBarrier(&___theText_2, value);
	}

	inline static int32_t get_offset_of_startLine_3() { return static_cast<int32_t>(offsetof(activateText9_t1618066297, ___startLine_3)); }
	inline int32_t get_startLine_3() const { return ___startLine_3; }
	inline int32_t* get_address_of_startLine_3() { return &___startLine_3; }
	inline void set_startLine_3(int32_t value)
	{
		___startLine_3 = value;
	}

	inline static int32_t get_offset_of_endLine_4() { return static_cast<int32_t>(offsetof(activateText9_t1618066297, ___endLine_4)); }
	inline int32_t get_endLine_4() const { return ___endLine_4; }
	inline int32_t* get_address_of_endLine_4() { return &___endLine_4; }
	inline void set_endLine_4(int32_t value)
	{
		___endLine_4 = value;
	}

	inline static int32_t get_offset_of_textBox_5() { return static_cast<int32_t>(offsetof(activateText9_t1618066297, ___textBox_5)); }
	inline shadowCharacterTextBoxManager_t2636567224 * get_textBox_5() const { return ___textBox_5; }
	inline shadowCharacterTextBoxManager_t2636567224 ** get_address_of_textBox_5() { return &___textBox_5; }
	inline void set_textBox_5(shadowCharacterTextBoxManager_t2636567224 * value)
	{
		___textBox_5 = value;
		Il2CppCodeGenWriteBarrier(&___textBox_5, value);
	}

	inline static int32_t get_offset_of_checkpoint_6() { return static_cast<int32_t>(offsetof(activateText9_t1618066297, ___checkpoint_6)); }
	inline playerWentWhereTheyShouldntBoolScript_t2464196904 * get_checkpoint_6() const { return ___checkpoint_6; }
	inline playerWentWhereTheyShouldntBoolScript_t2464196904 ** get_address_of_checkpoint_6() { return &___checkpoint_6; }
	inline void set_checkpoint_6(playerWentWhereTheyShouldntBoolScript_t2464196904 * value)
	{
		___checkpoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___checkpoint_6, value);
	}

	inline static int32_t get_offset_of_textHasPlayed_7() { return static_cast<int32_t>(offsetof(activateText9_t1618066297, ___textHasPlayed_7)); }
	inline bool get_textHasPlayed_7() const { return ___textHasPlayed_7; }
	inline bool* get_address_of_textHasPlayed_7() { return &___textHasPlayed_7; }
	inline void set_textHasPlayed_7(bool value)
	{
		___textHasPlayed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
