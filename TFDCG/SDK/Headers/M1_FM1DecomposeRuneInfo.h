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
#include "M1Data_FM1TemplateId.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1DecomposeRuneInfo
     * Size -> 0x0020
     */
    struct FM1DecomposeRuneInfo
    {
    public:
        BasicTypes::TArray<M1Data::FM1TemplateId>                    RuneTemplateIds;                                         //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<int32_t>                                  RuneEnchantLevels;                                       //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
