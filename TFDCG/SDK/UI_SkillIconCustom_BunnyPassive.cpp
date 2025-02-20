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
#include "Headers/UI_SkillIconCustom_BunnyPassive_PARAMS.h"
#include "Headers/UI_SkillIconCustom_BunnyPassive_UUI_SkillIconCustom_BunnyPassive_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_SkillIconCustom_BunnyPassive
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/SkillIconCustom/UI_SkillIconCustom_BunnyPassive.UI_SkillIconCustom_BunnyPassive_C.Tick
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         SlateCore::FGeometry                               MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
     *         float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_SkillIconCustom_BunnyPassive_C::Tick(const SlateCore::FGeometry& MyGeometry, float InDeltaTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/SkillIconCustom/UI_SkillIconCustom_BunnyPassive.UI_SkillIconCustom_BunnyPassive_C.Tick");
        
        UUI_SkillIconCustom_BunnyPassive_C_Tick_Params params {};
        params.MyGeometry = MyGeometry;
        params.InDeltaTime = InDeltaTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/SkillIconCustom/UI_SkillIconCustom_BunnyPassive.UI_SkillIconCustom_BunnyPassive_C.SetDataImpl
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         M1::UM1UIData*                                     InData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_SkillIconCustom_BunnyPassive_C::SetDataImpl(M1::UM1UIData* InData)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/SkillIconCustom/UI_SkillIconCustom_BunnyPassive.UI_SkillIconCustom_BunnyPassive_C.SetDataImpl");
        
        UUI_SkillIconCustom_BunnyPassive_C_SetDataImpl_Params params {};
        params.InData = InData;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/SkillIconCustom/UI_SkillIconCustom_BunnyPassive.UI_SkillIconCustom_BunnyPassive_C.OnChangedCommonGauge
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1Data::EM1StatType                                StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_SkillIconCustom_BunnyPassive_C::OnChangedCommonGauge(M1Data::EM1StatType StatType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/SkillIconCustom/UI_SkillIconCustom_BunnyPassive.UI_SkillIconCustom_BunnyPassive_C.OnChangedCommonGauge");
        
        UUI_SkillIconCustom_BunnyPassive_C_OnChangedCommonGauge_Params params {};
        params.StatType = StatType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/SkillIconCustom/UI_SkillIconCustom_BunnyPassive.UI_SkillIconCustom_BunnyPassive_C.ExecuteUbergraph_UI_SkillIconCustom_BunnyPassive
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_SkillIconCustom_BunnyPassive_C::ExecuteUbergraph_UI_SkillIconCustom_BunnyPassive(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/SkillIconCustom/UI_SkillIconCustom_BunnyPassive.UI_SkillIconCustom_BunnyPassive_C.ExecuteUbergraph_UI_SkillIconCustom_BunnyPassive");
        
        UUI_SkillIconCustom_BunnyPassive_C_ExecuteUbergraph_UI_SkillIconCustom_BunnyPassive_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
