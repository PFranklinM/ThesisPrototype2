#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t2012439129;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1159596143;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mime.ContentType
struct  ContentType_t977289269  : public Il2CppObject
{
public:
	// System.String System.Net.Mime.ContentType::mediaType
	String_t* ___mediaType_1;
	// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentType::parameters
	StringDictionary_t1159596143 * ___parameters_2;

public:
	inline static int32_t get_offset_of_mediaType_1() { return static_cast<int32_t>(offsetof(ContentType_t977289269, ___mediaType_1)); }
	inline String_t* get_mediaType_1() const { return ___mediaType_1; }
	inline String_t** get_address_of_mediaType_1() { return &___mediaType_1; }
	inline void set_mediaType_1(String_t* value)
	{
		___mediaType_1 = value;
		Il2CppCodeGenWriteBarrier(&___mediaType_1, value);
	}

	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(ContentType_t977289269, ___parameters_2)); }
	inline StringDictionary_t1159596143 * get_parameters_2() const { return ___parameters_2; }
	inline StringDictionary_t1159596143 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(StringDictionary_t1159596143 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_2, value);
	}
};

struct ContentType_t977289269_StaticFields
{
public:
	// System.Text.Encoding System.Net.Mime.ContentType::utf8unmarked
	Encoding_t2012439129 * ___utf8unmarked_0;
	// System.Char[] System.Net.Mime.ContentType::especials
	CharU5BU5D_t3324145743* ___especials_3;

public:
	inline static int32_t get_offset_of_utf8unmarked_0() { return static_cast<int32_t>(offsetof(ContentType_t977289269_StaticFields, ___utf8unmarked_0)); }
	inline Encoding_t2012439129 * get_utf8unmarked_0() const { return ___utf8unmarked_0; }
	inline Encoding_t2012439129 ** get_address_of_utf8unmarked_0() { return &___utf8unmarked_0; }
	inline void set_utf8unmarked_0(Encoding_t2012439129 * value)
	{
		___utf8unmarked_0 = value;
		Il2CppCodeGenWriteBarrier(&___utf8unmarked_0, value);
	}

	inline static int32_t get_offset_of_especials_3() { return static_cast<int32_t>(offsetof(ContentType_t977289269_StaticFields, ___especials_3)); }
	inline CharU5BU5D_t3324145743* get_especials_3() const { return ___especials_3; }
	inline CharU5BU5D_t3324145743** get_address_of_especials_3() { return &___especials_3; }
	inline void set_especials_3(CharU5BU5D_t3324145743* value)
	{
		___especials_3 = value;
		Il2CppCodeGenWriteBarrier(&___especials_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
