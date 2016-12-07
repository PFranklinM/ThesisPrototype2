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

// System.Net.Mail.Attachment
struct Attachment_t2730920775;
// System.IO.Stream
struct Stream_t1561764144;
// System.String
struct String_t;
// System.Net.Mime.ContentDisposition
struct ContentDisposition_t3306227188;
// System.Text.Encoding
struct Encoding_t2012439129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void System.Net.Mail.Attachment::.ctor(System.IO.Stream,System.String,System.String)
extern "C"  void Attachment__ctor_m1778027009 (Attachment_t2730920775 * __this, Stream_t1561764144 * ___contentStream0, String_t* ___name1, String_t* ___mediaType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentDisposition System.Net.Mail.Attachment::get_ContentDisposition()
extern "C"  ContentDisposition_t3306227188 * Attachment_get_ContentDisposition_m4053814032 (Attachment_t2730920775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.Attachment::get_Name()
extern "C"  String_t* Attachment_get_Name_m2588045321 (Attachment_t2730920775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::set_Name(System.String)
extern "C"  void Attachment_set_Name_m825360360 (Attachment_t2730920775 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.Attachment::get_NameEncoding()
extern "C"  Encoding_t2012439129 * Attachment_get_NameEncoding_m3818456963 (Attachment_t2730920775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.Attachment System.Net.Mail.Attachment::CreateAttachmentFromString(System.String,System.String,System.Text.Encoding,System.String)
extern "C"  Attachment_t2730920775 * Attachment_CreateAttachmentFromString_m2316745616 (Il2CppObject * __this /* static, unused */, String_t* ___content0, String_t* ___name1, Encoding_t2012439129 * ___contentEncoding2, String_t* ___mediaType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
