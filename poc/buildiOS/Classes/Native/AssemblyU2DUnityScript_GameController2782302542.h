#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t1525081276;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.Transform
struct Transform_t284553113;
// FanReaction
struct FanReaction_t3421089340;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t3012272455
{
public:
	// System.Single GameController::gameTimeAllowed
	float ___gameTimeAllowed_3;
	// UnityEngine.Font GameController::gameMessageFont
	Font_t1525081276 * ___gameMessageFont_4;
	// UnityEngine.GameObject[] GameController::gameObjectsToReset
	GameObjectU5BU5D_t3499186955* ___gameObjectsToReset_5;
	// UnityEngine.Transform GameController::intro
	Transform_t284553113 * ___intro_6;
	// FanReaction GameController::fanReactionScript
	FanReaction_t3421089340 * ___fanReactionScript_7;
	// System.String GameController::gameMessageLabel
	String_t* ___gameMessageLabel_8;
	// UnityEngine.Rect GameController::gameMessageDisplay
	Rect_t1525428817  ___gameMessageDisplay_9;
	// System.Boolean GameController::timedOut
	bool ___timedOut_10;
	// System.Single GameController::gameTimeRemaining
	float ___gameTimeRemaining_11;
	// System.Boolean GameController::missionCompleted
	bool ___missionCompleted_12;
	// System.Single GameController::missionCompleteTime
	float ___missionCompleteTime_13;
	// System.String GameController::playButtonText
	String_t* ___playButtonText_14;

public:
	inline static int32_t get_offset_of_gameTimeAllowed_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameTimeAllowed_3)); }
	inline float get_gameTimeAllowed_3() const { return ___gameTimeAllowed_3; }
	inline float* get_address_of_gameTimeAllowed_3() { return &___gameTimeAllowed_3; }
	inline void set_gameTimeAllowed_3(float value)
	{
		___gameTimeAllowed_3 = value;
	}

	inline static int32_t get_offset_of_gameMessageFont_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameMessageFont_4)); }
	inline Font_t1525081276 * get_gameMessageFont_4() const { return ___gameMessageFont_4; }
	inline Font_t1525081276 ** get_address_of_gameMessageFont_4() { return &___gameMessageFont_4; }
	inline void set_gameMessageFont_4(Font_t1525081276 * value)
	{
		___gameMessageFont_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameMessageFont_4, value);
	}

	inline static int32_t get_offset_of_gameObjectsToReset_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameObjectsToReset_5)); }
	inline GameObjectU5BU5D_t3499186955* get_gameObjectsToReset_5() const { return ___gameObjectsToReset_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_gameObjectsToReset_5() { return &___gameObjectsToReset_5; }
	inline void set_gameObjectsToReset_5(GameObjectU5BU5D_t3499186955* value)
	{
		___gameObjectsToReset_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectsToReset_5, value);
	}

	inline static int32_t get_offset_of_intro_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___intro_6)); }
	inline Transform_t284553113 * get_intro_6() const { return ___intro_6; }
	inline Transform_t284553113 ** get_address_of_intro_6() { return &___intro_6; }
	inline void set_intro_6(Transform_t284553113 * value)
	{
		___intro_6 = value;
		Il2CppCodeGenWriteBarrier(&___intro_6, value);
	}

	inline static int32_t get_offset_of_fanReactionScript_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___fanReactionScript_7)); }
	inline FanReaction_t3421089340 * get_fanReactionScript_7() const { return ___fanReactionScript_7; }
	inline FanReaction_t3421089340 ** get_address_of_fanReactionScript_7() { return &___fanReactionScript_7; }
	inline void set_fanReactionScript_7(FanReaction_t3421089340 * value)
	{
		___fanReactionScript_7 = value;
		Il2CppCodeGenWriteBarrier(&___fanReactionScript_7, value);
	}

	inline static int32_t get_offset_of_gameMessageLabel_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameMessageLabel_8)); }
	inline String_t* get_gameMessageLabel_8() const { return ___gameMessageLabel_8; }
	inline String_t** get_address_of_gameMessageLabel_8() { return &___gameMessageLabel_8; }
	inline void set_gameMessageLabel_8(String_t* value)
	{
		___gameMessageLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___gameMessageLabel_8, value);
	}

	inline static int32_t get_offset_of_gameMessageDisplay_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameMessageDisplay_9)); }
	inline Rect_t1525428817  get_gameMessageDisplay_9() const { return ___gameMessageDisplay_9; }
	inline Rect_t1525428817 * get_address_of_gameMessageDisplay_9() { return &___gameMessageDisplay_9; }
	inline void set_gameMessageDisplay_9(Rect_t1525428817  value)
	{
		___gameMessageDisplay_9 = value;
	}

	inline static int32_t get_offset_of_timedOut_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___timedOut_10)); }
	inline bool get_timedOut_10() const { return ___timedOut_10; }
	inline bool* get_address_of_timedOut_10() { return &___timedOut_10; }
	inline void set_timedOut_10(bool value)
	{
		___timedOut_10 = value;
	}

	inline static int32_t get_offset_of_gameTimeRemaining_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameTimeRemaining_11)); }
	inline float get_gameTimeRemaining_11() const { return ___gameTimeRemaining_11; }
	inline float* get_address_of_gameTimeRemaining_11() { return &___gameTimeRemaining_11; }
	inline void set_gameTimeRemaining_11(float value)
	{
		___gameTimeRemaining_11 = value;
	}

	inline static int32_t get_offset_of_missionCompleted_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___missionCompleted_12)); }
	inline bool get_missionCompleted_12() const { return ___missionCompleted_12; }
	inline bool* get_address_of_missionCompleted_12() { return &___missionCompleted_12; }
	inline void set_missionCompleted_12(bool value)
	{
		___missionCompleted_12 = value;
	}

	inline static int32_t get_offset_of_missionCompleteTime_13() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___missionCompleteTime_13)); }
	inline float get_missionCompleteTime_13() const { return ___missionCompleteTime_13; }
	inline float* get_address_of_missionCompleteTime_13() { return &___missionCompleteTime_13; }
	inline void set_missionCompleteTime_13(float value)
	{
		___missionCompleteTime_13 = value;
	}

	inline static int32_t get_offset_of_playButtonText_14() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___playButtonText_14)); }
	inline String_t* get_playButtonText_14() const { return ___playButtonText_14; }
	inline String_t** get_address_of_playButtonText_14() { return &___playButtonText_14; }
	inline void set_playButtonText_14(String_t* value)
	{
		___playButtonText_14 = value;
		Il2CppCodeGenWriteBarrier(&___playButtonText_14, value);
	}
};

struct GameController_t2782302542_StaticFields
{
public:
	// System.Boolean GameController::gameRunning
	bool ___gameRunning_2;

public:
	inline static int32_t get_offset_of_gameRunning_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542_StaticFields, ___gameRunning_2)); }
	inline bool get_gameRunning_2() const { return ___gameRunning_2; }
	inline bool* get_address_of_gameRunning_2() { return &___gameRunning_2; }
	inline void set_gameRunning_2(bool value)
	{
		___gameRunning_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
