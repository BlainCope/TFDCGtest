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
#include "M1_ENUMS.h"
#include "BasicTypes_TMap.h"
#include "M1Data_FM1TemplateId.h"
#include "CoreUObject_FVector2D.h"
#include "M1_AM1Monster.h"
#include "M1_FM1CalcDamageInfo.h"
#include "Engine_FVector_NetQuantize.h"
#include "CoreUObject_FRotator.h"
#include "M1_FM1AbilityEvent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1BerserkComponent; };
namespace CG::M1 { class UM1StressComponent; };
namespace CG::M1 { class UM1PlayerEnvironmentControlSubsystem; };
namespace CG::M1 { class UM1ActorManagerSubsystem; };
namespace CG::Niagara { class UNiagaraComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1EpicMonster
     * Size -> 0x00F0 (FullSize[0x0D40] - InheritedSize[0x0C50])
     */
    class AM1EpicMonster : public M1::AM1Monster
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1BerserkComponent*                                     BerserkComponent;                                        //  Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1StressComponent*                                      StressComponent;                                         //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1PlayerEnvironmentControlSubsystem*                    EnvironmentControlSubsystem;                             //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1ActorManagerSubsystem*                                ActorManager_Subsystem;                                  //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::EM1EpicMonsterState                                      CurrentState;                                            //  Edit, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Niagara::UNiagaraComponent*                                  PreExtinctionLoopFXComp;                                 //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Niagara::UNiagaraComponent*                                  PreExtinctionEndFXComp;                                  //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x48];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bDrawDebugHitPoint;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<M1Data::FM1TemplateId, CoreUObject::FVector2D> LaunchForcesByDropContainerType;                         //  Edit, NativeAccessSpecifierPrivate
        CoreUObject::FVector2D                                       DefaultLaunchForceForDropContainer;                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        void SetCurrentState(M1::EM1EpicMonsterState NewState);
        void ReceiveBerserkMode(bool bActivated);
        void PlayVoidBattleSpawnSequenceEnd();
        void OnRepCurrentState(M1::EM1EpicMonsterState PrevState);
        void OnExtinctionLevelSequencePlayEnd();
        void OnDeathLevelSequencePlayEnd();
        void NetMulticastSpawnPreExtinctionStartAndLoopFX();
        void NetMulticastPlayPreExtinctionEndFX();
        void NetMulticastExtinct();
        void NetMulticastDrawDebugHitPoint(const M1::FM1CalcDamageInfo& DamageInfo);
        void NetMulticastATField(const Engine::FVector_NetQuantize& Location, const CoreUObject::FRotator& Rotation);
        bool IsExtinction();
        bool IsBerserkMode();
        void IncreaseBerserkGauge(float Ratio);
        float GetBerserkGaugeRatio();
        void BP_ReceivedBerserkAbilityEvent(const M1::FM1AbilityEvent& AbilityEvent);
        void BP_Extinct(float DelayToLevelSeqPlay);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1EpicMonster");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
