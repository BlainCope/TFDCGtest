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
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::UMG { class UImage; };
namespace CG::UMG { class USizeBox; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::UI_StatusEffectIcon { class UUI_StatusEffectIcon_C; };
namespace CG::UMG { class UUMGSequencePlayer; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_StatusEffect_Notice
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Game/Components/UI_StatusEffect_Notice.UI_StatusEffect_Notice_C
     * Size -> 0x0058 (FullSize[0x0760] - InheritedSize[0x0708])
     */
    class UUI_StatusEffect_Notice_C : public M1::UM1UIWidget
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetAnimation*                                       UIAnim_On_Boss;                                          //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       UIAnim_On;                                               //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UImage*                                                 Image_ef_Base;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UImage*                                                 Image_ef_Main;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::USizeBox*                                               SizeBox_1;                                               //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_Name;                                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_StatusEffectIcon::UUI_StatusEffectIcon_C*                 UI_StatusEffectIcon;                                     //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        double                                                       InitTime;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        UMG::UUMGSequencePlayer*                                     AnimPlayer;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       Animation;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

    public:
        void Construct();
        void FinishedAnimation();
        void InitWidget(bool bBoss);
        void ExecuteUbergraph_UI_StatusEffect_Notice(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Game/Components/UI_StatusEffect_Notice.UI_StatusEffect_Notice_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
