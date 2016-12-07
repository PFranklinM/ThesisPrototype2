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

// System.Net.Mime.ContentDisposition
struct ContentDisposition_t3306227188;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1159596143;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_Mime_ContentDisposition3306227188.h"

// System.Void System.Net.Mime.ContentDisposition::.ctor()
extern "C"  void ContentDisposition__ctor_m2325432436 (ContentDisposition_t3306227188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::.ctor(System.String)
extern "C"  void ContentDisposition__ctor_m1490727694 (ContentDisposition_t3306227188 * __this, String_t* ___disposition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::Parse(System.String)
extern "C"  void ContentDisposition_Parse_m3323975581 (ContentDisposition_t3306227188 * __this, String_t* ___pair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::get_DispositionType()
extern "C"  String_t* ContentDisposition_get_DispositionType_m4063423863 (ContentDisposition_t3306227188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_FileName(System.String)
extern "C"  void ContentDisposition_set_FileName_m1064938446 (ContentDisposition_t3306227188 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentDisposition::get_Parameters()
extern "C"  StringDictionary_t1159596143 * ContentDisposition_get_Parameters_m4005324530 (ContentDisposition_t3306227188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_Size(System.Int64)
extern "C"  void ContentDisposition_set_Size_m1568392416 (ContentDisposition_t3306227188 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::Equals(System.Object)
extern "C"  bool ContentDisposition_Equals_m623397775 (ContentDisposition_t3306227188 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::Equals(System.Net.Mime.ContentDisposition)
extern "C"  bool ContentDisposition_Equals_m437023549 (ContentDisposition_t3306227188 * __this, ContentDisposition_t3306227188 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mime.ContentDisposition::GetHashCode()
extern "C"  int32_t ContentDisposition_GetHashCode_m3118715891 (ContentDisposition_t3306227188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::ToString()
extern "C"  String_t* ContentDisposition_ToString_m713717599 (ContentDisposition_t3306227188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
