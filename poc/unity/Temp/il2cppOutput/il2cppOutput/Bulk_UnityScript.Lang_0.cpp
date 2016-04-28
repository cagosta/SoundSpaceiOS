#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

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
// UnityScript.Lang.ListUpdateableEnumerator
struct ListUpdateableEnumerator_t2904422009;
// System.Collections.IList
struct IList_t1612618265;
// UnityScript.Lang.UnityRuntimeServices
struct UnityRuntimeServices_t1016654613;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityScript_Lang_U3CModuleU3E86524790.h"
#include "UnityScript_Lang_U3CModuleU3E86524790MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_CollectionBase851261505MethodDeclarations.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_Collections_ArrayList2121638921MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "Boo_Lang_Boo_Lang_Builtins4233200974MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Extensions1330391816.h"
#include "UnityScript_Lang_UnityScript_Lang_Extensions1330391816MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_ListUpdateableEn2904422009.h"
#include "UnityScript_Lang_UnityScript_Lang_ListUpdateableEn2904422009MethodDeclarations.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityBuiltins1244848633.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityBuiltins1244848633MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityRuntimeServ1016654613.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityRuntimeServ1016654613MethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices2273795202MethodDeclarations.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "mscorlib_System_ArgumentNullException3214793280MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException3214793280.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Array2840145358MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m2243385516 (Array_t1209885965 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m3181013581(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  Il2CppObject * Array_Coerce_m1091438833 (Array_t1209885965 * __this, Type_t * ___toType, const MethodInfo* method)
{
	Il2CppArray * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___toType;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___toType;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		Il2CppArray * L_4 = Array_ToBuiltin_m1955277466(__this, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((Il2CppArray *)(__this));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m1955277466 (Array_t1209885965 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Il2CppArray * L_2 = VirtFuncInvoker1< Il2CppArray *, Type_t * >::Invoke(44 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern Il2CppCodeGenString* _stringLiteral44;
extern const uint32_t Array_ToString_m1683853927_MetadataUsageId;
extern "C"  String_t* Array_ToString_m1683853927 (Array_t1209885965 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m1683853927_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Array_Join_m1779851389(__this, _stringLiteral44, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m1779851389 (Array_t1209885965 * __this, String_t* ___seperator, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator;
		String_t* L_2 = Builtins_join_m2635169011(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m3275003399 (Array_t1209885965 * __this, Il2CppObject * ___newValue, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityScript.Lang.ListUpdateableEnumerator::.ctor(System.Collections.IList)
extern "C"  void ListUpdateableEnumerator__ctor_m2956977389 (ListUpdateableEnumerator_t2904422009 * __this, Il2CppObject * ___list, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		__this->set__current_1((-1));
		Il2CppObject * L_0 = ___list;
		__this->set__list_0(L_0);
		return;
	}
}
// System.Void UnityScript.Lang.ListUpdateableEnumerator::Reset()
extern "C"  void ListUpdateableEnumerator_Reset_m1552108457 (ListUpdateableEnumerator_t2904422009 * __this, const MethodInfo* method)
{
	{
		__this->set__current_1((-1));
		return;
	}
}
// System.Boolean UnityScript.Lang.ListUpdateableEnumerator::MoveNext()
extern TypeInfo* ICollection_t3761522009_il2cpp_TypeInfo_var;
extern const uint32_t ListUpdateableEnumerator_MoveNext_m3175316488_MetadataUsageId;
extern "C"  bool ListUpdateableEnumerator_MoveNext_m3175316488 (ListUpdateableEnumerator_t2904422009 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_MoveNext_m3175316488_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get__current_1();
		if (((int64_t)L_0 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		__this->set__current_1(((int32_t)((int32_t)L_0+(int32_t)1)));
		int32_t L_1 = __this->get__current_1();
		Il2CppObject * L_2 = __this->get__list_0();
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3761522009_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
// System.Object UnityScript.Lang.ListUpdateableEnumerator::get_Current()
extern TypeInfo* IList_t1612618265_il2cpp_TypeInfo_var;
extern const uint32_t ListUpdateableEnumerator_get_Current_m3507036319_MetadataUsageId;
extern "C"  Il2CppObject * ListUpdateableEnumerator_get_Current_m3507036319 (ListUpdateableEnumerator_t2904422009 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_get_Current_m3507036319_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get__list_0();
		int32_t L_1 = __this->get__current_1();
		NullCheck(L_0);
		Il2CppObject * L_2 = InterfaceFuncInvoker1< Il2CppObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1612618265_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.ListUpdateableEnumerator::Update(System.Object)
extern TypeInfo* IList_t1612618265_il2cpp_TypeInfo_var;
extern const uint32_t ListUpdateableEnumerator_Update_m3317924771_MetadataUsageId;
extern "C"  void ListUpdateableEnumerator_Update_m3317924771 (ListUpdateableEnumerator_t2904422009 * __this, Il2CppObject * ___newValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_Update_m3317924771_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get__list_0();
		int32_t L_1 = __this->get__current_1();
		Il2CppObject * L_2 = ___newValue;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Il2CppObject * >::Invoke(1 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t1612618265_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 UnityScript.Lang.UnityBuiltins::parseInt(System.Single)
extern "C"  int32_t UnityBuiltins_parseInt_m1343219661 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		if (L_0 > (double)(2147483647)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		return (((int32_t)((int32_t)L_0)));
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::.cctor()
extern const Il2CppType* Extensions_t1330391816_0_0_0_var;
extern TypeInfo* UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t2273795202_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices__cctor_m2127027405_MetadataUsageId;
extern "C"  void UnityRuntimeServices__cctor_m2127027405 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices__cctor_m2127027405_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityRuntimeServices_U24static_initializerU24_m770835859(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Extensions_t1330391816_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2273795202_il2cpp_TypeInfo_var);
		RuntimeServices_RegisterExtensions_m245487673(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((UnityRuntimeServices_t1016654613_StaticFields*)UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var->static_fields)->set_Initialized_2((bool)1);
		return;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::.ctor()
extern "C"  void UnityRuntimeServices__ctor_m2300922592 (UnityRuntimeServices_t1016654613 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityScript.Lang.UnityRuntimeServices::GetEnumerator(System.Object)
extern const Il2CppType* IList_t1612618265_0_0_0_var;
extern TypeInfo* UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var;
extern TypeInfo* Array_t1209885965_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1612618265_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t2273795202_il2cpp_TypeInfo_var;
extern TypeInfo* ListUpdateableEnumerator_t2904422009_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t287189635_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_GetEnumerator_m3009175716_MetadataUsageId;
extern "C"  Il2CppObject * UnityRuntimeServices_GetEnumerator_m3009175716 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_GetEnumerator_m3009175716_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * G_B12_0 = NULL;
	Il2CppObject * G_B6_0 = NULL;
	Il2CppObject * G_B5_0 = NULL;
	{
		Il2CppObject * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var);
		Il2CppObject * L_1 = ((UnityRuntimeServices_t1016654613_StaticFields*)UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var->static_fields)->get_EmptyEnumerator_0();
		G_B12_0 = L_1;
		goto IL_0086;
	}

IL_0010:
	{
		Il2CppObject * L_2 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var);
		bool L_3 = UnityRuntimeServices_IsValueTypeArray_m1162044604(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		Il2CppObject * L_4 = ___obj;
		if (!((Array_t1209885965 *)IsInstClass(L_4, Array_t1209885965_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}

IL_0026:
	{
		Il2CppObject * L_5 = ___obj;
		Il2CppObject * L_6 = L_5;
		G_B5_0 = L_6;
		if (((Il2CppObject *)IsInst(L_6, IList_t1612618265_il2cpp_TypeInfo_var)))
		{
			G_B6_0 = L_6;
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(IList_t1612618265_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2273795202_il2cpp_TypeInfo_var);
		Il2CppObject * L_8 = RuntimeServices_Coerce_m3737249806(NULL /*static, unused*/, G_B5_0, L_7, /*hidden argument*/NULL);
		G_B6_0 = L_8;
	}

IL_0041:
	{
		ListUpdateableEnumerator_t2904422009 * L_9 = (ListUpdateableEnumerator_t2904422009 *)il2cpp_codegen_object_new(ListUpdateableEnumerator_t2904422009_il2cpp_TypeInfo_var);
		ListUpdateableEnumerator__ctor_m2956977389(L_9, ((Il2CppObject *)Castclass(G_B6_0, IList_t1612618265_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B12_0 = ((Il2CppObject *)(L_9));
		goto IL_0086;
	}

IL_0050:
	{
		Il2CppObject * L_10 = ___obj;
		V_0 = ((Il2CppObject *)IsInst(L_10, IEnumerable_t287189635_il2cpp_TypeInfo_var));
		Il2CppObject * L_11 = V_0;
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		Il2CppObject * L_12 = V_0;
		NullCheck(L_12);
		Il2CppObject * L_13 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t287189635_il2cpp_TypeInfo_var, L_12);
		G_B12_0 = L_13;
		goto IL_0086;
	}

IL_0068:
	{
		Il2CppObject * L_14 = ___obj;
		V_1 = ((Il2CppObject *)IsInst(L_14, IEnumerator_t287207039_il2cpp_TypeInfo_var));
		Il2CppObject * L_15 = V_1;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		Il2CppObject * L_16 = V_1;
		G_B12_0 = L_16;
		goto IL_0086;
	}

IL_007b:
	{
		Il2CppObject * L_17 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2273795202_il2cpp_TypeInfo_var);
		Il2CppObject * L_18 = RuntimeServices_GetEnumerable_m2581065081(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Il2CppObject * L_19 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t287189635_il2cpp_TypeInfo_var, L_18);
		G_B12_0 = L_19;
	}

IL_0086:
	{
		return G_B12_0;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::Update(System.Collections.IEnumerator,System.Object)
extern TypeInfo* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern TypeInfo* ListUpdateableEnumerator_t2904422009_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral101;
extern const uint32_t UnityRuntimeServices_Update_m1882165574_MetadataUsageId;
extern "C"  void UnityRuntimeServices_Update_m1882165574 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___e, Il2CppObject * ___newValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_Update_m1882165574_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = ___e;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral101, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Il2CppObject * L_2 = ___e;
		if (((ListUpdateableEnumerator_t2904422009 *)IsInstClass(L_2, ListUpdateableEnumerator_t2904422009_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_002d;
	}

IL_0021:
	{
		Il2CppObject * L_3 = ___e;
		Il2CppObject * L_4 = ___newValue;
		NullCheck(((ListUpdateableEnumerator_t2904422009 *)CastclassClass(L_3, ListUpdateableEnumerator_t2904422009_il2cpp_TypeInfo_var)));
		ListUpdateableEnumerator_Update_m3317924771(((ListUpdateableEnumerator_t2904422009 *)CastclassClass(L_3, ListUpdateableEnumerator_t2904422009_il2cpp_TypeInfo_var)), L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean UnityScript.Lang.UnityRuntimeServices::IsValueTypeArray(System.Object)
extern TypeInfo* Il2CppArray_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_IsValueTypeArray_m1162044604_MetadataUsageId;
extern "C"  bool UnityRuntimeServices_IsValueTypeArray_m1162044604 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_IsValueTypeArray_m1162044604_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Il2CppObject * L_0 = ___obj;
		if (((Il2CppArray *)IsInstClass(L_0, Il2CppArray_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		Il2CppObject * L_1 = ___obj;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m2022236990(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_3);
		G_B3_0 = ((int32_t)(L_4));
	}

IL_0021:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::$static_initializer$()
extern const Il2CppType* IEnumerator_t287207039_0_0_0_var;
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern TypeInfo* UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_U24static_initializerU24_m770835859_MetadataUsageId;
extern "C"  void UnityRuntimeServices_U24static_initializerU24_m770835859 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_U24static_initializerU24_m770835859_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Il2CppArray *)(Il2CppArray *)((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)0)));
		Il2CppObject * L_0 = VirtFuncInvoker0< Il2CppObject * >::Invoke(4 /* System.Collections.IEnumerator System.Array::GetEnumerator() */, (Il2CppArray *)(Il2CppArray *)((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)0)));
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var);
		((UnityRuntimeServices_t1016654613_StaticFields*)UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var->static_fields)->set_EmptyEnumerator_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(IEnumerator_t287207039_0_0_0_var), /*hidden argument*/NULL);
		((UnityRuntimeServices_t1016654613_StaticFields*)UnityRuntimeServices_t1016654613_il2cpp_TypeInfo_var->static_fields)->set_EnumeratorType_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
