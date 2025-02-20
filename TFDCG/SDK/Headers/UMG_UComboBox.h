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
#include "BasicTypes_TArray.h"
#include "BasicTypes_UScriptDelegate.h"
#include "UMG_UWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.ComboBox
     * Size -> 0x0720 (FullSize[0x0850] - InheritedSize[0x0130])
     */
    class UComboBox : public UMG::UWidget
    {
    public:
        SlateCore::FScrollBarStyle                                   ScrollBarStyle;                                          //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::UObject*>                    Items;                                                   //  Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  OnGenerateWidgetEvent;                                   //  Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsFocusable;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1F];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.ComboBox");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
