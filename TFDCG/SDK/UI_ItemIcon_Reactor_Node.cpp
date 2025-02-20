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
#include "Headers/UI_ItemIcon_Reactor_Node_PARAMS.h"
#include "Headers/UI_ItemIcon_Reactor_Node_UUI_ItemIcon_Reactor_Node_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_ItemIcon_Reactor_Node
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetEnchant
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               bEnchant                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ItemIcon_Reactor_Node_C::SetEnchant(bool bEnchant)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetEnchant");
        
        UUI_ItemIcon_Reactor_Node_C_SetEnchant_Params params {};
        params.bEnchant = bEnchant;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetSize
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector2D                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ItemIcon_Reactor_Node_C::SetSize(const CoreUObject::FVector2D& Size)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetSize");
        
        UUI_ItemIcon_Reactor_Node_C_SetSize_Params params {};
        params.Size = Size;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetFill
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Fill                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ItemIcon_Reactor_Node_C::SetFill(bool Fill, bool Max)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetFill");
        
        UUI_ItemIcon_Reactor_Node_C_SetFill_Params params {};
        params.Fill = Fill;
        params.Max = Max;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.PreConstruct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ItemIcon_Reactor_Node_C::PreConstruct(bool IsDesignTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.PreConstruct");
        
        UUI_ItemIcon_Reactor_Node_C_PreConstruct_Params params {};
        params.IsDesignTime = IsDesignTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.Construct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_ItemIcon_Reactor_Node_C::Construct()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.Construct");
        
        UUI_ItemIcon_Reactor_Node_C_Construct_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.ExecuteUbergraph_UI_ItemIcon_Reactor_Node
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ItemIcon_Reactor_Node_C::ExecuteUbergraph_UI_ItemIcon_Reactor_Node(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.ExecuteUbergraph_UI_ItemIcon_Reactor_Node");
        
        UUI_ItemIcon_Reactor_Node_C_ExecuteUbergraph_UI_ItemIcon_Reactor_Node_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
