#pragma once
#pragma warning(disable: 4267)

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
#include "Engine_FPoseLink.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::WC_Hook_AnimBP
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UWC_Hook_AnimBP_C_AnimGraph_Params
    {
    public:
        Engine::FPoseLink                                            AnimGraph;                                               //  0x0000(0x0010)  (Parm, OutParm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UWC_Hook_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_WC_Hook_AnimBP_AnimGraphNode_TransitionResult_FA154A754961F6C15612FABF813BB137_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UWC_Hook_AnimBP_C_ExecuteUbergraph_WC_Hook_AnimBP_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
