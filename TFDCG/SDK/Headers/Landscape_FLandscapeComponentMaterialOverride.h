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
#include "Engine_FPerPlatformInt.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UMaterialInterface; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Landscape
{
    /**
     * ScriptStruct /Script/Landscape.LandscapeComponentMaterialOverride
     * Size -> 0x0010
     */
    struct FLandscapeComponentMaterialOverride
    {
    public:
        Engine::FPerPlatformInt                                      LODIndex;                                                //  Edit, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UMaterialInterface*                                  Material;                                                //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
