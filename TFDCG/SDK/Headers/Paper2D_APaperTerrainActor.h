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
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::Paper2D { class UPaperTerrainSplineComponent; };
namespace CG::Paper2D { class UPaperTerrainComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Paper2D
{
    /**
     * Class /Script/Paper2D.PaperTerrainActor
     * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
     */
    class APaperTerrainActor : public Engine::AActor
    {
    public:
        Engine::USceneComponent*                                     DummyRoot;                                               //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Paper2D::UPaperTerrainSplineComponent*                       SplineComponent;                                         //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Paper2D::UPaperTerrainComponent*                             RenderComponent;                                         //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Paper2D.PaperTerrainActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
