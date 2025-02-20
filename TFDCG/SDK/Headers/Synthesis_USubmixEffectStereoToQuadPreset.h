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
#include "Synthesis_FSubmixEffectStereoToQuadSettings.h"
#include "Engine_USoundEffectSubmixPreset.h"

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
     * Class /Script/Synthesis.SubmixEffectStereoToQuadPreset
     * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
     */
    class USubmixEffectStereoToQuadPreset : public Engine::USoundEffectSubmixPreset
    {
    public:
        uint8_t                                                      UnknownData_0000[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Synthesis::FSubmixEffectStereoToQuadSettings                 Settings;                                                //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

    public:
        void SetSettings(const Synthesis::FSubmixEffectStereoToQuadSettings& InSettings);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Synthesis.SubmixEffectStereoToQuadPreset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
