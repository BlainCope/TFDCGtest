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
#include "M1_FM1OwningToolTipType.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "M1_UM1UIMatchingBase.h"
#include "BasicTypes_FText.h"
#include "M1Data_ENUMS.h"
#include "M1Data_FM1VoidBattleBossElementalResTypes.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIWidget; };
namespace CG::M1 { class UM1UIPageControlWithButtons; };
namespace CG::M1 { class UM1UIVoidBattle_VaultList; };
namespace CG::M1 { class UM1UIKeyButton; };
namespace CG::M1 { class UM1WidgetSwitcher; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1UIVoidBattle_BossInfoItem; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIVoidBattle_BossInfoPage
     * Size -> 0x0110 (FullSize[0x08A0] - InheritedSize[0x0790])
     */
    class UM1UIVoidBattle_BossInfoPage : public M1::UM1UIMatchingBase
    {
    public:
        uint8_t                                                      UnknownData_0000[0x20];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UIWidget*                                             WidgetToTrace;                                           //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1OwningToolTipType                                     VaultToolTipType;                                        //  Edit, Protected, NativeAccessSpecifierProtected
        M1::UM1UIPageControlWithButtons*                             UI_PageControlWithButtons;                               //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIVoidBattle_VaultList*                               UI_BossVaultList;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIKeyButton*                                          UI_PublicStartButton;                                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIKeyButton*                                          UI_PrivateStartButton;                                   //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1WidgetSwitcher*                                       WS_Information;                                          //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1WidgetSwitcher*                                       WS_PageNames;                                            //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             Button_MetaGuide;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TWeakObjectPtr<M1::UM1UIVoidBattle_BossInfoItem> WP_CurrBossInfoItem;                                     //  ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x58];                                  //  MISSED OFFSET (PADDING)

    public:
        void OnSetMinMembers_BP(int32_t InMinMembers);
        void OnSetBossName_BP(const BasicTypes::FText& InBossNameText);
        void OnSetBossLevel_BP(int32_t InBossLevel);
        void OnSetBossDifficulty_BP(const BasicTypes::FText& InDifficultyName);
        void OnSetBossDescription_BP(const BasicTypes::FText& InDescText);
        void OnSetBossDefType_BP(M1Data::EM1DamageAdvantageType InType);
        void OnSetBossBodyType_BP(const M1Data::FM1VoidBattleBossElementalResTypes& InResType);
        void OnSetBossAtkType_BP(M1Data::EM1ElementalDamageChannel InType, int32_t DefValue);
        void OnPageControlUpdate(int32_t InCurrPageNum);
        void OnHoldCompleted_PublicVoidBattleStart(M1::UM1UIWidget* InWidget);
        void OnHoldCompleted_PrivateVoidBattleStart(M1::UM1UIWidget* InWidget);
        void OnGuideButtonEvent(M1::UM1UIWidget* InWidget);
        void OnEventTooltip_ToggleLinkedVoidVaultKey(M1::UM1UIWidget* InWidget);
        void OnEventTooltip_ToggleLikedContents(M1::UM1UIWidget* InWidget);
        void OnConfirmCancelClicked(M1::UM1UIWidget* InWidget);
        void OnCancelButtonEvent(M1::UM1UIWidget* InWidget);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIVoidBattle_BossInfoPage");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
