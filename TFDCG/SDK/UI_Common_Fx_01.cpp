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
#include "Headers/UI_Common_Fx_01_PARAMS.h"
#include "Headers/UI_Common_Fx_01_UUI_Common_Fx_01_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Common_Fx_01
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Common_Ef/UI_Common_Fx_01.UI_Common_Fx_01_C.PreConstruct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_Common_Fx_01_C::PreConstruct(bool IsDesignTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Common_Ef/UI_Common_Fx_01.UI_Common_Fx_01_C.PreConstruct");
        
        UUI_Common_Fx_01_C_PreConstruct_Params params {};
        params.IsDesignTime = IsDesignTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Common_Ef/UI_Common_Fx_01.UI_Common_Fx_01_C.ExecuteUbergraph_UI_Common_Fx_01
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_Common_Fx_01_C::ExecuteUbergraph_UI_Common_Fx_01(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Common_Ef/UI_Common_Fx_01.UI_Common_Fx_01_C.ExecuteUbergraph_UI_Common_Fx_01");
        
        UUI_Common_Fx_01_C_ExecuteUbergraph_UI_Common_Fx_01_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
