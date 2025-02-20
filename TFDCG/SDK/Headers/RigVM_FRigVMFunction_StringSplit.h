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
#include "BasicTypes_FString.h"
#include "BasicTypes_TArray.h"
#include "RigVM_FRigVMFunction_StringBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::RigVM
{
    /**
     * ScriptStruct /Script/RigVM.RigVMFunction_StringSplit
     * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
     */
    struct FRigVMFunction_StringSplit : public RigVM::FRigVMFunction_StringBase
    {
    public:
        BasicTypes::FString                                          Value;                                                   //  Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          Separator;                                               //  Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FString>                      Result;                                                  //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
