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
#include "Engine_FPointerToUberGraphFrame.h"
#include "M1_UM1UIMissionTaskGoal_Supply.h"
#include "BasicTypes_TArray.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::UI_Mission_Task_TargetListItem_Supply_Single { class UUI_Mission_Task_TargetListItem_Supply_Single_C; };
namespace CG::UMG { class UWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Task_Supply_HUDCenter
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Task_Supply_HUDCenter.UI_Mission_Task_Supply_HUDCenter_C
     * Size -> 0x0020 (FullSize[0x0730] - InheritedSize[0x0710])
     */
    class UUI_Mission_Task_Supply_HUDCenter_C : public M1::UM1UIMissionTaskGoal_Supply
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetAnimation*                                       UIAnim_Open;                                             //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       ANIM_Warning;                                            //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UI_Mission_Task_TargetListItem_Supply_Single::UUI_Mission_Task_TargetListItem_Supply_Single_C* SupplyTarget_Single;                                     //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        BasicTypes::TArray<UMG::UWidget*> BP_GetTargetListItems();
        void OnEventWidgetOpen(M1::EM1WidgetAnimDirection InDirection);
        void OnEventWidgetClose(M1::EM1WidgetAnimDirection InDirection);
        void ExecuteUbergraph_UI_Mission_Task_Supply_HUDCenter(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Task_Supply_HUDCenter.UI_Mission_Task_Supply_HUDCenter_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
