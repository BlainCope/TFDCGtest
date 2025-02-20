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
#include "Headers/Ability_ElementalDamage_PARAMS.h"
#include "Headers/Ability_ElementalDamage_UAbility_ElementalDamage_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Ability_ElementalDamage
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Ability_ElementalDamage.Ability_ElementalDamage_C.OnEvent_BE0F038B44F0F6C67C165ABA2878E835
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::FM1CalcDamageInfo                              DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void UAbility_ElementalDamage_C::OnEvent_BE0F038B44F0F6C67C165ABA2878E835(const M1::FM1CalcDamageInfo& DamageInfo)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Ability_ElementalDamage.Ability_ElementalDamage_C.OnEvent_BE0F038B44F0F6C67C165ABA2878E835");
        
        UAbility_ElementalDamage_C_OnEvent_BE0F038B44F0F6C67C165ABA2878E835_Params params {};
        params.DamageInfo = DamageInfo;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Ability_ElementalDamage.Ability_ElementalDamage_C.AbilityEvent_HitTarget
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::FM1CalcDamageInfo                              DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void UAbility_ElementalDamage_C::AbilityEvent_HitTarget(const M1::FM1CalcDamageInfo& DamageInfo)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Ability_ElementalDamage.Ability_ElementalDamage_C.AbilityEvent_HitTarget");
        
        UAbility_ElementalDamage_C_AbilityEvent_HitTarget_Params params {};
        params.DamageInfo = DamageInfo;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Ability_ElementalDamage.Ability_ElementalDamage_C.BP_OnActivated
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UAbility_ElementalDamage_C::BP_OnActivated()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Ability_ElementalDamage.Ability_ElementalDamage_C.BP_OnActivated");
        
        UAbility_ElementalDamage_C_BP_OnActivated_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Ability_ElementalDamage.Ability_ElementalDamage_C.ExecuteUbergraph_Ability_ElementalDamage
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbility_ElementalDamage_C::ExecuteUbergraph_Ability_ElementalDamage(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Ability_ElementalDamage.Ability_ElementalDamage_C.ExecuteUbergraph_Ability_ElementalDamage");
        
        UAbility_ElementalDamage_C_ExecuteUbergraph_Ability_ElementalDamage_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
