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
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::M1 { class UM1UIQuestRewards; };
namespace CG::M1 { class UM1UIGroupQuestRewards; };
namespace CG::M1 { class UM1UICharacterIcon; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIQuestInfo
     * Size -> 0x0068 (FullSize[0x0770] - InheritedSize[0x0708])
     */
    class UM1UIQuestInfo : public M1::UM1UIWidget
    {
    public:
        uint8_t                                                      UnknownData_0000[0x40];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        UMG::UPanelWidget*                                           Panel_GroupQuestTitle;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            Text_GroupQuestTitle;                                    //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIQuestRewards*                                       UI_QuestRewards;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIGroupQuestRewards*                                  UI_MainRewards;                                          //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UICharacterIcon*                                      UI_CharacterIcon;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        void OnItemTooltipWidgetRemoved(M1::UM1UIWidget* InTooltipWidget);
        void OnItemTooltipWidgetCreated(M1::UM1UIWidget* InTooltipWidget);
        void BP_UpdateTrackingIcon();
        void BP_ShowCharacterIconPanel(bool bShow);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIQuestInfo");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
