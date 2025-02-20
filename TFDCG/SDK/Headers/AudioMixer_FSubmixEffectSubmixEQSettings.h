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
#include "BasicTypes_TArray.h"
#include "AudioMixer_FSubmixEffectEQBand.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AudioMixer
{
    /**
     * ScriptStruct /Script/AudioMixer.SubmixEffectSubmixEQSettings
     * Size -> 0x0010
     */
    struct FSubmixEffectSubmixEQSettings
    {
    public:
        BasicTypes::TArray<AudioMixer::FSubmixEffectEQBand>          EQBands;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
