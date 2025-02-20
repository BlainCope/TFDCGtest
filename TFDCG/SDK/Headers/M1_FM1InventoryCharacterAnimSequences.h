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
#include "BasicTypes_TSoftObjectPtr.h"
#include "Engine_UAnimSequence.h"
#include "BasicTypes_TArray.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1InventoryCharacterAnimSequences
     * Size -> 0x0040
     */
    struct FM1InventoryCharacterAnimSequences
    {
    public:
        BasicTypes::TSoftObjectPtr<Engine::UAnimSequence>            IdleAnimSequence;                                        //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TArray<BasicTypes::TSoftObjectPtr<Engine::UAnimSequence>> RandomAnimSequences;                                     //  Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
