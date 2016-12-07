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

// System.Net.ICredentials
struct ICredentials_t2177637613;
// System.Net.CredentialCache
struct CredentialCache_t2720749605;
// System.Net.NetworkCredential
struct NetworkCredential_t1592396767;
// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.CredentialCache::.cctor()
extern "C"  void CredentialCache__cctor_m3988201676 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern "C"  Il2CppObject * CredentialCache_get_DefaultCredentials_m2813166999 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::GetCredential(System.Uri,System.String)
extern "C"  NetworkCredential_t1592396767 * CredentialCache_GetCredential_m2314780433 (CredentialCache_t2720749605 * __this, Uri_t1116831938 * ___uriPrefix0, String_t* ___authType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CredentialCache::GetEnumerator()
extern "C"  Il2CppObject * CredentialCache_GetEnumerator_m612413167 (CredentialCache_t2720749605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::GetCredential(System.String,System.Int32,System.String)
extern "C"  NetworkCredential_t1592396767 * CredentialCache_GetCredential_m4266649843 (CredentialCache_t2720749605 * __this, String_t* ___host0, int32_t ___port1, String_t* ___authenticationType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
