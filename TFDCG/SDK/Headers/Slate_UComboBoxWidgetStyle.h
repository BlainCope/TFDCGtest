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
#include "SlateCore_FComboBoxStyle.h"
#include "SlateCore_USlateWidgetStyleContainerBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Slate
{
    /**
     * Class /Script/Slate.ComboBoxWidgetStyle
     * Size -> 0x0600 (FullSize[0x0630] - InheritedSize[0x0030])
     */
    class UComboBoxWidgetStyle : public SlateCore::USlateWidgetStyleContainerBase
    {
    public:
        SlateCore::FComboBoxStyle                                    ComboBoxStyle;                                           //  Edit, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Slate.ComboBoxWidgetStyle");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
