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

namespace CG::AnimBP_MIS_AlbionBattleDataDisc
{
    /**
     * AnimBlueprintGeneratedClass /Game/Mission/TargetActor/Static/MIS_AlbionBattleDataDisc/BP/AnimBP_MIS_AlbionBattleDataDisc.AnimBP_MIS_AlbionBattleDataDisc_C
     * Size -> 0x0318 (FullSize[0x0638] - InheritedSize[0x0320])
     */
    class UAnimBP_MIS_AlbionBattleDataDisc_C : public M1::UM1MissionTargetAnimInstance
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_PropertyAccess;
        Engine::FAnimSubsystemInstance                               AnimBlueprintExtension_Base;
        Engine::FAnimNode_Root                                       AnimGraphNode_Root;
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
        void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_AlbionBattleDataDisc_AnimGraphNode_TransitionResult_D6E345C0460733D4849106889FA8B2C0();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_AlbionBattleDataDisc_AnimGraphNode_TransitionResult_501C55B549F524C7EB336DA4064E2A92();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_AlbionBattleDataDisc_AnimGraphNode_TransitionResult_CD29B3434693DC36639A7BA55B533D21();
        void ExecuteUbergraph_AnimBP_MIS_AlbionBattleDataDisc(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Mission/TargetActor/Static/MIS_AlbionBattleDataDisc/BP/AnimBP_MIS_AlbionBattleDataDisc.AnimBP_MIS_AlbionBattleDataDisc_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
