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
namespace CG::UMG { class UWidgetSwitcher; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UIButtonItem; };
namespace CG::UMG { class UUserWidget; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::M1 { class UM1UIPanelItems; };
namespace CG::M1 { class UM1UIKeyButton; };
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIReactorEnchantInfo
     * Size -> 0x00B0 (FullSize[0x07B8] - InheritedSize[0x0708])
     */
    class UM1UIReactorEnchantInfo : public M1::UM1UIWidget
    {
    public:
        uint8_t                                                      UnknownData_0000[0x28];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        UMG::UWidgetSwitcher*                                        WS_EnchantInfos;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_TargetEmpty;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_TargetSelected;                                    //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButtonItem*                                         UI_TargetItem;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UUserWidget*                                            UI_Effect_Enchant;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             UI_UpButton;                                             //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             UI_DownButton;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            TB_OriginalStatTitle;                                    //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            TB_OriginalStatValue;                                    //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            TB_EnchantedStatTitle;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            TB_EnchantedStatValue;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_RequiredCurrency;                                  //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_RequiredCurrencyList;                              //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_RequiredItem;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIPanelItems*                                         UI_RequiredItemList;                                     //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIKeyButton*                                          UI_EnchantApplyButton;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UWidgetAnimation*                                       UIAnim_Enchant;                                          //  ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        void OnHoldCompleted_Enchant(M1::UM1UIWidget* InClickedWidget);
        void OnClickedPageRight(M1::UM1UIWidget* InWidget);
        void OnClickedPageLeft(M1::UM1UIWidget* InWidget);
        void OnClicked_UpButton(M1::UM1UIWidget* InClickedWidget);
        void OnClicked_TargetItem(M1::UM1UIWidget* InClickedWidget);
        void OnClicked_DownButton(M1::UM1UIWidget* InClickedWidget);
        void BP_ShowKeySymbol(bool bShow);
        void BP_SetEnchantLevel(int32_t InCurrentEnchantLv, int32_t InTargetEcnahtLv, int32_t InMaxEnchantLv);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIReactorEnchantInfo");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
