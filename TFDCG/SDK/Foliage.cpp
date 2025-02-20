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
#include "Headers/Foliage_ENUMS.h"
#include "Headers/Foliage_PARAMS.h"
#include "Headers/Foliage_AProceduralFoliageVolume.h"
#include "Headers/Foliage_UFoliageInstancedStaticMeshComponent.h"
#include "Headers/Foliage_UFoliageType.h"
#include "Headers/Foliage_UFoliageType_Actor.h"
#include "Headers/Foliage_UFoliageType_InstancedStaticMesh.h"
#include "Headers/Foliage_AInstancedFoliageActor.h"
#include "Headers/Foliage_UInteractiveFoliageComponent.h"
#include "Headers/Foliage_UFoliageStatistics.h"
#include "Headers/Foliage_UGrassInstancedStaticMeshComponent.h"
#include "Headers/Foliage_AInteractiveFoliageActor.h"
#include "Headers/Foliage_AProceduralFoliageBlockingVolume.h"
#include "Headers/Foliage_UProceduralFoliageComponent.h"
#include "Headers/Foliage_UProceduralFoliageSpawner.h"
#include "Headers/Foliage_UProceduralFoliageTile.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Foliage
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x04E75980
     *         Name   -> Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
     *         Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UStaticMesh*                               StaticMesh                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         CoreUObject::FVector                               CenterPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    int32_t UFoliageStatistics::STATIC_FoliageOverlappingSphereCount(CoreUObject::UObject* WorldContextObject, Engine::UStaticMesh* StaticMesh, const CoreUObject::FVector& CenterPosition, float Radius)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount");
        
        UFoliageStatistics_FoliageOverlappingSphereCount_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.StaticMesh = StaticMesh;
        params.CenterPosition = CenterPosition;
        params.Radius = Radius;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x04E75460
     *         Name   -> Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
     *         Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UStaticMesh*                               StaticMesh                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         CoreUObject::FBox                                  Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
     *         BasicTypes::TArray<CoreUObject::FTransform>        OutTransforms                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UFoliageStatistics::STATIC_FoliageOverlappingBoxTransforms(CoreUObject::UObject* WorldContextObject, Engine::UStaticMesh* StaticMesh, const CoreUObject::FBox& Box, BasicTypes::TArray<CoreUObject::FTransform>* OutTransforms)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms");
        
        UFoliageStatistics_FoliageOverlappingBoxTransforms_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.StaticMesh = StaticMesh;
        params.Box = Box;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (OutTransforms != nullptr)
            *OutTransforms = params.OutTransforms;
    }

    /**
     * Function:
     *         RVA    -> 0x04E75730
     *         Name   -> Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
     *         Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UStaticMesh*                               StaticMesh                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         CoreUObject::FBox                                  Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
     *         int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    int32_t UFoliageStatistics::STATIC_FoliageOverlappingBoxCount(CoreUObject::UObject* WorldContextObject, Engine::UStaticMesh* StaticMesh, const CoreUObject::FBox& Box)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount");
        
        UFoliageStatistics_FoliageOverlappingBoxCount_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.StaticMesh = StaticMesh;
        params.Box = Box;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x04E79740
     *         Name   -> Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
     *         Flags  -> (Final, Native, Protected, HasOutParms)
     * Parameters:
     *         Engine::UPrimitiveComponent*                       OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::AActor*                                    Other                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UPrimitiveComponent*                       OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::FHitResult                                 OverlapInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void AInteractiveFoliageActor::CapsuleTouched(Engine::UPrimitiveComponent* OverlappedComp, Engine::AActor* Other, Engine::UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const Engine::FHitResult& OverlapInfo)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched");
        
        AInteractiveFoliageActor_CapsuleTouched_Params params {};
        params.OverlappedComp = OverlappedComp;
        params.Other = Other;
        params.OtherComp = OtherComp;
        params.OtherBodyIndex = OtherBodyIndex;
        params.bFromSweep = bFromSweep;
        params.OverlapInfo = OverlapInfo;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x04E7AEA0
     *         Name   -> Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         int32_t                                            NumSteps                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UProceduralFoliageSpawner::Simulate(int32_t NumSteps)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/Foliage.ProceduralFoliageSpawner.Simulate");
        
        UProceduralFoliageSpawner_Simulate_Params params {};
        params.NumSteps = NumSteps;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
