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
#include "CoreUObject_FSoftObjectPath.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1MapEntryPointUIData
     * Size -> 0x0040
     */
    struct FM1MapEntryPointUIData
    {
    public:
        CoreUObject::FSoftObjectPath                                 LockIconPath;                                            //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 UnlockIconPath;                                          //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
