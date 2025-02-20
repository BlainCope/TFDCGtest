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
#include "M1_AM1WeaponPreviewStage.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UChildActorComponent; };
namespace CG::CinematicCamera { class UCineCameraComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_WeaponPreviewStage
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/WeaponPreview/BP_WeaponPreviewStage.BP_WeaponPreviewStage_C
     * Size -> 0x0010 (FullSize[0x0308] - InheritedSize[0x02F8])
     */
    class ABP_WeaponPreviewStage_C : public M1::AM1WeaponPreviewStage
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UChildActorComponent*                                ChildActor_BlackBox;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        CinematicCamera::UCineCameraComponent* BP_GetCameraComponent();
        void ReceiveBeginPlay();
        void ReceiveTick(float DeltaSeconds);
        void ExecuteUbergraph_BP_WeaponPreviewStage(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/WeaponPreview/BP_WeaponPreviewStage.BP_WeaponPreviewStage_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
