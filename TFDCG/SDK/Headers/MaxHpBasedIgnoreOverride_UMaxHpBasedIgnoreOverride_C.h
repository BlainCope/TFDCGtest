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
#include "StatBasedIgnoreOverride_UStatBasedIgnoreOverride_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MaxHpBasedIgnoreOverride
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Value/MaxHpBasedIgnoreOverride.MaxHpBasedIgnoreOverride_C
     * Size -> 0x0000 (FullSize[0x00F1] - InheritedSize[0x00F1])
     */
    class UMaxHpBasedIgnoreOverride_C : public StatBasedIgnoreOverride::UStatBasedIgnoreOverride_C
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Value/MaxHpBasedIgnoreOverride.MaxHpBasedIgnoreOverride_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
