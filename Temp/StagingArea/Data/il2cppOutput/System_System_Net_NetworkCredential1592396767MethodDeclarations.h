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

// System.Net.NetworkCredential
struct NetworkCredential_t1592396767;
// System.String
struct String_t;
// System.Uri
struct Uri_t1116831938;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Uri1116831938.h"

// System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern "C"  void NetworkCredential__ctor_m2995556631 (NetworkCredential_t1592396767 * __this, String_t* ___userName0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::.ctor(System.String,System.String,System.String)
extern "C"  void NetworkCredential__ctor_m3085600019 (NetworkCredential_t1592396767 * __this, String_t* ___userName0, String_t* ___password1, String_t* ___domain2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C"  String_t* NetworkCredential_get_UserName_m3369838591 (NetworkCredential_t1592396767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C"  String_t* NetworkCredential_get_Password_m3230765156 (NetworkCredential_t1592396767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C"  NetworkCredential_t1592396767 * NetworkCredential_GetCredential_m1548991703 (NetworkCredential_t1592396767 * __this, Uri_t1116831938 * ___uri0, String_t* ___authType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
