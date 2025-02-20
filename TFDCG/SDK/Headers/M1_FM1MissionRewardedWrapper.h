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
#include "M1_FM1MissionRewardBase.h"
#include "BasicTypes_TArray.h"
#include "M1_FM1MissionRewardWeaponProficiencyExp.h"
#include "M1_FM1MissionRewardCurrency.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1MissionRewardedWrapper
     * Size -> 0x00D0
     */
    struct FM1MissionRewardedWrapper
    {
    public:
        M1::FM1MissionRewardBase                                     MasteryRankExpByLevelUpReward;                           //  NativeAccessSpecifierPublic
        M1::FM1MissionRewardBase                                     MasteryRankExpByMissionClear;                            //  NativeAccessSpecifierPublic
        M1::FM1MissionRewardBase                                     CharacterExpByMonsterKill;                               //  NativeAccessSpecifierPublic
        M1::FM1MissionRewardBase                                     CharacterExpByMissionClear;                              //  NativeAccessSpecifierPublic
        BasicTypes::TArray<M1::FM1MissionRewardWeaponProficiencyExp> WeaponProficiencyExpList;                                //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1::FM1MissionRewardCurrency>             Currencies;                                              //  ZeroConstructor, NativeAccessSpecifierPublic
        int32_t                                                      TotalScoreByMonsterKill;                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TotalScoreBySucceededTask;                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TotalScoreByModifierBonus;                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
