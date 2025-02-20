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
#include "CoreUObject_FSoftClassPath.h"
#include "BasicTypes_TArray.h"
#include "M1_FM1MissionTargetMarkerInfo.h"
#include "BasicTypes_TMap.h"
#include "M1Data_ENUMS.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "M1_FM1MissionCategoryUIData.h"
#include "BasicTypes_FName.h"
#include "M1_FM1InstanceDungeonModifierDataByPlayerCount.h"
#include "BasicTypes_TSoftClassPtr.h"
#include "Engine_AActor.h"
#include "DeveloperSettings_UDeveloperSettings.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UITaskTargetListItem; };
namespace CG::M1 { class UM1MissionResultEvaluator; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MissionSystemSettings
     * Size -> 0x0490 (FullSize[0x04C8] - InheritedSize[0x0038])
     */
    class UM1MissionSystemSettings : public DeveloperSettings::UDeveloperSettings
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      MissionTryCount;                                         //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FSoftClassPath                                  SpawnMaterialManipulatorClass;                           //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftClassPath                                  DespawnMaterialManipulatorClass;                         //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftClassPath                                  DefaultRuleBasedActorSpawnerClass;                       //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftClassPath                                  MissionTaskActorClass;                                   //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DefaultOccupationAddSecondsPerPlayer;                    //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        OccupationWeightForAdditionalPlayer;                     //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MissionTaskRestrictDistanceInMeters;                     //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MissionTaskAreaTimeLimit;                                //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAllowJoiningMissionInProgressByChance;                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::FM1MissionTargetMarkerInfo>           MarkerInfos;                                             //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
        float                                                        TeleportRequiredDistanceToOtherPlayerInMetersWhenJoined; //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FSoftClassPath                                  SpawnLocationSelectorClass;                              //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftClassPath                                  WaitingForNextWaveWidgetClass;                           //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        WaitingTimeForNextWave;                                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CheckPointTime;                                          //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TMap<CoreUObject::FSoftClassPath, float>         GuideMonsterLifeTime;                                    //  Edit, Config, NativeAccessSpecifierPublic
        int32_t                                                      WorldMissionDeathCount;                                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CountDownToWorldMissionStart;                            //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        WorldMissionExitDelay;                                   //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<M1Data::EM1MissionCategory, CoreUObject::FSoftObjectPath> WorldMissionMatchingPageBG;                              //  Edit, Config, NativeAccessSpecifierPublic
        int32_t                                                      ReductionValueOfTargetMonsterKillCountInMineBlocking;    //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<CoreUObject::FSoftClassPath, float>         MissionTimeToWarnIfBelow;                                //  Edit, Config, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1MissionCategory, M1::FM1MissionCategoryUIData> MissionCategoryUIData;                                   //  Edit, Config, NativeAccessSpecifierPublic
        M1::UM1UITaskTargetListItem*                                 BaseMissionTargetWidgetClass;                            //  Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            UIKey_NoNeedToTeleportToOtherPlayer;                     //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 WorldMissionDataTable;                                   //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 InstanceDungeonDataTable;                                //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 MissionTaskDropDataTable;                                //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 MissionTaskDropContainerDataTable;                       //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DelaySecondsForDropContainerWhenMissionEnd;              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        WaitingTimeToDropAgain;                                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DropAgainDistanceInMeters;                               //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DropMissionCollectiblesLifeTime;                         //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DropMissionCollectiblesRatioAfterDecreased;              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MissionResurrection;                                     //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        OccupationExtraTime;                                     //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        JoiningTeleportDelayInSeconds;                           //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DefenseTargetEventCoolTime;                              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CollectionReturnDropCountRatioFromCollector;             //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TaskSupplyDefault;                                       //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TaskSupplyOverCharging;                                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TaskSupplyDecreaseInterval;                              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TaskSupplyDecrease;                                      //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TaskSupplyThiefDecreaseInterval;                         //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TaskSupplyThiefDecrease;                                 //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      SupplyAlert;                                             //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        NonBattleRecoveryTime;                                   //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<M1Data::EM1MissionRewardsEvaluateConditionType, M1::UM1MissionResultEvaluator*> MissionResultEvaluatorByType;                            //  Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic
        float                                                        VoidFragmentRespawnDelay;                                //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CountDownForInstanceDungeon;                             //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InstanceDungeonExitDelay;                                //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InstanceDungeonRetryDelay;                               //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      InstanceDungeonDeathCount;                               //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0007[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::FM1InstanceDungeonModifierDataByPlayerCount> InstanceDungeonModifierByPlayerCount;                    //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
        float                                                        CountDownForVoidBattle;                                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0008[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FSoftClassPath                                  VoidVaultStabilizerActorClass;                           //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VoidVaultStabilizerSummonDelayTimeSecInMission;          //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VoidVaultStabilizerSummonDelayTimeSecInVoidBattle;       //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VoidVaultStabilizerSummonMaintainTimeSecInMission;       //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VoidVaultStabilizerSummonMaintainTimeSecInVoidBattle;    //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VoidVaultStabilizerSummonAdjustRadiusMax;                //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VoidVaultStabilizerSummonOverlapMargin;                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TSoftClassPtr<Engine::AActor>                    CompetitiveOccupationKeeperTileActor;                    //  ELEMENT_SIZE_MISMATCH Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0009[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::FName                                            CompetitiveOccupationWeightVariantName;                  //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftClassPath                                  MissionPathDisplayActorClass;                            //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 MissionPathDisplayFxClass;                               //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftClassPath                                  MonsterMarkWidgetClass;                                  //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MissionSystemSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
