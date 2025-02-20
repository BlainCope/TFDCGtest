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
#include "Headers/Landscape_ENUMS.h"
#include "Headers/Landscape_PARAMS.h"
#include "Headers/Landscape_UControlPointMeshComponent.h"
#include "Headers/Landscape_ILandscapeSplineInterface.h"
#include "Headers/Landscape_ALandscapeProxy.h"
#include "Headers/Landscape_ALandscape.h"
#include "Headers/Landscape_ULandscapeLODStreamingProxy_DEPRECATED.h"
#include "Headers/Landscape_ULandscapeComponent.h"
#include "Headers/Landscape_ALandscapeGizmoActor.h"
#include "Headers/Landscape_ALandscapeGizmoActiveActor.h"
#include "Headers/Landscape_ULandscapeGizmoRenderComponent.h"
#include "Headers/Landscape_ULandscapeGrassType.h"
#include "Headers/Landscape_ULandscapeHeightfieldCollisionComponent.h"
#include "Headers/Landscape_ULandscapeLayerInfoObject.h"
#include "Headers/Landscape_ULandscapeMaterialInstanceConstant.h"
#include "Headers/Landscape_ULandscapeMeshCollisionComponent.h"
#include "Headers/Landscape_ALandscapeMeshProxyActor.h"
#include "Headers/Landscape_ULandscapeMeshProxyComponent.h"
#include "Headers/Landscape_ULandscapeSettings.h"
#include "Headers/Landscape_ULandscapeSplinesComponent.h"
#include "Headers/Landscape_ULandscapeSplineControlPoint.h"
#include "Headers/Landscape_ULandscapeSplineSegment.h"
#include "Headers/Landscape_ALandscapeStreamingProxy.h"
#include "Headers/Landscape_ULandscapeWeightmapUsage.h"
#include "Headers/Landscape_UMaterialExpressionLandscapeGrassOutput.h"
#include "Headers/Landscape_UMaterialExpressionLandscapeLayerBlend.h"
#include "Headers/Landscape_UMaterialExpressionLandscapeLayerCoords.h"
#include "Headers/Landscape_AControlPointMeshActor.h"
#include "Headers/Landscape_ALandscapeBlueprintBrushBase.h"
#include "Headers/Landscape_ULandscapeHLODBuilder.h"
#include "Headers/Landscape_ULandscapeInfo.h"
#include "Headers/Landscape_ULandscapeInfoMap.h"
#include "Headers/Landscape_ULandscapeNaniteComponent.h"
#include "Headers/Landscape_ALandscapeSplineActor.h"
#include "Headers/Landscape_ALandscapeSplineMeshesActor.h"
#include "Headers/Landscape_ULandscapeSubsystem.h"
#include "Headers/Landscape_UMaterialExpressionLandscapeLayerSample.h"
#include "Headers/Landscape_UMaterialExpressionLandscapeLayerSwitch.h"
#include "Headers/Landscape_UMaterialExpressionLandscapeLayerWeight.h"
#include "Headers/Landscape_UMaterialExpressionLandscapePhysicalMaterialOutput.h"
#include "Headers/Landscape_UMaterialExpressionLandscapeVisibilityMask.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Landscape
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x04EB8130
     *         Name   -> Function /Script/Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         Engine::ERuntimeVirtualTextureMainPassType         InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeProxy::SetVirtualTextureRenderPassType(Engine::ERuntimeVirtualTextureMainPassType InType)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.SetVirtualTextureRenderPassType");
        
        ALandscapeProxy_SetVirtualTextureRenderPassType_Params params {};
        params.InType = InType;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04EB7390
     *         Name   -> Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
     *         Flags  -> (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
     * Parameters:
     *         BasicTypes::FName                                  ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         CoreUObject::FLinearColor                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(const BasicTypes::FName& ParameterName, const CoreUObject::FLinearColor& Value)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");
        
        ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params {};
        params.ParameterName = ParameterName;
        params.Value = Value;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04EB75A0
     *         Name   -> Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
     *         Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
     * Parameters:
     *         BasicTypes::FName                                  ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UTexture*                                  Value                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(const BasicTypes::FName& ParameterName, Engine::UTexture* Value)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");
        
        ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params {};
        params.ParameterName = ParameterName;
        params.Value = Value;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04EB7140
     *         Name   -> Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
     *         Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
     * Parameters:
     *         BasicTypes::FName                                  ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(const BasicTypes::FName& ParameterName, float Value)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");
        
        ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params {};
        params.ParameterName = ParameterName;
        params.Value = Value;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04EB6F10
     *         Name   -> Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         Engine::UTextureRenderTarget2D*                    InRenderTarget                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               InExportHeightIntoRGChannel                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               InExportLandscapeProxies                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(Engine::UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget");
        
        ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Params params {};
        params.InRenderTarget = InRenderTarget;
        params.InExportHeightIntoRGChannel = InExportHeightIntoRGChannel;
        params.InExportLandscapeProxies = InExportLandscapeProxies;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x04EB7110
     *         Name   -> Function /Script/Landscape.LandscapeProxy.GetLandscapeActor
     *         Flags  -> (Native, Public, BlueprintCallable)
     * Parameters:
     *         Landscape::ALandscape*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    Landscape::ALandscape* ALandscapeProxy::GetLandscapeActor()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.GetLandscapeActor");
        
        ALandscapeProxy_GetLandscapeActor_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x013BAD10
     *         Name   -> Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         Engine::UMaterialInterface*                        NewLandscapeMaterial                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeProxy::EditorSetLandscapeMaterial(Engine::UMaterialInterface* NewLandscapeMaterial)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial");
        
        ALandscapeProxy_EditorSetLandscapeMaterial_Params params {};
        params.NewLandscapeMaterial = NewLandscapeMaterial;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04EB7890
     *         Name   -> Function /Script/Landscape.LandscapeProxy.EditorApplySpline
     *         Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
     * Parameters:
     *         Engine::USplineComponent*                          InSplineComponent                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              StartWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              EndWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              StartSideFalloff                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              EndSideFalloff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              StartRoll                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              EndRoll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         int32_t                                            NumSubdivisions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               bRaiseHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               bLowerHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Landscape::ULandscapeLayerInfoObject*              PaintLayer                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         BasicTypes::FName                                  EditLayerName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeProxy::EditorApplySpline(Engine::USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, Landscape::ULandscapeLayerInfoObject* PaintLayer, const BasicTypes::FName& EditLayerName)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.EditorApplySpline");
        
        ALandscapeProxy_EditorApplySpline_Params params {};
        params.InSplineComponent = InSplineComponent;
        params.StartWidth = StartWidth;
        params.EndWidth = EndWidth;
        params.StartSideFalloff = StartSideFalloff;
        params.EndSideFalloff = EndSideFalloff;
        params.StartRoll = StartRoll;
        params.EndRoll = EndRoll;
        params.NumSubdivisions = NumSubdivisions;
        params.bRaiseHeights = bRaiseHeights;
        params.bLowerHeights = bLowerHeights;
        params.PaintLayer = PaintLayer;
        params.EditLayerName = EditLayerName;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04EB8040
     *         Name   -> Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
     *         Flags  -> (Native, Public, BlueprintCallable)
     * Parameters:
     *         float                                              InLODDistanceFactor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor");
        
        ALandscapeProxy_ChangeLODDistanceFactor_Params params {};
        params.InLODDistanceFactor = InLODDistanceFactor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04EB7F50
     *         Name   -> Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
     *         Flags  -> (Native, Public, BlueprintCallable)
     * Parameters:
     *         float                                              InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");
        
        ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params {};
        params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04E81C90
     *         Name   -> Function /Script/Landscape.Landscape.RenderHeightmap
     *         Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
     * Parameters:
     *         CoreUObject::FTransform                            InWorldTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         CoreUObject::FBox2D                                InExtents                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
     *         Engine::UTextureRenderTarget2D*                    OutRenderTarget                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscape::RenderHeightmap(const CoreUObject::FTransform& InWorldTransform, const CoreUObject::FBox2D& InExtents, Engine::UTextureRenderTarget2D* OutRenderTarget)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.Landscape.RenderHeightmap");
        
        ALandscape_RenderHeightmap_Params params {};
        params.InWorldTransform = InWorldTransform;
        params.InExtents = InExtents;
        params.OutRenderTarget = OutRenderTarget;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04E82BD0
     *         Name   -> Function /Script/Landscape.LandscapeComponent.SetLODBias
     *         Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
     * Parameters:
     *         int32_t                                            InLODBias                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ULandscapeComponent::SetLODBias(int32_t InLODBias)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeComponent.SetLODBias");
        
        ULandscapeComponent_SetLODBias_Params params {};
        params.InLODBias = InLODBias;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04E82D00
     *         Name   -> Function /Script/Landscape.LandscapeComponent.SetForcedLOD
     *         Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
     * Parameters:
     *         int32_t                                            InForcedLOD                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ULandscapeComponent::SetForcedLOD(int32_t InForcedLOD)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeComponent.SetForcedLOD");
        
        ULandscapeComponent_SetForcedLOD_Params params {};
        params.InForcedLOD = InForcedLOD;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04E83110
     *         Name   -> Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UMaterialInstanceDynamic*                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    Engine::UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic");
        
        ULandscapeComponent_GetMaterialInstanceDynamic_Params params {};
        params.InIndex = InIndex;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x04E82E30
     *         Name   -> Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
     *         Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
     * Parameters:
     *         CoreUObject::FVector                               InLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         BasicTypes::FName                                  InPaintLayerName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(const CoreUObject::FVector& InLocation, const BasicTypes::FName& InPaintLayerName)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation");
        
        ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params params {};
        params.InLocation = InLocation;
        params.InPaintLayerName = InPaintLayerName;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x04E82FA0
     *         Name   -> Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
     *         Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
     * Parameters:
     *         CoreUObject::FVector                               InLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Landscape::ULandscapeLayerInfoObject*              PaintLayer                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(const CoreUObject::FVector& InLocation, Landscape::ULandscapeLayerInfoObject* PaintLayer)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation");
        
        ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params params {};
        params.InLocation = InLocation;
        params.PaintLayer = PaintLayer;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x02B2DB10
     *         Name   -> Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
     *         Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         Landscape::ULandscapeComponent*                    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    Landscape::ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent");
        
        ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x04E86AB0
     *         Name   -> Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         BasicTypes::TArray<Engine::USplineMeshComponent*>  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
     */
    BasicTypes::TArray<Engine::USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");
        
        ULandscapeSplinesComponent_GetSplineMeshComponents_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x02ABBA50
     *         Name   -> Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         bool                                               bInUserTriggered                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate(bool bInUserTriggered)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate");
        
        ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params params {};
        params.bInUserTriggered = bInUserTriggered;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04E91650
     *         Name   -> Function /Script/Landscape.LandscapeBlueprintBrushBase.Render
     *         Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
     * Parameters:
     *         bool                                               InIsHeightmap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UTextureRenderTarget2D*                    InCombinedResult                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         BasicTypes::FName                                  InWeightmapLayerName                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UTextureRenderTarget2D*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    Engine::UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, Engine::UTextureRenderTarget2D* InCombinedResult, const BasicTypes::FName& InWeightmapLayerName)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeBlueprintBrushBase.Render");
        
        ALandscapeBlueprintBrushBase_Render_Params params {};
        params.InIsHeightmap = InIsHeightmap;
        params.InCombinedResult = InCombinedResult;
        params.InWeightmapLayerName = InWeightmapLayerName;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x04E913E0
     *         Name   -> Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize
     *         Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
     * Parameters:
     *         CoreUObject::FTransform                            InLandscapeTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         CoreUObject::FIntPoint                             InLandscapeSize                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         CoreUObject::FIntPoint                             InLandscapeRenderTargetSize                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeBlueprintBrushBase::Initialize(const CoreUObject::FTransform& InLandscapeTransform, const CoreUObject::FIntPoint& InLandscapeSize, const CoreUObject::FIntPoint& InLandscapeRenderTargetSize)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize");
        
        ALandscapeBlueprintBrushBase_Initialize_Params params {};
        params.InLandscapeTransform = InLandscapeTransform;
        params.InLandscapeSize = InLandscapeSize;
        params.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
     *         Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
     * Parameters:
     *         BasicTypes::TArray<CoreUObject::UObject*>          OutStreamableAssets                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(BasicTypes::TArray<CoreUObject::UObject*>* OutStreamableAssets)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies");
        
        ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutStreamableAssets != nullptr)
            *OutStreamableAssets = params.OutStreamableAssets;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
