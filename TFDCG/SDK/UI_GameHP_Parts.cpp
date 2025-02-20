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
#include "Headers/UI_GameHP_Parts_PARAMS.h"
#include "Headers/UI_GameHP_Parts_UUI_GameHP_Parts_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_GameHP_Parts
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Parts.UI_GameHP_Parts_C.UpdateHPGauge
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         double                                             HPRate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Parts_C::UpdateHPGauge(double HPRate)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Parts.UI_GameHP_Parts_C.UpdateHPGauge");
        
        UUI_GameHP_Parts_C_UpdateHPGauge_Params params {};
        params.HPRate = HPRate;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Parts.UI_GameHP_Parts_C.Construct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Parts_C::Construct()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Parts.UI_GameHP_Parts_C.Construct");
        
        UUI_GameHP_Parts_C_Construct_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Parts.UI_GameHP_Parts_C.OnInitialized
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Parts_C::OnInitialized()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Parts.UI_GameHP_Parts_C.OnInitialized");
        
        UUI_GameHP_Parts_C_OnInitialized_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Parts.UI_GameHP_Parts_C.ExecuteUbergraph_UI_GameHP_Parts
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Parts_C::ExecuteUbergraph_UI_GameHP_Parts(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Parts.UI_GameHP_Parts_C.ExecuteUbergraph_UI_GameHP_Parts");
        
        UUI_GameHP_Parts_C_ExecuteUbergraph_UI_GameHP_Parts_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
