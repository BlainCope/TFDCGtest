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
#include "M1_FM1CollisionDisableContext.h"
#include "M1_FM1CalcDamageInfo.h"
#include "M1_FM1FlagCounter.h"
#include "GameplayTags_FGameplayTagContainer.h"
#include "BasicTypes_TMap.h"
#include "M1Data_FM1TemplateId.h"
#include "M1_ENUMS.h"
#include "Engine_ACharacter.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_FName.h"
#include "PhysicsCore_ENUMS.h"
#include "M1Data_ENUMS.h"
#include "CoreUObject_FAssetData.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1CharacterInfoWidgetComponent; };
namespace CG::M1 { class UM1RagDollHandlerComponent; };
namespace CG::M1 { class UM1BattleStateComponent; };
namespace CG::M1 { class UM1QueryServiceComponent; };
namespace CG::M1 { class UM1StatComponent; };
namespace CG::M1 { class UM1AbilityComponent; };
namespace CG::M1 { class UM1SkillComponent; };
namespace CG::M1 { class UM1StatusEffectComponent; };
namespace CG::M1 { class UM1TimeDilationComponent; };
namespace CG::M1 { class UM1CharacterAttribute; };
namespace CG::M1 { class UM1MaterialManipulateComponent; };
namespace CG::M1 { class UM1VisibilityControlComponent; };
namespace CG::M1 { class UM1CharacterCheatComponent; };
namespace CG::M1 { class UM1CharacterVFXComponent; };
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class UActorComponent; };
namespace CG::M1 { class UM1AkAudioData; };
namespace CG::Engine { class UAnimMontage; };
namespace CG::M1 { class UM1AkComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1Character
     * Size -> 0x05B8 (FullSize[0x0AB0] - InheritedSize[0x04F8])
     */
    class AM1Character : public Engine::ACharacter
    {
    public:
        uint8_t                                                      UnknownData_0008[0x8];                                   //  Fix Super Size
        uint8_t                                                      UnknownData_0000[0x58];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1CollisionDisableContext                               RepCollisionDisable;                                     //  Net, Transient, RepNotify, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x158];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1CharacterInfoWidgetComponent*                         InfoWidgetComponent;                                     //  Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1RagDollHandlerComponent*                              RagDollHandlerComponent;                                 //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1BattleStateComponent*                                 BattleStateComponent;                                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1QueryServiceComponent*                                QueryService;                                            //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1StatComponent*                                        StatComponent;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1AbilityComponent*                                     AbilityComponent;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1SkillComponent*                                       SkillComponent;                                          //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1StatusEffectComponent*                                StatusEffectComponent;                                   //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TimeDilationComponent*                                TimeDilationComponent;                                   //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1CharacterAttribute*                                   CharacterAttribute;                                      //  Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::FM1CalcDamageInfo                                        LastDamageInfo;                                          //  Net, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        M1::FM1FlagCounter                                           CollisionDisableFlagCounter;                             //  Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        GameplayTags::FGameplayTagContainer                          TargetIdTags;                                            //  Edit, Protected, NativeAccessSpecifierProtected
        M1::UM1MaterialManipulateComponent*                          MaterialManipulateComponent;                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1VisibilityControlComponent*                           VisibilityControlComponent;                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1CharacterCheatComponent*                              RuntimeCheatComponent;                                   //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1CharacterVFXComponent*                                VFXComponent;                                            //  Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TMap<CoreUObject::UObject*, Engine::UActorComponent*> OwnedActorComponentCache;                                //  ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        M1Data::FM1TemplateId                                        CharacterId;                                             //  Net, Transient, DuplicateTransient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::EM1CharacterExistanceState                               ExistanceState;                                          //  Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0xAB];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      Level;                                                   //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0xD];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1FlagCounter                                           ExcludedFromGameFlagCounter;                             //  Net, NoDestructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0005[0xC6];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1AkAudioData*                                          AkAudioData;                                             //  Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0006[0x11];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bSkipDamageToStat;                                       //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0007[0x26];                                  //  MISSED OFFSET (PADDING)

    public:
        void UpdateMovementSpeed();
        void SetRepCollisionDisable(bool InDisableCollision, const BasicTypes::FString& InContext);
        void OnRepLastDamageInfo(M1::FM1CalcDamageInfo* PrevLastDamageInfo);
        void OnRepCharacterID();
        void OnRep_RepCollisionDisable();
        void OnRep_ExistanceState();
        void OnRep_bSkipDamageToStat();
        void NetMulticastStopMontage(Engine::UAnimMontage* AnimMontage);
        void NetMulticastSetRepCollisionDisabled(bool InDisableCollision, const BasicTypes::FString& InContext);
        void NetMulticastPlayMontage(Engine::UAnimMontage* AnimMontage, float PlayRate, const BasicTypes::FName& StartSectionName);
        bool IsSequencerBound();
        bool IsLocalPlayerController();
        bool IsInDBNO();
        bool IsDead();
        M1::UM1VisibilityControlComponent* GetVisibilityControlComponent();
        PhysicsCore::EPhysicalSurface GetSurfaceType();
        BasicTypes::FString GetStringId();
        PhysicsCore::EPhysicalSurface GetSteppingOnPhysicalSurface();
        M1::UM1StatusEffectComponent* GetStatusEffectComponent();
        M1::UM1StatComponent* GetStatComponent();
        M1::UM1SkillComponent* GetSkillComponent();
        M1::UM1MaterialManipulateComponent* GetMaterialManipulateComponent();
        int32_t GetLevelParam();
        float GetGaugeStatRatio(M1Data::EM1StatType CurrentStatType);
        BasicTypes::FString GetDisplayName();
        M1Data::EM1CharacterSize GetCharacterSize();
        M1::UM1AkComponent* GetAkComponent();
        M1::UM1AbilityComponent* GetAbilityComponent();
        void BP_OnSequenceUnbounded(const CoreUObject::FAssetData& RootSequence);
        void BP_OnSequenceBounded(const CoreUObject::FAssetData& RootSequence);
        void BP_DieCommon();
        M1::UM1CharacterAttribute* BP_AttributeRef();
        bool Auth_IsExcludedFromGame();
        void Auth_IncludeGame(const BasicTypes::FString& Reason);
        void Auth_ExcludeGame(const BasicTypes::FString& Reason);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1Character");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
