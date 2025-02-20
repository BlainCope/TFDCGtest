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
#include "Headers/Ability_MissionTarget_Immune_PARAMS.h"
#include "Headers/Ability_MissionTarget_Immune_UAbility_MissionTarget_Immune_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Ability_MissionTarget_Immune
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Mission/TargetActor/Ability/Ability_MissionTarget_Immune.Ability_MissionTarget_Immune_C.OnAbilityEvent_7A1CF11F4F2643CD0401179AA7CFA1A3
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::FM1AbilityEvent                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
     *         void                                               ReturnValue
     */
    void UAbility_MissionTarget_Immune_C::OnAbilityEvent_7A1CF11F4F2643CD0401179AA7CFA1A3(const M1::FM1AbilityEvent& Event)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Mission/TargetActor/Ability/Ability_MissionTarget_Immune.Ability_MissionTarget_Immune_C.OnAbilityEvent_7A1CF11F4F2643CD0401179AA7CFA1A3");
        
        UAbility_MissionTarget_Immune_C_OnAbilityEvent_7A1CF11F4F2643CD0401179AA7CFA1A3_Params params {};
        params.Event = Event;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Mission/TargetActor/Ability/Ability_MissionTarget_Immune.Ability_MissionTarget_Immune_C.BP_OnActivated
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UAbility_MissionTarget_Immune_C::BP_OnActivated()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Mission/TargetActor/Ability/Ability_MissionTarget_Immune.Ability_MissionTarget_Immune_C.BP_OnActivated");
        
        UAbility_MissionTarget_Immune_C_BP_OnActivated_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Mission/TargetActor/Ability/Ability_MissionTarget_Immune.Ability_MissionTarget_Immune_C.BP_OnDeactivated
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         bool                                               bCancelled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbility_MissionTarget_Immune_C::BP_OnDeactivated(bool bCancelled)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Mission/TargetActor/Ability/Ability_MissionTarget_Immune.Ability_MissionTarget_Immune_C.BP_OnDeactivated");
        
        UAbility_MissionTarget_Immune_C_BP_OnDeactivated_Params params {};
        params.bCancelled = bCancelled;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Mission/TargetActor/Ability/Ability_MissionTarget_Immune.Ability_MissionTarget_Immune_C.ExecuteUbergraph_Ability_MissionTarget_Immune
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbility_MissionTarget_Immune_C::ExecuteUbergraph_Ability_MissionTarget_Immune(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Mission/TargetActor/Ability/Ability_MissionTarget_Immune.Ability_MissionTarget_Immune_C.ExecuteUbergraph_Ability_MissionTarget_Immune");
        
        UAbility_MissionTarget_Immune_C_ExecuteUbergraph_Ability_MissionTarget_Immune_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
