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
#include "M1_UM1UIChildMissionGuide.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::AkAudio { class UAkAudioEvent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_VoidBattle_Fail
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C
     * Size -> 0x0028 (FullSize[0x0730] - InheritedSize[0x0708])
     */
    class UUI_Mission_VoidBattle_Fail_C : public M1::UM1UIChildMissionGuide
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetAnimation*                                       AnimOpenClose;                                           //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        M1::UM1TextBlock*                                            Text_Bg;                                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            Text_Title;                                              //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        AkAudio::UAkAudioEvent*                                      AkEventMissionFail;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

    public:
        void SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Fail();
        UMG::UWidgetAnimation* GetEndAnimation();
        void Finished_4AB1BCA24CFA3B30600E85B720EEE308();
        void BP_widget_playAkEven();
        void PlayAnimOpenClose();
        void ExecuteUbergraph_UI_Mission_VoidBattle_Fail(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
