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
#include "Headers/UI_GameTop_Levelup_Stat_PARAMS.h"
#include "Headers/UI_GameTop_Levelup_Stat_UUI_GameTop_Levelup_Stat_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_GameTop_Levelup_Stat
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.PreConstruct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameTop_Levelup_Stat_C::PreConstruct(bool IsDesignTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.PreConstruct");
        
        UUI_GameTop_Levelup_Stat_C_PreConstruct_Params params {};
        params.IsDesignTime = IsDesignTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.PlayStatOpenAnim
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         double                                             InDelay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameTop_Levelup_Stat_C::PlayStatOpenAnim(double InDelay)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.PlayStatOpenAnim");
        
        UUI_GameTop_Levelup_Stat_C_PlayStatOpenAnim_Params params {};
        params.InDelay = InDelay;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Game/Widgets/UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.ExecuteUbergraph_UI_GameTop_Levelup_Stat
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_GameTop_Levelup_Stat_C::ExecuteUbergraph_UI_GameTop_Levelup_Stat(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Game/Widgets/UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.ExecuteUbergraph_UI_GameTop_Levelup_Stat");
        
        UUI_GameTop_Levelup_Stat_C_ExecuteUbergraph_UI_GameTop_Levelup_Stat_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
