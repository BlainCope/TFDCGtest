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
#include "SlateCore_FExpandableAreaStyle.h"
#include "SlateCore_FSlateBrush.h"
#include "SlateCore_FSlateColor.h"
#include "SlateCore_FMargin.h"
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "UMG_UWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.ExpandableArea
     * Size -> 0x02E0 (FullSize[0x0410] - InheritedSize[0x0130])
     */
    class UExpandableArea : public UMG::UWidget
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FExpandableAreaStyle                              Style;                                                   //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       BorderBrush;                                             //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateColor                                       BorderColor;                                             //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        bool                                                         bIsExpanded;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        MaxHeight;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::FMargin                                           HeaderPadding;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        SlateCore::FMargin                                           AreaPadding;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnExpansionChanged;                                      //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        UMG::UWidget*                                                HeaderContent;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UWidget*                                                BodyContent;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0004[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetIsExpanded_Animated(bool IsExpanded);
        void SetIsExpanded(bool IsExpanded);
        bool GetIsExpanded();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.ExpandableArea");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
