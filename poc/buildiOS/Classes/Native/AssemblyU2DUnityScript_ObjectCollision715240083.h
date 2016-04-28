#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectCollision
struct  ObjectCollision_t715240083  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip ObjectCollision::impact
	AudioClip_t3714538611 * ___impact_2;

public:
	inline static int32_t get_offset_of_impact_2() { return static_cast<int32_t>(offsetof(ObjectCollision_t715240083, ___impact_2)); }
	inline AudioClip_t3714538611 * get_impact_2() const { return ___impact_2; }
	inline AudioClip_t3714538611 ** get_address_of_impact_2() { return &___impact_2; }
	inline void set_impact_2(AudioClip_t3714538611 * value)
	{
		___impact_2 = value;
		Il2CppCodeGenWriteBarrier(&___impact_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
