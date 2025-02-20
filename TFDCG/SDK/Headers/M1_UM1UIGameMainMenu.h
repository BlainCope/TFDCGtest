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
#include "BasicTypes_TWeakObjectPtr.h"
#include "BasicTypes_TArray.h"
#include "M1_UM1UIWidget.h"
#include "M1Data_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1UIToggle; };
namespace CG::M1 { class UM1UIContextButtons; };
namespace CG::M1 { class UM1UIEventPanelInMenu; };
namespace CG::UMG { class UOverlay; };
namespace CG::CoreUObject { class UClass; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UISimpleUserInfo; };
namespace CG::M1 { class UM1UITabControl; };
namespace CG::M1 { class UM1UIPanelChallengesInMenu; };
namespace CG::M1 { class UM1WidgetSwitcher; };
namespace CG::M1 { class UM1UIGameMainMenu_VoiceChat; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIGameMainMenu
     * Size -> 0x00D8 (FullSize[0x07E0] - InheritedSize[0x0708])
     */
    class UM1UIGameMainMenu : public M1::UM1UIWidget
    {
    public:
        M1::EM1GameMainMenuType                                      GameMainMenuType;                                        //  Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UIButton*                                             BTN_Logout;                                              //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_Quit;                                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_StopMission;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_MissionResult;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_RequestSupport;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_MoveAlbion;                                          //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_GameOption;                                          //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_Inventory;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_Map;                                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_Terms;                                               //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIToggle*                                             BTN_PhotoMode;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIContextButtons*                                     UI_ContextButtons;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIEventPanelInMenu*                                   UI_ActiveEvents;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UOverlay*                                               EventUILayer;                                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TWeakObjectPtr<M1::UM1UIWidget>                  EventTooltipWidget;                                      //  ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UPanelWidget*                                           Panel_Users;                                             //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        BlockReturnToCitySecondsIfReservedAutoExitActionTime;    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UIButton*                                             FocusedButton;                                           //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1UIButton*>                         Buttons;                                                 //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1UISimpleUserInfo*>                 UserInfoWidgetList;                                      //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        M1::UM1UITabControl*                                         UI_ChallengeAndEventTabs;                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIPanelChallengesInMenu*                              UI_TrackingChallenges;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1WidgetSwitcher*                                       WS_ChallengeAndEvent;                                    //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIGameMainMenu_VoiceChat*                             UI_MainMenu_VoiceChat;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        void QuitGame(M1::UM1UIWidget* InWidget);
        void OnTryRequestReturnToCity(M1::UM1UIWidget* InWidget);
        void OnSyncedQuestIncreaseCount();
        void OnReceiveStartMatching();
        void OnReceiveCompleteMatching();
        void OnEventScreenShotModeToggleValueChanged(M1::UM1UIWidget* InWidget, bool Value);
        void OnEventReceivedFocus(M1::UM1UIWidget* InWidget);
        void OnEventClickTerms(M1::UM1UIWidget* InWidget);
        void OnEventClickStopMission(M1::UM1UIWidget* InWidget);
        void OnEventClickRequestSupport(M1::UM1UIWidget* InWidget);
        void OnEventClickQuit(M1::UM1UIWidget* InWidget);
        void OnEventClickMoveAlbion(M1::UM1UIWidget* InWidget);
        void OnEventClickMissionResult(M1::UM1UIWidget* InWidget);
        void OnEventClickMap(M1::UM1UIWidget* InWidget);
        void OnEventClickLogOut(M1::UM1UIWidget* InWidget);
        void OnEventClickInventory(M1::UM1UIWidget* InWidget);
        void OnEventClickGameOption(M1::UM1UIWidget* InWidget);
        void OnEventClickedOpenEventPage(M1::UM1UIWidget* InWidget);
        void OnCreatedEventTooltip(M1::UM1UIWidget* InWidget);
        void OnChallengeEntryClicked(M1::UM1UIWidget* InWidget);
        void OnChallengeAndEventTabButtonSelected(int32_t InTabIndex, bool bSelectionChanged);
        void OnCancelMatchAndReturnToCity(M1::UM1UIWidget* InWidget);
        void Logout(M1::UM1UIWidget* InWidget);
        void ContextButtons_Cancel(M1::UM1UIWidget* InWidget);
        void BP_SetVisibility(M1Data::EM1MapType InMapType);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIGameMainMenu");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
