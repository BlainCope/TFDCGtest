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
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_UObject.h"
#include "BasicTypes_FString.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::ClothingSystemRuntimeInterface { class UClothingInteractor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ClothingSystemRuntimeInterface
{
    /**
     * Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
     * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
     */
    class UClothingSimulationInteractor : public CoreUObject::UObject
    {
    public:
        BasicTypes::TMap<BasicTypes::FName, ClothingSystemRuntimeInterface::UClothingInteractor*> ClothingInteractors;                                     //  UObjectWrapper, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetNumSubsteps(int32_t NumSubsteps);
        void SetNumIterations(int32_t NumIterations);
        void SetMaxNumIterations(int32_t MaxNumIterations);
        void SetAnimDriveSpringStiffness(float InStiffness);
        void PhysicsAssetUpdated();
        float GetSimulationTime();
        int32_t GetNumSubsteps();
        int32_t GetNumKinematicParticles();
        int32_t GetNumIterations();
        int32_t GetNumDynamicParticles();
        int32_t GetNumCloths();
        ClothingSystemRuntimeInterface::UClothingInteractor* GetClothingInteractor(const BasicTypes::FString& ClothingAssetName);
        void EnableGravityOverride(const CoreUObject::FVector& InVector);
        void DisableGravityOverride();
        void ClothConfigUpdated();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
