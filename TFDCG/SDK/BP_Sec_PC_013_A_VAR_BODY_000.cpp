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
#include "Headers/BP_Sec_PC_013_A_VAR_BODY_000_PARAMS.h"
#include "Headers/BP_Sec_PC_013_A_VAR_BODY_000_UBP_Sec_PC_013_A_VAR_BODY_000_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_Sec_PC_013_A_VAR_BODY_000
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_013_A_VAR_BODY_000.BP_Sec_PC_013_A_VAR_BODY_000_C.AnimGraph
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::FPoseLink                                  InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
     *         Engine::FPoseLink                                  AnimGraph                                                  (Parm, OutParm, NoDestructor)
     *         void                                               ReturnValue
     */
    void UBP_Sec_PC_013_A_VAR_BODY_000_C::AnimGraph(const Engine::FPoseLink& InPose, Engine::FPoseLink* AnimGraph)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_013_A_VAR_BODY_000.BP_Sec_PC_013_A_VAR_BODY_000_C.AnimGraph");
        
        UBP_Sec_PC_013_A_VAR_BODY_000_C_AnimGraph_Params params {};
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
     *         Name   -> Function /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_013_A_VAR_BODY_000.BP_Sec_PC_013_A_VAR_BODY_000_C.BlueprintThreadSafeUpdateAnimation
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBP_Sec_PC_013_A_VAR_BODY_000_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_013_A_VAR_BODY_000.BP_Sec_PC_013_A_VAR_BODY_000_C.BlueprintThreadSafeUpdateAnimation");
        
        UBP_Sec_PC_013_A_VAR_BODY_000_C_BlueprintThreadSafeUpdateAnimation_Params params {};
        params.DeltaTime = DeltaTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_013_A_VAR_BODY_000.BP_Sec_PC_013_A_VAR_BODY_000_C.ExecuteUbergraph_BP_Sec_PC_013_A_VAR_BODY_000
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBP_Sec_PC_013_A_VAR_BODY_000_C::ExecuteUbergraph_BP_Sec_PC_013_A_VAR_BODY_000(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Characters/PC/AnimBP/Sec/VAR/BODY/BP_Sec_PC_013_A_VAR_BODY_000.BP_Sec_PC_013_A_VAR_BODY_000_C.ExecuteUbergraph_BP_Sec_PC_013_A_VAR_BODY_000");
        
        UBP_Sec_PC_013_A_VAR_BODY_000_C_ExecuteUbergraph_BP_Sec_PC_013_A_VAR_BODY_000_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
