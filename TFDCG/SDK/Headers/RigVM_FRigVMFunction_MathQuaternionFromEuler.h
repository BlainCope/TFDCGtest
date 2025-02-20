#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    TFDCG                       |
 * | Version: 1                           |
 * | Date:    08/22/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "CoreUObject_FVector.h"
#include "AnimationCore_ENUMS.h"
#include "CoreUObject_FQuat.h"
#include "RigVM_FRigVMFunction_MathQuaternionBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::RigVM
{
    /**
     * ScriptStruct /Script/RigVM.RigVMFunction_MathQuaternionFromEuler
     * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
     */
    struct FRigVMFunction_MathQuaternionFromEuler : public RigVM::FRigVMFunction_MathQuaternionBase
    {
    public:
        CoreUObject::FVector                                         Euler;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimationCore::EEulerRotationOrder                           RotationOrder;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xB];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FQuat                                           Result;                                                  //  BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
