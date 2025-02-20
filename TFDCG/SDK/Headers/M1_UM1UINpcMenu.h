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
namespace CG::M1 { class UM1UIContextButtons; };
namespace CG::UMG { class UWrapBox; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::M1 { class UM1RichTextBlock; };
namespace CG::UMG { class UImage; };
namespace CG::UMG { class UScrollBox; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UINpcMenu
     * Size -> 0x0058 (FullSize[0x0760] - InheritedSize[0x0708])
     */
    class UM1UINpcMenu : public M1::UM1UIWidget
    {
    public:
        M1::UM1UIContextButtons*                                     UI_ContextButtons;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UWrapBox*                                               Panel_Items;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            Text_Job;                                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            Text_Name;                                               //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1RichTextBlock*                                        Text_Description;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UImage*                                                 Icon_Job;                                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UScrollBox*                                             ScrollBox_Default;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             FocusedSlot;                                             //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        void OnSlotClicked(M1::UM1UIWidget* InWidget);
        void OnPressedBack(M1::UM1UIWidget* InWidget);
        void OnEventCursorEntered(M1::UM1UIWidget* InWidget);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UINpcMenu");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
