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

// System.Net.Mail.AlternateView
struct AlternateView_t1036763893;
// System.IO.Stream
struct Stream_t1561764144;
// System.Net.Mime.ContentType
struct ContentType_t977289269;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t690461993;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2012439129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_System_Net_Mime_ContentType977289269.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void System.Net.Mail.AlternateView::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C"  void AlternateView__ctor_m2897372652 (AlternateView_t1036763893 * __this, Stream_t1561764144 * ___contentStream0, ContentType_t977289269 * ___contentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.LinkedResourceCollection System.Net.Mail.AlternateView::get_LinkedResources()
extern "C"  LinkedResourceCollection_t690461993 * AlternateView_get_LinkedResources_m3981933766 (AlternateView_t1036763893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateView System.Net.Mail.AlternateView::CreateAlternateViewFromString(System.String,System.Text.Encoding,System.String)
extern "C"  AlternateView_t1036763893 * AlternateView_CreateAlternateViewFromString_m510347892 (Il2CppObject * __this /* static, unused */, String_t* ___content0, Encoding_t2012439129 * ___encoding1, String_t* ___mediaType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::Dispose(System.Boolean)
extern "C"  void AlternateView_Dispose_m1413109286 (AlternateView_t1036763893 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
