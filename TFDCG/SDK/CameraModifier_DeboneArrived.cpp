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
#include "Headers/CameraModifier_DeboneArrived_PARAMS.h"
#include "Headers/CameraModifier_DeboneArrived_UCameraModifier_DeboneArrived_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CameraModifier_DeboneArrived
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.StopCameraClamp
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         bool                                               bStop                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::StopCameraClamp(bool bStop)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.StopCameraClamp");
        
        UCameraModifier_DeboneArrived_C_StopCameraClamp_Params params {};
        params.bStop = bStop;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFully
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::InitFully(CoreUObject::FVector* OutLocation, CoreUObject::FRotator* OutRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFully");
        
        UCameraModifier_DeboneArrived_C_InitFully_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutLocation != nullptr)
            *OutLocation = params.OutLocation;
        if (OutRotation != nullptr)
            *OutRotation = params.OutRotation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFadeOut
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::InitFadeOut()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFadeOut");
        
        UCameraModifier_DeboneArrived_C_InitFadeOut_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFadeIn
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              InRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::InitFadeIn(const CoreUObject::FVector& InLocation, const CoreUObject::FRotator& InRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFadeIn");
        
        UCameraModifier_DeboneArrived_C_InitFadeIn_Params params {};
        params.InLocation = InLocation;
        params.InRotation = InRotation;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.GetCurvedAlpha
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         double                                             _float_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::GetCurvedAlpha(double* _float_)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.GetCurvedAlpha");
        
        UCameraModifier_DeboneArrived_C_GetCurvedAlpha_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (_float_ != nullptr)
            *_float_ = params._float_;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.UpdateAfterViews
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              InRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         CoreUObject::FVector                               OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::UpdateAfterViews(const CoreUObject::FVector& InLocation, const CoreUObject::FRotator& InRotation, CoreUObject::FVector* OutLocation, CoreUObject::FRotator* OutRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.UpdateAfterViews");
        
        UCameraModifier_DeboneArrived_C_UpdateAfterViews_Params params {};
        params.InLocation = InLocation;
        params.InRotation = InRotation;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutLocation != nullptr)
            *OutLocation = params.OutLocation;
        if (OutRotation != nullptr)
            *OutRotation = params.OutRotation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessZero
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               InViewLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              InViewRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         CoreUObject::FVector                               OutViewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              OutViewRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::ProcessZero(const CoreUObject::FVector& InViewLocation, const CoreUObject::FRotator& InViewRotation, CoreUObject::FVector* OutViewLocation, CoreUObject::FRotator* OutViewRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessZero");
        
        UCameraModifier_DeboneArrived_C_ProcessZero_Params params {};
        params.InViewLocation = InViewLocation;
        params.InViewRotation = InViewRotation;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutViewLocation != nullptr)
            *OutViewLocation = params.OutViewLocation;
        if (OutViewRotation != nullptr)
            *OutViewRotation = params.OutViewRotation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFully
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               InViewLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              InViewRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               OutViewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              OutViewRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::ProcessFully(const CoreUObject::FVector& InViewLocation, const CoreUObject::FRotator& InViewRotation, double DeltaSeconds, CoreUObject::FVector* OutViewLocation, CoreUObject::FRotator* OutViewRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFully");
        
        UCameraModifier_DeboneArrived_C_ProcessFully_Params params {};
        params.InViewLocation = InViewLocation;
        params.InViewRotation = InViewRotation;
        params.DeltaSeconds = DeltaSeconds;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutViewLocation != nullptr)
            *OutViewLocation = params.OutViewLocation;
        if (OutViewRotation != nullptr)
            *OutViewRotation = params.OutViewRotation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFadeOut
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               InViewLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              InViewRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         CoreUObject::FVector                               OutViewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              OutViewRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::ProcessFadeOut(const CoreUObject::FVector& InViewLocation, const CoreUObject::FRotator& InViewRotation, CoreUObject::FVector* OutViewLocation, CoreUObject::FRotator* OutViewRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFadeOut");
        
        UCameraModifier_DeboneArrived_C_ProcessFadeOut_Params params {};
        params.InViewLocation = InViewLocation;
        params.InViewRotation = InViewRotation;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutViewLocation != nullptr)
            *OutViewLocation = params.OutViewLocation;
        if (OutViewRotation != nullptr)
            *OutViewRotation = params.OutViewRotation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFadeIn
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FVector                               InViewLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              InViewRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         CoreUObject::FVector                               OutViewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              OutViewRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::ProcessFadeIn(const CoreUObject::FVector& InViewLocation, const CoreUObject::FRotator& InViewRotation, CoreUObject::FVector* OutViewLocation, CoreUObject::FRotator* OutViewRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFadeIn");
        
        UCameraModifier_DeboneArrived_C_ProcessFadeIn_Params params {};
        params.InViewLocation = InViewLocation;
        params.InViewRotation = InViewRotation;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutViewLocation != nullptr)
            *OutViewLocation = params.OutViewLocation;
        if (OutViewRotation != nullptr)
            *OutViewRotation = params.OutViewRotation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraRotationClamp
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         CoreUObject::FRotator                              Begin                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         CoreUObject::FRotator                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              OutBegin                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         CoreUObject::FRotator                              OutGoal                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::FullyCameraRotationClamp(const CoreUObject::FRotator& Begin, const CoreUObject::FRotator& Goal, double DeltaSeconds, CoreUObject::FRotator* OutBegin, CoreUObject::FRotator* OutGoal)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraRotationClamp");
        
        UCameraModifier_DeboneArrived_C_FullyCameraRotationClamp_Params params {};
        params.Begin = Begin;
        params.Goal = Goal;
        params.DeltaSeconds = DeltaSeconds;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutBegin != nullptr)
            *OutBegin = params.OutBegin;
        if (OutGoal != nullptr)
            *OutGoal = params.OutGoal;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraRotation
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         CoreUObject::FRotator                              OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::FullyCameraRotation(CoreUObject::FRotator* OutRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraRotation");
        
        UCameraModifier_DeboneArrived_C_FullyCameraRotation_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutRotation != nullptr)
            *OutRotation = params.OutRotation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraLocation
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         CoreUObject::FRotator                              InViewRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         CoreUObject::FVector                               OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::FullyCameraLocation(const CoreUObject::FRotator& InViewRotation, CoreUObject::FVector* OutLocation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraLocation");
        
        UCameraModifier_DeboneArrived_C_FullyCameraLocation_Params params {};
        params.InViewRotation = InViewRotation;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutLocation != nullptr)
            *OutLocation = params.OutLocation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FadeCameraRotation
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         CoreUObject::FRotator                              OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::FadeCameraRotation(CoreUObject::FRotator* OutRotation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FadeCameraRotation");
        
        UCameraModifier_DeboneArrived_C_FadeCameraRotation_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutRotation != nullptr)
            *OutRotation = params.OutRotation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FadeCameraLocation
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
     * Parameters:
     *         CoreUObject::FVector                               OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::FadeCameraLocation(CoreUObject::FVector* OutLocation)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FadeCameraLocation");
        
        UCameraModifier_DeboneArrived_C_FadeCameraLocation_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutLocation != nullptr)
            *OutLocation = params.OutLocation;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.BlueprintModifyCamera
     *         Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               ViewLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         float                                              FOV                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FVector                               NewViewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         CoreUObject::FRotator                              NewViewRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
     *         float                                              NewFOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UCameraModifier_DeboneArrived_C::BlueprintModifyCamera(float DeltaTime, const CoreUObject::FVector& ViewLocation, const CoreUObject::FRotator& ViewRotation, float FOV, CoreUObject::FVector* NewViewLocation, CoreUObject::FRotator* NewViewRotation, float* NewFOV)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.BlueprintModifyCamera");
        
        UCameraModifier_DeboneArrived_C_BlueprintModifyCamera_Params params {};
        params.DeltaTime = DeltaTime;
        params.ViewLocation = ViewLocation;
        params.ViewRotation = ViewRotation;
        params.FOV = FOV;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (NewViewLocation != nullptr)
            *NewViewLocation = params.NewViewLocation;
        if (NewViewRotation != nullptr)
            *NewViewRotation = params.NewViewRotation;
        if (NewFOV != nullptr)
            *NewFOV = params.NewFOV;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
