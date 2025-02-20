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
#include "Headers/UI_KeySymbol_Dual_PARAMS.h"
#include "Headers/UI_KeySymbol_Dual_UUI_KeySymbol_Dual_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_KeySymbol_Dual
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.SequenceEvent__ENTRYPOINTUI_KeySymbol_Dual
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::SequenceEvent__ENTRYPOINTUI_KeySymbol_Dual()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.SequenceEvent__ENTRYPOINTUI_KeySymbol_Dual");
        
        UUI_KeySymbol_Dual_C_SequenceEvent__ENTRYPOINTUI_KeySymbol_Dual_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.KeySymbol_Change01
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::EM1ButtonUIType                                EM1Button                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::KeySymbol_Change01(M1::EM1ButtonUIType EM1Button)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.KeySymbol_Change01");
        
        UUI_KeySymbol_Dual_C_KeySymbol_Change01_Params params {};
        params.EM1Button = EM1Button;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.ResetProgress
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::ResetProgress()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.ResetProgress");
        
        UUI_KeySymbol_Dual_C_ResetProgress_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_ChangeDimmedUI
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               InDimmed                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::BP_ChangeDimmedUI(bool InDimmed)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_ChangeDimmedUI");
        
        UUI_KeySymbol_Dual_C_BP_ChangeDimmedUI_Params params {};
        params.InDimmed = InDimmed;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_ChangeProgressUI
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               InStart                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         float                                              InDuration                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::BP_ChangeProgressUI(bool InStart, float InDuration)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_ChangeProgressUI");
        
        UUI_KeySymbol_Dual_C_BP_ChangeProgressUI_Params params {};
        params.InStart = InStart;
        params.InDuration = InDuration;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_SetProgressUI
     *         Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               bUseProgress                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::BP_SetProgressUI(bool bUseProgress)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_SetProgressUI");
        
        UUI_KeySymbol_Dual_C_BP_SetProgressUI_Params params {};
        params.bUseProgress = bUseProgress;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.PreConstruct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::PreConstruct(bool IsDesignTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.PreConstruct");
        
        UUI_KeySymbol_Dual_C_PreConstruct_Params params {};
        params.IsDesignTime = IsDesignTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_SetPlusImage
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         Engine::UTexture2D*                                InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::BP_SetPlusImage(Engine::UTexture2D* InTexture)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_SetPlusImage");
        
        UUI_KeySymbol_Dual_C_BP_SetPlusImage_Params params {};
        params.InTexture = InTexture;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.SequenceEvent_1
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::SequenceEvent_1()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.SequenceEvent_1");
        
        UUI_KeySymbol_Dual_C_SequenceEvent_1_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.ExecuteUbergraph_UI_KeySymbol_Dual
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeySymbol_Dual_C::ExecuteUbergraph_UI_KeySymbol_Dual(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.ExecuteUbergraph_UI_KeySymbol_Dual");
        
        UUI_KeySymbol_Dual_C_ExecuteUbergraph_UI_KeySymbol_Dual_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
