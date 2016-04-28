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

// Boo.Lang.Runtime.ExtensionRegistry
struct ExtensionRegistry_t1860696520;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t1420220874;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct List_1_t703888992;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
extern "C"  void ExtensionRegistry__ctor_m4038359029 (ExtensionRegistry_t1860696520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.ExtensionRegistry::Register(System.Type)
extern "C"  void ExtensionRegistry_Register_m4216373927 (ExtensionRegistry_t1860696520 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern "C"  Il2CppObject* ExtensionRegistry_get_Extensions_m2753467576 (ExtensionRegistry_t1860696520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::AddExtensionMembers(Boo.Lang.List`1<System.Reflection.MemberInfo>,System.Type)
extern "C"  List_1_t703888992 * ExtensionRegistry_AddExtensionMembers_m3662295000 (Il2CppObject * __this /* static, unused */, List_1_t703888992 * ___extensions, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::CopyExtensions()
extern "C"  List_1_t703888992 * ExtensionRegistry_CopyExtensions_m4289995154 (ExtensionRegistry_t1860696520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
