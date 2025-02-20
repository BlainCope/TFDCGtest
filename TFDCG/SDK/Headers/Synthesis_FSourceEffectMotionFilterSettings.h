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
#include "Synthesis_FSourceEffectIndividualFilterSettings.h"
#include "BasicTypes_TMap.h"
#include "Synthesis_FSourceEffectMotionFilterModulationSettings.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Synthesis
{
    /**
     * ScriptStruct /Script/Synthesis.SourceEffectMotionFilterSettings
     * Size -> 0x0078
     */
    struct FSourceEffectMotionFilterSettings
    {
    public:
        Synthesis::ESourceEffectMotionFilterTopology                 MotionFilterTopology;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        MotionFilterMix;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Synthesis::FSourceEffectIndividualFilterSettings             FilterASettings;                                         //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        Synthesis::FSourceEffectIndividualFilterSettings             FilterBSettings;                                         //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<Synthesis::ESourceEffectMotionFilterModDestination, Synthesis::FSourceEffectMotionFilterModulationSettings> ModulationMappings;                                      //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        float                                                        DryVolumeDb;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
