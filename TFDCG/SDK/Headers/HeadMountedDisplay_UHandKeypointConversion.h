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
#include "HeadMountedDisplay_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::HeadMountedDisplay
{
    /**
     * Class /Script/HeadMountedDisplay.HandKeypointConversion
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UHandKeypointConversion : public Engine::UBlueprintFunctionLibrary
    {
    public:
        int32_t STATIC_Conv_HandKeypointToInt32(HeadMountedDisplay::EHandKeypoint Input);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/HeadMountedDisplay.HandKeypointConversion");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
