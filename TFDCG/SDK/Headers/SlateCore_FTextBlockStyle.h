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
#include "SlateCore_FSlateFontInfo.h"
#include "SlateCore_FSlateColor.h"
#include "SlateCore_FDeprecateSlateVector2D.h"
#include "CoreUObject_FLinearColor.h"
#include "SlateCore_FSlateBrush.h"
#include "SlateCore_ENUMS.h"
#include "SlateCore_FSlateWidgetStyle.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SlateCore
{
    /**
     * ScriptStruct /Script/SlateCore.TextBlockStyle
     * Size -> 0x0308 (FullSize[0x0310] - InheritedSize[0x0008])
     */
    struct FTextBlockStyle : public SlateCore::FSlateWidgetStyle
    {
    public:
        SlateCore::FSlateFontInfo                                    Font;                                                    //  Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::FSlateColor                                       ColorAndOpacity;                                         //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FDeprecateSlateVector2D                           ShadowOffset;                                            //  Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FLinearColor                                    ShadowColorAndOpacity;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::FSlateColor                                       SelectedBackgroundColor;                                 //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateColor                                       HighlightColor;                                          //  Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xC];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FSlateBrush                                       HighlightShape;                                          //  Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       StrikeBrush;                                             //  Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       UnderlineBrush;                                          //  Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
        SlateCore::ETextTransformPolicy                              TransformPolicy;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::ETextOverflowPolicy                               OverflowPolicy;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xE];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
