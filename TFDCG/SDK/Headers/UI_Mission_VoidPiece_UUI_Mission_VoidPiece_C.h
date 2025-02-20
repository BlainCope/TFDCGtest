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
#include "M1_UM1UIPanelEntries.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UI_Mission_VoidPiece_item { class UUI_Mission_VoidPiece_item_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_VoidPiece
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/UI_Mission_VoidPiece.UI_Mission_VoidPiece_C
     * Size -> 0x0018 (FullSize[0x0A70] - InheritedSize[0x0A58])
     */
    class UUI_Mission_VoidPiece_C : public M1::UM1UIPanelEntries
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  Fix Super Size
        UI_Mission_VoidPiece_item::UUI_Mission_VoidPiece_item_C*     UI_Mission_PropertyGroup_item;                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_VoidPiece_item::UUI_Mission_VoidPiece_item_C*     UI_Mission_PropertyGroup_item_2;                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/UI_Mission_VoidPiece.UI_Mission_VoidPiece_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
