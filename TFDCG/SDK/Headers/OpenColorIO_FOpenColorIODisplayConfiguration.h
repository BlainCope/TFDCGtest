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
#include "OpenColorIO_FOpenColorIOColorConversionSettings.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OpenColorIO
{
    /**
     * ScriptStruct /Script/OpenColorIO.OpenColorIODisplayConfiguration
     * Size -> 0x00A0
     */
    struct FOpenColorIODisplayConfiguration
    {
    public:
        bool                                                         bIsEnabled;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        OpenColorIO::FOpenColorIOColorConversionSettings             ColorConfiguration;                                      //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
