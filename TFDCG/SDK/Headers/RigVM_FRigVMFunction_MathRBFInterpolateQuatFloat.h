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
#include "BasicTypes_TArray.h"
#include "RigVM_FMathRBFInterpolateQuatFloat_Target.h"
#include "RigVM_FRigVMFunction_MathRBFInterpolateQuatBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::RigVM
{
    /**
     * ScriptStruct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
     * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
     */
    struct FRigVMFunction_MathRBFInterpolateQuatFloat : public RigVM::FRigVMFunction_MathRBFInterpolateQuatBase
    {
    public:
        BasicTypes::TArray<RigVM::FMathRBFInterpolateQuatFloat_Target> Targets;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        float                                                        Output;                                                  //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xC];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
