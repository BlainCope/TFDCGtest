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
#include "M1_UM1UIMissionTaskGoal_DesturctionVulgusPost.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UOverlay; };
namespace CG::UI_Mission_Task_TargetNameTag { class UUI_Mission_Task_TargetNameTag_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Task_FC_Goal_DestructionVulgus
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Task_FC_Goal_DestructionVulgus.UI_Mission_Task_FC_Goal_DestructionVulgus_C
     * Size -> 0x0020 (FullSize[0x0750] - InheritedSize[0x0730])
     */
    class UUI_Mission_Task_FC_Goal_DestructionVulgus_C : public M1::UM1UIMissionTaskGoal_DesturctionVulgusPost
    {
    public:
        UMG::UOverlay*                                               TaskDescription;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Task_TargetNameTag::UUI_Mission_Task_TargetNameTag_C* UI_Mission_Task_TargetNameTag;                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Task_TargetNameTag::UUI_Mission_Task_TargetNameTag_C* UI_Mission_Task_TargetNameTag_2;                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Task_TargetNameTag::UUI_Mission_Task_TargetNameTag_C* UI_Mission_Task_TargetNameTag_3;                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Task_FC_Goal_DestructionVulgus.UI_Mission_Task_FC_Goal_DestructionVulgus_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
