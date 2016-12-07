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

// System.Net.Mail.MailMessage
struct MailMessage_t799373638;
// System.Net.Mail.AlternateViewCollection
struct AlternateViewCollection_t943595443;
// System.Net.Mail.AttachmentCollection
struct AttachmentCollection_t2308974981;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t2380872817;
// System.String
struct String_t;
// System.Net.Mime.ContentType
struct ContentType_t977289269;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Net.Mail.MailAddress
struct MailAddress_t2991723827;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_Mime_TransferEncoding3674356052.h"
#include "System_System_Net_Mail_MailAddress2991723827.h"
#include "System_System_Net_Mail_MailPriority3024324831.h"

// System.Void System.Net.Mail.MailMessage::.ctor()
extern "C"  void MailMessage__ctor_m2865516993 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateViewCollection System.Net.Mail.MailMessage::get_AlternateViews()
extern "C"  AlternateViewCollection_t943595443 * MailMessage_get_AlternateViews_m3358693027 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AttachmentCollection System.Net.Mail.MailMessage::get_Attachments()
extern "C"  AttachmentCollection_t2308974981 * MailMessage_get_Attachments_m3288727453 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_Bcc()
extern "C"  MailAddressCollection_t2380872817 * MailMessage_get_Bcc_m4211029239 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailMessage::get_Body()
extern "C"  String_t* MailMessage_get_Body_m3177156811 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Body(System.String)
extern "C"  void MailMessage_set_Body_m3945921600 (MailMessage_t799373638 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentType System.Net.Mail.MailMessage::get_BodyContentType()
extern "C"  ContentType_t977289269 * MailMessage_get_BodyContentType_m659867857 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mail.MailMessage::get_ContentTransferEncoding()
extern "C"  int32_t MailMessage_get_ContentTransferEncoding_m2514278212 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_BodyEncoding()
extern "C"  Encoding_t2012439129 * MailMessage_get_BodyEncoding_m4222607767 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_CC()
extern "C"  MailAddressCollection_t2380872817 * MailMessage_get_CC_m2768236173 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_From()
extern "C"  MailAddress_t2991723827 * MailMessage_get_From_m199606969 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_From(System.Net.Mail.MailAddress)
extern "C"  void MailMessage_set_From_m2162821458 (MailMessage_t799373638 * __this, MailAddress_t2991723827 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.Mail.MailMessage::get_Headers()
extern "C"  NameValueCollection_t2791941106 * MailMessage_get_Headers_m2985808916 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailMessage::get_IsBodyHtml()
extern "C"  bool MailMessage_get_IsBodyHtml_m1982877773 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailPriority System.Net.Mail.MailMessage::get_Priority()
extern "C"  int32_t MailMessage_get_Priority_m571223187 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_ReplyToList()
extern "C"  MailAddressCollection_t2380872817 * MailMessage_get_ReplyToList_m3456904632 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_Sender()
extern "C"  MailAddress_t2991723827 * MailMessage_get_Sender_m1042768644 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailMessage::get_Subject()
extern "C"  String_t* MailMessage_get_Subject_m1542957957 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Subject(System.String)
extern "C"  void MailMessage_set_Subject_m3797002964 (MailMessage_t799373638 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_SubjectEncoding()
extern "C"  Encoding_t2012439129 * MailMessage_get_SubjectEncoding_m2805877631 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_To()
extern "C"  MailAddressCollection_t2380872817 * MailMessage_get_To_m2768784904 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::Dispose()
extern "C"  void MailMessage_Dispose_m586076606 (MailMessage_t799373638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::Dispose(System.Boolean)
extern "C"  void MailMessage_Dispose_m1064084149 (MailMessage_t799373638 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::GuessEncoding(System.String)
extern "C"  Encoding_t2012439129 * MailMessage_GuessEncoding_m961434831 (MailMessage_t799373638 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
