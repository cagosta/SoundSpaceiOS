#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Joystick
struct Joystick_t3421498716;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DUnityScript_Joystick3421498716.h"

#pragma once
// Joystick[]
struct JoystickU5BU5D_t642532789  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Joystick_t3421498716 * m_Items[1];

public:
	inline Joystick_t3421498716 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Joystick_t3421498716 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Joystick_t3421498716 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
