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
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "M1_FM1CollisionOptionSet.h"
#include "GameplayTags_FGameplayTag.h"
#include "M1_FM1FindTargetQueryInfo.h"
#include "GameplayTags_FGameplayTagContainer.h"
#include "BasicTypes_TArray.h"
#include "M1_FM1AnnounceSetting.h"
#include "M1_FM1AimAssistSettings.h"
#include "M1_FM1CampNotificationSettings.h"
#include "M1_FM1SocialMotionSetting.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "M1_FM1MonsterHpBarSetting.h"
#include "M1_FM1MonsterHpBarSettingWithTargetPlatform.h"
#include "M1_ENUMS.h"
#include "M1_FM1CameraSensitivitySetting.h"
#include "M1Data_ENUMS.h"
#include "BasicTypes_TSet.h"
#include "BasicTypes_FString.h"
#include "M1Data_FM1CharacterSizeData.h"
#include "M1_FM1WeaponTriggerSetting.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "M1_FM1NXAPISetting.h"
#include "M1_FM1CameraHiddenSetting.h"
#include "DeveloperSettings_UDeveloperSettings.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1GameConfigPlainData
     * Size -> 0x07D8 (FullSize[0x0810] - InheritedSize[0x0038])
     */
    class UM1GameConfigPlainData : public DeveloperSettings::UDeveloperSettings
    {
    public:
        BasicTypes::TMap<BasicTypes::FName, M1::FM1CollisionOptionSet> AbilityActorCollisionOptionSetting;                      //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<GameplayTags::FGameplayTag, M1::FM1FindTargetQueryInfo> FindTargetQueryInfo;                                     //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        GameplayTags::FGameplayTagContainer                          IgnoreImmunedTargetQueryTags;                            //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<Engine::AActor*, GameplayTags::FGameplayTag> BaseClassTargetIdTagMap;                                 //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::AActor*>                          TargetableClasses;                                       //  Edit, ZeroConstructor, Config, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
        M1::FM1AnnounceSetting                                       AnnounceSetting;                                         //  Edit, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1AimAssistSettings                                     AimAssistSettings;                                       //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        M1::FM1CampNotificationSettings                              CampNotification;                                        //  Edit, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        M1::FM1SocialMotionSetting                                   SocialMotionSetting;                                     //  Edit, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        int32_t                                                      DropAvailableDistance;                                   //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      DropItemLimit;                                           //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DropItemObtainInterval;                                  //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      PrivateInstantUseDropItemNumberLimit;                    //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ViewPitchMin;                                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ViewPitchMax;                                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bPitchBasedCameraDistance;                               //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRotateToMoveDirection;                                  //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        RotateToMoveDirectionSpeed;                              //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CameraLerpSpeed;                                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         FollowCameraRelativeLocation;                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FRotator                                        FollowCameraRelativeRotation;                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bUsePhysicHitReaction;                                   //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        SubSkillTargetDetectRectXRatio;                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SubSkillTargetDetectRectYRatio;                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DetectIndicatorDuration;                                 //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        NormalMonsterBattleEndTime;                              //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CoverLocationVacantDelayTime;                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            CoverRotationCurveName;                                  //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::FM1MonsterHpBarSetting                                   CommonMonsterHpBarSetting;                               //  Edit, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1MonsterHpBarSettingWithTargetPlatform                 MonsterHpBarSettingWithTargetPlatform;                   //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        float                                                        RangeCheckCorrectionRatio;                               //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RootBoneBlendWeightCoefficient;                          //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ContextButtonHoldingDuration;                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InteractableWidgetDuration;                              //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1::EM1CameraSensitivityType, M1::FM1CameraSensitivitySetting> CameraSensitivitySettings;                               //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1EquipItemClassType, int32_t>     WeaponHangerGroup;                                       //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TSet<M1Data::EM1EquipItemClassType>              FixedEquipMontageWeaponClassTypes;                       //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        float                                                        DissolveFadeInTime;                                      //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          MasteryRankUpSequenceEndTeleportToId;                    //  Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          CharacterLevelResetSequenceEndTeleportToId;              //  Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        double                                                       AcceptableServerClientDelay;                             //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1CharacterSizeData>             CharacterSizeHeight;                                     //  Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::EM1StatType>                      SlowIncreaseRateStats;                                   //  Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::EM1StatType>                      SlowDecreaseRateStats;                                   //  Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::EM1StatType>                      ReplicatedModifierStats;                                 //  Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        float                                                        PlayerPickupDuration;                                    //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<M1Data::EM1EquipItemClassType, M1::FM1WeaponTriggerSetting> WeaponTriggerSettings;                                   //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1EquipItemClassType, float>       InstantHitTrailVelocity;                                 //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        float                                                        InstantHitTrailLifeTime;                                 //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FSoftObjectPath                                 OutOfPlayableAreaEffectDataPath;                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AimAOYawMin;                                             //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AimAOYawMax;                                             //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AimAOYawInterpSpeed;                                     //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AimAOYawUpperPitchLimitRangeMax;                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AimAOYawUpperPitchLimitRangeMin;                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AimAOYawLowerPitchLimitRangeMax;                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AimAOYawLowerPitchLimitRangeMin;                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        TooltipDelay;                                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        MonsterCustomSpawnAnimKeys;                              //  Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1EciveActionType, float>          EciveSearchDistanceMap;                                  //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        float                                                        EciveSoundActionTypeSearchAngle;                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        EciveSearchRemainTime;                                   //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      ReportCommentMaxLength;                                  //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      LargeBannerGroup_FeaturedCount;                          //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MediumBannerGroup_FeaturedCount;                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      SmallBannerGroup_FeaturedCount;                          //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      FeaturedPeriod;                                          //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bShouldShowEquipableRunesOnly;                           //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0007[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            ChestAttachmentSocketName;                               //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            BackAttachmentSocketName;                                //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            BackHangedWeaponAttachmentSocketName;                    //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            Weapon0LTAttachmentSocketName;                           //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SpawnDespawnPreviewInterval;                             //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SprayRemainTime;                                         //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TSet<BasicTypes::FName>                          NamesForAbility;                                         //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        float                                                        AbilityRequestHitFXCooltime;                             //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      AbilityRequestHitFXMaxCount;                             //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        QueryFilterNavLinkTravelCost;                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        QueryFilterNavLinkEnteringCost;                          //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      DefaultWeaponFireLoopTickStepCount;                      //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InstantHitGuideTolerance_HitDistanceDiff;                //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InstantHitGuideTolerance_HitLocationDiff;                //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InstantHitGuideTolerance_ScreenPosDiff;                  //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      LaboratoryMonsterLevelMin;                               //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      LaboratoryMonsterLevelMax;                               //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      LaboratoryMonsterCountMin;                               //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      LaboratoryMonsterCountMax;                               //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLaboratoryMonsterNoDieDefault;                          //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0008[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ExpiredTimeLimit;                                        //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      SuccessCode;                                             //  Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0009[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1NXAPISetting                                          RuneRecommendation;                                      //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        M1::FM1NXAPISetting                                          CSP;                                                     //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1Locale, BasicTypes::FString>     PPUrl;                                                   //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1Locale, BasicTypes::FString>     TOSUrl;                                                  //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1::EM1PlatformSimple, BasicTypes::FString> CommercialTransRegUrl;                                   //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1::EM1PlatformSimple, BasicTypes::FString> MoneySettlementRegUrl;                                   //  Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::FString                                          ShopTermsUrl;                                            //  Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          CSPUrl;                                                  //  Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          RuneComposeProbabilityUrl;                               //  Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          RandomOptProbabilityUrl;                                 //  Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::FM1CameraHiddenSetting                                   CameraHiddenSetting;                                     //  Edit, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0010[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1GameConfigPlainData");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
