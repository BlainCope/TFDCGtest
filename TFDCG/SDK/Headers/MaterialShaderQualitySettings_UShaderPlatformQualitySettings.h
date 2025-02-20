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
#include "MaterialShaderQualitySettings_FMaterialQualityOverrides.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MaterialShaderQualitySettings
{
    /**
     * Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
     * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
     */
    class UShaderPlatformQualitySettings : public CoreUObject::UObject
    {
    public:
        MaterialShaderQualitySettings::FMaterialQualityOverrides     QualityOverrides[0x4];                                   //  Edit, Config, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
