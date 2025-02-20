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
#include "Engine_FBlueprintComponentChangedPropertyInfo.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.BlueprintCookedComponentInstancingData
     * Size -> 0x0048
     */
    struct FBlueprintCookedComponentInstancingData
    {
    public:
        BasicTypes::TArray<Engine::FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                                     //  ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x11];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bHasValidCookedData;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x26];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
