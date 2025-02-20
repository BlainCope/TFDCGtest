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
#include "M1Data_ENUMS.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UICharacterInfo; };
namespace CG::M1 { class UM1UICharacterList; };
namespace CG::M1 { class UM1UIContextButtons; };
namespace CG::M1 { class UM1WidgetSwitcher; };
namespace CG::M1 { class UM1UICharacterDetail; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1UIGame_ReceivedItemList; };
namespace CG::M1 { class UM1AccountCharacter; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UICharacters
     * Size -> 0x0078 (FullSize[0x0780] - InheritedSize[0x0708])
     */
    class UM1UICharacters : public M1::UM1UIWidget
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UICharacterInfo*                                      UI_Character_Info;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UICharacterList*                                      UI_Character_List;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIContextButtons*                                     UI_ContextButtons;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1WidgetSwitcher*                                       WS_Panel;                                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UICharacterDetail*                                    UI_CharacterDetail;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             Button_MetaGuide;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIGame_ReceivedItemList*                              UI_GameGuide_Gain;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        CaptureModeDelay;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        CharacterSlotMoveInterval;                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x18];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UIWidget*                                             SelectedCharacter;                                       //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bShowStatGraph;                                          //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bShowCharacterList;                                      //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x6];                                   //  MISSED OFFSET (PADDING)

    public:
        void OnToggleStatGraphClicked(M1::UM1UIWidget* InWidget);
        void OnToggleCharacterListClicked(M1::UM1UIWidget* InWidget);
        void OnShowCharacterListClicked(M1::UM1UIWidget* InWidget);
        void OnSetLikedClicked(M1::UM1UIWidget* InWidget);
        void OnSellCharacter(M1::UM1UIWidget* InWidget);
        void OnSelectCharacterChanged(M1::UM1AccountCharacter* InCharacter);
        void OnRuneSocketTypeGranted(M1Data::EM1RuneReason InRuneReason, int32_t InSlotIndex, M1Data::EM1RuneClassType InRuneClassType, M1Data::EM1RuneSubClassType InRuneSubClassType, M1Data::EM1RuneSocketType InRuneSocketType);
        void OnRuneCapacityIncreased(M1Data::EM1RuneReason InRuneReason, M1Data::EM1RuneClassType InRuneClassType);
        void OnGuideClicked(M1::UM1UIWidget* InWidget);
        void OnFavoritesCharacterChanged();
        void OnCharacterSlotClicked(M1::UM1UIWidget* InWidget);
        void OnCharacterSellHoldDone(M1::UM1UIWidget* InWidget);
        void OnCharacterPrevPressed(M1::UM1UIWidget* InWidget);
        void OnCharacterNextPressed(M1::UM1UIWidget* InWidget);
        void OnCharacterDetailClicked(M1::UM1UIWidget* InWidget);
        void OnCaptureModeClicked(M1::UM1UIWidget* InWidget);
        void OnCancelClicked(M1::UM1UIWidget* InWidget);
        void BP_SetUICaptureMode(M1::EM1CaptureMode InCaptureMode);
        void BP_PlaySellSound();
        void BP_PlayMoveCharacterSlotSound();
        void BP_PlayEquippedEffectSound();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UICharacters");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
