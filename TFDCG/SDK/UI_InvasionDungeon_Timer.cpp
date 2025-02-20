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
#include "Headers/UI_InvasionDungeon_Timer_PARAMS.h"
#include "Headers/UI_InvasionDungeon_Timer_UUI_InvasionDungeon_Timer_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_InvasionDungeon_Timer
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Mission/Widgets/UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.UISet_TextColor
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Last1minute                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_InvasionDungeon_Timer_C::UISet_TextColor(bool Last1minute)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Mission/Widgets/UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.UISet_TextColor");
        
        UUI_InvasionDungeon_Timer_C_UISet_TextColor_Params params {};
        params.Last1minute = Last1minute;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Mission/Widgets/UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.ExecuteUbergraph_UI_InvasionDungeon_Timer
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_InvasionDungeon_Timer_C::ExecuteUbergraph_UI_InvasionDungeon_Timer(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Mission/Widgets/UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.ExecuteUbergraph_UI_InvasionDungeon_Timer");
        
        UUI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
