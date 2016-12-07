#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Mime.ContentType
struct ContentType_t977289269;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1159596143;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_Mime_ContentType977289269.h"
#include "System_System_Net_Mime_TransferEncoding3674356052.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void System.Net.Mime.ContentType::.ctor()
extern "C"  void ContentType__ctor_m3627268545 (ContentType_t977289269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::.ctor(System.String)
extern "C"  void ContentType__ctor_m3086452449 (ContentType_t977289269 * __this, String_t* ___contentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::.cctor()
extern "C"  void ContentType__cctor_m294078988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::Parse(System.String)
extern "C"  void ContentType_Parse_m624733040 (ContentType_t977289269 * __this, String_t* ___pair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mime.ContentType::get_UTF8Unmarked()
extern "C"  Encoding_t2012439129 * ContentType_get_UTF8Unmarked_m3500177112 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_Boundary(System.String)
extern "C"  void ContentType_set_Boundary_m2470030392 (ContentType_t977289269 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_CharSet()
extern "C"  String_t* ContentType_get_CharSet_m1967040389 (ContentType_t977289269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_CharSet(System.String)
extern "C"  void ContentType_set_CharSet_m3712233172 (ContentType_t977289269 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_MediaType()
extern "C"  String_t* ContentType_get_MediaType_m4062522647 (ContentType_t977289269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_MediaType(System.String)
extern "C"  void ContentType_set_MediaType_m1756484802 (ContentType_t977289269 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_Name()
extern "C"  String_t* ContentType_get_Name_m2241319796 (ContentType_t977289269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_Name(System.String)
extern "C"  void ContentType_set_Name_m2271155255 (ContentType_t977289269 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentType::get_Parameters()
extern "C"  StringDictionary_t1159596143 * ContentType_get_Parameters_m1731727303 (ContentType_t977289269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentType::Equals(System.Object)
extern "C"  bool ContentType_Equals_m4016350472 (ContentType_t977289269 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentType::Equals(System.Net.Mime.ContentType)
extern "C"  bool ContentType_Equals_m1402323037 (ContentType_t977289269 * __this, ContentType_t977289269 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mime.ContentType::GetHashCode()
extern "C"  int32_t ContentType_GetHashCode_m708093408 (ContentType_t977289269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::ToString()
extern "C"  String_t* ContentType_ToString_m1603044876 (ContentType_t977289269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::WrapIfEspecialsExist(System.String)
extern "C"  String_t* ContentType_WrapIfEspecialsExist_m1345349155 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mime.ContentType::GuessEncoding(System.String)
extern "C"  Encoding_t2012439129 * ContentType_GuessEncoding_m2518150351 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mime.ContentType::GuessTransferEncoding(System.Text.Encoding)
extern "C"  int32_t ContentType_GuessTransferEncoding_m1872013974 (Il2CppObject * __this /* static, unused */, Encoding_t2012439129 * ___enc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::To2047(System.Byte[])
extern "C"  String_t* ContentType_To2047_m1318540205 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::EncodeSubjectRFC2047(System.String,System.Text.Encoding)
extern "C"  String_t* ContentType_EncodeSubjectRFC2047_m894549961 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___enc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
