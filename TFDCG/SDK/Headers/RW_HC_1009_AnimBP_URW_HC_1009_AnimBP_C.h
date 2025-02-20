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
#include "Engine_FAnimSubsystemInstance.h"
#include "Engine_FAnimNode_Root.h"
#include "AnimGraphRuntime_FAnimNode_Slot.h"
#include "AnimGraphRuntime_FAnimNode_CopyPoseFromMesh.h"
#include "Engine_UAnimInstance.h"
#include "Engine_FPoseLink.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::RW_HC_1009_AnimBP
{
    /**
     * AnimBlueprintGeneratedClass /Game/Characters/Weapon/RW/HC/1009/RW_HC_1009_AnimBP.RW_HC_1009_AnimBP_C
     * Size -> 0x0260 (FullSize[0x0578] - InheritedSize[0x0318])
     */
    class URW_HC_1009_AnimBP_C : public Engine::UAnimInstance
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  Fix Super Size
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_PropertyAccess;
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_Base;
        Engine::FAnimNode_Root                                       AnimGraphNode_Root;
        AnimGraphRuntime::FAnimNode_Slot                             AnimGraphNode_Slot;
        AnimGraphRuntime::FAnimNode_CopyPoseFromMesh                 AnimGraphNode_CopyPoseFromMesh;                          //  ContainsInstancedReference

    public:
        void AnimGraph(Engine::FPoseLink* AnimGraph);
        void ExecuteUbergraph_RW_HC_1009_AnimBP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Characters/Weapon/RW/HC/1009/RW_HC_1009_AnimBP.RW_HC_1009_AnimBP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
