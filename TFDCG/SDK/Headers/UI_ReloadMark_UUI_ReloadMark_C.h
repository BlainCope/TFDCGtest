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
#include "UMG_UUserWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::UMG { class UImage; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_ReloadMark
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Game/Components/UI_ReloadMark.UI_ReloadMark_C
     * Size -> 0x0018 (FullSize[0x0268] - InheritedSize[0x0250])
     */
    class UUI_ReloadMark_C : public UMG::UUserWidget
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetAnimation*                                       Anim_Loop;                                               //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UImage*                                                 Icon;                                                    //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void Construct();
        void ExecuteUbergraph_UI_ReloadMark(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Game/Components/UI_ReloadMark.UI_ReloadMark_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
