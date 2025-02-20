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
#include "Headers/UI_KeyButton_PARAMS.h"
#include "Headers/UI_KeyButton_UUI_KeyButton_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_KeyButton
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.SetTextColor
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         SlateCore::FSlateColor                             KeyText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
     *         SlateCore::FSlateColor                             ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
     *         void                                               ReturnValue
     */
    void UUI_KeyButton_C::SetTextColor(const SlateCore::FSlateColor& KeyText, const SlateCore::FSlateColor& ButtonText)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.SetTextColor");
        
        UUI_KeyButton_C_SetTextColor_Params params {};
        params.KeyText = KeyText;
        params.ButtonText = ButtonText;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.SetTextureAndOpacity
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         UMG::UImage*                                       Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         Engine::UTexture*                                  PaperTexture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         double                                             Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeyButton_C::SetTextureAndOpacity(UMG::UImage* Target, Engine::UTexture* PaperTexture, double Opacity)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.SetTextureAndOpacity");
        
        UUI_KeyButton_C_SetTextureAndOpacity_Params params {};
        params.Target = Target;
        params.PaperTexture = PaperTexture;
        params.Opacity = Opacity;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.BP_ChangeButtonUI
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         M1::EM1ButtonUIType                                InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeyButton_C::BP_ChangeButtonUI(M1::EM1ButtonUIType InType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.BP_ChangeButtonUI");
        
        UUI_KeyButton_C_BP_ChangeButtonUI_Params params {};
        params.InType = InType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.BP_ChangeDimmedUI
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               InDimmed                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeyButton_C::BP_ChangeDimmedUI(bool InDimmed)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.BP_ChangeDimmedUI");
        
        UUI_KeyButton_C_BP_ChangeDimmedUI_Params params {};
        params.InDimmed = InDimmed;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.PreConstruct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeyButton_C::PreConstruct(bool IsDesignTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.PreConstruct");
        
        UUI_KeyButton_C_PreConstruct_Params params {};
        params.IsDesignTime = IsDesignTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.ExecuteUbergraph_UI_KeyButton
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_KeyButton_C::ExecuteUbergraph_UI_KeyButton(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.ExecuteUbergraph_UI_KeyButton");
        
        UUI_KeyButton_C_ExecuteUbergraph_UI_KeyButton_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
