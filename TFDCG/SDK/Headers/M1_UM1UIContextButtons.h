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
#include "BasicTypes_TArray.h"
#include "BasicTypes_TMap.h"
#include "M1_ENUMS.h"
#include "UMG_ENUMS.h"
#include "M1_FM1ContextButtonSet.h"
#include "M1_UM1UIWidget.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_UScriptDelegate.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIKeyButton; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIContextButtons
     * Size -> 0x0088 (FullSize[0x0790] - InheritedSize[0x0708])
     */
    class UM1UIContextButtons : public M1::UM1UIWidget
    {
    public:
        bool                                                         bVisibilityChangingBySymbol;                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::UM1UIKeyButton*>                      KeyButtons;                                              //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1::EM1SystemKey, UMG::ESlateVisibility>    CachedKeyButtonVisibility;                               //  Transient, NativeAccessSpecifierPrivate
        UMG::UPanelWidget*                                           Panel_Buttons;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIKeyButton*                                          KeyButtonClass;                                          //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<M1::FM1ContextButtonSet>                  Keys;                                                    //  Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

    public:
        void SetVisibleForAllKeys(bool InVisible);
        int32_t GetButtonNum();
        M1::UM1UIKeyButton* GetButtonByKeyType(M1::EM1SystemKey InKey);
        M1::UM1UIKeyButton* GetButton(int32_t InIndex);
        void ClearButtons();
        M1::UM1UIKeyButton* AddButton(M1::EM1SystemKey Key, const BasicTypes::FString& InText, const BasicTypes::UScriptDelegate& InDelegate);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIContextButtons");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
