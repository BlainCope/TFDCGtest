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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UNamedSlot; };
namespace CG::CoreUObject { class UClass; };
namespace CG::M1 { class UM1UIButtonManager; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UISubTabControl
     * Size -> 0x0050 (FullSize[0x0758] - InheritedSize[0x0708])
     */
    class UM1UISubTabControl : public M1::UM1UIWidget
    {
    public:
        UMG::UNamedSlot*                                             NamedSlot_Tab;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      CurrentTabIndex;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bHasSelectedTab;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UIWidget*                                             CurrentTabButton;                                        //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButtonManager*                                      TabButtonManager;                                        //  ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::UMulticastInlineDelegate                         OnSubTabSelected;                                        //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnSubTabDeselected;                                      //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnSubTabFocused;                                         //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UISubTabControl");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
