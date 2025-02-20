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
#include "BasicTypes_FName.h"
#include "ClothingSystemRuntimeCommon_ENUMS.h"
#include "BasicTypes_TArray.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ClothingSystemRuntimeCommon
{
    /**
     * ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
     * Size -> 0x0030
     */
    struct FClothParameterMask_Legacy
    {
    public:
        BasicTypes::FName                                            MaskName;                                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        ClothingSystemRuntimeCommon::EWeightMapTargetCommon          CurrentTarget;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        MaxValue;                                                //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MinValue;                                                //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<float>                                    Values;                                                  //  ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bEnabled;                                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
