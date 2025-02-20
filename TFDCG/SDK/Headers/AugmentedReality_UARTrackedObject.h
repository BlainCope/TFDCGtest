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
#include "AugmentedReality_UARTrackedGeometry.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AugmentedReality { class UARCandidateObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AugmentedReality
{
    /**
     * Class /Script/AugmentedReality.ARTrackedObject
     * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
     */
    class UARTrackedObject : public AugmentedReality::UARTrackedGeometry
    {
    public:
        AugmentedReality::UARCandidateObject*                        DetectedObject;                                          //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        AugmentedReality::UARCandidateObject* GetDetectedObject();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AugmentedReality.ARTrackedObject");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
