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
#include "M1Data_FM1VoidBattleEntranceInfoByAccount.h"
#include "M1Data_FM1VoidBattleStartConditionByTid.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1VoidBattleEntranceInfoList
     * Size -> 0x0028
     */
    struct FM1VoidBattleEntranceInfoList
    {
    public:
        BasicTypes::TArray<M1Data::FM1VoidBattleEntranceInfoByAccount> EntranceInfos;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1VoidBattleStartConditionByTid> StartConditions;                                         //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         NoTimeCheck;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
