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
#include "Synthesis_FSourceEffectPhaserSettings.h"
#include "Engine_USoundEffectSourcePreset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Synthesis
{
    /**
     * Class /Script/Synthesis.SourceEffectPhaserPreset
     * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
     */
    class USourceEffectPhaserPreset : public Engine::USoundEffectSourcePreset
    {
    public:
        uint8_t                                                      UnknownData_0000[0x38];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Synthesis::FSourceEffectPhaserSettings                       Settings;                                                //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

    public:
        void SetSettings(const Synthesis::FSourceEffectPhaserSettings& InSettings);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Synthesis.SourceEffectPhaserPreset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
