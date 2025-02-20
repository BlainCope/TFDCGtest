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
#include "UI_ActionIcon_UUI_ActionIcon_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIData; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_SkillIcon
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Game/Components/UI_SkillIcon.UI_SkillIcon_C
     * Size -> 0x000D (FullSize[0x08E1] - InheritedSize[0x08D4])
     */
    class UUI_SkillIcon_C : public UI_ActionIcon::UUI_ActionIcon_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        bool                                                         bLastStrengthnedMode;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void SetDataImpl(M1::UM1UIData* InData);
        void ExecuteUbergraph_UI_SkillIcon(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Game/Components/UI_SkillIcon.UI_SkillIcon_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
