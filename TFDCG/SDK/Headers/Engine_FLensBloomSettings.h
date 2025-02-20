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
#include "Engine_FGaussianSumBloomSettings.h"
#include "Engine_FConvolutionBloomSettings.h"
#include "Engine_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.LensBloomSettings
     * Size -> 0x00B8
     */
    struct FLensBloomSettings
    {
    public:
        Engine::FGaussianSumBloomSettings                            GaussianSum;                                             //  Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FConvolutionBloomSettings                            Convolution;                                             //  Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
        Engine::EBloomMethod                                         Method;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
