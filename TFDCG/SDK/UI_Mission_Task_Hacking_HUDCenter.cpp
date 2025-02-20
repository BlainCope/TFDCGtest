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
#include "Headers/UI_Mission_Task_Hacking_HUDCenter_PARAMS.h"
#include "Headers/UI_Mission_Task_Hacking_HUDCenter_UUI_Mission_Task_Hacking_HUDCenter_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Task_Hacking_HUDCenter
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Mission/Widgets/UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.BP_ShowWidget
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         bool                                               bInShow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_Mission_Task_Hacking_HUDCenter_C::BP_ShowWidget(bool bInShow)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Mission/Widgets/UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.BP_ShowWidget");
        
        UUI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget_Params params {};
        params.bInShow = bInShow;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Mission/Widgets/UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.CustomEvent
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_Mission_Task_Hacking_HUDCenter_C::CustomEvent()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Mission/Widgets/UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.CustomEvent");
        
        UUI_Mission_Task_Hacking_HUDCenter_C_CustomEvent_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Mission/Widgets/UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_Mission_Task_Hacking_HUDCenter_C::ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Mission/Widgets/UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter");
        
        UUI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
