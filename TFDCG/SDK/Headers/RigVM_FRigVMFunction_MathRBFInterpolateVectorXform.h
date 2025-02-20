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
#include "RigVM_FMathRBFInterpolateVectorXform_Target.h"
#include "CoreUObject_FTransform.h"
#include "RigVM_FRigVMFunction_MathRBFInterpolateVectorBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::RigVM
{
    /**
     * ScriptStruct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorXform
     * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
     */
    struct FRigVMFunction_MathRBFInterpolateVectorXform : public RigVM::FRigVMFunction_MathRBFInterpolateVectorBase
    {
    public:
        BasicTypes::TArray<RigVM::FMathRBFInterpolateVectorXform_Target> Targets;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        CoreUObject::FTransform                                      Output;                                                  //  BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
