#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveSimple
struct  MoveSimple_t402674947  : public MonoBehaviour_t3012272455
{
public:
	// System.Single MoveSimple::speed
	float ___speed_2;
	// System.Single MoveSimple::rotateSpeed
	float ___rotateSpeed_3;
	// System.Boolean MoveSimple::isTouchDevice
	bool ___isTouchDevice_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(MoveSimple_t402674947, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_3() { return static_cast<int32_t>(offsetof(MoveSimple_t402674947, ___rotateSpeed_3)); }
	inline float get_rotateSpeed_3() const { return ___rotateSpeed_3; }
	inline float* get_address_of_rotateSpeed_3() { return &___rotateSpeed_3; }
	inline void set_rotateSpeed_3(float value)
	{
		___rotateSpeed_3 = value;
	}

	inline static int32_t get_offset_of_isTouchDevice_4() { return static_cast<int32_t>(offsetof(MoveSimple_t402674947, ___isTouchDevice_4)); }
	inline bool get_isTouchDevice_4() const { return ___isTouchDevice_4; }
	inline bool* get_address_of_isTouchDevice_4() { return &___isTouchDevice_4; }
	inline void set_isTouchDevice_4(bool value)
	{
		___isTouchDevice_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
