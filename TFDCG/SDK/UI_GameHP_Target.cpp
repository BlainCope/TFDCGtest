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
#include "Headers/UI_GameHP_Target_PARAMS.h"
#include "Headers/UI_GameHP_Target_UUI_GameHP_Target_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_GameHP_Target
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.SetPhaseUIPlayFillOrEmpty
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            PhaseRemainCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::SetPhaseUIPlayFillOrEmpty(int32_t PhaseRemainCount)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.SetPhaseUIPlayFillOrEmpty");
        
        UUI_GameHP_Target_C_SetPhaseUIPlayFillOrEmpty_Params params {};
        params.PhaseRemainCount = PhaseRemainCount;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.SetPhaseUIVisible
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            PhaseTotalCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::SetPhaseUIVisible(int32_t PhaseTotalCount)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.SetPhaseUIVisible");
        
        UUI_GameHP_Target_C_SetPhaseUIVisible_Params params {};
        params.PhaseTotalCount = PhaseTotalCount;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.GetStateVisibility
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         int32_t                                            PhaseTotalCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            CheckingPhase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         UMG::ESlateVisibility                              SlateVisibility                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::GetStateVisibility(int32_t PhaseTotalCount, int32_t CheckingPhase, UMG::ESlateVisibility* SlateVisibility)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.GetStateVisibility");
        
        UUI_GameHP_Target_C_GetStateVisibility_Params params {};
        params.PhaseTotalCount = PhaseTotalCount;
        params.CheckingPhase = CheckingPhase;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (SlateVisibility != nullptr)
            *SlateVisibility = params.SlateVisibility;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.LoopPhaseImmune
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::LoopPhaseImmune()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.LoopPhaseImmune");
        
        UUI_GameHP_Target_C_LoopPhaseImmune_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.GetPhasedHP
     *         Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1Data::FM1ScaledInteger                           CurrentHp                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
     *         float                                              OutRatio                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     */
    bool UUI_GameHP_Target_C::GetPhasedHP(const M1Data::FM1ScaledInteger& CurrentHp, float* OutRatio)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.GetPhasedHP");
        
        UUI_GameHP_Target_C_GetPhasedHP_Params params {};
        params.CurrentHp = CurrentHp;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutRatio != nullptr)
            *OutRatio = params.OutRatio;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.StopPhaseImmune
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::StopPhaseImmune()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.StopPhaseImmune");
        
        UUI_GameHP_Target_C_StopPhaseImmune_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.RefreshPhaseImmune
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               bReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::RefreshPhaseImmune(bool bReset)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.RefreshPhaseImmune");
        
        UUI_GameHP_Target_C_RefreshPhaseImmune_Params params {};
        params.bReset = bReset;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.RefreshPhaseState
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               bReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::RefreshPhaseState(bool bReset)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.RefreshPhaseState");
        
        UUI_GameHP_Target_C_RefreshPhaseState_Params params {};
        params.bReset = bReset;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.SetUIPhaseView
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               InPhase                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::SetUIPhaseView(bool InPhase)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.SetUIPhaseView");
        
        UUI_GameHP_Target_C_SetUIPhaseView_Params params {};
        params.InPhase = InPhase;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_OnDeactivateDetectionIndicator
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_OnDeactivateDetectionIndicator()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_OnDeactivateDetectionIndicator");
        
        UUI_GameHP_Target_C_BP_OnDeactivateDetectionIndicator_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_OnActivateDetectionIndicator
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_OnActivateDetectionIndicator()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_OnActivateDetectionIndicator");
        
        UUI_GameHP_Target_C_BP_OnActivateDetectionIndicator_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_OnBerserkGaugeChanged
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         float                                              GaugeRatio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_OnBerserkGaugeChanged(float GaugeRatio)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_OnBerserkGaugeChanged");
        
        UUI_GameHP_Target_C_BP_OnBerserkGaugeChanged_Params params {};
        params.GaugeRatio = GaugeRatio;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.Construct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::Construct()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.Construct");
        
        UUI_GameHP_Target_C_Construct_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.PreConstruct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::PreConstruct(bool IsDesignTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.PreConstruct");
        
        UUI_GameHP_Target_C_PreConstruct_Params params {};
        params.IsDesignTime = IsDesignTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_UpdateWeakElementalIcons
     *         Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
     * Parameters:
     *         BasicTypes::TArray<Engine::UTexture2D*>            WeakElementalIcons                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_UpdateWeakElementalIcons(BasicTypes::TArray<Engine::UTexture2D*> WeakElementalIcons)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_UpdateWeakElementalIcons");
        
        UUI_GameHP_Target_C_BP_UpdateWeakElementalIcons_Params params {};
        params.WeakElementalIcons = WeakElementalIcons;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_UpdateWeakAdvantageIcon
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::UTexture2D*                                WeakAdvantageIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_UpdateWeakAdvantageIcon(Engine::UTexture2D* WeakAdvantageIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_UpdateWeakAdvantageIcon");
        
        UUI_GameHP_Target_C_BP_UpdateWeakAdvantageIcon_Params params {};
        params.WeakAdvantageIcon = WeakAdvantageIcon;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_NotifyTagAdded
     *         Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
     * Parameters:
     *         GameplayTags::FGameplayTag                         Tag                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_NotifyTagAdded(const GameplayTags::FGameplayTag& Tag)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_NotifyTagAdded");
        
        UUI_GameHP_Target_C_BP_NotifyTagAdded_Params params {};
        params.Tag = Tag;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_NotifyTagRemoved
     *         Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
     * Parameters:
     *         GameplayTags::FGameplayTag                         Tag                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_NotifyTagRemoved(const GameplayTags::FGameplayTag& Tag)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_NotifyTagRemoved");
        
        UUI_GameHP_Target_C_BP_NotifyTagRemoved_Params params {};
        params.Tag = Tag;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_InitWidgetImpl
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_InitWidgetImpl()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_InitWidgetImpl");
        
        UUI_GameHP_Target_C_BP_InitWidgetImpl_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_PlayFocusAnim
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         bool                                               bInForwardAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_PlayFocusAnim(bool bInForwardAnim)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_PlayFocusAnim");
        
        UUI_GameHP_Target_C_BP_PlayFocusAnim_Params params {};
        params.bInForwardAnim = bInForwardAnim;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_PlayNameAnim
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         bool                                               bInForwardAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_PlayNameAnim(bool bInForwardAnim)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_PlayNameAnim");
        
        UUI_GameHP_Target_C_BP_PlayNameAnim_Params params {};
        params.bInForwardAnim = bInForwardAnim;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_InitBossMonsterWidget
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::BP_InitBossMonsterWidget()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.BP_InitBossMonsterWidget");
        
        UUI_GameHP_Target_C_BP_InitBossMonsterWidget_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.OnEventWidgetClose
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         M1::EM1WidgetAnimDirection                         InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::OnEventWidgetClose(M1::EM1WidgetAnimDirection InDirection)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.OnEventWidgetClose");
        
        UUI_GameHP_Target_C_OnEventWidgetClose_Params params {};
        params.InDirection = InDirection;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.ExecuteUbergraph_UI_GameHP_Target
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameHP_Target_C::ExecuteUbergraph_UI_GameHP_Target(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameHP_Target.UI_GameHP_Target_C.ExecuteUbergraph_UI_GameHP_Target");
        
        UUI_GameHP_Target_C_ExecuteUbergraph_UI_GameHP_Target_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
