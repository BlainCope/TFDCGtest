/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    TFDCG                       |
 * | Version: 1                           |
 * | Date:    08/22/2024                  |
 * ----------------------------------------
 */

#include "pch.h"
#include <cstdint>
#include <vector>
#include <string>
#include <locale>
#include <unordered_set>
#include "Headers/Global_DEFINES.h"
#include "Headers/BasicTypes.h"
#include "Headers/CoreUObject_UFunction.h"
#include "Headers/NPC_048_A101_AnimBP_PARAMS.h"
#include "Headers/NPC_048_A101_AnimBP_UNPC_048_A101_AnimBP_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::NPC_048_A101_AnimBP
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Characters/NPC/048/BP/SEC/NPC_048_A101_AnimBP.NPC_048_A101_AnimBP_C.AnimGraph
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::FPoseLink                                  InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
     *         Engine::FPoseLink                                  AnimGraph                                                  (Parm, OutParm, NoDestructor)
     *         void                                               ReturnValue
     */
    void UNPC_048_A101_AnimBP_C::AnimGraph(const Engine::FPoseLink& InPose, Engine::FPoseLink* AnimGraph)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Characters/NPC/048/BP/SEC/NPC_048_A101_AnimBP.NPC_048_A101_AnimBP_C.AnimGraph");
        
        UNPC_048_A101_AnimBP_C_AnimGraph_Params params {};
        params.InPose = InPose;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (AnimGraph != nullptr)
            *AnimGraph = params.AnimGraph;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Characters/NPC/048/BP/SEC/NPC_048_A101_AnimBP.NPC_048_A101_AnimBP_C.ExecuteUbergraph_NPC_048_A101_AnimBP
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UNPC_048_A101_AnimBP_C::ExecuteUbergraph_NPC_048_A101_AnimBP(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Characters/NPC/048/BP/SEC/NPC_048_A101_AnimBP.NPC_048_A101_AnimBP_C.ExecuteUbergraph_NPC_048_A101_AnimBP");
        
        UNPC_048_A101_AnimBP_C_ExecuteUbergraph_NPC_048_A101_AnimBP_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
