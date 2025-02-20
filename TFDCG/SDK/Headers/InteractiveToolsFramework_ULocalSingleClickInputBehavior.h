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
#include "InteractiveToolsFramework_USingleClickInputBehavior.h"

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
     * Class /Script/InteractiveToolsFramework.LocalSingleClickInputBehavior
     * Size -> 0x00D0 (FullSize[0x0200] - InheritedSize[0x0130])
     */
    class ULocalSingleClickInputBehavior : public InteractiveToolsFramework::USingleClickInputBehavior
    {
    public:
        uint8_t                                                      UnknownData_0000[0xD0];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/InteractiveToolsFramework.LocalSingleClickInputBehavior");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
