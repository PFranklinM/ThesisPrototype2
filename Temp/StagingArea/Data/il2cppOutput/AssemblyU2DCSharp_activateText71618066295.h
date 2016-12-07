﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t3836129977;
// mainCharacterTextBoxManager
struct mainCharacterTextBoxManager_t3999869439;
// shadowCharacterTextBoxManager
struct shadowCharacterTextBoxManager_t2636567224;
// activateText6
struct activateText6_t1618066294;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// activateText7
struct  activateText7_t1618066295  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.TextAsset activateText7::theText
	TextAsset_t3836129977 * ___theText_2;
	// System.Int32 activateText7::startLine
	int32_t ___startLine_3;
	// System.Int32 activateText7::endLine
	int32_t ___endLine_4;
	// mainCharacterTextBoxManager activateText7::MCTextBox
	mainCharacterTextBoxManager_t3999869439 * ___MCTextBox_5;
	// shadowCharacterTextBoxManager activateText7::SCTextBox
	shadowCharacterTextBoxManager_t2636567224 * ___SCTextBox_6;
	// System.Boolean activateText7::textHasPlayed
	bool ___textHasPlayed_7;
	// activateText6 activateText7::previousText
	activateText6_t1618066294 * ___previousText_8;

public:
	inline static int32_t get_offset_of_theText_2() { return static_cast<int32_t>(offsetof(activateText7_t1618066295, ___theText_2)); }
	inline TextAsset_t3836129977 * get_theText_2() const { return ___theText_2; }
	inline TextAsset_t3836129977 ** get_address_of_theText_2() { return &___theText_2; }
	inline void set_theText_2(TextAsset_t3836129977 * value)
	{
		___theText_2 = value;
		Il2CppCodeGenWriteBarrier(&___theText_2, value);
	}

	inline static int32_t get_offset_of_startLine_3() { return static_cast<int32_t>(offsetof(activateText7_t1618066295, ___startLine_3)); }
	inline int32_t get_startLine_3() const { return ___startLine_3; }
	inline int32_t* get_address_of_startLine_3() { return &___startLine_3; }
	inline void set_startLine_3(int32_t value)
	{
		___startLine_3 = value;
	}

	inline static int32_t get_offset_of_endLine_4() { return static_cast<int32_t>(offsetof(activateText7_t1618066295, ___endLine_4)); }
	inline int32_t get_endLine_4() const { return ___endLine_4; }
	inline int32_t* get_address_of_endLine_4() { return &___endLine_4; }
	inline void set_endLine_4(int32_t value)
	{
		___endLine_4 = value;
	}

	inline static int32_t get_offset_of_MCTextBox_5() { return static_cast<int32_t>(offsetof(activateText7_t1618066295, ___MCTextBox_5)); }
	inline mainCharacterTextBoxManager_t3999869439 * get_MCTextBox_5() const { return ___MCTextBox_5; }
	inline mainCharacterTextBoxManager_t3999869439 ** get_address_of_MCTextBox_5() { return &___MCTextBox_5; }
	inline void set_MCTextBox_5(mainCharacterTextBoxManager_t3999869439 * value)
	{
		___MCTextBox_5 = value;
		Il2CppCodeGenWriteBarrier(&___MCTextBox_5, value);
	}

	inline static int32_t get_offset_of_SCTextBox_6() { return static_cast<int32_t>(offsetof(activateText7_t1618066295, ___SCTextBox_6)); }
	inline shadowCharacterTextBoxManager_t2636567224 * get_SCTextBox_6() const { return ___SCTextBox_6; }
	inline shadowCharacterTextBoxManager_t2636567224 ** get_address_of_SCTextBox_6() { return &___SCTextBox_6; }
	inline void set_SCTextBox_6(shadowCharacterTextBoxManager_t2636567224 * value)
	{
		___SCTextBox_6 = value;
		Il2CppCodeGenWriteBarrier(&___SCTextBox_6, value);
	}

	inline static int32_t get_offset_of_textHasPlayed_7() { return static_cast<int32_t>(offsetof(activateText7_t1618066295, ___textHasPlayed_7)); }
	inline bool get_textHasPlayed_7() const { return ___textHasPlayed_7; }
	inline bool* get_address_of_textHasPlayed_7() { return &___textHasPlayed_7; }
	inline void set_textHasPlayed_7(bool value)
	{
		___textHasPlayed_7 = value;
	}

	inline static int32_t get_offset_of_previousText_8() { return static_cast<int32_t>(offsetof(activateText7_t1618066295, ___previousText_8)); }
	inline activateText6_t1618066294 * get_previousText_8() const { return ___previousText_8; }
	inline activateText6_t1618066294 ** get_address_of_previousText_8() { return &___previousText_8; }
	inline void set_previousText_8(activateText6_t1618066294 * value)
	{
		___previousText_8 = value;
		Il2CppCodeGenWriteBarrier(&___previousText_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif