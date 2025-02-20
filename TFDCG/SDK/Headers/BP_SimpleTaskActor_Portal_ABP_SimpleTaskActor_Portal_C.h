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
#include "M1_AM1SimpleTaskActor_Portal.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UBillboardComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_SimpleTaskActor_Portal
{
    /**
     * BlueprintGeneratedClass /Game/BP_SimpleTaskActor_Portal.BP_SimpleTaskActor_Portal_C
     * Size -> 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
     */
    class ABP_SimpleTaskActor_Portal_C : public M1::AM1SimpleTaskActor_Portal
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UBillboardComponent*                                 Billboard;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        void ReceiveBeginPlay();
        void ExecuteUbergraph_BP_SimpleTaskActor_Portal(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/BP_SimpleTaskActor_Portal.BP_SimpleTaskActor_Portal_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
