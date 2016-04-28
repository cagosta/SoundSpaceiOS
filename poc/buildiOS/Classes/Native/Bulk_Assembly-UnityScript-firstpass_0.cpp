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

// SmoothFollow
struct SmoothFollow_t651130655;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_SmoothFollow651130655.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_SmoothFollow651130655MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Object3878351788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SmoothFollow::.ctor()
extern "C"  void SmoothFollow__ctor_m3116031813 (SmoothFollow_t651130655 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_distance_3((10.0f));
		__this->set_height_4((5.0f));
		__this->set_heightDamping_5((2.0f));
		__this->set_rotationDamping_6((3.0f));
		return;
	}
}
// System.Void SmoothFollow::LateUpdate()
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t SmoothFollow_LateUpdate_m3251383854_MetadataUsageId;
extern "C"  void SmoothFollow_LateUpdate_m3251383854 (SmoothFollow_t651130655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SmoothFollow_LateUpdate_m3251383854_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t1891715979  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t3525329789  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3525329789  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3525329789  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3525329789  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3525329789  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	Vector3_t3525329789  V_12;
	memset(&V_12, 0, sizeof(V_12));
	{
		Transform_t284553113 * L_0 = __this->get_target_2();
		bool L_1 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0133;
	}

IL_0015:
	{
		Transform_t284553113 * L_2 = __this->get_target_2();
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = Transform_get_eulerAngles_m1058084741(L_2, /*hidden argument*/NULL);
		V_7 = L_3;
		float L_4 = (&V_7)->get_y_2();
		V_0 = L_4;
		Transform_t284553113 * L_5 = __this->get_target_2();
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		V_8 = L_6;
		float L_7 = (&V_8)->get_y_2();
		float L_8 = __this->get_height_4();
		V_1 = ((float)((float)L_7+(float)L_8));
		Transform_t284553113 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3525329789  L_10 = Transform_get_eulerAngles_m1058084741(L_9, /*hidden argument*/NULL);
		V_9 = L_10;
		float L_11 = (&V_9)->get_y_2();
		V_2 = L_11;
		Transform_t284553113 * L_12 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3525329789  L_13 = Transform_get_position_m2211398607(L_12, /*hidden argument*/NULL);
		V_10 = L_13;
		float L_14 = (&V_10)->get_y_2();
		V_3 = L_14;
		float L_15 = V_2;
		float L_16 = V_0;
		float L_17 = __this->get_rotationDamping_6();
		float L_18 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_19 = Mathf_LerpAngle_m1852538964(NULL /*static, unused*/, L_15, L_16, ((float)((float)L_17*(float)L_18)), /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = V_3;
		float L_21 = V_1;
		float L_22 = __this->get_heightDamping_5();
		float L_23 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_20, L_21, ((float)((float)L_22*(float)L_23)), /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = V_2;
		Quaternion_t1891715979  L_26 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (((float)((float)0))), L_25, (((float)((float)0))), /*hidden argument*/NULL);
		V_4 = L_26;
		Transform_t284553113 * L_27 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_28 = __this->get_target_2();
		NullCheck(L_28);
		Vector3_t3525329789  L_29 = Transform_get_position_m2211398607(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_m3111394108(L_27, L_29, /*hidden argument*/NULL);
		Transform_t284553113 * L_30 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_31 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t3525329789  L_32 = Transform_get_position_m2211398607(L_31, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_33 = V_4;
		Vector3_t3525329789  L_34 = Vector3_get_forward_m1039372701(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_35 = Quaternion_op_Multiply_m3771288979(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = __this->get_distance_3();
		Vector3_t3525329789  L_37 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t3525329789  L_38 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_position_m3111394108(L_30, L_38, /*hidden argument*/NULL);
		float L_39 = V_3;
		float L_40 = L_39;
		V_5 = L_40;
		Transform_t284553113 * L_41 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t3525329789  L_42 = Transform_get_position_m2211398607(L_41, /*hidden argument*/NULL);
		Vector3_t3525329789  L_43 = L_42;
		V_6 = L_43;
		float L_44 = V_5;
		float L_45 = L_44;
		V_11 = L_45;
		(&V_6)->set_y_2(L_45);
		float L_46 = V_11;
		Transform_t284553113 * L_47 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_48 = V_6;
		Vector3_t3525329789  L_49 = L_48;
		V_12 = L_49;
		NullCheck(L_47);
		Transform_set_position_m3111394108(L_47, L_49, /*hidden argument*/NULL);
		Vector3_t3525329789  L_50 = V_12;
		Transform_t284553113 * L_51 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_52 = __this->get_target_2();
		NullCheck(L_51);
		Transform_LookAt_m2663225588(L_51, L_52, /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void SmoothFollow::Main()
extern "C"  void SmoothFollow_Main_m3202600152 (SmoothFollow_t651130655 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
