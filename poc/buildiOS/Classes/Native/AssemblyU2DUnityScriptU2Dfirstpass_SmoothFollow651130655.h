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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothFollow
struct  SmoothFollow_t651130655  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform SmoothFollow::target
	Transform_t284553113 * ___target_2;
	// System.Single SmoothFollow::distance
	float ___distance_3;
	// System.Single SmoothFollow::height
	float ___height_4;
	// System.Single SmoothFollow::heightDamping
	float ___heightDamping_5;
	// System.Single SmoothFollow::rotationDamping
	float ___rotationDamping_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(SmoothFollow_t651130655, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(SmoothFollow_t651130655, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(SmoothFollow_t651130655, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_heightDamping_5() { return static_cast<int32_t>(offsetof(SmoothFollow_t651130655, ___heightDamping_5)); }
	inline float get_heightDamping_5() const { return ___heightDamping_5; }
	inline float* get_address_of_heightDamping_5() { return &___heightDamping_5; }
	inline void set_heightDamping_5(float value)
	{
		___heightDamping_5 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_6() { return static_cast<int32_t>(offsetof(SmoothFollow_t651130655, ___rotationDamping_6)); }
	inline float get_rotationDamping_6() const { return ___rotationDamping_6; }
	inline float* get_address_of_rotationDamping_6() { return &___rotationDamping_6; }
	inline void set_rotationDamping_6(float value)
	{
		___rotationDamping_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
