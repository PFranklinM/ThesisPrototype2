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

// System.Net.Mail.MailAddress
struct MailAddress_t2991723827;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Object
struct Il2CppObject;
// System.FormatException
struct FormatException_t3455918062;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_Mail_MailAddress2991723827.h"

// System.Void System.Net.Mail.MailAddress::.ctor(System.String)
extern "C"  void MailAddress__ctor_m1031219982 (MailAddress_t2991723827 * __this, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String)
extern "C"  void MailAddress__ctor_m3062424266 (MailAddress_t2991723827 * __this, String_t* ___address0, String_t* ___displayName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String,System.Text.Encoding)
extern "C"  void MailAddress__ctor_m8351367 (MailAddress_t2991723827 * __this, String_t* ___address0, String_t* ___displayName1, Encoding_t2012439129 * ___displayNameEncoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_Address()
extern "C"  String_t* MailAddress_get_Address_m4125281472 (MailAddress_t2991723827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_DisplayName()
extern "C"  String_t* MailAddress_get_DisplayName_m2123558777 (MailAddress_t2991723827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailAddress::Equals(System.Object)
extern "C"  bool MailAddress_Equals_m433686139 (MailAddress_t2991723827 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailAddress::Equals(System.Net.Mail.MailAddress)
extern "C"  bool MailAddress_Equals_m211097155 (MailAddress_t2991723827 * __this, MailAddress_t2991723827 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mail.MailAddress::GetHashCode()
extern "C"  int32_t MailAddress_GetHashCode_m3543116371 (MailAddress_t2991723827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::ToString()
extern "C"  String_t* MailAddress_ToString_m2952138361 (MailAddress_t2991723827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.FormatException System.Net.Mail.MailAddress::CreateFormatException()
extern "C"  FormatException_t3455918062 * MailAddress_CreateFormatException_m1251015348 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
