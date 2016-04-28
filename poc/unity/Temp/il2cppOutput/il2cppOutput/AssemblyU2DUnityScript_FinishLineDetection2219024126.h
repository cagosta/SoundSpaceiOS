#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinishLineDetection
struct  FinishLineDetection_t2219024126  : public MonoBehaviour_t3012272455
{
public:
	// GameController FinishLineDetection::gameControllerScript
	GameController_t2782302542 * ___gameControllerScript_2;

public:
	inline static int32_t get_offset_of_gameControllerScript_2() { return static_cast<int32_t>(offsetof(FinishLineDetection_t2219024126, ___gameControllerScript_2)); }
	inline GameController_t2782302542 * get_gameControllerScript_2() const { return ___gameControllerScript_2; }
	inline GameController_t2782302542 ** get_address_of_gameControllerScript_2() { return &___gameControllerScript_2; }
	inline void set_gameControllerScript_2(GameController_t2782302542 * value)
	{
		___gameControllerScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameControllerScript_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
