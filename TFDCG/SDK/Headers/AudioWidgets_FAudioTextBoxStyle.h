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
#include "SlateCore_FSlateBrush.h"
#include "SlateCore_FSlateColor.h"
#include "SlateCore_FSlateWidgetStyle.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AudioWidgets
{
    /**
     * ScriptStruct /Script/AudioWidgets.AudioTextBoxStyle
     * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
     */
    struct FAudioTextBoxStyle : public SlateCore::FSlateWidgetStyle
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FSlateBrush                                       BackgroundImage;                                         //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateColor                                       BackgroundColor;                                         //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xC];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
