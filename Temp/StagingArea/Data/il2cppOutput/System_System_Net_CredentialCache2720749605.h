#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkCredential
struct NetworkCredential_t1592396767;
// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CredentialCache
struct  CredentialCache_t2720749605  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Net.CredentialCache::cache
	Hashtable_t1407064410 * ___cache_1;
	// System.Collections.Hashtable System.Net.CredentialCache::cacheForHost
	Hashtable_t1407064410 * ___cacheForHost_2;

public:
	inline static int32_t get_offset_of_cache_1() { return static_cast<int32_t>(offsetof(CredentialCache_t2720749605, ___cache_1)); }
	inline Hashtable_t1407064410 * get_cache_1() const { return ___cache_1; }
	inline Hashtable_t1407064410 ** get_address_of_cache_1() { return &___cache_1; }
	inline void set_cache_1(Hashtable_t1407064410 * value)
	{
		___cache_1 = value;
		Il2CppCodeGenWriteBarrier(&___cache_1, value);
	}

	inline static int32_t get_offset_of_cacheForHost_2() { return static_cast<int32_t>(offsetof(CredentialCache_t2720749605, ___cacheForHost_2)); }
	inline Hashtable_t1407064410 * get_cacheForHost_2() const { return ___cacheForHost_2; }
	inline Hashtable_t1407064410 ** get_address_of_cacheForHost_2() { return &___cacheForHost_2; }
	inline void set_cacheForHost_2(Hashtable_t1407064410 * value)
	{
		___cacheForHost_2 = value;
		Il2CppCodeGenWriteBarrier(&___cacheForHost_2, value);
	}
};

struct CredentialCache_t2720749605_StaticFields
{
public:
	// System.Net.NetworkCredential System.Net.CredentialCache::empty
	NetworkCredential_t1592396767 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(CredentialCache_t2720749605_StaticFields, ___empty_0)); }
	inline NetworkCredential_t1592396767 * get_empty_0() const { return ___empty_0; }
	inline NetworkCredential_t1592396767 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(NetworkCredential_t1592396767 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier(&___empty_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
