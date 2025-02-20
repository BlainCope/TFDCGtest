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
#include "M1_FM1AnimNode_ModifyBone_Expression.h"
#include "Engine_FAnimNode_Root.h"
#include "M1_FM1AnimNode_ApplyFacialAdditive.h"
#include "Engine_UAnimInstance.h"
#include "Engine_FPoseLink.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_Sec_PC_004_U_VAR_BODY_000
{
    /**
     * AnimBlueprintGeneratedClass /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_004_U_VAR_BODY_000.BP_Sec_PC_004_U_VAR_BODY_000_C
     * Size -> 0x1DD8 (FullSize[0x20F0] - InheritedSize[0x0318])
     */
    class UBP_Sec_PC_004_U_VAR_BODY_000_C : public Engine::UAnimInstance
    {
    public:
        uint8_t                                                      UnknownData_0003[0x8];                                   //  Fix Super Size
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_PropertyAccess;
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_Base;
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_7;
        Engine::FAnimNode_LinkedInputPose                            AnimGraphNode_LinkedInputPose;
        M1::FM1AnimNode_ModifyBone_Expression                        M1AnimGraphNode_ModifyBone_Expression;
        Engine::FAnimNode_Root                                       AnimGraphNode_Root;
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_6;
        M1::FM1AnimNode_ApplyFacialAdditive                          M1AnimGraphNode_ApplyFacialAdditive;
        uint8_t                                                      UnknownData_0002[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_5;
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_4;
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_3;
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys_2;
        M1AnimPhys::FM1AnimNode_AnimPhys                             M1AnimGraphNode_AnimPhys;

    public:
        void AnimGraph(const Engine::FPoseLink& InPose, Engine::FPoseLink* AnimGraph);
        void ExecuteUbergraph_BP_Sec_PC_004_U_VAR_BODY_000(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_004_U_VAR_BODY_000.BP_Sec_PC_004_U_VAR_BODY_000_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
