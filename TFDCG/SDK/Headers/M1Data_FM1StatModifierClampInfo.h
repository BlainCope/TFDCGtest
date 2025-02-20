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
#include "M1Data_FM1RangedFloat.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1StatModifierClampInfo
     * Size -> 0x0018
     */
    struct FM1StatModifierClampInfo
    {
    public:
        M1Data::FM1RangedFloat                                       Total;                                                   //  Edit, NoDestructor, NativeAccessSpecifierPublic
        M1Data::FM1RangedFloat                                       Add;                                                     //  Edit, NoDestructor, NativeAccessSpecifierPublic
        M1Data::FM1RangedFloat                                       Multiply;                                                //  Edit, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
