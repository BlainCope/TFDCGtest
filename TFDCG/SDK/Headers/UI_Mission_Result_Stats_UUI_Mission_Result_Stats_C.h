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
#include "M1_UM1UIMissionResultStatisticsPanel.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UI_ContextButtons { class UUI_ContextButtons_C; };
namespace CG::UI_Mission_Result_StatItem { class UUI_Mission_Result_StatItem_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Result_Stats
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Result_Stats.UI_Mission_Result_Stats_C
     * Size -> 0x0080 (FullSize[0x0AE0] - InheritedSize[0x0A60])
     */
    class UUI_Mission_Result_Stats_C : public M1::UM1UIMissionResultStatisticsPanel
    {
    public:
        UI_ContextButtons::UUI_ContextButtons_C*                     UI_ContextButtons;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem;                              //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_2;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_3;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_4;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_5;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_6;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_7;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_8;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_9;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_10;                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_11;                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_12;                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_13;                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_14;                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Result_StatItem::UUI_Mission_Result_StatItem_C*   UI_Mission_Result_StatItem_15;                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Result_Stats.UI_Mission_Result_Stats_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
