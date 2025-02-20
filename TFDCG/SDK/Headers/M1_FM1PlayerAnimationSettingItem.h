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
#include "Engine_UAnimMontage.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1PlayerAnimationSettingItem
     * Size -> 0x00F0
     */
    struct FM1PlayerAnimationSettingItem
    {
    public:
        BasicTypes::TSoftObjectPtr<Engine::UAnimMontage>             TeleportStart;                                           //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::UAnimMontage>             TeleportEnd;                                             //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::UAnimMontage>             DBNODead;                                                //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::UAnimMontage>             StandDead;                                               //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::UAnimMontage>             DBNORevive;                                              //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
