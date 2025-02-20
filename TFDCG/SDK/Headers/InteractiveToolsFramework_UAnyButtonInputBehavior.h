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
#include "InteractiveToolsFramework_UInputBehavior.h"

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
     * Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior
     * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
     */
    class UAnyButtonInputBehavior : public InteractiveToolsFramework::UInputBehavior
    {
    public:
        uint8_t                                                      UnknownData_0000[0x50];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
