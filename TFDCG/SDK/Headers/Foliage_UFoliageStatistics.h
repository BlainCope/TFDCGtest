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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FBox.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FTransform.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class UStaticMesh; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Foliage
{
    /**
     * Class /Script/Foliage.FoliageStatistics
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UFoliageStatistics : public Engine::UBlueprintFunctionLibrary
    {
    public:
        int32_t STATIC_FoliageOverlappingSphereCount(CoreUObject::UObject* WorldContextObject, Engine::UStaticMesh* StaticMesh, const CoreUObject::FVector& CenterPosition, float Radius);
        void STATIC_FoliageOverlappingBoxTransforms(CoreUObject::UObject* WorldContextObject, Engine::UStaticMesh* StaticMesh, const CoreUObject::FBox& Box, BasicTypes::TArray<CoreUObject::FTransform>* OutTransforms);
        int32_t STATIC_FoliageOverlappingBoxCount(CoreUObject::UObject* WorldContextObject, Engine::UStaticMesh* StaticMesh, const CoreUObject::FBox& Box);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Foliage.FoliageStatistics");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
