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
#include "SlateCore_FScrollBarStyle.h"
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
     * Class /Script/Slate.ScrollBarWidgetStyle
     * Size -> 0x06E0 (FullSize[0x0710] - InheritedSize[0x0030])
     */
    class UScrollBarWidgetStyle : public SlateCore::USlateWidgetStyleContainerBase
    {
    public:
        SlateCore::FScrollBarStyle                                   ScrollBarStyle;                                          //  Edit, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Slate.ScrollBarWidgetStyle");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
