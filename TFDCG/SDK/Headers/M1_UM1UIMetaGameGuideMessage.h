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
#include "SlateCore_FMargin.h"
#include "M1_ENUMS.h"
#include "M1_UM1UIGuideMessage.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIContextButtons; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIMetaGameGuideMessage
     * Size -> 0x0028 (FullSize[0x0740] - InheritedSize[0x0718])
     */
    class UM1UIMetaGameGuideMessage : public M1::UM1UIGuideMessage
    {
    public:
        SlateCore::FMargin                                           GuidePadding;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        M1::UM1UIContextButtons*                                     UI_ContextButtons;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::EM1AlignmentType                                         CachedAlignmentType;                                     //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::EM1PositionType                                          CachedPositionType;                                      //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0xE];                                   //  MISSED OFFSET (PADDING)

    public:
        void SetPositionType(M1::EM1PositionType InPositionType);
        void SetAlignmentType(M1::EM1AlignmentType InAlignmentType);
        void OnConfirmClicked(M1::UM1UIWidget* InWidget);
        void OnCancelClicked(M1::UM1UIWidget* InWidget);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIMetaGameGuideMessage");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
