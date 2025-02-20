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
#include "M1Data_FM1TemplateId.h"
#include "M1_ENUMS.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_TArray.h"
#include "M1_UM1UIData.h"
#include "BasicTypes_FText.h"
#include "M1Data_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1MissionRewardCollector; };
namespace CG::M1 { class AM1MissionTaskActor; };
namespace CG::M1 { class UM1UIDataMissionResultSeasonExp; };
namespace CG::M1 { class UM1UIDataMissionResultExpWithTemplateId; };
namespace CG::M1 { class UM1UIDataMissionResultExpWithMasteryRank; };
namespace CG::M1 { class UM1UIDataItemInfo; };
namespace CG::M1 { class UM1UIDataItemInfo_Currency; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIDataMissionResult
     * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
     */
    class UM1UIDataMissionResult : public M1::UM1UIData
    {
    public:
        BasicTypes::FName                                            MissionStringId;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1Data::FM1TemplateId                                        VoidBattleTemplateId;                                    //  Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1Data::FM1TemplateId                                        InstanceDungeonTemplateId;                               //  Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1Data::FM1TemplateId                                        InstanceDungeonFixedMODTemplateId;                       //  Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        double                                                       PlayTimeSeconds;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bMissionFinished;                                        //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bMissionSucceeded;                                       //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      MissionWaveIndex;                                        //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bMissionWaveStopped;                                     //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::EM1MissionSubType                                        MissionSubType;                                          //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TWeakObjectPtr<M1::UM1MissionRewardCollector>    RewardCollector;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::EM1UIDataMissionType                                     MissionType;                                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<M1::EM1MissionScoreType, int32_t>           MissionScore;                                            //  Transient, Protected, NativeAccessSpecifierProtected
        bool                                                         bExplicitGiveUpMission;                                  //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0004[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::AM1MissionTaskActor*>                 IncludedTaskClasses;                                     //  ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected

    public:
        bool ShouldBeShowScore();
        bool IsWorldMission();
        bool IsVoidBattleMission();
        bool IsNormalMission();
        bool IsMissionWaveStopped();
        bool IsMissionSucceeded();
        bool IsMissionFinished();
        bool IsInvasionDungeonMission();
        bool IsInstanceDungeonMission();
        bool IsExplicitGiveUpMission();
        bool IsCharacterDungeonMission();
        BasicTypes::FText GetVoidBattleNameText();
        int32_t GetTotalScore();
        M1::UM1UIDataMissionResultSeasonExp* GetSeasonExp();
        int32_t GetScore(M1::EM1MissionScoreType InMissionScoreType);
        BasicTypes::TArray<M1::UM1UIDataMissionResultExpWithTemplateId*> GetProficiencyExp();
        double GetPlayTimeSeconds();
        int32_t GetMissionWaveIndex();
        M1::EM1UIDataMissionType GetMissionType();
        M1::EM1MissionSubType GetMissionSubType();
        BasicTypes::FText GetMissionNameText();
        M1::UM1UIDataMissionResultExpWithMasteryRank* GetMasteryRankExp();
        BasicTypes::TArray<M1::UM1UIDataItemInfo*> GetItemInfos(bool bOnlyImportantItem);
        int32_t GetInvasionDungeonRewardableTime();
        int32_t GetInvasionDungeonMaxExp();
        int32_t GetInstanceDungeonMaxScore();
        int32_t GetInstanceDungeonFirstScore();
        BasicTypes::TArray<M1::AM1MissionTaskActor*> GetIncludedTaskClasses();
        BasicTypes::TArray<M1::UM1UIDataItemInfo_Currency*> GetCurrencyDatas();
        int64_t GetCurrencyBoostQuantity(M1Data::EM1CurrencyType InCurrencyType);
        M1::UM1UIDataMissionResultExpWithTemplateId* GetCharacterExp();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIDataMissionResult");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
