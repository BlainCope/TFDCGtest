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
#include "DeveloperSettings_UDeveloperSettings.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OpenColorIO
{
    /**
     * Class /Script/OpenColorIO.OpenColorIOSettings
     * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
     */
    class UOpenColorIOSettings : public DeveloperSettings::UDeveloperSettings
    {
    public:
        bool                                                         bUseLegacyProcessor : 1;                                 //  BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUse32fLUT : 1;                                          //  BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSupportInverseViewTransforms : 1;                       //  BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OpenColorIO.OpenColorIOSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
