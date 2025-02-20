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
#include "M1_FM1AnimNode_ApplyFacialAdditive.h"
#include "Engine_FAnimNode_LinkedInputPose.h"
#include "Engine_FAnimNode_Root.h"
#include "M1AnimPhys_FM1AnimNode_AnimPhys.h"
#include "Engine_UAnimInstance.h"
#include "Engine_FPoseLink.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_Sec_PC_013_A_VAR_BODY_000
{
    /**
     * AnimBlueprintGeneratedClass /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_013_A_VAR_BODY_000.BP_Sec_PC_013_A_VAR_BODY_000_C
     * Size -> 0x14C0 (FullSize[0x17D8] - InheritedSize[0x0318])
     */
    class UBP_Sec_PC_013_A_VAR_BODY_000_C : public Engine::UAnimInstance
    {
    public:
        uint8_t                                                      UnknownData_0001[0x8];                                   //  Fix Super Size
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_PropertyAccess;
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_Base;
        M1::FM1AnimNode_ApplyFacialAdditive                          M1AnimGraphNode_ApplyFacialAdditive;
        Engine::FAnimNode_LinkedInputPose                            AnimGraphNode_LinkedInputPose;
        Engine::FAnimNode_Root                                       AnimGraphNode_Root;
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_5;
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_4;
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_3;
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_2;
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys;
        double                                                       KawaiiAlpha;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void AnimGraph(const Engine::FPoseLink& InPose, Engine::FPoseLink* AnimGraph);
        void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
        void ExecuteUbergraph_BP_Sec_PC_013_A_VAR_BODY_000(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_013_A_VAR_BODY_000.BP_Sec_PC_013_A_VAR_BODY_000_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
