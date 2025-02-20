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
#include "Engine_FAnimNode_TransitionResult.h"
#include "Engine_FAnimNode_SequencePlayer.h"
#include "AnimGraphRuntime_FAnimNode_StateResult.h"
#include "Engine_FAnimNode_StateMachine.h"
#include "M1_UM1MissionTargetAnimInstance.h"
#include "Engine_FPoseLink.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimBP_MIS_VulgusPerturber
{
    /**
     * AnimBlueprintGeneratedClass /Game/Mission/TargetActor/Dynamic/MIS_VulgusPerturber/BP/AnimBP_MIS_VulgusPerturber.AnimBP_MIS_VulgusPerturber_C
     * Size -> 0x0368 (FullSize[0x0688] - InheritedSize[0x0320])
     */
    class UAnimBP_MIS_VulgusPerturber_C : public M1::UM1MissionTargetAnimInstance
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_PropertyAccess;
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_Base;
        Engine::FAnimNode_Root                                       AnimGraphNode_Root;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_5;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_4;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_3;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_2;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_4;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_4;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_3;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_3;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_2;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_2;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult;
        Engine::FAnimNode_StateMachine                               AnimGraphNode_StateMachine;

    public:
        void AnimGraph(Engine::FPoseLink* AnimGraph);
        void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VulgusPerturber_AnimGraphNode_TransitionResult_02DD9E3E4720096F1196DBBE5176294C();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VulgusPerturber_AnimGraphNode_TransitionResult_F2F2A18149B40D6CB9D77DBDDA38C266();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VulgusPerturber_AnimGraphNode_TransitionResult_C8E2CA61488FA5B6E733199CFA56E6FD();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VulgusPerturber_AnimGraphNode_TransitionResult_65A4792A43330DD7A7F780A24067D849();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VulgusPerturber_AnimGraphNode_TransitionResult_C294EFAA46E07479B4D2D79EBD43940B();
        void ExecuteUbergraph_AnimBP_MIS_VulgusPerturber(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Mission/TargetActor/Dynamic/MIS_VulgusPerturber/BP/AnimBP_MIS_VulgusPerturber.AnimBP_MIS_VulgusPerturber_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
