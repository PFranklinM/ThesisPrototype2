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

// System.Net.Mail.SmtpFailedRecipientException
struct SmtpFailedRecipientException_t2446799917;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "System_System_Net_Mail_SmtpStatusCode3427587737.h"

// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor()
extern "C"  void SmtpFailedRecipientException__ctor_m4121492748 (SmtpFailedRecipientException_t2446799917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.String)
extern "C"  void SmtpFailedRecipientException__ctor_m409023862 (SmtpFailedRecipientException_t2446799917 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SmtpFailedRecipientException__ctor_m774083661 (SmtpFailedRecipientException_t2446799917 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.Net.Mail.SmtpStatusCode,System.String)
extern "C"  void SmtpFailedRecipientException__ctor_m3601011980 (SmtpFailedRecipientException_t2446799917 * __this, int32_t ___statusCode0, String_t* ___failedRecipient1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SmtpFailedRecipientException_System_Runtime_Serialization_ISerializable_GetObjectData_m223743 (SmtpFailedRecipientException_t2446799917 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SmtpFailedRecipientException_GetObjectData_m69615274 (SmtpFailedRecipientException_t2446799917 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
