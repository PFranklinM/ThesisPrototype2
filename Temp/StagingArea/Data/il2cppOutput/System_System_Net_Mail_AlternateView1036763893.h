#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t690461993;

#include "System_System_Net_Mail_AttachmentBase3245433144.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.AlternateView
struct  AlternateView_t1036763893  : public AttachmentBase_t3245433144
{
public:
	// System.Net.Mail.LinkedResourceCollection System.Net.Mail.AlternateView::linkedResources
	LinkedResourceCollection_t690461993 * ___linkedResources_4;

public:
	inline static int32_t get_offset_of_linkedResources_4() { return static_cast<int32_t>(offsetof(AlternateView_t1036763893, ___linkedResources_4)); }
	inline LinkedResourceCollection_t690461993 * get_linkedResources_4() const { return ___linkedResources_4; }
	inline LinkedResourceCollection_t690461993 ** get_address_of_linkedResources_4() { return &___linkedResources_4; }
	inline void set_linkedResources_4(LinkedResourceCollection_t690461993 * value)
	{
		___linkedResources_4 = value;
		Il2CppCodeGenWriteBarrier(&___linkedResources_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
