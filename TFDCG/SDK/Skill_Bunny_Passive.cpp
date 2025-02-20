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
#include "Headers/Skill_Bunny_Passive_PARAMS.h"
#include "Headers/Skill_Bunny_Passive_USkill_Bunny_Passive_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Skill_Bunny_Passive
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.EndDecreaseAsyncTask
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::EndDecreaseAsyncTask()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.EndDecreaseAsyncTask");
        
        USkill_Bunny_Passive_C_EndDecreaseAsyncTask_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Full Guage Leaving Sound
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::PlayFullGuageLeavingSound()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Full Guage Leaving Sound");
        
        USkill_Bunny_Passive_C_PlayFullGuageLeavingSound_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Full Guage Entering Sound
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::PlayFullGuageEnteringSound()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Full Guage Entering Sound");
        
        USkill_Bunny_Passive_C_PlayFullGuageEnteringSound_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Land Sound
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::PlayLandSound()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Land Sound");
        
        USkill_Bunny_Passive_C_PlayLandSound_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Hold Sound
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::PlayHoldSound()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Hold Sound");
        
        USkill_Bunny_Passive_C_PlayHoldSound_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Decrease Sound
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::PlayDecreaseSound()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Decrease Sound");
        
        USkill_Bunny_Passive_C_PlayDecreaseSound_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Increase Sound
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::PlayIncreaseSound()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Increase Sound");
        
        USkill_Bunny_Passive_C_PlayIncreaseSound_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Deactivation Sound
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::PlayDeactivationSound()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Deactivation Sound");
        
        USkill_Bunny_Passive_C_PlayDeactivationSound_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Activation Sound
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::PlayActivationSound()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Play Activation Sound");
        
        USkill_Bunny_Passive_C_PlayActivationSound_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.UpdateLoopVFX
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::UpdateLoopVFX()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.UpdateLoopVFX");
        
        USkill_Bunny_Passive_C_UpdateLoopVFX_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnChangedGauge
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1Data::EM1StatType                                StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnChangedGauge(M1Data::EM1StatType StatType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnChangedGauge");
        
        USkill_Bunny_Passive_C_OnChangedGauge_Params params {};
        params.StatType = StatType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.IsMoving
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::IsMoving(bool* Result)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.IsMoving");
        
        USkill_Bunny_Passive_C_IsMoving_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Result != nullptr)
            *Result = params.Result;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnRemovedStatus
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::UM1StatusEffect*                               StatusEffect                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnRemovedStatus(M1::UM1StatusEffect* StatusEffect)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnRemovedStatus");
        
        USkill_Bunny_Passive_C_OnRemovedStatus_Params params {};
        params.StatusEffect = StatusEffect;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.StartHoldingGauge
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::StartHoldingGauge()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.StartHoldingGauge");
        
        USkill_Bunny_Passive_C_StartHoldingGauge_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.StartDecreaseGauge
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::StartDecreaseGauge()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.StartDecreaseGauge");
        
        USkill_Bunny_Passive_C_StartDecreaseGauge_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.StartIncreaseGauge
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::StartIncreaseGauge()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.StartIncreaseGauge");
        
        USkill_Bunny_Passive_C_StartIncreaseGauge_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnLandingExplosion
     *         Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnLandingExplosion()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnLandingExplosion");
        
        USkill_Bunny_Passive_C_OnLandingExplosion_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.MakeLandingExplosionParams
     *         Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         GameplayTags::FGameplayTag                         OpTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
     *         M1::FM1AbilityOperationParam                       OpParam                                                    (Parm, OutParm, ContainsInstancedReference)
     *         double                                             Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::FName                                  FXName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::MakeLandingExplosionParams(GameplayTags::FGameplayTag* OpTag, M1::FM1AbilityOperationParam* OpParam, double* Radius, BasicTypes::FName* FXName)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.MakeLandingExplosionParams");
        
        USkill_Bunny_Passive_C_MakeLandingExplosionParams_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OpTag != nullptr)
            *OpTag = params.OpTag;
        if (OpParam != nullptr)
            *OpParam = params.OpParam;
        if (Radius != nullptr)
            *Radius = params.Radius;
        if (FXName != nullptr)
            *FXName = params.FXName;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnDoubleJump
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnDoubleJump()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnDoubleJump");
        
        USkill_Bunny_Passive_C_OnDoubleJump_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.IsStopMoving
     *         Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::IsStopMoving(bool* Result)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.IsStopMoving");
        
        USkill_Bunny_Passive_C_IsStopMoving_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Result != nullptr)
            *Result = params.Result;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.IsStartMoving
     *         Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::IsStartMoving(bool* Result)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.IsStartMoving");
        
        USkill_Bunny_Passive_C_IsStartMoving_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Result != nullptr)
            *Result = params.Result;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Init
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::Init()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.Init");
        
        USkill_Bunny_Passive_C_Init_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnFinish_0D2FCA1545A6896DE5C053835CFE4803
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnFinish_0D2FCA1545A6896DE5C053835CFE4803()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnFinish_0D2FCA1545A6896DE5C053835CFE4803");
        
        USkill_Bunny_Passive_C_OnFinish_0D2FCA1545A6896DE5C053835CFE4803_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnAbilityEvent_3C54BF444F4B2DFA3DDB0ABF06D3386E
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::FM1AbilityEvent                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnAbilityEvent_3C54BF444F4B2DFA3DDB0ABF06D3386E(const M1::FM1AbilityEvent& Event)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnAbilityEvent_3C54BF444F4B2DFA3DDB0ABF06D3386E");
        
        USkill_Bunny_Passive_C_OnAbilityEvent_3C54BF444F4B2DFA3DDB0ABF06D3386E_Params params {};
        params.Event = Event;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnAbilityEvent_7750724D4E64E3C330A5AFAE95BBCF70
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::FM1AbilityEvent                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnAbilityEvent_7750724D4E64E3C330A5AFAE95BBCF70(const M1::FM1AbilityEvent& Event)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnAbilityEvent_7750724D4E64E3C330A5AFAE95BBCF70");
        
        USkill_Bunny_Passive_C_OnAbilityEvent_7750724D4E64E3C330A5AFAE95BBCF70_Params params {};
        params.Event = Event;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnEvent_134BDA8C445F3F990A76638F4D6E5055
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         GameplayTags::FGameplayTag                         InTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
     *         bool                                               InAdded                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnEvent_134BDA8C445F3F990A76638F4D6E5055(const GameplayTags::FGameplayTag& InTag, bool InAdded)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnEvent_134BDA8C445F3F990A76638F4D6E5055");
        
        USkill_Bunny_Passive_C_OnEvent_134BDA8C445F3F990A76638F4D6E5055_Params params {};
        params.InTag = InTag;
        params.InAdded = InAdded;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.BP_OnActivated
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::BP_OnActivated()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.BP_OnActivated");
        
        USkill_Bunny_Passive_C_BP_OnActivated_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnTick
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnTick(float DeltaSeconds)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnTick");
        
        USkill_Bunny_Passive_C_OnTick_Params params {};
        params.DeltaSeconds = DeltaSeconds;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.BP_OnDeactivated
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         bool                                               bCancelled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::BP_OnDeactivated(bool bCancelled)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.BP_OnDeactivated");
        
        USkill_Bunny_Passive_C_BP_OnDeactivated_Params params {};
        params.bCancelled = bCancelled;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnStartMoving
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnStartMoving()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnStartMoving");
        
        USkill_Bunny_Passive_C_OnStartMoving_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.CheckOutStartedMovingOnce
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::CheckOutStartedMovingOnce()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.CheckOutStartedMovingOnce");
        
        USkill_Bunny_Passive_C_CheckOutStartedMovingOnce_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnStopMoving
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnStopMoving()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnStopMoving");
        
        USkill_Bunny_Passive_C_OnStopMoving_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnDecreaseDelayFinished
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnDecreaseDelayFinished()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnDecreaseDelayFinished");
        
        USkill_Bunny_Passive_C_OnDecreaseDelayFinished_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnDeboneAttached
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnDeboneAttached()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnDeboneAttached");
        
        USkill_Bunny_Passive_C_OnDeboneAttached_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnDeboneDetached
     *         Flags  -> (BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::OnDeboneDetached()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.OnDeboneDetached");
        
        USkill_Bunny_Passive_C_OnDeboneDetached_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.ExecuteUbergraph_Skill_Bunny_Passive
     *         Flags  -> (Final, HasDefaults)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void USkill_Bunny_Passive_C::ExecuteUbergraph_Skill_Bunny_Passive(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Bunny/Skill_Bunny_Passive.Skill_Bunny_Passive_C.ExecuteUbergraph_Skill_Bunny_Passive");
        
        USkill_Bunny_Passive_C_ExecuteUbergraph_Skill_Bunny_Passive_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
