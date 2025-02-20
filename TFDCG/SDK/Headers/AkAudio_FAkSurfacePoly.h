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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AkAudio { class UAkAcousticTexture; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AkAudio
{
    /**
     * ScriptStruct /Script/AkAudio.AkSurfacePoly
     * Size -> 0x0018
     */
    struct FAkSurfacePoly
    {
    public:
        AkAudio::UAkAcousticTexture*                                 Texture;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        Occlusion;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         EnableSurface;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        SurfaceArea;                                             //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
