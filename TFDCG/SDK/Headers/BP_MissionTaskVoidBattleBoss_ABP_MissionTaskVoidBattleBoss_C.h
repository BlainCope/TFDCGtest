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
#include "Engine_FPointerToUberGraphFrame.h"
#include "M1_AM1MissionTaskActorVoidBattleEpicMonster.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UBillboardComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_MissionTaskVoidBattleBoss
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Mission/BP_MissionTaskVoidBattleBoss.BP_MissionTaskVoidBattleBoss_C
     * Size -> 0x0010 (FullSize[0x06A0] - InheritedSize[0x0690])
     */
    class ABP_MissionTaskVoidBattleBoss_C : public M1::AM1MissionTaskActorVoidBattleEpicMonster
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UBillboardComponent*                                 Billboard;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        void BP_ShouldBeVisibleOnLocal(bool InVisible);
        void ExecuteUbergraph_BP_MissionTaskVoidBattleBoss(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Mission/BP_MissionTaskVoidBattleBoss.BP_MissionTaskVoidBattleBoss_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
