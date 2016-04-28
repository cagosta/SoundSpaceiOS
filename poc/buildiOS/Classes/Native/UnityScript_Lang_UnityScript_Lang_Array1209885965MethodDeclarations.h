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

// UnityScript.Lang.Array
struct Array_t1209885965;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m2243385516 (Array_t1209885965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  Il2CppObject * Array_Coerce_m1091438833 (Array_t1209885965 * __this, Type_t * ___toType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m1955277466 (Array_t1209885965 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::ToString()
extern "C"  String_t* Array_ToString_m1683853927 (Array_t1209885965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m1779851389 (Array_t1209885965 * __this, String_t* ___seperator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m3275003399 (Array_t1209885965 * __this, Il2CppObject * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
