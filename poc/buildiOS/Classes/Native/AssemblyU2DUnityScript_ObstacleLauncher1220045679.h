#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleLauncher
struct  ObstacleLauncher_t1220045679  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody ObstacleLauncher::projectile
	Rigidbody_t1972007546 * ___projectile_2;
	// System.Int32 ObstacleLauncher::speed
	int32_t ___speed_3;
	// System.Int32 ObstacleLauncher::maxObstacles
	int32_t ___maxObstacles_4;
	// System.Single ObstacleLauncher::launchInterval
	float ___launchInterval_5;
	// UnityEngine.Transform ObstacleLauncher::target
	Transform_t284553113 * ___target_6;
	// System.Single ObstacleLauncher::nextLaunch
	float ___nextLaunch_7;
	// System.Int32 ObstacleLauncher::numObstaclesLaunched
	int32_t ___numObstaclesLaunched_8;

public:
	inline static int32_t get_offset_of_projectile_2() { return static_cast<int32_t>(offsetof(ObstacleLauncher_t1220045679, ___projectile_2)); }
	inline Rigidbody_t1972007546 * get_projectile_2() const { return ___projectile_2; }
	inline Rigidbody_t1972007546 ** get_address_of_projectile_2() { return &___projectile_2; }
	inline void set_projectile_2(Rigidbody_t1972007546 * value)
	{
		___projectile_2 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(ObstacleLauncher_t1220045679, ___speed_3)); }
	inline int32_t get_speed_3() const { return ___speed_3; }
	inline int32_t* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(int32_t value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_maxObstacles_4() { return static_cast<int32_t>(offsetof(ObstacleLauncher_t1220045679, ___maxObstacles_4)); }
	inline int32_t get_maxObstacles_4() const { return ___maxObstacles_4; }
	inline int32_t* get_address_of_maxObstacles_4() { return &___maxObstacles_4; }
	inline void set_maxObstacles_4(int32_t value)
	{
		___maxObstacles_4 = value;
	}

	inline static int32_t get_offset_of_launchInterval_5() { return static_cast<int32_t>(offsetof(ObstacleLauncher_t1220045679, ___launchInterval_5)); }
	inline float get_launchInterval_5() const { return ___launchInterval_5; }
	inline float* get_address_of_launchInterval_5() { return &___launchInterval_5; }
	inline void set_launchInterval_5(float value)
	{
		___launchInterval_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(ObstacleLauncher_t1220045679, ___target_6)); }
	inline Transform_t284553113 * get_target_6() const { return ___target_6; }
	inline Transform_t284553113 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(Transform_t284553113 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier(&___target_6, value);
	}

	inline static int32_t get_offset_of_nextLaunch_7() { return static_cast<int32_t>(offsetof(ObstacleLauncher_t1220045679, ___nextLaunch_7)); }
	inline float get_nextLaunch_7() const { return ___nextLaunch_7; }
	inline float* get_address_of_nextLaunch_7() { return &___nextLaunch_7; }
	inline void set_nextLaunch_7(float value)
	{
		___nextLaunch_7 = value;
	}

	inline static int32_t get_offset_of_numObstaclesLaunched_8() { return static_cast<int32_t>(offsetof(ObstacleLauncher_t1220045679, ___numObstaclesLaunched_8)); }
	inline int32_t get_numObstaclesLaunched_8() const { return ___numObstaclesLaunched_8; }
	inline int32_t* get_address_of_numObstaclesLaunched_8() { return &___numObstaclesLaunched_8; }
	inline void set_numObstaclesLaunched_8(int32_t value)
	{
		___numObstaclesLaunched_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
