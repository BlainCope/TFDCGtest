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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1Research; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1FeaturedResearch
     * Size -> 0x0020
     */
    struct FM1FeaturedResearch
    {
    public:
        BasicTypes::TArray<M1::UM1Research*>                         ShuffledResearches;                                      //  ZeroConstructor, NativeAccessSpecifierPublic
        M1::UM1Research*                                             RecommandResearch;                                       //  ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::UM1Research*                                             GoalResearch;                                            //  ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
