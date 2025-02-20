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
#include "SlateCore_FSlateWidgetStyle.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SlateCore
{
    /**
     * ScriptStruct /Script/SlateCore.SliderStyle
     * Size -> 0x0498 (FullSize[0x04A0] - InheritedSize[0x0008])
     */
    struct FSliderStyle : public SlateCore::FSlateWidgetStyle
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FSlateBrush                                       NormalBarImage;                                          //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       HoveredBarImage;                                         //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       DisabledBarImage;                                        //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       NormalThumbImage;                                        //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       HoveredThumbImage;                                       //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       DisabledThumbImage;                                      //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        float                                                        BarThickness;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xC];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
