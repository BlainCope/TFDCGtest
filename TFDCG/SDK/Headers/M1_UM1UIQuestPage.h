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
#include "M1_ENUMS.h"
#include "M1_UM1UINpcService.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWrapBox; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1UIContextButtons; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::UMG { class UScrollBox; };
namespace CG::CoreUObject { class UObject; };
namespace CG::M1 { class UM1UIDataQuest; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIQuestPage
     * Size -> 0x0080 (FullSize[0x0790] - InheritedSize[0x0710])
     */
    class UM1UIQuestPage : public M1::UM1UINpcService
    {
    public:
        UMG::UWrapBox*                                               WB_PanelItems;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIButton*                                             BTN_QuestAccept;                                         //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIButton*                                             BTN_QuestReject;                                         //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIContextButtons*                                     UI_ContextButtons;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIWidget*                                             FocusedSlot;                                             //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UWrapBox*                                               RewardItemRoot;                                          //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UScrollBox*                                             UI_ScrollBox;                                            //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::EM1QuestDirection_NpcDialogType                          NpcDialogType;                                           //  Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ScrollSpeed;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x40];                                  //  MISSED OFFSET (PADDING)

    public:
        void OnSlotHovered(M1::UM1UIWidget* InWidget);
        void OnQuestRejectButtonClicked(M1::UM1UIWidget* InWidget);
        void OnQuestAcceptButtonClicked(M1::UM1UIWidget* InWidget);
        void OnClickedCancel(M1::UM1UIWidget* InWidget);
        M1::UM1UIDataQuest* GetUIDataQuest(CoreUObject::UObject* InOuter);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIQuestPage");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
