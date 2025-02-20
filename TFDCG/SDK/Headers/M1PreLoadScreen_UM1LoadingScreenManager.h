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
#include "Engine_UGameInstanceSubsystem.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1PreLoadScreen
{
    /**
     * Class /Script/M1PreLoadScreen.M1LoadingScreenManager
     * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
     */
    class UM1LoadingScreenManager : public Engine::UGameInstanceSubsystem
    {
    public:
        uint8_t                                                      UnknownData_0000[0x90];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1PreLoadScreen.M1LoadingScreenManager");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
