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
#include "M1_UM1UIGameTop_ChallengeComplete.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Challenge_Complete
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Challenge/Widgets/UI_Challenge_Complete.UI_Challenge_Complete_C
     * Size -> 0x0008 (FullSize[0x0740] - InheritedSize[0x0738])
     */
    class UUI_Challenge_Complete_C : public M1::UM1UIGameTop_ChallengeComplete
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient

    public:
        void SequenceEvent__ENTRYPOINTUI_Challenge_Complete();
        void BP_widget_playAkEvent();
        void ExecuteUbergraph_UI_Challenge_Complete(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Challenge/Widgets/UI_Challenge_Complete.UI_Challenge_Complete_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
