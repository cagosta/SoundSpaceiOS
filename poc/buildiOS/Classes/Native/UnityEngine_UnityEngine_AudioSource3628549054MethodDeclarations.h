#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"

// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1410546616 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m19502010 (AudioSource_t3628549054 * __this, AudioClip_t3714538611 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m3374467819 (AudioSource_t3628549054 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m1360558992 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m1454243038 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m4213444423 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m823779350 (AudioSource_t3628549054 * __this, AudioClip_t3714538611 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1217449713 (AudioSource_t3628549054 * __this, AudioClip_t3714538611 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
