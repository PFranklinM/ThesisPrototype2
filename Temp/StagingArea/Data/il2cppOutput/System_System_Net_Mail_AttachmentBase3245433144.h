#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Net.Mime.ContentType
struct ContentType_t977289269;
// System.IO.Stream
struct Stream_t1561764144;

#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_Mime_TransferEncoding3674356052.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.AttachmentBase
struct  AttachmentBase_t3245433144  : public Il2CppObject
{
public:
	// System.String System.Net.Mail.AttachmentBase::id
	String_t* ___id_0;
	// System.Net.Mime.ContentType System.Net.Mail.AttachmentBase::contentType
	ContentType_t977289269 * ___contentType_1;
	// System.IO.Stream System.Net.Mail.AttachmentBase::contentStream
	Stream_t1561764144 * ___contentStream_2;
	// System.Net.Mime.TransferEncoding System.Net.Mail.AttachmentBase::transferEncoding
	int32_t ___transferEncoding_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(AttachmentBase_t3245433144, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_contentType_1() { return static_cast<int32_t>(offsetof(AttachmentBase_t3245433144, ___contentType_1)); }
	inline ContentType_t977289269 * get_contentType_1() const { return ___contentType_1; }
	inline ContentType_t977289269 ** get_address_of_contentType_1() { return &___contentType_1; }
	inline void set_contentType_1(ContentType_t977289269 * value)
	{
		___contentType_1 = value;
		Il2CppCodeGenWriteBarrier(&___contentType_1, value);
	}

	inline static int32_t get_offset_of_contentStream_2() { return static_cast<int32_t>(offsetof(AttachmentBase_t3245433144, ___contentStream_2)); }
	inline Stream_t1561764144 * get_contentStream_2() const { return ___contentStream_2; }
	inline Stream_t1561764144 ** get_address_of_contentStream_2() { return &___contentStream_2; }
	inline void set_contentStream_2(Stream_t1561764144 * value)
	{
		___contentStream_2 = value;
		Il2CppCodeGenWriteBarrier(&___contentStream_2, value);
	}

	inline static int32_t get_offset_of_transferEncoding_3() { return static_cast<int32_t>(offsetof(AttachmentBase_t3245433144, ___transferEncoding_3)); }
	inline int32_t get_transferEncoding_3() const { return ___transferEncoding_3; }
	inline int32_t* get_address_of_transferEncoding_3() { return &___transferEncoding_3; }
	inline void set_transferEncoding_3(int32_t value)
	{
		___transferEncoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
