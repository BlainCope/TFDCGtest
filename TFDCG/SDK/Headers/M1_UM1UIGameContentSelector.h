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
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIWidgetPages; };
namespace CG::M1 { class UM1UITabControl; };
namespace CG::M1 { class UM1UIDamagedEffect; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIGameContentSelector
     * Size -> 0x0070 (FullSize[0x0778] - InheritedSize[0x0708])
     */
    class UM1UIGameContentSelector : public M1::UM1UIWidget
    {
    public:
        M1::UM1UIWidgetPages*                                        UI_WidgetPages;                                          //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UITabControl*                                         UI_TabControl;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIDamagedEffect*                                      UI_DamagedEffect;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x58];                                  //  MISSED OFFSET (PADDING)

    public:
        void OnTabButtonSelected(int32_t InIndex, bool bSelectionChanged);
        void OnEmptyPage();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIGameContentSelector");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
