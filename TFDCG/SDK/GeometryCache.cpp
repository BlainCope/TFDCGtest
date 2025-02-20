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
#include "Headers/GeometryCache_PARAMS.h"
#include "Headers/GeometryCache_UGeometryCacheCodecRaw.h"
#include "Headers/GeometryCache_UNiagaraGeometryCacheRendererProperties.h"
#include "Headers/GeometryCache_UGeometryCache.h"
#include "Headers/GeometryCache_AGeometryCacheActor.h"
#include "Headers/GeometryCache_UGeometryCacheCodecV1.h"
#include "Headers/GeometryCache_UGeometryCacheComponent.h"
#include "Headers/GeometryCache_UGeometryCacheTrack.h"
#include "Headers/GeometryCache_UGeometryCacheTrack_FlipbookAnimation.h"
#include "Headers/GeometryCache_UGeometryCacheTrackStreamable.h"
#include "Headers/GeometryCache_UGeometryCacheTrack_TransformAnimation.h"
#include "Headers/GeometryCache_UGeometryCacheTrack_TransformGroupAnimation.h"
#include "Headers/GeometryCache_UGeometryCacheCodecBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GeometryCache
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x01F451C0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         GeometryCache::UGeometryCacheComponent*            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    GeometryCache::UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");
        
        AGeometryCacheActor_GetGeometryCacheComponent_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46A40
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         float                                              Time                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               bInIsRunning                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               bInBackwards                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               bInIsLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime");
        
        UGeometryCacheComponent_TickAtThisTime_Params params {};
        params.Time = Time;
        params.bInIsRunning = bInIsRunning;
        params.bInBackwards = bInBackwards;
        params.bInIsLooping = bInIsLooping;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47750
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.Stop
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::Stop()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.Stop");
        
        UGeometryCacheComponent_Stop_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46D50
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
     *         Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
     * Parameters:
     *         CoreUObject::FLinearColor                          Color                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::SetWireframeOverrideColor(const CoreUObject::FLinearColor& Color)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor");
        
        UGeometryCacheComponent_SetWireframeOverrideColor_Params params {};
        params.Color = Color;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47010
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         float                                              NewStartTimeOffset                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset");
        
        UGeometryCacheComponent_SetStartTimeOffset_Params params {};
        params.NewStartTimeOffset = NewStartTimeOffset;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47380
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         float                                              NewPlaybackSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");
        
        UGeometryCacheComponent_SetPlaybackSpeed_Params params {};
        params.NewPlaybackSpeed = NewPlaybackSpeed;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46E50
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         bool                                               bOverride                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::SetOverrideWireframeColor(bool bOverride)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor");
        
        UGeometryCacheComponent_SetOverrideWireframeColor_Params params {};
        params.bOverride = bOverride;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47230
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         float                                              NewMotionVectorScale                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::SetMotionVectorScale(float NewMotionVectorScale)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale");
        
        UGeometryCacheComponent_SetMotionVectorScale_Params params {};
        params.NewMotionVectorScale = NewMotionVectorScale;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F475E0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         bool                                               bNewLooping                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::SetLooping(bool bNewLooping)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.SetLooping");
        
        UGeometryCacheComponent_SetLooping_Params params {};
        params.bNewLooping = bNewLooping;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47140
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         GeometryCache::UGeometryCache*                     NewGeomCache                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool UGeometryCacheComponent::SetGeometryCache(GeometryCache::UGeometryCache* NewGeomCache)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache");
        
        UGeometryCacheComponent_SetGeometryCache_Params params {};
        params.NewGeomCache = NewGeomCache;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F474D0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         bool                                               bNewExtrapolating                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::SetExtrapolateFrames(bool bNewExtrapolating)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames");
        
        UGeometryCacheComponent_SetExtrapolateFrames_Params params {};
        params.bNewExtrapolating = bNewExtrapolating;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F477A0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::PlayReversedFromEnd()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");
        
        UGeometryCacheComponent_PlayReversedFromEnd_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47800
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::PlayReversed()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed");
        
        UGeometryCacheComponent_PlayReversed_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47850
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::PlayFromStart()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart");
        
        UGeometryCacheComponent_PlayFromStart_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F478B0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.Play
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::Play()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.Play");
        
        UGeometryCacheComponent_Play_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47770
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.Pause
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UGeometryCacheComponent::Pause()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.Pause");
        
        UGeometryCacheComponent_Pause_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F476F0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool UGeometryCacheComponent::IsPlayingReversed()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed");
        
        UGeometryCacheComponent_IsPlayingReversed_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47730
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool UGeometryCacheComponent::IsPlaying()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying");
        
        UGeometryCacheComponent_IsPlaying_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F476D0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool UGeometryCacheComponent::IsLooping()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.IsLooping");
        
        UGeometryCacheComponent_IsLooping_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F475C0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool UGeometryCacheComponent::IsExtrapolatingFrames()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames");
        
        UGeometryCacheComponent_IsExtrapolatingFrames_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46D20
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
     *         Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         CoreUObject::FLinearColor                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    CoreUObject::FLinearColor UGeometryCacheComponent::GetWireframeOverrideColor()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor");
        
        UGeometryCacheComponent_GetWireframeOverrideColor_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47120
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    float UGeometryCacheComponent::GetStartTimeOffset()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset");
        
        UGeometryCacheComponent_GetStartTimeOffset_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47490
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    float UGeometryCacheComponent::GetPlaybackSpeed()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");
        
        UGeometryCacheComponent_GetPlaybackSpeed_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46FA0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    float UGeometryCacheComponent::GetPlaybackDirection()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection");
        
        UGeometryCacheComponent_GetPlaybackDirection_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46E30
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool UGeometryCacheComponent::GetOverrideWireframeColor()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor");
        
        UGeometryCacheComponent_GetOverrideWireframeColor_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46F40
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    int32_t UGeometryCacheComponent::GetNumberOfFrames()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames");
        
        UGeometryCacheComponent_GetNumberOfFrames_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F47340
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    float UGeometryCacheComponent::GetMotionVectorScale()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale");
        
        UGeometryCacheComponent_GetMotionVectorScale_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46F80
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    float UGeometryCacheComponent::GetDuration()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetDuration");
        
        UGeometryCacheComponent_GetDuration_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F46FC0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    float UGeometryCacheComponent::GetAnimationTime()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime");
        
        UGeometryCacheComponent_GetAnimationTime_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x01F506C0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
     *         Flags  -> (Final, Native, Public, HasOutParms)
     * Parameters:
     *         GeometryCache::FGeometryCacheMeshData              MeshData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
     *         float                                              SampleTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const GeometryCache::FGeometryCacheMeshData& MeshData, float SampleTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");
        
        UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params params {};
        params.MeshData = MeshData;
        params.SampleTime = SampleTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F521B0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
     *         Flags  -> (Final, Native, Public, HasOutParms)
     * Parameters:
     *         GeometryCache::FGeometryCacheMeshData              NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheTrack_TransformAnimation::SetMesh(const GeometryCache::FGeometryCacheMeshData& NewMeshData)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh");
        
        UGeometryCacheTrack_TransformAnimation_SetMesh_Params params {};
        params.NewMeshData = NewMeshData;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01F521B0
     *         Name   -> Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
     *         Flags  -> (Final, Native, Public, HasOutParms)
     * Parameters:
     *         GeometryCache::FGeometryCacheMeshData              NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const GeometryCache::FGeometryCacheMeshData& NewMeshData)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh");
        
        UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params params {};
        params.NewMeshData = NewMeshData;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
