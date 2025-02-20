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
#include "InteractiveToolsFramework_UClickDragInputBehavior.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::InteractiveToolsFramework
{
    /**
     * Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
     * Size -> 0x0140 (FullSize[0x0280] - InheritedSize[0x0140])
     */
    class ULocalClickDragInputBehavior : public InteractiveToolsFramework::UClickDragInputBehavior
    {
    public:
        uint8_t                                                      UnknownData_0000[0x140];                                 //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
