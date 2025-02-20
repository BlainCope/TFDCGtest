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
#include "Headers/AbilityFunctionLibrary_PARAMS.h"
#include "Headers/AbilityFunctionLibrary_UAbilityFunctionLibrary_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AbilityFunctionLibrary
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.FindRandomTeleportLocationFromSpawnTransformMaker
     *         Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         Engine::AActor*                                    WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::FName                                  InMakerName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_FindRandomTeleportLocationFromSpawnTransformMaker(Engine::AActor* WorldContext, const BasicTypes::FName& InMakerName, CoreUObject::UObject* __WorldContext, CoreUObject::FVector* RandomLocation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.FindRandomTeleportLocationFromSpawnTransformMaker");
        
        UAbilityFunctionLibrary_C_FindRandomTeleportLocationFromSpawnTransformMaker_Params params {};
        params.WorldContext = WorldContext;
        params.InMakerName = InMakerName;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (RandomLocation != nullptr)
            *RandomLocation = params.RandomLocation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.TryLoadAnimSequence
     *         Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         BasicTypes::FName                                  AssetPath                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         Engine::UAnimSequence*                             AnimSequence                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_TryLoadAnimSequence(const BasicTypes::FName& AssetPath, CoreUObject::UObject* __WorldContext, Engine::UAnimSequence** AnimSequence)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.TryLoadAnimSequence");
        
        UAbilityFunctionLibrary_C_TryLoadAnimSequence_Params params {};
        params.AssetPath = AssetPath;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (AnimSequence != nullptr)
            *AnimSequence = params.AnimSequence;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.SummonMonster
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::AM1Monster*                                    Master                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::FName                                  MonsterRowName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FTransform                            TargetTransform                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         M1::AM1Monster*                                    SpawnedMonster                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_SummonMonster(M1::AM1Monster* Master, const BasicTypes::FName& MonsterRowName, int32_t Level, const CoreUObject::FTransform& TargetTransform, CoreUObject::UObject* __WorldContext, M1::AM1Monster** SpawnedMonster)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.SummonMonster");
        
        UAbilityFunctionLibrary_C_SummonMonster_Params params {};
        params.Master = Master;
        params.MonsterRowName = MonsterRowName;
        params.Level = Level;
        params.TargetTransform = TargetTransform;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (SpawnedMonster != nullptr)
            *SpawnedMonster = params.SpawnedMonster;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeDecalParams
     *         Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         double                                             Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               UseScaledSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::TArray<M1::FM1FXScalarParam>           ReturnParams                                               (Parm, OutParm)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_MakeDecalParams(double Duration, double Size, double Height, bool UseScaledSize, CoreUObject::UObject* __WorldContext, BasicTypes::TArray<M1::FM1FXScalarParam>* ReturnParams)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeDecalParams");
        
        UAbilityFunctionLibrary_C_MakeDecalParams_Params params {};
        params.Duration = Duration;
        params.Size = Size;
        params.Height = Height;
        params.UseScaledSize = UseScaledSize;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (ReturnParams != nullptr)
            *ReturnParams = params.ReturnParams;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeMaxHpOperationParam
     *         Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         double                                             MaxHPRatio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         M1::FM1AbilityOperationParam                       Result                                                     (Parm, OutParm, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_MakeMaxHpOperationParam(double MaxHPRatio, CoreUObject::UObject* __WorldContext, M1::FM1AbilityOperationParam* Result)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeMaxHpOperationParam");
        
        UAbilityFunctionLibrary_C_MakeMaxHpOperationParam_Params params {};
        params.MaxHPRatio = MaxHPRatio;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Result != nullptr)
            *Result = params.Result;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeMaxHpAbilityParam
     *         Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         double                                             MaxHPRatio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         M1Data::FM1AbilityParamData                        Result                                                     (Parm, OutParm)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_MakeMaxHpAbilityParam(double MaxHPRatio, CoreUObject::UObject* __WorldContext, M1Data::FM1AbilityParamData* Result)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.MakeMaxHpAbilityParam");
        
        UAbilityFunctionLibrary_C_MakeMaxHpAbilityParam_Params params {};
        params.MaxHPRatio = MaxHPRatio;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Result != nullptr)
            *Result = params.Result;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.GetAIHomeLocation
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         M1::UM1Ability*                                    Ability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               HomeLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_GetAIHomeLocation(M1::UM1Ability* Ability, CoreUObject::UObject* __WorldContext, CoreUObject::FVector* HomeLocation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.GetAIHomeLocation");
        
        UAbilityFunctionLibrary_C_GetAIHomeLocation_Params params {};
        params.Ability = Ability;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (HomeLocation != nullptr)
            *HomeLocation = params.HomeLocation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.CreateAOEActorManager
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::UObject*                              Outer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         Engine::UPrimitiveComponent*                       PrimitiveComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         M1Data::EM1RelationsCheckType                      RelationsType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         GameplayTags::FGameplayTagContainer                SEForwardingContextTags                                    (BlueprintVisible, BlueprintReadOnly, Parm)
     *         GameplayTags::FGameplayTagContainer                SEInvokeTags                                               (BlueprintVisible, BlueprintReadOnly, Parm)
     *         float                                              Period                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         GameplayTags::FGameplayTagContainer                PeriodOpTags                                               (BlueprintVisible, BlueprintReadOnly, Parm)
     *         BasicTypes::FName                                  PeriodHitFXName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               bStartOverlap                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         bool                                               bNeedEndSE                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         M1AOECollisionManager::UM1AOECollisionManager_C*   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
     */
    M1AOECollisionManager::UM1AOECollisionManager_C* UAbilityFunctionLibrary_C::STATIC_CreateAOEActorManager(CoreUObject::UObject* Outer, Engine::UPrimitiveComponent* PrimitiveComp, M1Data::EM1RelationsCheckType RelationsType, const GameplayTags::FGameplayTagContainer& SEForwardingContextTags, const GameplayTags::FGameplayTagContainer& SEInvokeTags, float Period, const GameplayTags::FGameplayTagContainer& PeriodOpTags, const BasicTypes::FName& PeriodHitFXName, bool bStartOverlap, bool bNeedEndSE, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.CreateAOEActorManager");
        
        UAbilityFunctionLibrary_C_CreateAOEActorManager_Params params {};
        params.Outer = Outer;
        params.PrimitiveComp = PrimitiveComp;
        params.RelationsType = RelationsType;
        params.SEForwardingContextTags = SEForwardingContextTags;
        params.SEInvokeTags = SEInvokeTags;
        params.Period = Period;
        params.PeriodOpTags = PeriodOpTags;
        params.PeriodHitFXName = PeriodHitFXName;
        params.bStartOverlap = bStartOverlap;
        params.bNeedEndSE = bNeedEndSE;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.InvokeDotDamageStatusEffect
     *         Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::TScriptInterface<M1::IM1AbilityBase>   InAbility                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         GameplayTags::FGameplayTagContainer                ForwardingOperationTags                                    (BlueprintVisible, BlueprintReadOnly, Parm)
     *         GameplayTags::FGameplayTagContainer                InTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
     *         M1Data::FM1ScaledInteger                           Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
     *         Engine::AActor*                                    TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_InvokeDotDamageStatusEffect(const BasicTypes::TScriptInterface<M1::IM1AbilityBase>& InAbility, const GameplayTags::FGameplayTagContainer& ForwardingOperationTags, const GameplayTags::FGameplayTagContainer& InTags, const M1Data::FM1ScaledInteger& Damage, Engine::AActor* TargetActor, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.InvokeDotDamageStatusEffect");
        
        UAbilityFunctionLibrary_C_InvokeDotDamageStatusEffect_Params params {};
        params.InAbility = InAbility;
        params.ForwardingOperationTags = ForwardingOperationTags;
        params.InTags = InTags;
        params.Damage = Damage;
        params.TargetActor = TargetActor;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.CalcSummonsFireStartEndLocation
     *         Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    InOwner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               InTargetLoc                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               InFireSocketLoc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               InAxisSocketLoc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         int32_t                                            InSpreadSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               FireLoc                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               EndLoc                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAbilityFunctionLibrary_C::STATIC_CalcSummonsFireStartEndLocation(Engine::AActor* InOwner, const CoreUObject::FVector& InTargetLoc, const CoreUObject::FVector& InFireSocketLoc, const CoreUObject::FVector& InAxisSocketLoc, int32_t InSpreadSize, CoreUObject::UObject* __WorldContext, CoreUObject::FVector* FireLoc, CoreUObject::FVector* EndLoc)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.CalcSummonsFireStartEndLocation");
        
        UAbilityFunctionLibrary_C_CalcSummonsFireStartEndLocation_Params params {};
        params.InOwner = InOwner;
        params.InTargetLoc = InTargetLoc;
        params.InFireSocketLoc = InFireSocketLoc;
        params.InAxisSocketLoc = InAxisSocketLoc;
        params.InSpreadSize = InSpreadSize;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (FireLoc != nullptr)
            *FireLoc = params.FireLoc;
        if (EndLoc != nullptr)
            *EndLoc = params.EndLoc;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.GetTransformForAbilityActor
     *         Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         M1::UM1Ability*                                    InAbility                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::FName                                  InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::UObject*                              __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FTransform                            ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     */
    CoreUObject::FTransform UAbilityFunctionLibrary_C::STATIC_GetTransformForAbilityActor(M1::UM1Ability* InAbility, const BasicTypes::FName& InSocketName, CoreUObject::UObject* __WorldContext)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/AbilityFunctionLibrary.AbilityFunctionLibrary_C.GetTransformForAbilityActor");
        
        UAbilityFunctionLibrary_C_GetTransformForAbilityActor_Params params {};
        params.InAbility = InAbility;
        params.InSocketName = InSocketName;
        params.__WorldContext = __WorldContext;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
