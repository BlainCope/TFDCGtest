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
#include "M1_FM1NavMeshDebugData.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1PlayerNavDebugData
     * Size -> 0x0038
     */
    struct FM1PlayerNavDebugData
    {
    public:
        M1::FM1NavMeshDebugData                                      EpicBossNav;                                             //  NoDestructor, NativeAccessSpecifierPublic
        M1::FM1NavMeshDebugData                                      DefaultNav;                                              //  NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
