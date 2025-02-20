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
#include "M1_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIKeyButton; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIMenuRotator
     * Size -> 0x0048 (FullSize[0x0750] - InheritedSize[0x0708])
     */
    class UM1UIMenuRotator : public M1::UM1UIWidget
    {
    public:
        M1::UM1UIKeyButton*                                          UI_KeyButtonLeft;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIKeyButton*                                          UI_KeyButtonRight;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::EM1SystemKey                                             LeftButtonKey;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::EM1SystemKey                                             RightButtonKey;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FString>                      TextItems;                                               //  Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            Text_Default;                                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      MenuIndex;                                               //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnMenuItemSelected;                                      //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY

    public:
        void MoveToRight();
        void MoveToLeft();
        void MoveToIndex(int32_t InIndex);
        void CallBack_MoveToRight(M1::UM1UIWidget* InWidget);
        void CallBack_MoveToLeft(M1::UM1UIWidget* InWidget);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIMenuRotator");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
