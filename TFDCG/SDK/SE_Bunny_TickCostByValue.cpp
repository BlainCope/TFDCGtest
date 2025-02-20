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
#include "Headers/SE_Bunny_TickCostByValue_PARAMS.h"
#include "Headers/SE_Bunny_TickCostByValue_USE_Bunny_TickCostByValue_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SE_Bunny_TickCostByValue
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.OnRep_bDepleted
     *         Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USE_Bunny_TickCostByValue_C::OnRep_bDepleted()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.OnRep_bDepleted");
        
        USE_Bunny_TickCostByValue_C_OnRep_bDepleted_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.MakeTickOpParam
     *         Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
     * Parameters:
     *         double                                             OpValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         M1::FM1AbilityOperationParam                       OpParam                                                    (Parm, OutParm, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void USE_Bunny_TickCostByValue_C::MakeTickOpParam(double OpValue, M1::FM1AbilityOperationParam* OpParam)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.MakeTickOpParam");
        
        USE_Bunny_TickCostByValue_C_MakeTickOpParam_Params params {};
        params.OpValue = OpValue;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OpParam != nullptr)
            *OpParam = params.OpParam;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.ExecuteTickOperation
     *         Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::FM1AbilityOperationParam                       OpParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void USE_Bunny_TickCostByValue_C::ExecuteTickOperation(const M1::FM1AbilityOperationParam& OpParam)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.ExecuteTickOperation");
        
        USE_Bunny_TickCostByValue_C_ExecuteTickOperation_Params params {};
        params.OpParam = OpParam;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.ExecutePeriodOperation
     *         Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::FM1AbilityOperationParam                       OpParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void USE_Bunny_TickCostByValue_C::ExecutePeriodOperation(const M1::FM1AbilityOperationParam& OpParam)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.ExecutePeriodOperation");
        
        USE_Bunny_TickCostByValue_C_ExecutePeriodOperation_Params params {};
        params.OpParam = OpParam;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
