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
#include "CoreUObject_FLinearColor.h"
#include "Paper2D_ENUMS.h"
#include "Engine_UPrimitiveComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Paper2D { class UPaperTerrainMaterial; };
namespace CG::Paper2D { class UPaperTerrainSplineComponent; };
namespace CG::Engine { class UBodySetup; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Paper2D
{
    /**
     * Class /Script/Paper2D.PaperTerrainComponent
     * Size -> 0x0058 (FullSize[0x04D0] - InheritedSize[0x0478])
     */
    class UPaperTerrainComponent : public Engine::UPrimitiveComponent
    {
    public:
        Paper2D::UPaperTerrainMaterial*                              TerrainMaterial;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bClosedSpline;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bFilledSpline;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Paper2D::UPaperTerrainSplineComponent*                       AssociatedSpline;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      RandomSeed;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SegmentOverlapAmount;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FLinearColor                                    TerrainColor;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      ReparamStepsPerSegment;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Paper2D::ESpriteCollisionMode                                SpriteCollisionDomain;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        CollisionThickness;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UBodySetup*                                          CachedBodySetup;                                         //  ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetTerrainColor(const CoreUObject::FLinearColor& NewColor);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Paper2D.PaperTerrainComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
