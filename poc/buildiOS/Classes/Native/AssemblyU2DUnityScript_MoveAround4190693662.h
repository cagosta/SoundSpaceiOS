#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Joystick
struct Joystick_t3421498716;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveAround
struct  MoveAround_t4190693662  : public MonoBehaviour_t3012272455
{
public:
	// System.Single MoveAround::speed
	float ___speed_2;
	// System.Single MoveAround::rotateSpeed
	float ___rotateSpeed_3;
	// Joystick MoveAround::moveJoystick
	Joystick_t3421498716 * ___moveJoystick_4;
	// Joystick MoveAround::rotateJoystick
	Joystick_t3421498716 * ___rotateJoystick_5;
	// UnityEngine.Vector3 MoveAround::originalPosition
	Vector3_t3525329789  ___originalPosition_6;
	// UnityEngine.Quaternion MoveAround::originalRotation
	Quaternion_t1891715979  ___originalRotation_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(MoveAround_t4190693662, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_3() { return static_cast<int32_t>(offsetof(MoveAround_t4190693662, ___rotateSpeed_3)); }
	inline float get_rotateSpeed_3() const { return ___rotateSpeed_3; }
	inline float* get_address_of_rotateSpeed_3() { return &___rotateSpeed_3; }
	inline void set_rotateSpeed_3(float value)
	{
		___rotateSpeed_3 = value;
	}

	inline static int32_t get_offset_of_moveJoystick_4() { return static_cast<int32_t>(offsetof(MoveAround_t4190693662, ___moveJoystick_4)); }
	inline Joystick_t3421498716 * get_moveJoystick_4() const { return ___moveJoystick_4; }
	inline Joystick_t3421498716 ** get_address_of_moveJoystick_4() { return &___moveJoystick_4; }
	inline void set_moveJoystick_4(Joystick_t3421498716 * value)
	{
		___moveJoystick_4 = value;
		Il2CppCodeGenWriteBarrier(&___moveJoystick_4, value);
	}

	inline static int32_t get_offset_of_rotateJoystick_5() { return static_cast<int32_t>(offsetof(MoveAround_t4190693662, ___rotateJoystick_5)); }
	inline Joystick_t3421498716 * get_rotateJoystick_5() const { return ___rotateJoystick_5; }
	inline Joystick_t3421498716 ** get_address_of_rotateJoystick_5() { return &___rotateJoystick_5; }
	inline void set_rotateJoystick_5(Joystick_t3421498716 * value)
	{
		___rotateJoystick_5 = value;
		Il2CppCodeGenWriteBarrier(&___rotateJoystick_5, value);
	}

	inline static int32_t get_offset_of_originalPosition_6() { return static_cast<int32_t>(offsetof(MoveAround_t4190693662, ___originalPosition_6)); }
	inline Vector3_t3525329789  get_originalPosition_6() const { return ___originalPosition_6; }
	inline Vector3_t3525329789 * get_address_of_originalPosition_6() { return &___originalPosition_6; }
	inline void set_originalPosition_6(Vector3_t3525329789  value)
	{
		___originalPosition_6 = value;
	}

	inline static int32_t get_offset_of_originalRotation_7() { return static_cast<int32_t>(offsetof(MoveAround_t4190693662, ___originalRotation_7)); }
	inline Quaternion_t1891715979  get_originalRotation_7() const { return ___originalRotation_7; }
	inline Quaternion_t1891715979 * get_address_of_originalRotation_7() { return &___originalRotation_7; }
	inline void set_originalRotation_7(Quaternion_t1891715979  value)
	{
		___originalRotation_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
