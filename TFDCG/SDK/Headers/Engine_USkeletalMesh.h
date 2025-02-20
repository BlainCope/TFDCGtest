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
#include "CoreUObject_FBoxSphereBounds.h"
#include "CoreUObject_FVector.h"
#include "BasicTypes_TArray.h"
#include "Engine_FSkeletalMaterial.h"
#include "Engine_FBoneMirrorInfo.h"
#include "Engine_FSkeletalMeshLODInfo.h"
#include "Engine_FPerQualityLevelInt.h"
#include "Engine_FPerPlatformInt.h"
#include "Engine_FPerPlatformBool.h"
#include "CoreUObject_ENUMS.h"
#include "Engine_FSkeletalMeshCurvature.h"
#include "Engine_ENUMS.h"
#include "Engine_FSkeletalMeshSamplingInfo.h"
#include "Engine_FSkinWeightProfileInfo.h"
#include "Engine_USkinnedAsset.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_TSoftObjectPtr.h"
#include "CoreUObject_UObject.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeleton; };
namespace CG::Engine { class UBodySetup; };
namespace CG::Engine { class UPhysicsAsset; };
namespace CG::Engine { class UNodeMappingContainer; };
namespace CG::Engine { class UMorphTarget; };
namespace CG::Engine { class UAnimInstance; };
namespace CG::ClothingSystemRuntimeInterface { class UClothingAssetBase; };
namespace CG::Engine { class UAssetUserData; };
namespace CG::Engine { class USkeletalMeshSocket; };
namespace CG::Engine { class UMeshDeformer; };
namespace CG::Engine { class USkeletalMeshLODSettings; };
namespace CG::Engine { class UBlueprint; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.SkeletalMesh
     * Size -> 0x03C8 (FullSize[0x0498] - InheritedSize[0x00D0])
     */
    class USkeletalMesh : public Engine::USkinnedAsset
    {
    public:
        uint8_t                                                      UnknownData_0000[0x20];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USkeleton*                                           Skeleton;                                                //  Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FBoxSphereBounds                                ImportedBounds;                                          //  ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
        CoreUObject::FBoxSphereBounds                                ExtendedBounds;                                          //  ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
        CoreUObject::FVector                                         PositiveBoundsExtension;                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FVector                                         NegativeBoundsExtension;                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::FSkeletalMaterial>                Materials;                                               //  Edit, BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FBoneMirrorInfo>                  SkelMirrorTable;                                         //  Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FSkeletalMeshLODInfo>             LODInfo;                                                 //  Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x50];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPerQualityLevelInt                                  MinQualityLevelLOD;                                      //  Edit, NativeAccessSpecifierPublic
        Engine::FPerPlatformInt                                      MinLOD;                                                  //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::FPerPlatformBool                                     DisableBelowMinLodStripping;                             //  Edit, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::EAxis                                           SkelMirrorAxis;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::EAxis                                           SkelMirrorFlipAxis;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseFullPrecisionUVs : 1;                                //  BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseHighPrecisionTangentBasis : 1;                       //  BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHasBeenSimplified : 1;                                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHasVertexColors : 1;                                    //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0002 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bEnablePerPolyCollision : 1;                             //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UBodySetup*                                          BodySetup;                                               //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UPhysicsAsset*                                       PhysicsAsset;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UPhysicsAsset*                                       ShadowPhysicsAsset;                                      //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UNodeMappingContainer*>           NodeMappingData;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        bool                                                         bCalcMeshCurvature : 1;                                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FSkeletalMeshCurvature>           MeshLODCurvatureData;                                    //  ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bSupportRayTracing : 1;                                  //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      RayTracingMinLOD;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EClothLODBiasMode                                    ClothLODBiasMode;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::UMorphTarget*>                    MorphTargets;                                            //  BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0x170];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UAnimInstance*                                       PostProcessAnimBlueprint;                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<ClothingSystemRuntimeInterface::UClothingAssetBase*> MeshClothingAssets;                                      //  Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        Engine::FSkeletalMeshSamplingInfo                            SamplingInfo;                                            //  Edit, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::UAssetUserData*>                  AssetUserData;                                           //  Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::USkeletalMeshSocket*>             Sockets;                                                 //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0007[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FSkinWeightProfileInfo>           SkinWeightProfiles;                                      //  Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        Engine::UMeshDeformer*                                       DefaultMeshDeformer;                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        void SetSkeleton(Engine::USkeleton* InSkeleton);
        void SetMorphTargets(BasicTypes::TArray<Engine::UMorphTarget*> InMorphTargets);
        void SetMinLODForQualityLevels(BasicTypes::TMap<Engine::EPerQualityLevels, int32_t> QualityLevelMinimumLODs, int32_t Default);
        void SetMeshClothingAssets(BasicTypes::TArray<ClothingSystemRuntimeInterface::UClothingAssetBase*> InMeshClothingAssets);
        void SetMaterials(BasicTypes::TArray<Engine::FSkeletalMaterial> InMaterials);
        void SetLODSettings(Engine::USkeletalMeshLODSettings* InLODSettings);
        void SetDefaultAnimatingRig(BasicTypes::TSoftObjectPtr<CoreUObject::UObject> InAnimatingRig);
        int32_t NumSockets();
        BasicTypes::TArray<BasicTypes::FString> K2_GetAllMorphTargetNames();
        bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections);
        Engine::USkeletalMeshSocket* GetSocketByIndex(int32_t Index);
        Engine::USkeleton* GetSkeleton();
        Engine::UPhysicsAsset* GetShadowPhysicsAsset();
        Engine::UPhysicsAsset* GetPhysicsAsset();
        BasicTypes::TArray<Engine::UNodeMappingContainer*> GetNodeMappingData();
        Engine::UNodeMappingContainer* GetNodeMappingContainer(Engine::UBlueprint* SourceAsset);
        BasicTypes::TArray<Engine::UMorphTarget*> GetMorphTargetsPtrConv();
        void GetMinLODForQualityLevels(BasicTypes::TMap<Engine::EPerQualityLevels, int32_t>* QualityLevelMinimumLODs, int32_t* Default);
        BasicTypes::TArray<ClothingSystemRuntimeInterface::UClothingAssetBase*> GetMeshClothingAssets();
        BasicTypes::TArray<Engine::FSkeletalMaterial> GetMaterials();
        Engine::USkeletalMeshLODSettings* GetLODSettings();
        CoreUObject::FBoxSphereBounds GetImportedBounds();
        BasicTypes::TSoftObjectPtr<CoreUObject::UObject> GetDefaultAnimatingRig();
        CoreUObject::FBoxSphereBounds GetBounds();
        Engine::USkeletalMeshSocket* FindSocketAndIndex(const BasicTypes::FName& InSocketName, int32_t* OutIndex);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.SkeletalMesh");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
