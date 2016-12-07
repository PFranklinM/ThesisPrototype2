﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Net.Mail.SmtpClient/SmtpResponse
struct SmtpResponse_t2848835006;
struct SmtpResponse_t2848835006_marshaled_pinvoke;
struct SmtpResponse_t2848835006_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mail_SmtpClient_SmtpResponse2848835006.h"
#include "mscorlib_System_String7231557.h"

// System.Net.Mail.SmtpClient/SmtpResponse System.Net.Mail.SmtpClient/SmtpResponse::Parse(System.String)
extern "C"  SmtpResponse_t2848835006  SmtpResponse_Parse_m2543094864 (Il2CppObject * __this /* static, unused */, String_t* ___line0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SmtpResponse_t2848835006;
struct SmtpResponse_t2848835006_marshaled_pinvoke;

extern "C" void SmtpResponse_t2848835006_marshal_pinvoke(const SmtpResponse_t2848835006& unmarshaled, SmtpResponse_t2848835006_marshaled_pinvoke& marshaled);
extern "C" void SmtpResponse_t2848835006_marshal_pinvoke_back(const SmtpResponse_t2848835006_marshaled_pinvoke& marshaled, SmtpResponse_t2848835006& unmarshaled);
extern "C" void SmtpResponse_t2848835006_marshal_pinvoke_cleanup(SmtpResponse_t2848835006_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SmtpResponse_t2848835006;
struct SmtpResponse_t2848835006_marshaled_com;

extern "C" void SmtpResponse_t2848835006_marshal_com(const SmtpResponse_t2848835006& unmarshaled, SmtpResponse_t2848835006_marshaled_com& marshaled);
extern "C" void SmtpResponse_t2848835006_marshal_com_back(const SmtpResponse_t2848835006_marshaled_com& marshaled, SmtpResponse_t2848835006& unmarshaled);
extern "C" void SmtpResponse_t2848835006_marshal_com_cleanup(SmtpResponse_t2848835006_marshaled_com& marshaled);