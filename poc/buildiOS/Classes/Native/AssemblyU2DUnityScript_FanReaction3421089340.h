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

// FanReaction
struct  FanReaction_t3421089340  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip FanReaction::audioVictory
	AudioClip_t3714538611 * ___audioVictory_2;
	// UnityEngine.AudioClip FanReaction::audioDefeat
	AudioClip_t3714538611 * ___audioDefeat_3;
	// System.Single FanReaction::volumeVictory
	float ___volumeVictory_4;
	// System.Single FanReaction::volumeDefeat
	float ___volumeDefeat_5;

public:
	inline static int32_t get_offset_of_audioVictory_2() { return static_cast<int32_t>(offsetof(FanReaction_t3421089340, ___audioVictory_2)); }
	inline AudioClip_t3714538611 * get_audioVictory_2() const { return ___audioVictory_2; }
	inline AudioClip_t3714538611 ** get_address_of_audioVictory_2() { return &___audioVictory_2; }
	inline void set_audioVictory_2(AudioClip_t3714538611 * value)
	{
		___audioVictory_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioVictory_2, value);
	}

	inline static int32_t get_offset_of_audioDefeat_3() { return static_cast<int32_t>(offsetof(FanReaction_t3421089340, ___audioDefeat_3)); }
	inline AudioClip_t3714538611 * get_audioDefeat_3() const { return ___audioDefeat_3; }
	inline AudioClip_t3714538611 ** get_address_of_audioDefeat_3() { return &___audioDefeat_3; }
	inline void set_audioDefeat_3(AudioClip_t3714538611 * value)
	{
		___audioDefeat_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioDefeat_3, value);
	}

	inline static int32_t get_offset_of_volumeVictory_4() { return static_cast<int32_t>(offsetof(FanReaction_t3421089340, ___volumeVictory_4)); }
	inline float get_volumeVictory_4() const { return ___volumeVictory_4; }
	inline float* get_address_of_volumeVictory_4() { return &___volumeVictory_4; }
	inline void set_volumeVictory_4(float value)
	{
		___volumeVictory_4 = value;
	}

	inline static int32_t get_offset_of_volumeDefeat_5() { return static_cast<int32_t>(offsetof(FanReaction_t3421089340, ___volumeDefeat_5)); }
	inline float get_volumeDefeat_5() const { return ___volumeDefeat_5; }
	inline float* get_address_of_volumeDefeat_5() { return &___volumeDefeat_5; }
	inline void set_volumeDefeat_5(float value)
	{
		___volumeDefeat_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
