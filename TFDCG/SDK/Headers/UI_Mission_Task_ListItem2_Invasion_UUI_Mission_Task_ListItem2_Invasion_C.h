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
#include "UMG_UUserWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UImage; };
namespace CG::UMG { class UHorizontalBox; };
namespace CG::UMG { class UOverlay; };
namespace CG::UI_Progress { class UUI_Progress_C; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::UI_Common_Fx_01 { class UUI_Common_Fx_01_C; };
namespace CG::UI_Deco_Cube_01 { class UUI_Deco_Cube_01_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Task_ListItem2_Invasion
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Task_ListItem2_Invasion.UI_Mission_Task_ListItem2_Invasion_C
     * Size -> 0x0040 (FullSize[0x0290] - InheritedSize[0x0250])
     */
    class UUI_Mission_Task_ListItem2_Invasion_C : public UMG::UUserWidget
    {
    public:
        UMG::UImage*                                                 Active;                                                  //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UHorizontalBox*                                         HorizontalBox_1;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UOverlay*                                               Panel_RemainingMonsterRatio;                             //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Progress::UUI_Progress_C*                                 PB_RemainingMonsterRatio;                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_MarkerString;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_TargetString;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Common_Fx_01::UUI_Common_Fx_01_C*                         UI_Common_Fx_01;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Deco_Cube_01::UUI_Deco_Cube_01_C*                         UI_Deco_Cube_01;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Task_ListItem2_Invasion.UI_Mission_Task_ListItem2_Invasion_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
