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
#include "BasicTypes_FString.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AssetRegistry
{
    /**
     * ScriptStruct /Script/AssetRegistry.TagAndValue
     * Size -> 0x0018
     */
    struct FTagAndValue
    {
    public:
        BasicTypes::FName                                            Tag;                                                     //  BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          Value;                                                   //  BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
