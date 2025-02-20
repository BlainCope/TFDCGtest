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
#include "BasicTypes_FString.h"
#include "Synthesis_FModularSynthPreset.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Synthesis
{
    /**
     * ScriptStruct /Script/Synthesis.ModularSynthPresetBankEntry
     * Size -> 0x00F0
     */
    struct FModularSynthPresetBankEntry
    {
    public:
        BasicTypes::FString                                          PresetName;                                              //  Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Synthesis::FModularSynthPreset                               Preset;                                                  //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
