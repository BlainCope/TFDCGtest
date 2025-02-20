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
#include "M1_AM1MissionTaskActorMoveTo.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UBillboardComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_MissionTaskMove
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Mission/BP_MissionTaskMove.BP_MissionTaskMove_C
     * Size -> 0x0010 (FullSize[0x0668] - InheritedSize[0x0658])
     */
    class ABP_MissionTaskMove_C : public M1::AM1MissionTaskActorMoveTo
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UBillboardComponent*                                 Billboard;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        void TaskActorStateChanged(M1::EM1EventActorState InState);
        void ExecuteUbergraph_BP_MissionTaskMove(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Mission/BP_MissionTaskMove.BP_MissionTaskMove_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
