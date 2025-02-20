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
#include "BasicTypes_FString.h"
#include "M1Data_ENUMS.h"
#include "M1Data_FM1CurrencyPair.h"
#include "BasicTypes_TArray.h"
#include "M1Data_FM1InstanceDungeonAbilityDataLink.h"
#include "M1Data_FM1InstanceDungeonFixedMODDataLink.h"
#include "M1Data_FM1InstanceDungeonSelectionMODGroupDataLink.h"
#include "M1Data_FM1InstanceDungeonScoreInfo.h"
#include "M1Data_FM1InstanceFieldContentsDataBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1InstanceDungeonData
     * Size -> 0x00A8 (FullSize[0x0118] - InheritedSize[0x0070])
     */
    struct FM1InstanceDungeonData : public M1Data::FM1InstanceFieldContentsDataBase
    {
    public:
        CoreUObject::FSoftObjectPath                                 BGImagePath;                                             //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          Group;                                                   //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1InstanceDungeonDifficulty                         Difficulty;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      MinMembers;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::FM1CurrencyPair                                      SelectMODChangeCost;                                     //  Edit, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1InstanceDungeonAbilityDataLink> DefaultAbilities;                                        //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1InstanceDungeonFixedMODDataLink> FixedMODData;                                            //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        M1Data::FM1InstanceDungeonSelectionMODGroupDataLink          SelectionMODData;                                        //  Edit, NativeAccessSpecifierPublic
        M1Data::FM1InstanceDungeonScoreInfo                          ScoreInfo;                                               //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
