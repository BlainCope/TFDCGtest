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
#include "BasicTypes_TArray.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.AnimSlotGroup
     * Size -> 0x0018
     */
    struct FAnimSlotGroup
    {
    public:
        BasicTypes::FName                                            GroupName;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        SlotNames;                                               //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
