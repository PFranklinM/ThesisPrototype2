#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mail.SmtpFailedRecipientException[]
struct SmtpFailedRecipientExceptionU5BU5D_t3524271232;

#include "System_System_Net_Mail_SmtpFailedRecipientExceptio2446799917.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpFailedRecipientsException
struct  SmtpFailedRecipientsException_t645487992  : public SmtpFailedRecipientException_t2446799917
{
public:
	// System.Net.Mail.SmtpFailedRecipientException[] System.Net.Mail.SmtpFailedRecipientsException::innerExceptions
	SmtpFailedRecipientExceptionU5BU5D_t3524271232* ___innerExceptions_13;

public:
	inline static int32_t get_offset_of_innerExceptions_13() { return static_cast<int32_t>(offsetof(SmtpFailedRecipientsException_t645487992, ___innerExceptions_13)); }
	inline SmtpFailedRecipientExceptionU5BU5D_t3524271232* get_innerExceptions_13() const { return ___innerExceptions_13; }
	inline SmtpFailedRecipientExceptionU5BU5D_t3524271232** get_address_of_innerExceptions_13() { return &___innerExceptions_13; }
	inline void set_innerExceptions_13(SmtpFailedRecipientExceptionU5BU5D_t3524271232* value)
	{
		___innerExceptions_13 = value;
		Il2CppCodeGenWriteBarrier(&___innerExceptions_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
