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
namespace CG::M1 { class UM1TextBlock; };
namespace CG::M1 { class UM1UIContextButtons; };
namespace CG::M1 { class UM1UIUserInfo; };
namespace CG::M1 { class UM1UICharacterList; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1UIEventPanelInMenu; };
namespace CG::M1 { class UM1UISupportCreatorInfo; };
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::M1 { class UM1AccountCharacter; };
namespace CG::M1 { class AM1SequencePlayer; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIGameStartMenu
     * Size -> 0x00A0 (FullSize[0x07A8] - InheritedSize[0x0708])
     */
    class UM1UIGameStartMenu : public M1::UM1UIWidget
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1TextBlock*                                            Text_CharacterName;                                      //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            Text_CharacterLevel;                                     //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIContextButtons*                                     UI_ContextButtons;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIUserInfo*                                           UI_UserInfo;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UICharacterList*                                      UI_Character_List;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             Button_GameStart;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             Button_Equip;                                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             Button_Patch;                                            //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             Button_Event;                                            //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             Button_CSP;                                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIEventPanelInMenu*                                   UI_ActiveEvents;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UISupportCreatorInfo*                                 UI_SupportCreatorInfo;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UWidgetAnimation*                                       UIAnim_Event;                                            //  ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UWidgetAnimation*                                       UIAnim_CSP;                                              //  ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        CharacterSlotMoveInterval;                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UIWidget*                                             CursorOnCharacter;                                       //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIWidget*                                             SelectedCharacter;                                       //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::AM1SequencePlayer*                                       SequencePlayer;                                          //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bOpenCharacterList;                                      //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bOpenEvent;                                              //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bOpenCSP;                                                //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x5];                                   //  MISSED OFFSET (PADDING)

    public:
        void QuitGame(M1::UM1UIWidget* InWidget);
        void OnToggleCharacterListClicked(M1::UM1UIWidget* InWidget);
        void OnSelectCharacterChanged(M1::UM1AccountCharacter* InCharacter);
        void OnRequestCSPClicked(M1::UM1UIWidget* InWidget);
        void OnPatchClicked(M1::UM1UIWidget* InWidget);
        void OnOptionClicked(M1::UM1UIWidget* InWidget);
        void OnLogoutClicked(M1::UM1UIWidget* InWidget);
        void OnExitClicked(M1::UM1UIWidget* InWidget);
        void OnEventClicked(M1::UM1UIWidget* InWidget);
        void OnEquipCharacterClicked(M1::UM1UIWidget* InWidget);
        void OnEnterGameClicked(M1::UM1UIWidget* InWidget);
        void OnCSPClicked(M1::UM1UIWidget* InWidget);
        void OnCreditsClicked(M1::UM1UIWidget* InWidget);
        void OnCharacterSlotCursorLeft(M1::UM1UIWidget* InWidget);
        void OnCharacterSlotCursorEntered(M1::UM1UIWidget* InWidget);
        void OnCharacterSlotClicked(M1::UM1UIWidget* InWidget);
        void OnCharacterPrevPressed(M1::UM1UIWidget* InWidget);
        void OnCharacterNextPressed(M1::UM1UIWidget* InWidget);
        void OnChangeCharacterClicked(M1::UM1UIWidget* InWidget);
        void Logout(M1::UM1UIWidget* InWidget);
        void BP_ShowCharacterList(bool bShow);
        void BP_PlayMoveCharacterSlotSound();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIGameStartMenu");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
