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
#include "M1Data_FM1RegionLatencyInfosMs.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1AuidWithLatencyInfo
     * Size -> 0x0020
     */
    struct FM1AuidWithLatencyInfo
    {
    public:
        BasicTypes::TArray<int64_t>                                  AccountUids;                                             //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        M1Data::FM1RegionLatencyInfosMs                              LatencyInfo;                                             //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
