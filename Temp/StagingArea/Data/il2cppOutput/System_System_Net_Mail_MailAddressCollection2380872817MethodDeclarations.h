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

// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t2380872817;
// System.String
struct String_t;
// System.Net.Mail.MailAddress
struct MailAddress_t2991723827;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_Mail_MailAddress2991723827.h"

// System.Void System.Net.Mail.MailAddressCollection::.ctor()
extern "C"  void MailAddressCollection__ctor_m1192297014 (MailAddressCollection_t2380872817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::Add(System.String)
extern "C"  void MailAddressCollection_Add_m667848877 (MailAddressCollection_t2380872817 * __this, String_t* ___addresses0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::InsertItem(System.Int32,System.Net.Mail.MailAddress)
extern "C"  void MailAddressCollection_InsertItem_m1864560161 (MailAddressCollection_t2380872817 * __this, int32_t ___index0, MailAddress_t2991723827 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::SetItem(System.Int32,System.Net.Mail.MailAddress)
extern "C"  void MailAddressCollection_SetItem_m2490788368 (MailAddressCollection_t2380872817 * __this, int32_t ___index0, MailAddress_t2991723827 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddressCollection::ToString()
extern "C"  String_t* MailAddressCollection_ToString_m716965175 (MailAddressCollection_t2380872817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
