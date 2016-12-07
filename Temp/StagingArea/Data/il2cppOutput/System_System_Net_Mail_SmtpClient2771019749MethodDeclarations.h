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

// System.Net.Mail.SmtpClient
struct SmtpClient_t2771019749;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.Net.ICredentialsByHost
struct ICredentialsByHost_t4048162156;
// System.Net.Mail.MailAddress
struct MailAddress_t2991723827;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t2380872817;
// System.Net.Mail.MailMessage
struct MailMessage_t799373638;
// System.Net.Mail.AlternateView
struct AlternateView_t1036763893;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t690461993;
// System.Net.Mail.Attachment
struct Attachment_t2730920775;
// System.Net.Mime.ContentType
struct ContentType_t977289269;
// System.Net.Mail.LinkedResource
struct LinkedResource_t2218228715;
// System.Net.Mime.ContentDisposition
struct ContentDisposition_t3306227188;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1111884825;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_Mail_MailAddress2991723827.h"
#include "System_System_Net_Mail_MailAddressCollection2380872817.h"
#include "System_System_Net_Mail_MailMessage799373638.h"
#include "System_System_Net_Mail_AlternateView1036763893.h"
#include "System_System_Net_Mail_SmtpClient_SmtpResponse2848835006.h"
#include "System_System_Net_Mail_LinkedResourceCollection690461993.h"
#include "System_System_Net_Mail_Attachment2730920775.h"
#include "System_System_Net_Mime_ContentType977289269.h"
#include "System_System_Net_Mime_TransferEncoding3674356052.h"
#include "System_System_Net_Mail_LinkedResource2218228715.h"
#include "System_System_Net_Mime_ContentDisposition3306227188.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "System_System_Security_Cryptography_X509Certificat1111884825.h"
#include "System_System_Net_Security_SslPolicyErrors3099591579.h"

// System.Void System.Net.Mail.SmtpClient::.ctor(System.String)
extern "C"  void SmtpClient__ctor_m788665070 (SmtpClient_t2771019749 * __this, String_t* ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::.ctor(System.String,System.Int32)
extern "C"  void SmtpClient__ctor_m1203748009 (SmtpClient_t2771019749 * __this, String_t* ___host0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Mail.SmtpClient::get_ClientCertificates()
extern "C"  X509CertificateCollection_t3220522733 * SmtpClient_get_ClientCertificates_m3155580285 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentialsByHost System.Net.Mail.SmtpClient::get_Credentials()
extern "C"  Il2CppObject * SmtpClient_get_Credentials_m3254172564 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Credentials(System.Net.ICredentialsByHost)
extern "C"  void SmtpClient_set_Credentials_m1117051967 (SmtpClient_t2771019749 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_EnableSsl(System.Boolean)
extern "C"  void SmtpClient_set_EnableSsl_m899391637 (SmtpClient_t2771019749 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::get_Host()
extern "C"  String_t* SmtpClient_get_Host_m3844437892 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Port(System.Int32)
extern "C"  void SmtpClient_set_Port_m349993407 (SmtpClient_t2771019749 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::get_UseDefaultCredentials()
extern "C"  bool SmtpClient_get_UseDefaultCredentials_m2859620181 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::CheckState()
extern "C"  void SmtpClient_CheckState_m1621929241 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeAddress(System.Net.Mail.MailAddress)
extern "C"  String_t* SmtpClient_EncodeAddress_m2470205839 (Il2CppObject * __this /* static, unused */, MailAddress_t2991723827 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeAddresses(System.Net.Mail.MailAddressCollection)
extern "C"  String_t* SmtpClient_EncodeAddresses_m2612622755 (Il2CppObject * __this /* static, unused */, MailAddressCollection_t2380872817 * ___addresses0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeSubjectRFC2047(System.Net.Mail.MailMessage)
extern "C"  String_t* SmtpClient_EncodeSubjectRFC2047_m3282389788 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeBody(System.Net.Mail.MailMessage)
extern "C"  String_t* SmtpClient_EncodeBody_m4088570846 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeBody(System.Net.Mail.AlternateView)
extern "C"  String_t* SmtpClient_EncodeBody_m791877775 (SmtpClient_t2771019749 * __this, AlternateView_t1036763893 * ___av0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::EndSection(System.String)
extern "C"  void SmtpClient_EndSection_m3370229576 (SmtpClient_t2771019749 * __this, String_t* ___section0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GenerateBoundary()
extern "C"  String_t* SmtpClient_GenerateBoundary_m54301138 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GenerateBoundary(System.Int32)
extern "C"  String_t* SmtpClient_GenerateBoundary_m4260633635 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::IsError(System.Net.Mail.SmtpClient/SmtpResponse)
extern "C"  bool SmtpClient_IsError_m2506483482 (SmtpClient_t2771019749 * __this, SmtpResponse_t2848835006  ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::CheckCancellation()
extern "C"  void SmtpClient_CheckCancellation_m782899101 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpClient/SmtpResponse System.Net.Mail.SmtpClient::Read()
extern "C"  SmtpResponse_t2848835006  SmtpClient_Read_m1161414555 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::ResetExtensions()
extern "C"  void SmtpClient_ResetExtensions_m2762359413 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::ParseExtensions(System.String)
extern "C"  void SmtpClient_ParseExtensions_m1193074121 (SmtpClient_t2771019749 * __this, String_t* ___extens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Send(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_Send_m1903280433 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendInternal(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendInternal_m2301298292 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendToFile(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendToFile_m3112955674 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendCore(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendCore_m3130584402 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendDot()
extern "C"  void SmtpClient_SendDot_m1488299475 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendData(System.String)
extern "C"  void SmtpClient_SendData_m366280896 (SmtpClient_t2771019749 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::AddPriorityHeader(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_AddPriorityHeader_m707552613 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendSimpleBody(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendSimpleBody_m1928189917 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendBodylessSingleAlternate(System.Net.Mail.AlternateView)
extern "C"  void SmtpClient_SendBodylessSingleAlternate_m1929953689 (SmtpClient_t2771019749 * __this, AlternateView_t1036763893 * ___av0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendWithoutAttachments(System.Net.Mail.MailMessage,System.String,System.Boolean)
extern "C"  void SmtpClient_SendWithoutAttachments_m3953669208 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, String_t* ___boundary1, bool ___attachmentExists2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendWithAttachments(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_SendWithAttachments_m879366549 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendBodyWithAlternateViews(System.Net.Mail.MailMessage,System.String,System.Boolean)
extern "C"  void SmtpClient_SendBodyWithAlternateViews_m308114380 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, String_t* ___boundary1, bool ___attachmentExists2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendLinkedResources(System.Net.Mail.MailMessage,System.Net.Mail.LinkedResourceCollection,System.String)
extern "C"  void SmtpClient_SendLinkedResources_m3496517507 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, LinkedResourceCollection_t690461993 * ___resources1, String_t* ___boundary2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendAttachments(System.Net.Mail.MailMessage,System.Net.Mail.Attachment,System.String)
extern "C"  void SmtpClient_SendAttachments_m1236696137 (SmtpClient_t2771019749 * __this, MailMessage_t799373638 * ___message0, Attachment_t2730920775 * ___body1, String_t* ___boundary2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpClient/SmtpResponse System.Net.Mail.SmtpClient::SendCommand(System.String)
extern "C"  SmtpResponse_t2848835006  SmtpClient_SendCommand_m3857348386 (SmtpClient_t2771019749 * __this, String_t* ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendHeader(System.String,System.String)
extern "C"  void SmtpClient_SendHeader_m3700287161 (SmtpClient_t2771019749 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType)
extern "C"  void SmtpClient_StartSection_m2537384562 (SmtpClient_t2771019749 * __this, String_t* ___section0, ContentType_t977289269 * ___sectionContentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding)
extern "C"  void SmtpClient_StartSection_m2717960460 (SmtpClient_t2771019749 * __this, String_t* ___section0, ContentType_t977289269 * ___sectionContentType1, int32_t ___transferEncoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding,System.Net.Mail.LinkedResource)
extern "C"  void SmtpClient_StartSection_m683664684 (SmtpClient_t2771019749 * __this, String_t* ___section0, ContentType_t977289269 * ___sectionContentType1, int32_t ___transferEncoding2, LinkedResource_t2218228715 * ___lr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding,System.Net.Mime.ContentDisposition)
extern "C"  void SmtpClient_StartSection_m1873149138 (SmtpClient_t2771019749 * __this, String_t* ___section0, ContentType_t977289269 * ___sectionContentType1, int32_t ___transferEncoding2, ContentDisposition_t3306227188 * ___contentDisposition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::ToQuotedPrintable(System.String,System.Text.Encoding)
extern "C"  String_t* SmtpClient_ToQuotedPrintable_m3972948994 (SmtpClient_t2771019749 * __this, String_t* ___input0, Encoding_t2012439129 * ___enc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::ToQuotedPrintable(System.Byte[])
extern "C"  String_t* SmtpClient_ToQuotedPrintable_m301037366 (SmtpClient_t2771019749 * __this, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GetTransferEncodingName(System.Net.Mime.TransferEncoding)
extern "C"  String_t* SmtpClient_GetTransferEncodingName_m2290328678 (Il2CppObject * __this /* static, unused */, int32_t ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::InitiateSecureConnection()
extern "C"  void SmtpClient_InitiateSecureConnection_m708997022 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Authenticate()
extern "C"  void SmtpClient_Authenticate_m278615237 (SmtpClient_t2771019749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Authenticate(System.String,System.String)
extern "C"  void SmtpClient_Authenticate_m4053414873 (SmtpClient_t2771019749 * __this, String_t* ___Username0, String_t* ___Password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::<callback>m__2(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool SmtpClient_U3CcallbackU3Em__2_m4098294475 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, X509Certificate_t3076817455 * ___certificate1, X509Chain_t1111884825 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
