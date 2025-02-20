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
#include "BasicTypes_TMap.h"
#include "M1_ENUMS.h"
#include "BasicTypes_TSoftClassPtr.h"
#include "M1_UM1UIWidget.h"
#include "M1Data_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "M1_FM1InventoryPageInfo.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "BasicTypes_FText.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_TSoftObjectPtr.h"
#include "Engine_UTexture2D.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIContextButtons; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1UIInventoryOverview; };
namespace CG::M1 { class UM1UIEquipments; };
namespace CG::M1 { class UM1UIEquipmentSlot; };
namespace CG::M1 { class UM1UIData; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIInventory
     * Size -> 0x0140 (FullSize[0x0848] - InheritedSize[0x0708])
     */
    class UM1UIInventory : public M1::UM1UIWidget
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<M1::EM1InventoryTab, BasicTypes::TSoftClassPtr<M1::UM1UIWidget>> WidgetClassesByTab;                                      //  Edit, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        M1::UM1UIContextButtons*                                     UI_ContextButtons;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_Preset;                                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_WeaponBook;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_Information;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_Inventory_Weapon;                                  //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_Inventory_Acc;                                     //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_MasteryRankBenefits;                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_Achievement_Title;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIInventoryOverview*                                  UI_InventoryOverview;                                    //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIEquipments*                                         UI_Equipments_Weapon;                                    //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIEquipments*                                         UI_Equipments_Acc;                                       //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIButton*                                             BTN_Preset;                                              //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIButton*                                             BTN_WeaponBook;                                          //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIButton*                                             BTN_CharacterRune;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIButton*                                             BTN_MetaGuide;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIButton*                                             BTN_BoostInfo;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UIEquipmentSlot*                                      CursorOnEquipment;                                       //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1Data::EM1EquipmentSlotType                                 CursorOnSlotType;                                        //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::FM1InventoryPageInfo>                 PreviousPageQueue;                                       //  ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        M1::FM1InventoryPageInfo                                     CurrentPageInfo;                                         //  Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TWeakObjectPtr<M1::UM1UIWidget>                  CurrentTabWidget;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x20];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetUIEnvironment(M1::EM1InventoryTab InTab);
        void OpenMoreInformation(M1::UM1UIData* InUIData);
        void OnWeaponBookClicked(M1::UM1UIWidget* InWidget);
        void OnUnequipItem(M1::UM1UIWidget* InWidget);
        void OnPresetClicked(M1::UM1UIWidget* InWidget);
        void OnOpenRunesByEquipmentSlot(M1::UM1UIWidget* InWidget);
        void OnOpenPageRight(M1::UM1UIWidget* InWidget);
        void OnOpenPageLeft(M1::UM1UIWidget* InWidget);
        void OnOpenPageAbove(M1::UM1UIWidget* InWidget);
        void OnOpenMoreInformation(M1::UM1UIWidget* InWidget);
        void OnOpenCustomizeByEquipmentSlot(M1::UM1UIWidget* InWidget);
        void OnMasteryRankBeneftisClicked(M1::UM1UIWidget* InWidget);
        void OnGuideClicked(M1::UM1UIWidget* InWidget);
        void OnEquipmentSlotCursorLeft(M1::UM1UIWidget* InWidget);
        void OnEquipmentSlotCursorEntered(M1::UM1UIWidget* InWidget);
        void OnEquipmentSlotClicked(M1::UM1UIWidget* InSelectedEquipmentSlot);
        void OnCharacterRuneClicked(M1::UM1UIWidget* InWidget);
        void OnCancelClick(M1::UM1UIWidget* InWidget);
        void OnBookmarkClick(M1::UM1UIWidget* InWidget);
        void OnAchievementTitleClicked(M1::UM1UIWidget* InWidget);
        float GetAnimationEndTime(M1::EM1InventoryAnimDirection InDirection);
        void BP_SetWeaponBookNewMark(bool bNewMark);
        void BP_SetTitleButtonNewMark(bool bNewMark);
        void BP_SetPlayerTitle(const BasicTypes::FText& InText);
        void BP_SetPlatformOnlineId(const BasicTypes::FString& InOnlineId);
        void BP_SetPlatformIcon(M1Data::EM1LoginPlatformTypes InLocalPlatformType, M1Data::EM1LoginPlatformTypes InPlayerPlatformType);
        void BP_SetMasteryInfo(int32_t InRank, int64_t InCurExp, int64_t InMaxExp, bool IsMaxLevel, BasicTypes::TSoftObjectPtr<Engine::UTexture2D> InIconPath);
        void BP_SetIsCreator(bool InbCreator);
        void BP_SetCharacterRuneNewMark(bool bNewMark);
        void BP_SetCharacterInfo(const BasicTypes::FString& InCharName, int32_t InLevel, int64_t InCurExp, int64_t InMaxExp, bool IsMaxLevel, M1Data::EM1ElementalDamageChannel InElementalType, Engine::UTexture2D* InIconPath, M1Data::EM1CharacterGrade InGrade);
        void BP_PlayToggleBookmarkSound(bool bAddBookmark);
        void BP_PlayMoveAnimation(M1::EM1InventoryAnimDirection InDir, bool bOpen);
        void BP_EmphasizeMasteryInfo(bool InbEmphasize);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIInventory");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
