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
#include "Headers/BPL_UILibrary_PARAMS.h"
#include "Headers/BPL_UILibrary_UBPL_UILibrary_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BPL_UILibrary
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ArcheType_Icon
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1SkillArcheType                          InArcheType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         Engine::UTexture2D*                                ArcheTypeIcon                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIArcheType_Icon(M1Data::EM1SkillArcheType InArcheType, CoreUObject::UObject* __WorldContext, Engine::UTexture2D** ArcheTypeIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ArcheType_Icon");
        
        UBPL_UILibrary_C_GetUIArcheType_Icon_Params params {};
        params.InArcheType = InArcheType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ArcheTypeIcon != nullptr)
            *ArcheTypeIcon = params.ArcheTypeIcon;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ItemOptionTierColor
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1ItemOptionTierType                      OptionTierType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FLinearColor                          TierColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIItemOptionTierColor(M1Data::EM1ItemOptionTierType OptionTierType, CoreUObject::UObject* __WorldContext, CoreUObject::FLinearColor* TierColor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ItemOptionTierColor");
        
        UBPL_UILibrary_C_GetUIItemOptionTierColor_Params params {};
        params.OptionTierType = OptionTierType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (TierColor != nullptr)
            *TierColor = params.TierColor;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI WeaponClass_Icon
     *         Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1EquipItemClassType                      InEquipItemClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::TSoftObjectPtr<Engine::UTexture2D>     ElementalTypeIcon                                          (Parm, OutParm, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIWeaponClass_Icon(M1Data::EM1EquipItemClassType InEquipItemClass, CoreUObject::UObject* __WorldContext, BasicTypes::TSoftObjectPtr<Engine::UTexture2D>* ElementalTypeIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI WeaponClass_Icon");
        
        UBPL_UILibrary_C_GetUIWeaponClass_Icon_Params params {};
        params.InEquipItemClass = InEquipItemClass;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ElementalTypeIcon != nullptr)
            *ElementalTypeIcon = params.ElementalTypeIcon;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI CurrencyType_Icon
     *         Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1CurrencyType                            InCurrencyType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::TSoftObjectPtr<Engine::UTexture2D>     ElementalTypeIcon                                          (Parm, OutParm, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUICurrencyType_Icon(M1Data::EM1CurrencyType InCurrencyType, CoreUObject::UObject* __WorldContext, BasicTypes::TSoftObjectPtr<Engine::UTexture2D>* ElementalTypeIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI CurrencyType_Icon");
        
        UBPL_UILibrary_C_GetUICurrencyType_Icon_Params params {};
        params.InCurrencyType = InCurrencyType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ElementalTypeIcon != nullptr)
            *ElementalTypeIcon = params.ElementalTypeIcon;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Text
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1RoundsType                              InRoundsType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::FString                                ElementalTypeText                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIRoundsType_Text(M1Data::EM1RoundsType InRoundsType, CoreUObject::UObject* __WorldContext, BasicTypes::FString* ElementalTypeText)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Text");
        
        UBPL_UILibrary_C_GetUIRoundsType_Text_Params params {};
        params.InRoundsType = InRoundsType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ElementalTypeText != nullptr)
            *ElementalTypeText = params.ElementalTypeText;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Icon2
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1RoundsType                              InRoundsType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         Engine::UTexture2D*                                ElementalTypeIcon                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIRoundsType_Icon2(M1Data::EM1RoundsType InRoundsType, CoreUObject::UObject* __WorldContext, Engine::UTexture2D** ElementalTypeIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Icon2");
        
        UBPL_UILibrary_C_GetUIRoundsType_Icon2_Params params {};
        params.InRoundsType = InRoundsType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ElementalTypeIcon != nullptr)
            *ElementalTypeIcon = params.ElementalTypeIcon;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Icon
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1RoundsType                              InRoundsType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         Engine::UTexture2D*                                ElementalTypeIcon                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIRoundsType_Icon(M1Data::EM1RoundsType InRoundsType, CoreUObject::UObject* __WorldContext, Engine::UTexture2D** ElementalTypeIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Icon");
        
        UBPL_UILibrary_C_GetUIRoundsType_Icon_Params params {};
        params.InRoundsType = InRoundsType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ElementalTypeIcon != nullptr)
            *ElementalTypeIcon = params.ElementalTypeIcon;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Color
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1ElementalDamageChannel                  InElementalDamageType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FLinearColor                          ElementalTypeColor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIElemntalType_Color(M1Data::EM1ElementalDamageChannel InElementalDamageType, CoreUObject::UObject* __WorldContext, CoreUObject::FLinearColor* ElementalTypeColor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Color");
        
        UBPL_UILibrary_C_GetUIElemntalType_Color_Params params {};
        params.InElementalDamageType = InElementalDamageType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ElementalTypeColor != nullptr)
            *ElementalTypeColor = params.ElementalTypeColor;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Text
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1ElementalDamageChannel                  InElementalDamageType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::FString                                ElementalTypeText                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIElemntalType_Text(M1Data::EM1ElementalDamageChannel InElementalDamageType, CoreUObject::UObject* __WorldContext, BasicTypes::FString* ElementalTypeText)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Text");
        
        UBPL_UILibrary_C_GetUIElemntalType_Text_Params params {};
        params.InElementalDamageType = InElementalDamageType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ElementalTypeText != nullptr)
            *ElementalTypeText = params.ElementalTypeText;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Icon
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1ElementalDamageChannel                  InElementalDamageType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         Engine::UTexture2D*                                ElementalTypeIcon                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUIElemntalType_Icon(M1Data::EM1ElementalDamageChannel InElementalDamageType, CoreUObject::UObject* __WorldContext, Engine::UTexture2D** ElementalTypeIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Icon");
        
        UBPL_UILibrary_C_GetUIElemntalType_Icon_Params params {};
        params.InElementalDamageType = InElementalDamageType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ElementalTypeIcon != nullptr)
            *ElementalTypeIcon = params.ElementalTypeIcon;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI TierColor_Line
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1ItemTierType                            InItemTierType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FLinearColor                          TierColor_Line                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUITierColor_Line(M1Data::EM1ItemTierType InItemTierType, CoreUObject::UObject* __WorldContext, CoreUObject::FLinearColor* TierColor_Line)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI TierColor_Line");
        
        UBPL_UILibrary_C_GetUITierColor_Line_Params params {};
        params.InItemTierType = InItemTierType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (TierColor_Line != nullptr)
            *TierColor_Line = params.TierColor_Line;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI TierColor_Base
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1Data::EM1ItemTierType                            InItemTierType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FLinearColor                          TierColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_GetUITierColor_Base(M1Data::EM1ItemTierType InItemTierType, CoreUObject::UObject* __WorldContext, CoreUObject::FLinearColor* TierColor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI TierColor_Base");
        
        UBPL_UILibrary_C_GetUITierColor_Base_Params params {};
        params.InItemTierType = InItemTierType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (TierColor != nullptr)
            *TierColor = params.TierColor;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Set UI Rounds Color
     *         Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         UMG::UImage*                                       InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         M1Data::EM1RoundsType                              InRoundType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_SetUIRoundsColor(UMG::UImage* InImage, M1Data::EM1RoundsType InRoundType, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Set UI Rounds Color");
        
        UBPL_UILibrary_C_SetUIRoundsColor_Params params {};
        params.InImage = InImage;
        params.InRoundType = InRoundType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUICurrencyIcon
     *         Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         UMG::UImage*                                       Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         M1Data::EM1CurrencyType                            CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_SetUICurrencyIcon(UMG::UImage* Image, M1Data::EM1CurrencyType CurrencyType, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUICurrencyIcon");
        
        UBPL_UILibrary_C_SetUICurrencyIcon_Params params {};
        params.Image = Image;
        params.CurrencyType = CurrencyType;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIWarringColor_Text
     *         Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::UM1TextBlock*                                  InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UImage*                                       InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UBorder*                                      InBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_SetUIWarringColor_Text(M1::UM1TextBlock* InText, UMG::UImage* InImage, UMG::UBorder* InBorder, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIWarringColor_Text");
        
        UBPL_UILibrary_C_SetUIWarringColor_Text_Params params {};
        params.InText = InText;
        params.InImage = InImage;
        params.InBorder = InBorder;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIMaxMasteryColor_Text
     *         Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::UM1TextBlock*                                  InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UImage*                                       InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UBorder*                                      InBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_SetUIMaxMasteryColor_Text(M1::UM1TextBlock* InText, UMG::UImage* InImage, UMG::UBorder* InBorder, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIMaxMasteryColor_Text");
        
        UBPL_UILibrary_C_SetUIMaxMasteryColor_Text_Params params {};
        params.InText = InText;
        params.InImage = InImage;
        params.InBorder = InBorder;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIMaxCharacterColor_Text
     *         Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::UM1TextBlock*                                  InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UImage*                                       InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UBorder*                                      InBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_SetUIMaxCharacterColor_Text(M1::UM1TextBlock* InText, UMG::UImage* InImage, UMG::UBorder* InBorder, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIMaxCharacterColor_Text");
        
        UBPL_UILibrary_C_SetUIMaxCharacterColor_Text_Params params {};
        params.InText = InText;
        params.InImage = InImage;
        params.InBorder = InBorder;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIKeyColor_Material
     *         Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::UM1TextBlock*                                  InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UImage*                                       InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UBorder*                                      InBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_SetUIKeyColor_Material(M1::UM1TextBlock* InText, UMG::UImage* InImage, UMG::UBorder* InBorder, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIKeyColor_Material");
        
        UBPL_UILibrary_C_SetUIKeyColor_Material_Params params {};
        params.InText = InText;
        params.InImage = InImage;
        params.InBorder = InBorder;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIKeyColor
     *         Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::UM1TextBlock*                                  InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UImage*                                       InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         UMG::UBorder*                                      InBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UBPL_UILibrary_C::STATIC_SetUIKeyColor(M1::UM1TextBlock* InText, UMG::UImage* InImage, UMG::UBorder* InBorder, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIKeyColor");
        
        UBPL_UILibrary_C_SetUIKeyColor_Params params {};
        params.InText = InText;
        params.InImage = InImage;
        params.InBorder = InBorder;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
