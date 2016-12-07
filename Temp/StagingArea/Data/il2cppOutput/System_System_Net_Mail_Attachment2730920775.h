#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mime.ContentDisposition
struct ContentDisposition_t3306227188;
// System.Text.Encoding
struct Encoding_t2012439129;

#include "System_System_Net_Mail_AttachmentBase3245433144.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.Attachment
struct  Attachment_t2730920775  : public AttachmentBase_t3245433144
{
public:
	// System.Net.Mime.ContentDisposition System.Net.Mail.Attachment::contentDisposition
	ContentDisposition_t3306227188 * ___contentDisposition_4;
	// System.Text.Encoding System.Net.Mail.Attachment::nameEncoding
	Encoding_t2012439129 * ___nameEncoding_5;

public:
	inline static int32_t get_offset_of_contentDisposition_4() { return static_cast<int32_t>(offsetof(Attachment_t2730920775, ___contentDisposition_4)); }
	inline ContentDisposition_t3306227188 * get_contentDisposition_4() const { return ___contentDisposition_4; }
	inline ContentDisposition_t3306227188 ** get_address_of_contentDisposition_4() { return &___contentDisposition_4; }
	inline void set_contentDisposition_4(ContentDisposition_t3306227188 * value)
	{
		___contentDisposition_4 = value;
		Il2CppCodeGenWriteBarrier(&___contentDisposition_4, value);
	}

	inline static int32_t get_offset_of_nameEncoding_5() { return static_cast<int32_t>(offsetof(Attachment_t2730920775, ___nameEncoding_5)); }
	inline Encoding_t2012439129 * get_nameEncoding_5() const { return ___nameEncoding_5; }
	inline Encoding_t2012439129 ** get_address_of_nameEncoding_5() { return &___nameEncoding_5; }
	inline void set_nameEncoding_5(Encoding_t2012439129 * value)
	{
		___nameEncoding_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameEncoding_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
