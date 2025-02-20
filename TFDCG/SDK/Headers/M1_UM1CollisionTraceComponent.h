#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    TFDCG                       |
 * | Version: 1                           |
 * | Date:    08/22/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "BasicTypes_FName.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_UScriptDelegate.h"
#include "M1_UM1ActorComponent.h"
#include "CoreUObject_FVector.h"
#include "Engine_FHitResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1CollisionTraceComponent
     * Size -> 0x00D0 (FullSize[0x0198] - InheritedSize[0x00C8])
     */
    class UM1CollisionTraceComponent : public M1::UM1ActorComponent
    {
    public:
        BasicTypes::FName                                            CollisionProfileName;                                    //  Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        ComponentSpacing;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        EachLifetime;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        DecalVFXRemovalRangeRatio;                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x5C];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::AActor*>                          OverlappedActors;                                        //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        BasicTypes::UScriptDelegate                                  CanPlaceCollisionShape;                                  //  Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::UScriptDelegate                                  OnAddedCollisionShape;                                   //  Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::UScriptDelegate                                  OnBeginOverlap;                                          //  Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::UScriptDelegate                                  OnEndOverlap;                                            //  Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::UScriptDelegate                                  OnCollisionTraceFinished;                                //  Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void SetCollosionShapeAsSphere(float SphereRadius, bool bApplyWorldHeightOffsetRange, float WorldHeightOffsetRangeMin, float WorldHeightOffsetRangeMax);
        void SetCollosionShapeAsBox(const CoreUObject::FVector& BoxExtent);
        void OnUpdatedComponentOverlapEnd(Engine::UPrimitiveComponent* OverlappedComp, Engine::AActor* Other, Engine::UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
        void OnUpdatedComponentOverlapBegin(Engine::UPrimitiveComponent* OverlappedComp, Engine::AActor* Other, Engine::UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const Engine::FHitResult& SweepResult);
        CoreUObject::FVector GetScaledBoxExtent();
        BasicTypes::TArray<Engine::AActor*> GetOverlappedActors();
        float GetDecalVFXRemovalDistance();
        void EndCollisionTrace();
        bool CheckSpaceInterval();
        bool BeginCollisionTrace(Engine::AActor* TargetActor);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1CollisionTraceComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
