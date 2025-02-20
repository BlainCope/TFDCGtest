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
#include "Engine_USkinnedMeshComponent.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FTransform.h"
#include "Engine_ENUMS.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeletalMeshComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.PoseableMeshComponent
     * Size -> 0x01A0 (FullSize[0x0940] - InheritedSize[0x07A0])
     */
    class UPoseableMeshComponent : public Engine::USkinnedMeshComponent
    {
    public:
        uint8_t                                                      UnknownData_0000[0x1A0];                                 //  MISSED OFFSET (PADDING)

    public:
        void SetBoneTransformByName(const BasicTypes::FName& BoneName, const CoreUObject::FTransform& InTransform, Engine::EBoneSpaces BoneSpace);
        void SetBoneScaleByName(const BasicTypes::FName& BoneName, const CoreUObject::FVector& InScale3D, Engine::EBoneSpaces BoneSpace);
        void SetBoneRotationByName(const BasicTypes::FName& BoneName, const CoreUObject::FRotator& InRotation, Engine::EBoneSpaces BoneSpace);
        void SetBoneLocationByName(const BasicTypes::FName& BoneName, const CoreUObject::FVector& InLocation, Engine::EBoneSpaces BoneSpace);
        void ResetBoneTransformByName(const BasicTypes::FName& BoneName);
        CoreUObject::FTransform GetBoneTransformByName(const BasicTypes::FName& BoneName, Engine::EBoneSpaces BoneSpace);
        CoreUObject::FVector GetBoneScaleByName(const BasicTypes::FName& BoneName, Engine::EBoneSpaces BoneSpace);
        CoreUObject::FRotator GetBoneRotationByName(const BasicTypes::FName& BoneName, Engine::EBoneSpaces BoneSpace);
        CoreUObject::FVector GetBoneLocationByName(const BasicTypes::FName& BoneName, Engine::EBoneSpaces BoneSpace);
        void CopyPoseFromSkeletalComponent(Engine::USkeletalMeshComponent* InComponentToCopy);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.PoseableMeshComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
