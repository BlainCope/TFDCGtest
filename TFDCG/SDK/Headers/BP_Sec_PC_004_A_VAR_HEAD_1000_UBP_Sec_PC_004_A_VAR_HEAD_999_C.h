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
#include "M1AnimPhys_FM1AnimNode_AnimPhys.h"
#include "Engine_FAnimNode_LinkedInputPose.h"
#include "Engine_FAnimNode_Root.h"
#include "M1_UM1BaseAttachmentAnimInstance.h"
#include "Engine_FPoseLink.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_Sec_PC_004_A_VAR_HEAD_1000
{
    /**
     * AnimBlueprintGeneratedClass /Game/Characters/PC/AnimBP/Sec/VAR/HEAD/BP_Sec_PC_004_A_VAR_HEAD_1000.BP_Sec_PC_004_A_VAR_HEAD_999_C
     * Size -> 0x08B0 (FullSize[0x0BF0] - InheritedSize[0x0340])
     */
    class UBP_Sec_PC_004_A_VAR_HEAD_999_C : public M1::UM1BaseAttachmentAnimInstance
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_PropertyAccess;
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_Base;
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_2;
        Engine::FAnimNode_LinkedInputPose                            AnimGraphNode_LinkedInputPose;
        Engine::FAnimNode_Root                                       AnimGraphNode_Root;
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys;

    public:
        void AnimGraph(const Engine::FPoseLink& InPose, Engine::FPoseLink* AnimGraph);
        void ExecuteUbergraph_BP_Sec_PC_004_A_VAR_HEAD_1000(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Characters/PC/AnimBP/Sec/VAR/HEAD/BP_Sec_PC_004_A_VAR_HEAD_1000.BP_Sec_PC_004_A_VAR_HEAD_999_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
