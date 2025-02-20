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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "MRMesh_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FColor.h"
#include "CoreUObject_FLinearColor.h"
#include "Engine_USceneComponent.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MRMesh { class UMRMeshComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MRMesh
{
    /**
     * Class /Script/MRMesh.MockDataMeshTrackerComponent
     * Size -> 0x0070 (FullSize[0x0260] - InheritedSize[0x01F0])
     */
    class UMockDataMeshTrackerComponent : public Engine::USceneComponent
    {
    public:
        BasicTypes::UMulticastInlineDelegate                         OnMeshTrackerUpdated;                                    //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        bool                                                         ScanWorld;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         RequestNormals;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         RequestVertexConfidence;                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MRMesh::EMeshTrackerVertexColorMode                          VertexColorMode;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<CoreUObject::FColor>                      BlockVertexColors;                                       //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        CoreUObject::FLinearColor                                    VertexColorFromConfidenceZero;                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FLinearColor                                    VertexColorFromConfidenceOne;                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        UpdateInterval;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MRMesh::UMRMeshComponent*                                    MRMesh;                                                  //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, BasicTypes::TArray<CoreUObject::FVector> Vertices, BasicTypes::TArray<int32_t> Triangles, BasicTypes::TArray<CoreUObject::FVector> Normals, BasicTypes::TArray<float> Confidence);
        void DisconnectMRMesh(MRMesh::UMRMeshComponent* InMRMeshPtr);
        void ConnectMRMesh(MRMesh::UMRMeshComponent* InMRMeshPtr);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MRMesh.MockDataMeshTrackerComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
