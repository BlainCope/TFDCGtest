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
#include "AugmentedReality_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "AugmentedReality_FARVideoFormat.h"
#include "Engine_UDataAsset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AugmentedReality { class UARCandidateImage; };
namespace CG::AugmentedReality { class UARCandidateObject; };
namespace CG::AugmentedReality { class UARPlaneComponent; };
namespace CG::AugmentedReality { class UARPointComponent; };
namespace CG::AugmentedReality { class UARFaceComponent; };
namespace CG::AugmentedReality { class UARImageComponent; };
namespace CG::AugmentedReality { class UARQRCodeComponent; };
namespace CG::AugmentedReality { class UARPoseComponent; };
namespace CG::AugmentedReality { class UAREnvironmentProbeComponent; };
namespace CG::AugmentedReality { class UARObjectComponent; };
namespace CG::AugmentedReality { class UARMeshComponent; };
namespace CG::AugmentedReality { class UARGeoAnchorComponent; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AugmentedReality
{
    /**
     * Class /Script/AugmentedReality.ARSessionConfig
     * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
     */
    class UARSessionConfig : public Engine::UDataAsset
    {
    public:
        bool                                                         bGenerateMeshDataFromTrackedGeometry;                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bGenerateCollisionForMeshData;                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bGenerateNavMeshForMeshData;                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseMeshDataForOcclusion;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRenderMeshDataInWireframe;                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bTrackSceneObjects;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUsePersonSegmentationForOcclusion;                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseSceneDepthForOcclusion;                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseAutomaticImageScaleEstimation;                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseStandardOnboardingUX;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AugmentedReality::EARWorldAlignment                          WorldAlignment;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::EARSessionType                             SessionType;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::EARPlaneDetectionMode                      PlaneDetectionMode;                                      //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bHorizontalPlaneDetection;                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bVerticalPlaneDetection;                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bEnableAutoFocus;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::EARLightEstimationMode                     LightEstimationMode;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::EARFrameSyncMode                           FrameSyncMode;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bEnableAutomaticCameraOverlay;                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bEnableAutomaticCameraTracking;                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bResetCameraTracking;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bResetTrackedObjects;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<AugmentedReality::UARCandidateImage*>     CandidateImages;                                         //  Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        int32_t                                                      MaxNumSimultaneousImagesTracked;                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::EAREnvironmentCaptureProbeType             EnvironmentCaptureProbeType;                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<uint8_t>                                  WorldMapData;                                            //  Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<AugmentedReality::UARCandidateObject*>    CandidateObjects;                                        //  Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        AugmentedReality::FARVideoFormat                             DesiredVideoFormat;                                      //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        bool                                                         bUseOptimalVideoFormat;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::EARFaceTrackingDirection                   FaceTrackingDirection;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::EARFaceTrackingUpdate                      FaceTrackingUpdate;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      MaxNumberOfTrackedFaces;                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<uint8_t>                                  SerializedARCandidateImageDatabase;                      //  ZeroConstructor, Protected, NativeAccessSpecifierProtected
        AugmentedReality::EARSessionTrackingFeature                  EnabledSessionTrackingFeature;                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::EARSceneReconstruction                     SceneReconstructionMethod;                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0004[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        AugmentedReality::UARPlaneComponent*                         PlaneComponentClass;                                     //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UARPointComponent*                         PointComponentClass;                                     //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UARFaceComponent*                          FaceComponentClass;                                      //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UARImageComponent*                         ImageComponentClass;                                     //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UARQRCodeComponent*                        QRCodeComponentClass;                                    //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UARPoseComponent*                          PoseComponentClass;                                      //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UAREnvironmentProbeComponent*              EnvironmentProbeComponentClass;                          //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UARObjectComponent*                        ObjectComponentClass;                                    //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UARMeshComponent*                          MeshComponentClass;                                      //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AugmentedReality::UARGeoAnchorComponent*                     GeoAnchorComponentClass;                                 //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UMaterialInterface*                                  DefaultMeshMaterial;                                     //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UMaterialInterface*                                  DefaultWireframeMeshMaterial;                            //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        bool ShouldResetTrackedObjects();
        bool ShouldResetCameraTracking();
        bool ShouldRenderCameraOverlay();
        bool ShouldEnableCameraTracking();
        bool ShouldEnableAutoFocus();
        void SetWorldMapData(BasicTypes::TArray<uint8_t> WorldMapData);
        void SetSessionTrackingFeatureToEnable(AugmentedReality::EARSessionTrackingFeature InSessionTrackingFeature);
        void SetSceneReconstructionMethod(AugmentedReality::EARSceneReconstruction InSceneReconstructionMethod);
        void SetResetTrackedObjects(bool bNewValue);
        void SetResetCameraTracking(bool bNewValue);
        void SetFaceTrackingUpdate(AugmentedReality::EARFaceTrackingUpdate InUpdate);
        void SetFaceTrackingDirection(AugmentedReality::EARFaceTrackingDirection InDirection);
        void SetEnableAutoFocus(bool bNewValue);
        void SetDesiredVideoFormat(const AugmentedReality::FARVideoFormat& NewFormat);
        void SetCandidateObjectList(BasicTypes::TArray<AugmentedReality::UARCandidateObject*> InCandidateObjects);
        BasicTypes::TArray<uint8_t> GetWorldMapData();
        AugmentedReality::EARWorldAlignment GetWorldAlignment();
        AugmentedReality::EARSessionType GetSessionType();
        AugmentedReality::EARSceneReconstruction GetSceneReconstructionMethod();
        AugmentedReality::EARPlaneDetectionMode GetPlaneDetectionMode();
        int32_t GetMaxNumSimultaneousImagesTracked();
        AugmentedReality::EARLightEstimationMode GetLightEstimationMode();
        AugmentedReality::EARFrameSyncMode GetFrameSyncMode();
        AugmentedReality::EARFaceTrackingUpdate GetFaceTrackingUpdate();
        AugmentedReality::EARFaceTrackingDirection GetFaceTrackingDirection();
        AugmentedReality::EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
        AugmentedReality::EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
        AugmentedReality::FARVideoFormat GetDesiredVideoFormat();
        BasicTypes::TArray<AugmentedReality::UARCandidateObject*> GetCandidateObjectList();
        BasicTypes::TArray<AugmentedReality::UARCandidateImage*> GetCandidateImageList();
        void AddCandidateObject(AugmentedReality::UARCandidateObject* CandidateObject);
        void AddCandidateImage(AugmentedReality::UARCandidateImage* NewCandidateImage);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AugmentedReality.ARSessionConfig");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
