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
#include "M1_FM1DestructionCountInfo.h"
#include "M1_FM1DestructionTargetInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1State; };
namespace CG::M1 { class UM1MissionTaskDestructionPhase; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1TaskDestructionInfo
     * Size -> 0x0050
     */
    struct FM1TaskDestructionInfo
    {
    public:
        BasicTypes::TArray<M1::FM1DestructionCountInfo>              DestructionCountInfos;                                   //  ZeroConstructor, NativeAccessSpecifierPublic
        float                                                        LimitTime;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RemainingTime;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      CurrentMonsterKillCount;                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TargetMonsterkillCount;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::UM1State*                                                CurrentState;                                            //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1::UM1MissionTaskDestructionPhase*>      Phases;                                                  //  ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        int32_t                                                      CurrentPhase;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::FM1DestructionTargetInfo>             DestructionTargetInfos;                                  //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
