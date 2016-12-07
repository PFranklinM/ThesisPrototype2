#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.UriParser
struct UriParser_t3685110593;
// System.Uri
struct Uri_t1116831938;
// System.UriFormatException
struct UriFormatException_t308538560;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "System_System_UriHostNameType959572879.h"
#include "System_System_UriHostNameType959572879MethodDeclarations.h"
#include "System_System_UriKind238866934.h"
#include "System_System_UriKind238866934MethodDeclarations.h"
#include "System_System_UriParser3685110593.h"
#include "System_System_UriParser3685110593MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex2161232213MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Text_RegularExpressions_Regex2161232213.h"
#include "System_System_Uri1116831938.h"
#include "System_System_UriFormatException308538560.h"
#include "System_System_Uri1116831938MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "System_System_UriFormatException308538560MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Collections_Hashtable1407064410MethodDeclarations.h"
#include "System_System_DefaultUriParser3145002206MethodDeclarations.h"
#include "mscorlib_System_Threading_Monitor2734674376MethodDeclarations.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "System_System_DefaultUriParser3145002206.h"
#include "System_System_GenericUriParser444686856.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142MethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "System_System_UriPartial875461417.h"
#include "System_System_UriPartial875461417MethodDeclarations.h"
#include "System_System_UriTypeConverter2523083502.h"
#include "System_System_UriTypeConverter2523083502MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriParser::.ctor()
extern "C"  void UriParser__ctor_m3933763184 (UriParser_t3685110593 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppClass* UriParser_t3685110593_il2cpp_TypeInfo_var;
extern Il2CppClass* Regex_t2161232213_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3057722339;
extern Il2CppCodeGenString* _stringLiteral3989333014;
extern const uint32_t UriParser__cctor_m1205478205_MetadataUsageId;
extern "C"  void UriParser__cctor_m1205478205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser__cctor_m1205478205_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = (Il2CppObject *)il2cpp_codegen_object_new(Il2CppObject_il2cpp_TypeInfo_var);
		Object__ctor_m1772956182(L_0, /*hidden argument*/NULL);
		((UriParser_t3685110593_StaticFields*)UriParser_t3685110593_il2cpp_TypeInfo_var->static_fields)->set_lock_object_0(L_0);
		Regex_t2161232213 * L_1 = (Regex_t2161232213 *)il2cpp_codegen_object_new(Regex_t2161232213_il2cpp_TypeInfo_var);
		Regex__ctor_m2980635200(L_1, _stringLiteral3057722339, /*hidden argument*/NULL);
		((UriParser_t3685110593_StaticFields*)UriParser_t3685110593_il2cpp_TypeInfo_var->static_fields)->set_uri_regex_4(L_1);
		Regex_t2161232213 * L_2 = (Regex_t2161232213 *)il2cpp_codegen_object_new(Regex_t2161232213_il2cpp_TypeInfo_var);
		Regex__ctor_m2980635200(L_2, _stringLiteral3989333014, /*hidden argument*/NULL);
		((UriParser_t3685110593_StaticFields*)UriParser_t3685110593_il2cpp_TypeInfo_var->static_fields)->set_auth_regex_5(L_2);
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* UriFormatException_t308538560_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral4198658576;
extern const uint32_t UriParser_InitializeAndValidate_m3968058349_MetadataUsageId;
extern "C"  void UriParser_InitializeAndValidate_m3968058349 (UriParser_t3685110593 * __this, Uri_t1116831938 * ___uri0, UriFormatException_t308538560 ** ___parsingError1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InitializeAndValidate_m3968058349_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t1116831938 * L_0 = ___uri0;
		String_t* L_1 = Uri_get_Scheme_m2606456870(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_4, _stringLiteral42, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t308538560 ** L_6 = ___parsingError1;
		UriFormatException_t308538560 * L_7 = (UriFormatException_t308538560 *)il2cpp_codegen_object_new(UriFormatException_t308538560_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3185454499(L_7, _stringLiteral4198658576, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_6)) = (Il2CppObject *)L_7;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_6), (Il2CppObject *)L_7);
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t308538560 ** L_8 = ___parsingError1;
		*((Il2CppObject **)(L_8)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_8), (Il2CppObject *)NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C"  void UriParser_OnRegister_m3986311499 (UriParser_t3685110593 * __this, String_t* ___schemeName0, int32_t ___defaultPort1, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m706252033 (UriParser_t3685110593 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_scheme_name_2(L_0);
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C"  int32_t UriParser_get_DefaultPort_m3728184791 (UriParser_t3685110593 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_default_port_3();
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1019606244 (UriParser_t3685110593 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_default_port_3(L_0);
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern Il2CppClass* UriParser_t3685110593_il2cpp_TypeInfo_var;
extern Il2CppClass* Hashtable_t1407064410_il2cpp_TypeInfo_var;
extern Il2CppClass* DefaultUriParser_t3145002206_il2cpp_TypeInfo_var;
extern Il2CppClass* Uri_t1116831938_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3316647;
extern const uint32_t UriParser_CreateDefaults_m2648397058_MetadataUsageId;
extern "C"  void UriParser_CreateDefaults_m2648397058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_CreateDefaults_m2648397058_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t1407064410 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3685110593_il2cpp_TypeInfo_var);
		Hashtable_t1407064410 * L_0 = ((UriParser_t3685110593_StaticFields*)UriParser_t3685110593_il2cpp_TypeInfo_var->static_fields)->get_table_1();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_t1407064410 * L_1 = (Hashtable_t1407064410 *)il2cpp_codegen_object_new(Hashtable_t1407064410_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1514037738(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t1407064410 * L_2 = V_0;
		DefaultUriParser_t3145002206 * L_3 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t1116831938_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_18();
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3685110593_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_5 = V_0;
		DefaultUriParser_t3145002206 * L_6 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFtp_19();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_8 = V_0;
		DefaultUriParser_t3145002206 * L_9 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeGopher_20();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_11 = V_0;
		DefaultUriParser_t3145002206 * L_12 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttp_21();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_14 = V_0;
		DefaultUriParser_t3145002206 * L_15 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttps_22();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_17 = V_0;
		DefaultUriParser_t3145002206 * L_18 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_23();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_20 = V_0;
		DefaultUriParser_t3145002206 * L_21 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNetPipe_26();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_23 = V_0;
		DefaultUriParser_t3145002206 * L_24 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNetTcp_27();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_26 = V_0;
		DefaultUriParser_t3145002206 * L_27 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_24();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_29 = V_0;
		DefaultUriParser_t3145002206 * L_30 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_t1116831938_StaticFields*)Uri_t1116831938_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNntp_25();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_32 = V_0;
		DefaultUriParser_t3145002206 * L_33 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_32, L_33, _stringLiteral3316647, ((int32_t)389), /*hidden argument*/NULL);
		Il2CppObject * L_34 = ((UriParser_t3685110593_StaticFields*)UriParser_t3685110593_il2cpp_TypeInfo_var->static_fields)->get_lock_object_0();
		V_1 = L_34;
		Il2CppObject * L_35 = V_1;
		Monitor_Enter_m476686225(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3685110593_il2cpp_TypeInfo_var);
			Hashtable_t1407064410 * L_36 = ((UriParser_t3685110593_StaticFields*)UriParser_t3685110593_il2cpp_TypeInfo_var->static_fields)->get_table_1();
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t1407064410 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3685110593_il2cpp_TypeInfo_var);
			((UriParser_t3685110593_StaticFields*)UriParser_t3685110593_il2cpp_TypeInfo_var->static_fields)->set_table_1(L_37);
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t1407064410 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Il2CppObject * L_38 = V_1;
		Monitor_Exit_m2088237919(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern Il2CppClass* GenericUriParser_t444686856_il2cpp_TypeInfo_var;
extern Il2CppClass* DefaultUriParser_t3145002206_il2cpp_TypeInfo_var;
extern const uint32_t UriParser_InternalRegister_m1447570189_MetadataUsageId;
extern "C"  void UriParser_InternalRegister_m1447570189 (Il2CppObject * __this /* static, unused */, Hashtable_t1407064410 * ___table0, UriParser_t3685110593 * ___uriParser1, String_t* ___schemeName2, int32_t ___defaultPort3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InternalRegister_m1447570189_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DefaultUriParser_t3145002206 * V_0 = NULL;
	{
		UriParser_t3685110593 * L_0 = ___uriParser1;
		String_t* L_1 = ___schemeName2;
		UriParser_set_SchemeName_m706252033(L_0, L_1, /*hidden argument*/NULL);
		UriParser_t3685110593 * L_2 = ___uriParser1;
		int32_t L_3 = ___defaultPort3;
		UriParser_set_DefaultPort_m1019606244(L_2, L_3, /*hidden argument*/NULL);
		UriParser_t3685110593 * L_4 = ___uriParser1;
		if (!((GenericUriParser_t444686856 *)IsInstClass(L_4, GenericUriParser_t444686856_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t1407064410 * L_5 = ___table0;
		String_t* L_6 = ___schemeName2;
		UriParser_t3685110593 * L_7 = ___uriParser1;
		VirtActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t3145002206 * L_8 = (DefaultUriParser_t3145002206 *)il2cpp_codegen_object_new(DefaultUriParser_t3145002206_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t3145002206 * L_9 = V_0;
		String_t* L_10 = ___schemeName2;
		UriParser_set_SchemeName_m706252033(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t3145002206 * L_11 = V_0;
		int32_t L_12 = ___defaultPort3;
		UriParser_set_DefaultPort_m1019606244(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t1407064410 * L_13 = ___table0;
		String_t* L_14 = ___schemeName2;
		DefaultUriParser_t3145002206 * L_15 = V_0;
		VirtActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t3685110593 * L_16 = ___uriParser1;
		String_t* L_17 = ___schemeName2;
		int32_t L_18 = ___defaultPort3;
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern Il2CppClass* UriParser_t3685110593_il2cpp_TypeInfo_var;
extern Il2CppClass* CultureInfo_t1065375142_il2cpp_TypeInfo_var;
extern const uint32_t UriParser_GetParser_m635613298_MetadataUsageId;
extern "C"  UriParser_t3685110593 * UriParser_GetParser_m635613298 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_GetParser_m635613298_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___schemeName0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t3685110593 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3685110593_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m2648397058(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___schemeName0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1065375142_il2cpp_TypeInfo_var);
		CultureInfo_t1065375142 * L_2 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = String_ToLower_m2140020155(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t1407064410 * L_4 = ((UriParser_t3685110593_StaticFields*)UriParser_t3685110593_il2cpp_TypeInfo_var->static_fields)->get_table_1();
		String_t* L_5 = V_0;
		Il2CppObject * L_6 = VirtFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_t3685110593 *)CastclassClass(L_6, UriParser_t3685110593_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
