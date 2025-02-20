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
#include "Synthesis_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Synthesis
{
    /**
     * ScriptStruct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
     * Size -> 0x000C
     */
    struct FSourceEffectEnvelopeFollowerSettings
    {
    public:
        float                                                        AttackTime;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ReleaseTime;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Synthesis::EEnvelopeFollowerPeakMode                         PeakMode;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsAnalogMode;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
