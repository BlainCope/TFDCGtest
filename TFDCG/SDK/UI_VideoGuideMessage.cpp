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
#include "Headers/UI_VideoGuideMessage_PARAMS.h"
#include "Headers/UI_VideoGuideMessage_UUI_VideoGuideMessage_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_VideoGuideMessage
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.BP_ShowTitle
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_VideoGuideMessage_C::BP_ShowTitle(bool bShow)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.BP_ShowTitle");
        
        UUI_VideoGuideMessage_C_BP_ShowTitle_Params params {};
        params.bShow = bShow;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.OnEventWidgetOpen
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         M1::EM1WidgetAnimDirection                         InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_VideoGuideMessage_C::OnEventWidgetOpen(M1::EM1WidgetAnimDirection InDirection)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.OnEventWidgetOpen");
        
        UUI_VideoGuideMessage_C_OnEventWidgetOpen_Params params {};
        params.InDirection = InDirection;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.Construct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_VideoGuideMessage_C::Construct()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.Construct");
        
        UUI_VideoGuideMessage_C_Construct_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.OnEventWidgetClose
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         M1::EM1WidgetAnimDirection                         InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_VideoGuideMessage_C::OnEventWidgetClose(M1::EM1WidgetAnimDirection InDirection)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.OnEventWidgetClose");
        
        UUI_VideoGuideMessage_C_OnEventWidgetClose_Params params {};
        params.InDirection = InDirection;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.ExecuteUbergraph_UI_VideoGuideMessage
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_VideoGuideMessage_C::ExecuteUbergraph_UI_VideoGuideMessage(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Common/UI_VideoGuideMessage.UI_VideoGuideMessage_C.ExecuteUbergraph_UI_VideoGuideMessage");
        
        UUI_VideoGuideMessage_C_ExecuteUbergraph_UI_VideoGuideMessage_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
