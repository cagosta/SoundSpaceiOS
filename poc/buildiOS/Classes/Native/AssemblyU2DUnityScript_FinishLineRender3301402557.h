#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinishLineRender
struct  FinishLineRender_t3301402557  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform FinishLineRender::post1
	Transform_t284553113 * ___post1_2;
	// UnityEngine.Transform FinishLineRender::post2
	Transform_t284553113 * ___post2_3;
	// UnityEngine.Color FinishLineRender::lineColor
	Color_t1588175760  ___lineColor_4;

public:
	inline static int32_t get_offset_of_post1_2() { return static_cast<int32_t>(offsetof(FinishLineRender_t3301402557, ___post1_2)); }
	inline Transform_t284553113 * get_post1_2() const { return ___post1_2; }
	inline Transform_t284553113 ** get_address_of_post1_2() { return &___post1_2; }
	inline void set_post1_2(Transform_t284553113 * value)
	{
		___post1_2 = value;
		Il2CppCodeGenWriteBarrier(&___post1_2, value);
	}

	inline static int32_t get_offset_of_post2_3() { return static_cast<int32_t>(offsetof(FinishLineRender_t3301402557, ___post2_3)); }
	inline Transform_t284553113 * get_post2_3() const { return ___post2_3; }
	inline Transform_t284553113 ** get_address_of_post2_3() { return &___post2_3; }
	inline void set_post2_3(Transform_t284553113 * value)
	{
		___post2_3 = value;
		Il2CppCodeGenWriteBarrier(&___post2_3, value);
	}

	inline static int32_t get_offset_of_lineColor_4() { return static_cast<int32_t>(offsetof(FinishLineRender_t3301402557, ___lineColor_4)); }
	inline Color_t1588175760  get_lineColor_4() const { return ___lineColor_4; }
	inline Color_t1588175760 * get_address_of_lineColor_4() { return &___lineColor_4; }
	inline void set_lineColor_4(Color_t1588175760  value)
	{
		___lineColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
