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
#include "BasicTypes_TArray.h"
#include "Engine_UPrimitiveComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Landscape { class ULandscapeSplineControlPoint; };
namespace CG::Landscape { class ULandscapeSplineSegment; };
namespace CG::Engine { class UMeshComponent; };
namespace CG::Engine { class USplineMeshComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Landscape
{
    /**
     * Class /Script/Landscape.LandscapeSplinesComponent
     * Size -> 0x0038 (FullSize[0x04B0] - InheritedSize[0x0478])
     */
    class ULandscapeSplinesComponent : public Engine::UPrimitiveComponent
    {
    public:
        BasicTypes::TArray<Landscape::ULandscapeSplineControlPoint*> ControlPoints;                                           //  ZeroConstructor, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected
        BasicTypes::TArray<Landscape::ULandscapeSplineSegment*>      Segments;                                                //  ZeroConstructor, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::UMeshComponent*>                  CookedForeignMeshComponents;                             //  ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        BasicTypes::TArray<Engine::USplineMeshComponent*> GetSplineMeshComponents();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Landscape.LandscapeSplinesComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
