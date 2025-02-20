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
#include "M1_UM1UISimpleVoiceChattingList.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UInvalidationBox; };
namespace CG::UI_VoiceChatting_Slot { class UUI_VoiceChatting_Slot_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_VoiceChatting
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Common/UI_VoiceChatting.UI_VoiceChatting_C
     * Size -> 0x0028 (FullSize[0x0750] - InheritedSize[0x0728])
     */
    class UUI_VoiceChatting_C : public M1::UM1UISimpleVoiceChattingList
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UInvalidationBox*                                       InvalidationBox_3;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_VoiceChatting_Slot::UUI_VoiceChatting_Slot_C*             UI_VoiceChatting_Slot;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_VoiceChatting_Slot::UUI_VoiceChatting_Slot_C*             UI_VoiceChatting_Slot_2;                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_VoiceChatting_Slot::UUI_VoiceChatting_Slot_C*             UI_VoiceChatting_Slot_3;                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void PreConstruct(bool IsDesignTime);
        void Construct();
        void ExecuteUbergraph_UI_VoiceChatting(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_VoiceChatting.UI_VoiceChatting_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
