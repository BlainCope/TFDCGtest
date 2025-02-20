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
#include "M1_ENUMS.h"
#include "M1_UM1UIMissionTaskGoal_DesturctionIronHeart.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::UMG { class UHorizontalBox; };
namespace CG::UMG { class UVerticalBox; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::UI_Common_Fx_01 { class UUI_Common_Fx_01_C; };
namespace CG::UMG { class UWidgetSwitcher; };
namespace CG::M1 { class UM1WidgetSwitcher; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Task_DestructionIronHeart_HUDCenter
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Task_DestructionIronHeart_HUDCenter.UI_Mission_Task_DestructionIronHeart_HUDCenter_C
     * Size -> 0x006A (FullSize[0x07A2] - InheritedSize[0x0738])
     */
    class UUI_Mission_Task_DestructionIronHeart_HUDCenter_C : public M1::UM1UIMissionTaskGoal_DesturctionIronHeart
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetAnimation*                                       UIAnim_100AndClose;                                      //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       UIAnim_99Loop;                                           //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       UIAnim_Transition;                                       //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       UIAnim_Open;                                             //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UHorizontalBox*                                         HB_Gauge;                                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UVerticalBox*                                           Panel_OccupationTaskInfo;                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_ProgressValue_In;                                     //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_ProgressValue_Stop;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_ProgressValue_Stop_2;                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Common_Fx_01::UUI_Common_Fx_01_C*                         UI_Common_Fx_01;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UWidgetSwitcher*                                        WS_State;                                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1WidgetSwitcher*                                       WS_StateProgress;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        bool                                                         bIsVisible;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        M1::EM1MissionTaskDestructionIronHeartState                  CurrentTaskState;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void SetTaskState(M1::EM1MissionTaskDestructionIronHeartState InState);
        void OnEventWidgetOpen(M1::EM1WidgetAnimDirection InDirection);
        void OnEventWidgetClose(M1::EM1WidgetAnimDirection InDirection);
        void Construct();
        void BP_SetTaskState(M1::EM1MissionTaskDestructionIronHeartState InTaskState);
        void ExecuteUbergraph_UI_Mission_Task_DestructionIronHeart_HUDCenter(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Task_DestructionIronHeart_HUDCenter.UI_Mission_Task_DestructionIronHeart_HUDCenter_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
