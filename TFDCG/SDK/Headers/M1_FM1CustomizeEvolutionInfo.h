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
#include "M1Data_FM1TemplateId.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1CustomizeEvolutionInfo
     * Size -> 0x000C
     */
    struct FM1CustomizeEvolutionInfo
    {
    public:
        M1Data::FM1TemplateId                                        SkinTid;                                                 //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      EvolutionIdx;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      EvolutionComplete;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
