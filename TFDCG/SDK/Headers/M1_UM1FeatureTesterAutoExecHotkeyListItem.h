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
namespace CG::UMG { class UButton; };
namespace CG::UMG { class UTextBlock; };
namespace CG::M1 { class UM1FeatureTesterAutoExecHotkeyListItemObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1FeatureTesterAutoExecHotkeyListItem
     * Size -> 0x0020 (FullSize[0x0728] - InheritedSize[0x0708])
     */
    class UM1FeatureTesterAutoExecHotkeyListItem : public M1::UM1UIWidget
    {
    public:
        UMG::UButton*                                                BtnRemove;                                               //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        UMG::UTextBlock*                                             TxtCmd;                                                  //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        UMG::UTextBlock*                                             TxtKey;                                                  //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::UM1FeatureTesterAutoExecHotkeyListItemObject*            ListItemObject;                                          //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        void OnBtnRemoveClicked();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1FeatureTesterAutoExecHotkeyListItem");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
