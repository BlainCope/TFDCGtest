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
#include "BasicTypes_TMap.h"
#include "M1_ENUMS.h"
#include "BasicTypes_FName.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1WidgetAudioData
     * Size -> 0x0050
     */
    struct FM1WidgetAudioData
    {
    public:
        BasicTypes::TMap<M1::EM1WidgetAudioType, BasicTypes::FName>  AudioNamesForEvent;                                      //  Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
