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
#include "Headers/UI_ActionIconBase_PARAMS.h"
#include "Headers/UI_ActionIconBase_UUI_ActionIconBase_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_ActionIconBase
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.GetIconOverlay
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         UMG::UOverlay*                                     CustomPanel_IconOverlay                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ActionIconBase_C::GetIconOverlay(UMG::UOverlay** CustomPanel_IconOverlay)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.GetIconOverlay");
        
        UUI_ActionIconBase_C_GetIconOverlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (CustomPanel_IconOverlay != nullptr)
            *CustomPanel_IconOverlay = params.CustomPanel_IconOverlay;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.Update Icon
     *         Flags  -> (Private, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         UMG::UImage*                                       InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::TSoftObjectPtr<Engine::UTexture2D>     InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ActionIconBase_C::UpdateIcon(UMG::UImage* InImage, BasicTypes::TSoftObjectPtr<Engine::UTexture2D> InIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.Update Icon");
        
        UUI_ActionIconBase_C_UpdateIcon_Params params {};
        params.InImage = InImage;
        params.InIcon = InIcon;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.SetActive
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Inactive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ActionIconBase_C::SetActive(bool Inactive)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.SetActive");
        
        UUI_ActionIconBase_C_SetActive_Params params {};
        params.Inactive = Inactive;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.SetLevel
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ActionIconBase_C::SetLevel(int32_t InLevel)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.SetLevel");
        
        UUI_ActionIconBase_C_SetLevel_Params params {};
        params.InLevel = InLevel;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.UpdateIcons
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::TSoftObjectPtr<Engine::UTexture2D>     InNormalIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
     *         BasicTypes::TSoftObjectPtr<Engine::UTexture2D>     InActiveIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ActionIconBase_C::UpdateIcons(BasicTypes::TSoftObjectPtr<Engine::UTexture2D> InNormalIcon, BasicTypes::TSoftObjectPtr<Engine::UTexture2D> InActiveIcon)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.UpdateIcons");
        
        UUI_ActionIconBase_C_UpdateIcons_Params params {};
        params.InNormalIcon = InNormalIcon;
        params.InActiveIcon = InActiveIcon;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.PreConstruct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ActionIconBase_C::PreConstruct(bool IsDesignTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.PreConstruct");
        
        UUI_ActionIconBase_C_PreConstruct_Params params {};
        params.IsDesignTime = IsDesignTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.ExecuteUbergraph_UI_ActionIconBase
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_ActionIconBase_C::ExecuteUbergraph_UI_ActionIconBase(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Components/UI_ActionIconBase.UI_ActionIconBase_C.ExecuteUbergraph_UI_ActionIconBase");
        
        UUI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
