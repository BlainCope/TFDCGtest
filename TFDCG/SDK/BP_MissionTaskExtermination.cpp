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
#include "Headers/BP_MissionTaskExtermination_PARAMS.h"
#include "Headers/BP_MissionTaskExtermination_ABP_MissionTaskExtermination_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_MissionTaskExtermination
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Mission/BP_MissionTaskExtermination.BP_MissionTaskExtermination_C.BP_ShouldBeVisibleOnLocal
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_MissionTaskExtermination_C::BP_ShouldBeVisibleOnLocal(bool InVisible)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Mission/BP_MissionTaskExtermination.BP_MissionTaskExtermination_C.BP_ShouldBeVisibleOnLocal");
        
        ABP_MissionTaskExtermination_C_BP_ShouldBeVisibleOnLocal_Params params {};
        params.InVisible = InVisible;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Mission/BP_MissionTaskExtermination.BP_MissionTaskExtermination_C.ExecuteUbergraph_BP_MissionTaskExtermination
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ABP_MissionTaskExtermination_C::ExecuteUbergraph_BP_MissionTaskExtermination(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Mission/BP_MissionTaskExtermination.BP_MissionTaskExtermination_C.ExecuteUbergraph_BP_MissionTaskExtermination");
        
        ABP_MissionTaskExtermination_C_ExecuteUbergraph_BP_MissionTaskExtermination_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
