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
#include "BasicTypes_TMap.h"
#include "DeveloperSettings_FPlatformSettingsInstances.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::DeveloperSettings { class UPlatformSettings; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::DeveloperSettings
{
    /**
     * Class /Script/DeveloperSettings.PlatformSettingsManager
     * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
     */
    class UPlatformSettingsManager : public CoreUObject::UObject
    {
    public:
        BasicTypes::TMap<DeveloperSettings::UPlatformSettings*, DeveloperSettings::FPlatformSettingsInstances> SettingsMap;                                             //  Transient, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/DeveloperSettings.PlatformSettingsManager");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
