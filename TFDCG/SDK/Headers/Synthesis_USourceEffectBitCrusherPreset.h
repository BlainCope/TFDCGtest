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
#include "Synthesis_FSourceEffectBitCrusherSettings.h"
#include "Engine_USoundEffectSourcePreset.h"
#include "Synthesis_FSourceEffectBitCrusherBaseSettings.h"
#include "BasicTypes_TSet.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AudioExtensions { class USoundModulatorBase; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Synthesis
{
    /**
     * Class /Script/Synthesis.SourceEffectBitCrusherPreset
     * Size -> 0x01C8 (FullSize[0x0230] - InheritedSize[0x0068])
     */
    class USourceEffectBitCrusherPreset : public Engine::USoundEffectSourcePreset
    {
    public:
        uint8_t                                                      UnknownData_0000[0xF8];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Synthesis::FSourceEffectBitCrusherSettings                   Settings;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

    public:
        void SetSettings(const Synthesis::FSourceEffectBitCrusherBaseSettings& Settings);
        void SetSampleRateModulators(BasicTypes::TSet<AudioExtensions::USoundModulatorBase*> InModulators);
        void SetSampleRateModulator(AudioExtensions::USoundModulatorBase* Modulator);
        void SetSampleRate(float SampleRate);
        void SetModulationSettings(const Synthesis::FSourceEffectBitCrusherSettings& ModulationSettings);
        void SetBits(float Bits);
        void SetBitModulators(BasicTypes::TSet<AudioExtensions::USoundModulatorBase*> InModulators);
        void SetBitModulator(AudioExtensions::USoundModulatorBase* Modulator);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Synthesis.SourceEffectBitCrusherPreset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
