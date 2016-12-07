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

// System.Net.Mail.AttachmentBase
struct AttachmentBase_t3245433144;
// System.IO.Stream
struct Stream_t1561764144;
// System.Net.Mime.ContentType
struct ContentType_t977289269;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_System_Net_Mime_ContentType977289269.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_Mime_TransferEncoding3674356052.h"

// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C"  void AttachmentBase__ctor_m3900002395 (AttachmentBase_t3245433144 * __this, Stream_t1561764144 * ___contentStream0, ContentType_t977289269 * ___contentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream,System.String)
extern "C"  void AttachmentBase__ctor_m986695412 (AttachmentBase_t3245433144 * __this, Stream_t1561764144 * ___contentStream0, String_t* ___mediaType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.AttachmentBase::get_ContentId()
extern "C"  String_t* AttachmentBase_get_ContentId_m2280554887 (AttachmentBase_t3245433144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Mail.AttachmentBase::get_ContentStream()
extern "C"  Stream_t1561764144 * AttachmentBase_get_ContentStream_m3462265529 (AttachmentBase_t3245433144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentType System.Net.Mail.AttachmentBase::get_ContentType()
extern "C"  ContentType_t977289269 * AttachmentBase_get_ContentType_m4287912159 (AttachmentBase_t3245433144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mail.AttachmentBase::get_TransferEncoding()
extern "C"  int32_t AttachmentBase_get_TransferEncoding_m697750081 (AttachmentBase_t3245433144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::set_TransferEncoding(System.Net.Mime.TransferEncoding)
extern "C"  void AttachmentBase_set_TransferEncoding_m3997301654 (AttachmentBase_t3245433144 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::Dispose()
extern "C"  void AttachmentBase_Dispose_m2303575070 (AttachmentBase_t3245433144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::Dispose(System.Boolean)
extern "C"  void AttachmentBase_Dispose_m1174662421 (AttachmentBase_t3245433144 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
