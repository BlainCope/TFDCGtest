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
#include "Engine_FStatColorMapEntry.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.StatColorMapping
     * Size -> 0x0028
     */
    struct FStatColorMapping
    {
    public:
        BasicTypes::FString                                          StatName;                                                //  ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FStatColorMapEntry>               ColorMap;                                                //  ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
        bool                                                         DisableBlend : 1;                                        //  BIT_FIELD Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
